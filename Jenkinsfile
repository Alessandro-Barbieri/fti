#!/bin/groovy

def executeSteps_one( arg1, arg2 ) {
  env.PATHA = arg1 
  env.PATHB = arg2 
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes NOTCORRUPT=1 CONFIG=configH0I1.fti LEVEL=1 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes NOTCORRUPT=1 CONFIG=configH1I1.fti LEVEL=1 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes NOTCORRUPT=1 CONFIG=configH1I0.fti LEVEL=1 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=1 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=1 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=1 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=1 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=2 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=2 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=2 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=2 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=3 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=3 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=3 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes NOTCORRUPT=1 CONFIG=configH0I1.fti LEVEL=2 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=1 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=1 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=1 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=1 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=2 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=2 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=2 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=2 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=3 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=3 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=3 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=1 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=1 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=1 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=1 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=2 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=2 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=2 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=2 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=3 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=3 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=3 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes NOTCORRUPT=1 CONFIG=configH1I1.fti LEVEL=2 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes NOTCORRUPT=1 CONFIG=configH1I0.fti LEVEL=2 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=1 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=1 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=1 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=1 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=2 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=2 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=2 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=2 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=3 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=3 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=3 ./testing/tests.sh
      '''
  }
}

def executeSteps_two( arg1, arg2 ) {
  env.PATHA = arg1 
  env.PATHB = arg2
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes NOTCORRUPT=1 CONFIG=configH0I1.fti LEVEL=3 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=1 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=1 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=1 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=1 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=2 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=2 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=2 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=2 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=3 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=3 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=3 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=1 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=1 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=1 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=1 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=2 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=2 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=2 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=2 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=3 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=3 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=3 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes NOTCORRUPT=1 CONFIG=configH1I1.fti LEVEL=3 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes NOTCORRUPT=1 CONFIG=configH1I0.fti LEVEL=3 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 CMAKEVERSION=3.3 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 CMAKEVERSION=3.4 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 CMAKEVERSION=3.5 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 CMAKEVERSION=3.6 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 CMAKEVERSION=3.7 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 CMAKEVERSION=3.8 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 CMAKEVERSION=3.9 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=4 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=4 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes NOTCORRUPT=1 CONFIG=configH0I1.fti LEVEL=4 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=4 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=4 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=4 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=4 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes NOTCORRUPT=1 CONFIG=configH1I1.fti LEVEL=4 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=diffSizes NOTCORRUPT=1 CONFIG=configH1I0.fti LEVEL=4 ./testing/tests.sh
      '''
  }
  catchError {
    sh '''
      export PATH=$PATHA:$PATHB:$PATH
      echo $PATH
      cd build; TEST=hdf5 ./testing/tests.sh
      '''
  }
}

def compile_fti() {
  labelledShell ( label: 'Compile with all IOs for tests',
    script: "./install.sh --enable-hdf5 --enable-sionlib --sionlib-path=/opt/sionlib"
  )
}

def itf_suite(stage) {
  // Brief: Run a set of ITF tests using the CI testdriver script
  // Details: Use this function when in need of ITF modules

  tests = labelledShell ( label: "List ${stage} tests",
    script: "testing/itf/testdriver_ci --find ${stage}",
    returnStdout: true
  ).trim()
  
  for( String test : tests.split('\n'))
    catchError {
      labelledShell ( label: "ITF suite: ${test}",
        script: "testing/itf/testdriver_ci --run ${test}"
      )
  }
}

