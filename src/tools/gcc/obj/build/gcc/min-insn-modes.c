/* Generated automatically from machmode.def and config/rs6000/rs6000-modes.def
   by genmodes.  */

#include "bconfig.h"
#include "system.h"
#include "machmode.h"

const char *const mode_name[NUM_MACHINE_MODES] =
{
  "VOID",
  "BLK",
  "CC",
  "CCUNS",
  "CCFP",
  "CCEQ",
  "BI",
  "QI",
  "HI",
  "SI",
  "DI",
  "TI",
  "PTI",
  "QQ",
  "HQ",
  "SQ",
  "DQ",
  "TQ",
  "UQQ",
  "UHQ",
  "USQ",
  "UDQ",
  "UTQ",
  "HA",
  "SA",
  "DA",
  "TA",
  "UHA",
  "USA",
  "UDA",
  "UTA",
  "SF",
  "DF",
  "IF",
  "KF",
  "TF",
  "SD",
  "DD",
  "TD",
  "CQI",
  "CHI",
  "CSI",
  "CDI",
  "CTI",
  "SC",
  "DC",
  "IC",
  "KC",
  "TC",
  "V8QI",
  "V4HI",
  "V2SI",
  "V1DI",
  "V16QI",
  "V8HI",
  "V4SI",
  "V2DI",
  "V1TI",
  "V32QI",
  "V16HI",
  "V8SI",
  "V4DI",
  "V2TI",
  "V2SF",
  "V4SF",
  "V2DF",
  "V2IF",
  "V2KF",
  "V8SF",
  "V4DF",
  "V2TF",
};

const unsigned char mode_class[NUM_MACHINE_MODES] =
{
  MODE_RANDOM,             /* VOID */
  MODE_RANDOM,             /* BLK */
  MODE_CC,                 /* CC */
  MODE_CC,                 /* CCUNS */
  MODE_CC,                 /* CCFP */
  MODE_CC,                 /* CCEQ */
  MODE_INT,                /* BI */
  MODE_INT,                /* QI */
  MODE_INT,                /* HI */
  MODE_INT,                /* SI */
  MODE_INT,                /* DI */
  MODE_INT,                /* TI */
  MODE_PARTIAL_INT,        /* PTI */
  MODE_FRACT,              /* QQ */
  MODE_FRACT,              /* HQ */
  MODE_FRACT,              /* SQ */
  MODE_FRACT,              /* DQ */
  MODE_FRACT,              /* TQ */
  MODE_UFRACT,             /* UQQ */
  MODE_UFRACT,             /* UHQ */
  MODE_UFRACT,             /* USQ */
  MODE_UFRACT,             /* UDQ */
  MODE_UFRACT,             /* UTQ */
  MODE_ACCUM,              /* HA */
  MODE_ACCUM,              /* SA */
  MODE_ACCUM,              /* DA */
  MODE_ACCUM,              /* TA */
  MODE_UACCUM,             /* UHA */
  MODE_UACCUM,             /* USA */
  MODE_UACCUM,             /* UDA */
  MODE_UACCUM,             /* UTA */
  MODE_FLOAT,              /* SF */
  MODE_FLOAT,              /* DF */
  MODE_FLOAT,              /* IF */
  MODE_FLOAT,              /* KF */
  MODE_FLOAT,              /* TF */
  MODE_DECIMAL_FLOAT,      /* SD */
  MODE_DECIMAL_FLOAT,      /* DD */
  MODE_DECIMAL_FLOAT,      /* TD */
  MODE_COMPLEX_INT,        /* CQI */
  MODE_COMPLEX_INT,        /* CHI */
  MODE_COMPLEX_INT,        /* CSI */
  MODE_COMPLEX_INT,        /* CDI */
  MODE_COMPLEX_INT,        /* CTI */
  MODE_COMPLEX_FLOAT,      /* SC */
  MODE_COMPLEX_FLOAT,      /* DC */
  MODE_COMPLEX_FLOAT,      /* IC */
  MODE_COMPLEX_FLOAT,      /* KC */
  MODE_COMPLEX_FLOAT,      /* TC */
  MODE_VECTOR_INT,         /* V8QI */
  MODE_VECTOR_INT,         /* V4HI */
  MODE_VECTOR_INT,         /* V2SI */
  MODE_VECTOR_INT,         /* V1DI */
  MODE_VECTOR_INT,         /* V16QI */
  MODE_VECTOR_INT,         /* V8HI */
  MODE_VECTOR_INT,         /* V4SI */
  MODE_VECTOR_INT,         /* V2DI */
  MODE_VECTOR_INT,         /* V1TI */
  MODE_VECTOR_INT,         /* V32QI */
  MODE_VECTOR_INT,         /* V16HI */
  MODE_VECTOR_INT,         /* V8SI */
  MODE_VECTOR_INT,         /* V4DI */
  MODE_VECTOR_INT,         /* V2TI */
  MODE_VECTOR_FLOAT,       /* V2SF */
  MODE_VECTOR_FLOAT,       /* V4SF */
  MODE_VECTOR_FLOAT,       /* V2DF */
  MODE_VECTOR_FLOAT,       /* V2IF */
  MODE_VECTOR_FLOAT,       /* V2KF */
  MODE_VECTOR_FLOAT,       /* V8SF */
  MODE_VECTOR_FLOAT,       /* V4DF */
  MODE_VECTOR_FLOAT,       /* V2TF */
};

