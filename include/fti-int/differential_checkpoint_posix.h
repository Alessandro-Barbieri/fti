#ifndef _DIFFERENTIAL_CHECKPOINT_POSIX_H_
#define _DIFFERENTIAL_CHECKPOINT_POSIX_H_

/*---------------------------------------------------------------------------
  Defines
  ---------------------------------------------------------------------------*/

#ifndef MD5_DIGEST_LENGTH
#   define MD5_DIGEST_LENGTH 16 // 128 bits
#endif
#ifndef CRC32_DIGEST_LENGTH
#   define CRC32_DIGEST_LENGTH 4  // 32 bits
#endif

#define MAX_STACK_SIZE 10
#define MAX_BLOCK_IDX 0x3fffffff
#define MAX_VAR_ID 0x3ffff

#define DCP_POSIX_EXEC_TAG 0
#define DCP_POSIX_CONF_TAG 1
#define DCP_POSIX_INIT_TAG -1

/*---------------------------------------------------------------------------
  Types
  ---------------------------------------------------------------------------*/

typedef struct FTIT_datasetInfo {
    int varID;
    unsigned long varSize;
} FTIT_datasetInfo;

typedef struct FTIT_dcpConfigurationPosix 
{
    unsigned int digestWidth;
    unsigned char* (*hashFunc)( const unsigned char *data, unsigned long nBytes, unsigned char *hash );
    unsigned int StackSize;
    unsigned long BlockSize;

} FTIT_dcpConfigurationPosix;

typedef struct FTIT_dcpExecutionPosix
{
    int nbLayerReco;
    int nbVarReco;
    unsigned int Counter;
    unsigned long FileSize;
    unsigned long dataSize;
    unsigned long dcpSize;
    unsigned long LayerSize[MAX_STACK_SIZE];
    FTIT_datasetInfo datasetInfo[MAX_STACK_SIZE][FTI_BUFS];
    char LayerHash[MAX_STACK_SIZE*MD5_DIGEST_STRING_LENGTH];

} FTIT_dcpExecutionPosix;

typedef struct FTIT_dcpDatasetPosix
{
    unsigned long hashDataSize;
    unsigned char* hashArray;
    unsigned char* hashArrayTmp;

} FTIT_dcpDatasetPosix;

typedef struct blockMetaInfo_t
{
    unsigned long varId : 18;
    unsigned long blockId : 30;

} blockMetaInfo_t;

/*---------------------------------------------------------------------------
  Functions
  ---------------------------------------------------------------------------*/

// wrapper for CRC32 hash algorithm
unsigned char* CRC32( const unsigned char *d, unsigned long nBytes, unsigned char *hash );

#endif // _DIFFERENTIAL_CHECKPOINT_POSIX_H_