pipeline {
agent none

stages {

  stage('ITF: CMake') {
    agent { docker { image 'kellekai/archlinuxopenmpi1.10:stable' } }

    steps {
      itf_suite('cmake')
    }
  }
  
  stage('ITF: Local') {
    agent { docker { image 'kellekai/archlinuxopenmpi1.10:stable' } }

    steps {
      compile_fti()
      itf_suite('local')
    }
  }

  stage('ITF: Integration') {
    agent { docker { image 'kellekai/archlinuxopenmpi1.10:stable' } }

    steps {
      compile_fti()
      itf_suite('integration')
    }
  }

  stage('Intel Compiler Tests (1/2)') {
    when { expression { return env.BRANCH_NAME == 'master' } }
  
    agent { docker { image 'kellekai/archlinuximpi18:stable' } }
  
    environment {
      CFLAGS_FIX = '-D__PURE_INTEL_C99_HEADERS__ -D_Float32=float -D_Float64=double -D_Float32x=_Float64 -D_Float64x=_Float128'
      ICCPATH = '/opt/intel/compilers_and_libraries_2018.3.222/linux/bin'
      MPICCPATH = '/opt/intel/compilers_and_libraries_2018.3.222/linux/mpi/intel64/bin'
      LD_LIBRARY_PATH = '/opt/HDF5/1.10.4/lib:/opt/intel/compilers_and_libraries_2018.3.222/linux/compiler/lib/intel64:/opt/intel/compilers_and_libraries_2018.3.222/linux/compiler/lib/intel64_lin:/opt/intel/compilers_and_libraries_2018.3.222/linux/mpi/intel64/lib:/opt/intel/compilers_and_libraries_2018.3.222/linux/mpi/mic/lib:/opt/intel/compilers_and_libraries_2018.3.222/linux/ipp/lib/intel64:/opt/intel/compilers_and_libraries_2018.3.222/linux/compiler/lib/intel64_lin:/opt/intel/compilers_and_libraries_2018.3.222/linux/mkl/lib/intel64_lin:/opt/intel/compilers_and_libraries_2018.3.222/linux/tbb/lib/intel64/gcc4.7:/opt/intel/compilers_and_libraries_2018.3.222/linux/tbb/lib/intel64/gcc4.7'
    }
  
    steps {
      sh '''
        rm -rf build; mkdir -p build; cd build
        . $ICCPATH/compilervars.sh intel64
        . $MPICCPATH/mpivars.sh
        CFLAGS=$CFLAGS_FIX cmake -C ../CMakeScripts/intel.cmake cmake -DHDF5_ROOT=/opt/HDF5/1.10.4 -DCMAKE_INSTALL_PREFIX=`pwd`/RELEASE -DENABLE_HDF5=ON ..
        make -j 16 all install
      '''
      executeSteps_one( '/opt/intel/compilers_and_libraries_2018.3.222/linux/mpi/intel64/bin', '' )
    }
  }
      
  stage('Intel Compiler Tests (2/2)') {
    when { expression { return env.BRANCH_NAME == 'master' } }

    agent { docker { image 'kellekai/archlinuximpi18:stable' } }

    environment {
      CFLAGS_FIX = '-D__PURE_INTEL_C99_HEADERS__ -D_Float32=float -D_Float64=double -D_Float32x=_Float64 -D_Float64x=_Float128'
      ICCPATH = '/opt/intel/compilers_and_libraries_2018.3.222/linux/bin'
      MPICCPATH = '/opt/intel/compilers_and_libraries_2018.3.222/linux/mpi/intel64/bin'
      LD_LIBRARY_PATH = '/opt/HDF5/1.10.4/lib:/opt/intel/compilers_and_libraries_2018.3.222/linux/compiler/lib/intel64:/opt/intel/compilers_and_libraries_2018.3.222/linux/compiler/lib/intel64_lin:/opt/intel/compilers_and_libraries_2018.3.222/linux/mpi/intel64/lib:/opt/intel/compilers_and_libraries_2018.3.222/linux/mpi/mic/lib:/opt/intel/compilers_and_libraries_2018.3.222/linux/ipp/lib/intel64:/opt/intel/compilers_and_libraries_2018.3.222/linux/compiler/lib/intel64_lin:/opt/intel/compilers_and_libraries_2018.3.222/linux/mkl/lib/intel64_lin:/opt/intel/compilers_and_libraries_2018.3.222/linux/tbb/lib/intel64/gcc4.7:/opt/intel/compilers_and_libraries_2018.3.222/linux/tbb/lib/intel64/gcc4.7'
    }

    steps {
      sh '''
        rm -rf build; mkdir -p build; cd build
        . $ICCPATH/compilervars.sh intel64
        . $MPICCPATH/mpivars.sh
        CFLAGS=$CFLAGS_FIX cmake -C ../CMakeScripts/intel.cmake cmake -DHDF5_ROOT=/opt/HDF5/1.10.4 -DCMAKE_INSTALL_PREFIX=`pwd`/RELEASE -DENABLE_HDF5=ON ..
        make -j 16 all install
      '''
      executeSteps_two( '/opt/intel/compilers_and_libraries_2018.3.222/linux/mpi/intel64/bin', '' )
    }
  }

  stage('GCC Compiler Tests (1/2)') {
    when { expression { return env.BRANCH_NAME == 'master' } }
  
    agent { docker { image 'kellekai/archlinuxopenmpi1.10:stable' } }

    steps {
      sh '''
        rm -rf build; mkdir -p build; cd build
        cmake -DCMAKE_INSTALL_PREFIX=`pwd`/RELEASE -DENABLE_HDF5=ON ..
        make -j 16 all install
      '''
      executeSteps_one( '', '' )
    }
  }

  stage('GCC Compiler Tests (2/2)') {
    when { expression { return env.BRANCH_NAME == 'master' } }
  
    agent { docker { image 'kellekai/archlinuxopenmpi1.10:stable' } }

    steps {
      sh '''
        rm -rf build; mkdir -p build; cd build
        cmake -DCMAKE_INSTALL_PREFIX=`pwd`/RELEASE -DENABLE_HDF5=ON ..
        make -j 16 all install
      '''
      executeSteps_two( '', '' )
    }
  }

  stage('Clang Compiler Tests (1/2)') {
    when { expression { return env.BRANCH_NAME == 'master' } }
  
    agent { docker { image 'kellekai/archlinuxopenmpi1.10:stable' } }

    steps {
      sh '''
        rm -rf build; mkdir -p build; cd build
        export OMPI_MPICC=clang
        export OMPI_CXX=clang++
        CC=clang FC=gfortran cmake -DCMAKE_INSTALL_PREFIX=`pwd`/RELEASE -DENABLE_HDF5=ON ..
        VERBOSE=1 make -j 16 all install
      '''
      executeSteps_one( '', '' )
    }
  }

  stage('Clang Compiler Tests (2/2)') {
    when { expression { return env.BRANCH_NAME == 'master' } }
  
    agent { docker { image 'kellekai/archlinuxopenmpi1.10:stable' } }

    steps {
      sh '''
        rm -rf build; mkdir -p build; cd build
        export OMPI_MPICC=clang
        export OMPI_CXX=clang++
        CC=clang FC=gfortran cmake -DCMAKE_INSTALL_PREFIX=`pwd`/RELEASE -DENABLE_HDF5=ON ..
        VERBOSE=1 make -j 16 all install
      '''
      executeSteps_two( '', '' )
    }
  }

  stage('PGI Compiler Tests (1/2)') {
    when { expression { return env.BRANCH_NAME == 'master' } }
  
    agent { docker { image 'kellekai/archlinuxpgi18:stable' } }

    environment {
      PGICC = '/opt/pgi/linux86-64/18.4/bin/'
      PGIMPICC = '/opt/pgi/linux86-64/2018/mpi/openmpi-2.1.2/bin/'
      LM_LICENSE_FILE = '$PGI/license.dat'
      LD_LIBRARY_PATH = '/opt/pgi/linux86-64/18.4/lib'
    }

    steps {
      sh '''
        export PATH=$PGICC:$PGIMPICC:$PATH
        echo $PATH
        ls /opt/pgi/
        rm -rf build; mkdir -p build; cd build
        CC=pgcc FC=pgfortran cmake -DCMAKE_INSTALL_PREFIX=`pwd`/RELEASE -DHDF5_ROOT=/opt/HDF5/1.10.4 -DENABLE_HDF5=ON ..
        make -j 16 all install
      '''
      executeSteps_one( '/opt/pgi/linux86-64/18.4/bin/', '/opt/pgi/linux86-64/2018/mpi/openmpi-2.1.2/bin/' )
    }
  }

  stage('PGI Compiler Tests (2/2)') {
    when { expression { return env.BRANCH_NAME == 'master' } }
  
    agent { docker { image 'kellekai/archlinuxpgi18:stable' } }

    environment {
      PGICC = '/opt/pgi/linux86-64/18.4/bin/'
      PGIMPICC = '/opt/pgi/linux86-64/2018/mpi/openmpi-2.1.2/bin/'
      LM_LICENSE_FILE = '$PGI/license.dat'
      LD_LIBRARY_PATH = '/opt/pgi/linux86-64/18.4/lib'
    }

    steps {
      sh '''
        export PATH=$PGICC:$PGIMPICC:$PATH
        echo $PATH
        ls /opt/pgi/
        rm -rf build; mkdir -p build; cd build
        CC=pgcc FC=pgfortran cmake -DCMAKE_INSTALL_PREFIX=`pwd`/RELEASE -DHDF5_ROOT=/opt/HDF5/1.10.4 -DENABLE_HDF5=ON ..
        make -j 16 all install
      '''
      executeSteps_two( '/opt/pgi/linux86-64/18.4/bin/', '/opt/pgi/linux86-64/2018/mpi/openmpi-2.1.2/bin/' )
    }
  }
}}