const unsigned char mode_wider[NUM_MACHINE_MODES] =
{
  VOIDmode,                /* VOID */
  VOIDmode,                /* BLK */
  VOIDmode,                /* CC */
  VOIDmode,                /* CCUNS */
  VOIDmode,                /* CCFP */
  VOIDmode,                /* CCEQ */
  QImode,                  /* BI */
  HImode,                  /* QI */
  SImode,                  /* HI */
  DImode,                  /* SI */
  TImode,                  /* DI */
  VOIDmode,                /* TI */
  TImode,                  /* PTI */
  HQmode,                  /* QQ */
  SQmode,                  /* HQ */
  DQmode,                  /* SQ */
  TQmode,                  /* DQ */
  VOIDmode,                /* TQ */
  UHQmode,                 /* UQQ */
  USQmode,                 /* UHQ */
  UDQmode,                 /* USQ */
  UTQmode,                 /* UDQ */
  VOIDmode,                /* UTQ */
  SAmode,                  /* HA */
  DAmode,                  /* SA */
  TAmode,                  /* DA */
  VOIDmode,                /* TA */
  USAmode,                 /* UHA */
  UDAmode,                 /* USA */
  UTAmode,                 /* UDA */
  VOIDmode,                /* UTA */
  DFmode,                  /* SF */
  IFmode,                  /* DF */
  KFmode,                  /* IF */
  TFmode,                  /* KF */
  VOIDmode,                /* TF */
  DDmode,                  /* SD */
  TDmode,                  /* DD */
  VOIDmode,                /* TD */
  CHImode,                 /* CQI */
  CSImode,                 /* CHI */
  CDImode,                 /* CSI */
  CTImode,                 /* CDI */
  VOIDmode,                /* CTI */
  DCmode,                  /* SC */
  ICmode,                  /* DC */
  KCmode,                  /* IC */
  TCmode,                  /* KC */
  VOIDmode,                /* TC */
  V4HImode,                /* V8QI */
  V2SImode,                /* V4HI */
  V1DImode,                /* V2SI */
  V16QImode,               /* V1DI */
  V8HImode,                /* V16QI */
  V4SImode,                /* V8HI */
  V2DImode,                /* V4SI */
  V1TImode,                /* V2DI */
  V32QImode,               /* V1TI */
  V16HImode,               /* V32QI */
  V8SImode,                /* V16HI */
  V4DImode,                /* V8SI */
  V2TImode,                /* V4DI */
  VOIDmode,                /* V2TI */
  V4SFmode,                /* V2SF */
  V2DFmode,                /* V4SF */
  V2IFmode,                /* V2DF */
  V2KFmode,                /* V2IF */
  V8SFmode,                /* V2KF */
  V4DFmode,                /* V8SF */
  V2TFmode,                /* V4DF */
  VOIDmode,                /* V2TF */
};

