#include "interface.h"
#include "utility.h"

int FTI_PosixOpen(char *fn, void *fileDesc){
	char str[FTI_BUFS], mpi_err[FTI_BUFS];
	WritePosixInfo_t *fd = (WritePosixInfo_t *) fileDesc;
	int res;
	if ( fd->flag == 'w' )
		fd->f = fopen(fn,"wb");
	else if ( fd -> flag == 'r')
		fd->f = fopen(fn,"rb");
	else if ( fd -> flag == 'e' )
		fd->f = fopen(fn, "r+" );
	else{
		FTI_Print("Posix Open Should always indicated flag",FTI_WARN);
	}

	snprintf(str, FTI_BUFS, "Opening File %s with flags %c", fn, fd->flag);
	FTI_Print(str,FTI_WARN);	

	if ( fd->f == NULL ){
		snprintf(str, FTI_BUFS, "unable to create file [POSIX ERROR - %d] %s", errno, strerror(errno));
		FTI_Print(str,FTI_EROR);
		return FTI_NSCS;
	}
	return FTI_SCES;
}

int FTI_PosixClose(void *fileDesc){
	WritePosixInfo_t *fd = (WritePosixInfo_t *) fileDesc;
	fclose(fd->f);
	return FTI_SCES;
}

int FTI_PosixWrite(void *src, size_t size, void *fileDesc){
  WritePosixInfo_t *fd = (WritePosixInfo_t *)fileDesc;
  size_t written = 0;
  int fwrite_errno;
  char str[FTI_BUFS];

  while (written < size && !ferror(fd->f)) {
    errno = 0;
    written += fwrite(((char *)src) + written, 1, size - written, fd->f);
    fwrite_errno = errno;
  }

  if (ferror(fd->f)){
    char error_msg[FTI_BUFS];
    error_msg[0] = 0;
    strerror_r(fwrite_errno, error_msg, FTI_BUFS);
    snprintf(str, FTI_BUFS, "Unable to write : [POSIX ERROR - %s.]", error_msg);
    FTI_Print(str, FTI_EROR);
    fclose(fd->f);
    return FTI_NSCS;
  }
  else
    return FTI_SCES;

}

int FTI_PosixSeek(size_t pos, void *fileDesc){
	WritePosixInfo_t *fd = (WritePosixInfo_t *) fileDesc;
	if ( fseek( fd->f, pos, SEEK_SET ) == -1 ) {
    	char error_msg[FTI_BUFS];
		sprintf(error_msg, "Unable to Seek : [POSIX ERROR -%s.]", strerror(errno));
   		FTI_Print(error_msg, FTI_EROR );
       	return FTI_NSCS;
	}
	return FTI_SCES;
}

int FTI_PosixRead(void *dest, size_t size, void *fileDesc){
}

int FTI_PosixSync(void *fileDesc){
	fsync(fileno(((WritePosixInfo_t *) fileDesc)->f));
}