const unsigned char mode_2xwider[NUM_MACHINE_MODES] =
{
  VOIDmode,                /* VOID */
  BLKmode,                 /* BLK */
  VOIDmode,                /* CC */
  VOIDmode,                /* CCUNS */
  VOIDmode,                /* CCFP */
  VOIDmode,                /* CCEQ */
  VOIDmode,                /* BI */
  HImode,                  /* QI */
  SImode,                  /* HI */
  DImode,                  /* SI */
  TImode,                  /* DI */
  VOIDmode,                /* TI */
  VOIDmode,                /* PTI */
  HQmode,                  /* QQ */
  SQmode,                  /* HQ */
  DQmode,                  /* SQ */
  TQmode,                  /* DQ */
  VOIDmode,                /* TQ */
  UHQmode,                 /* UQQ */
  USQmode,                 /* UHQ */
  UDQmode,                 /* USQ */
  UTQmode,                 /* UDQ */
  VOIDmode,                /* UTQ */
  SAmode,                  /* HA */
  DAmode,                  /* SA */
  TAmode,                  /* DA */
  VOIDmode,                /* TA */
  USAmode,                 /* UHA */
  UDAmode,                 /* USA */
  UTAmode,                 /* UDA */
  VOIDmode,                /* UTA */
  DFmode,                  /* SF */
  TFmode,                  /* DF */
  VOIDmode,                /* IF */
  VOIDmode,                /* KF */
  VOIDmode,                /* TF */
  DDmode,                  /* SD */
  TDmode,                  /* DD */
  VOIDmode,                /* TD */
  CHImode,                 /* CQI */
  CSImode,                 /* CHI */
  CDImode,                 /* CSI */
  CTImode,                 /* CDI */
  VOIDmode,                /* CTI */
  DCmode,                  /* SC */
  TCmode,                  /* DC */
  VOIDmode,                /* IC */
  VOIDmode,                /* KC */
  VOIDmode,                /* TC */
  V16QImode,               /* V8QI */
  V8HImode,                /* V4HI */
  V4SImode,                /* V2SI */
  V2DImode,                /* V1DI */
  V32QImode,               /* V16QI */
  V16HImode,               /* V8HI */
  V8SImode,                /* V4SI */
  V4DImode,                /* V2DI */
  V2TImode,                /* V1TI */
  VOIDmode,                /* V32QI */
  VOIDmode,                /* V16HI */
  VOIDmode,                /* V8SI */
  VOIDmode,                /* V4DI */
  VOIDmode,                /* V2TI */
  V4SFmode,                /* V2SF */
  V8SFmode,                /* V4SF */
  V4DFmode,                /* V2DF */
  VOIDmode,                /* V2IF */
  VOIDmode,                /* V2KF */
  VOIDmode,                /* V8SF */
  VOIDmode,                /* V4DF */
  VOIDmode,                /* V2TF */
};

const unsigned char class_narrowest_mode[MAX_MODE_CLASS] =
{
  MIN_MODE_RANDOM,         /* VOID */
  MIN_MODE_CC,             /* CC */
  MIN_MODE_INT,            /* QI */
  MIN_MODE_PARTIAL_INT,    /* PTI */
  MIN_MODE_POINTER_BOUNDS, /* VOID */
  MIN_MODE_FRACT,          /* QQ */
  MIN_MODE_UFRACT,         /* UQQ */
  MIN_MODE_ACCUM,          /* HA */
  MIN_MODE_UACCUM,         /* UHA */
  MIN_MODE_FLOAT,          /* SF */
  MIN_MODE_DECIMAL_FLOAT,  /* SD */
  MIN_MODE_COMPLEX_INT,    /* CQI */
  MIN_MODE_COMPLEX_FLOAT,  /* SC */
  MIN_MODE_VECTOR_INT,     /* V8QI */
  MIN_MODE_VECTOR_FRACT,   /* VOID */
  MIN_MODE_VECTOR_UFRACT,  /* VOID */
  MIN_MODE_VECTOR_ACCUM,   /* VOID */
  MIN_MODE_VECTOR_UACCUM,  /* VOID */
  MIN_MODE_VECTOR_FLOAT,   /* V2SF */
};
