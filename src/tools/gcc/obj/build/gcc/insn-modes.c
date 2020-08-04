/* Generated automatically from machmode.def and config/rs6000/rs6000-modes.def
   by genmodes.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "machmode.h"
#include "real.h"

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

const unsigned short mode_precision[NUM_MACHINE_MODES] =
{
  0,                       /* VOID */
  0,                       /* BLK */
  4*BITS_PER_UNIT,         /* CC */
  4*BITS_PER_UNIT,         /* CCUNS */
  4*BITS_PER_UNIT,         /* CCFP */
  4*BITS_PER_UNIT,         /* CCEQ */
  1,                       /* BI */
  1*BITS_PER_UNIT,         /* QI */
  2*BITS_PER_UNIT,         /* HI */
  4*BITS_PER_UNIT,         /* SI */
  8*BITS_PER_UNIT,         /* DI */
  16*BITS_PER_UNIT,        /* TI */
  128,                     /* PTI */
  1*BITS_PER_UNIT,         /* QQ */
  2*BITS_PER_UNIT,         /* HQ */
  4*BITS_PER_UNIT,         /* SQ */
  8*BITS_PER_UNIT,         /* DQ */
  16*BITS_PER_UNIT,        /* TQ */
  1*BITS_PER_UNIT,         /* UQQ */
  2*BITS_PER_UNIT,         /* UHQ */
  4*BITS_PER_UNIT,         /* USQ */
  8*BITS_PER_UNIT,         /* UDQ */
  16*BITS_PER_UNIT,        /* UTQ */
  2*BITS_PER_UNIT,         /* HA */
  4*BITS_PER_UNIT,         /* SA */
  8*BITS_PER_UNIT,         /* DA */
  16*BITS_PER_UNIT,        /* TA */
  2*BITS_PER_UNIT,         /* UHA */
  4*BITS_PER_UNIT,         /* USA */
  8*BITS_PER_UNIT,         /* UDA */
  16*BITS_PER_UNIT,        /* UTA */
  4*BITS_PER_UNIT,         /* SF */
  8*BITS_PER_UNIT,         /* DF */
  106,                     /* IF */
  113,                     /* KF */
  16*BITS_PER_UNIT,        /* TF */
  4*BITS_PER_UNIT,         /* SD */
  8*BITS_PER_UNIT,         /* DD */
  16*BITS_PER_UNIT,        /* TD */
  2*BITS_PER_UNIT,         /* CQI */
  4*BITS_PER_UNIT,         /* CHI */
  8*BITS_PER_UNIT,         /* CSI */
  16*BITS_PER_UNIT,        /* CDI */
  32*BITS_PER_UNIT,        /* CTI */
  8*BITS_PER_UNIT,         /* SC */
  16*BITS_PER_UNIT,        /* DC */
  212,                     /* IC */
  226,                     /* KC */
  32*BITS_PER_UNIT,        /* TC */
  8*BITS_PER_UNIT,         /* V8QI */
  8*BITS_PER_UNIT,         /* V4HI */
  8*BITS_PER_UNIT,         /* V2SI */
  8*BITS_PER_UNIT,         /* V1DI */
  16*BITS_PER_UNIT,        /* V16QI */
  16*BITS_PER_UNIT,        /* V8HI */
  16*BITS_PER_UNIT,        /* V4SI */
  16*BITS_PER_UNIT,        /* V2DI */
  16*BITS_PER_UNIT,        /* V1TI */
  32*BITS_PER_UNIT,        /* V32QI */
  32*BITS_PER_UNIT,        /* V16HI */
  32*BITS_PER_UNIT,        /* V8SI */
  32*BITS_PER_UNIT,        /* V4DI */
  32*BITS_PER_UNIT,        /* V2TI */
  8*BITS_PER_UNIT,         /* V2SF */
  16*BITS_PER_UNIT,        /* V4SF */
  16*BITS_PER_UNIT,        /* V2DF */
  212,                     /* V2IF */
  226,                     /* V2KF */
  32*BITS_PER_UNIT,        /* V8SF */
  32*BITS_PER_UNIT,        /* V4DF */
  32*BITS_PER_UNIT,        /* V2TF */
};

const unsigned char mode_size[NUM_MACHINE_MODES] = 
{
  0,                       /* VOID */
  0,                       /* BLK */
  4,                       /* CC */
  4,                       /* CCUNS */
  4,                       /* CCFP */
  4,                       /* CCEQ */
  1,                       /* BI */
  1,                       /* QI */
  2,                       /* HI */
  4,                       /* SI */
  8,                       /* DI */
  16,                      /* TI */
  16,                      /* PTI */
  1,                       /* QQ */
  2,                       /* HQ */
  4,                       /* SQ */
  8,                       /* DQ */
  16,                      /* TQ */
  1,                       /* UQQ */
  2,                       /* UHQ */
  4,                       /* USQ */
  8,                       /* UDQ */
  16,                      /* UTQ */
  2,                       /* HA */
  4,                       /* SA */
  8,                       /* DA */
  16,                      /* TA */
  2,                       /* UHA */
  4,                       /* USA */
  8,                       /* UDA */
  16,                      /* UTA */
  4,                       /* SF */
  8,                       /* DF */
  16,                      /* IF */
  16,                      /* KF */
  16,                      /* TF */
  4,                       /* SD */
  8,                       /* DD */
  16,                      /* TD */
  2,                       /* CQI */
  4,                       /* CHI */
  8,                       /* CSI */
  16,                      /* CDI */
  32,                      /* CTI */
  8,                       /* SC */
  16,                      /* DC */
  32,                      /* IC */
  32,                      /* KC */
  32,                      /* TC */
  8,                       /* V8QI */
  8,                       /* V4HI */
  8,                       /* V2SI */
  8,                       /* V1DI */
  16,                      /* V16QI */
  16,                      /* V8HI */
  16,                      /* V4SI */
  16,                      /* V2DI */
  16,                      /* V1TI */
  32,                      /* V32QI */
  32,                      /* V16HI */
  32,                      /* V8SI */
  32,                      /* V4DI */
  32,                      /* V2TI */
  8,                       /* V2SF */
  16,                      /* V4SF */
  16,                      /* V2DF */
  32,                      /* V2IF */
  32,                      /* V2KF */
  32,                      /* V8SF */
  32,                      /* V4DF */
  32,                      /* V2TF */
};

const unsigned char mode_nunits[NUM_MACHINE_MODES] =
{
  0,                       /* VOID */
  0,                       /* BLK */
  1,                       /* CC */
  1,                       /* CCUNS */
  1,                       /* CCFP */
  1,                       /* CCEQ */
  1,                       /* BI */
  1,                       /* QI */
  1,                       /* HI */
  1,                       /* SI */
  1,                       /* DI */
  1,                       /* TI */
  1,                       /* PTI */
  1,                       /* QQ */
  1,                       /* HQ */
  1,                       /* SQ */
  1,                       /* DQ */
  1,                       /* TQ */
  1,                       /* UQQ */
  1,                       /* UHQ */
  1,                       /* USQ */
  1,                       /* UDQ */
  1,                       /* UTQ */
  1,                       /* HA */
  1,                       /* SA */
  1,                       /* DA */
  1,                       /* TA */
  1,                       /* UHA */
  1,                       /* USA */
  1,                       /* UDA */
  1,                       /* UTA */
  1,                       /* SF */
  1,                       /* DF */
  1,                       /* IF */
  1,                       /* KF */
  1,                       /* TF */
  1,                       /* SD */
  1,                       /* DD */
  1,                       /* TD */
  2,                       /* CQI */
  2,                       /* CHI */
  2,                       /* CSI */
  2,                       /* CDI */
  2,                       /* CTI */
  2,                       /* SC */
  2,                       /* DC */
  2,                       /* IC */
  2,                       /* KC */
  2,                       /* TC */
  8,                       /* V8QI */
  4,                       /* V4HI */
  2,                       /* V2SI */
  1,                       /* V1DI */
  16,                      /* V16QI */
  8,                       /* V8HI */
  4,                       /* V4SI */
  2,                       /* V2DI */
  1,                       /* V1TI */
  32,                      /* V32QI */
  16,                      /* V16HI */
  8,                       /* V8SI */
  4,                       /* V4DI */
  2,                       /* V2TI */
  2,                       /* V2SF */
  4,                       /* V4SF */
  2,                       /* V2DF */
  2,                       /* V2IF */
  2,                       /* V2KF */
  8,                       /* V8SF */
  4,                       /* V4DF */
  2,                       /* V2TF */
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

const unsigned char mode_complex[NUM_MACHINE_MODES] =
{
  VOIDmode,                /* VOID */
  VOIDmode,                /* BLK */
  VOIDmode,                /* CC */
  VOIDmode,                /* CCUNS */
  VOIDmode,                /* CCFP */
  VOIDmode,                /* CCEQ */
  VOIDmode,                /* BI */
  CQImode,                 /* QI */
  CHImode,                 /* HI */
  CSImode,                 /* SI */
  CDImode,                 /* DI */
  CTImode,                 /* TI */
  VOIDmode,                /* PTI */
  VOIDmode,                /* QQ */
  VOIDmode,                /* HQ */
  VOIDmode,                /* SQ */
  VOIDmode,                /* DQ */
  VOIDmode,                /* TQ */
  VOIDmode,                /* UQQ */
  VOIDmode,                /* UHQ */
  VOIDmode,                /* USQ */
  VOIDmode,                /* UDQ */
  VOIDmode,                /* UTQ */
  VOIDmode,                /* HA */
  VOIDmode,                /* SA */
  VOIDmode,                /* DA */
  VOIDmode,                /* TA */
  VOIDmode,                /* UHA */
  VOIDmode,                /* USA */
  VOIDmode,                /* UDA */
  VOIDmode,                /* UTA */
  SCmode,                  /* SF */
  DCmode,                  /* DF */
  ICmode,                  /* IF */
  KCmode,                  /* KF */
  TCmode,                  /* TF */
  VOIDmode,                /* SD */
  VOIDmode,                /* DD */
  VOIDmode,                /* TD */
  VOIDmode,                /* CQI */
  VOIDmode,                /* CHI */
  VOIDmode,                /* CSI */
  VOIDmode,                /* CDI */
  VOIDmode,                /* CTI */
  VOIDmode,                /* SC */
  VOIDmode,                /* DC */
  VOIDmode,                /* IC */
  VOIDmode,                /* KC */
  VOIDmode,                /* TC */
  VOIDmode,                /* V8QI */
  VOIDmode,                /* V4HI */
  VOIDmode,                /* V2SI */
  VOIDmode,                /* V1DI */
  VOIDmode,                /* V16QI */
  VOIDmode,                /* V8HI */
  VOIDmode,                /* V4SI */
  VOIDmode,                /* V2DI */
  VOIDmode,                /* V1TI */
  VOIDmode,                /* V32QI */
  VOIDmode,                /* V16HI */
  VOIDmode,                /* V8SI */
  VOIDmode,                /* V4DI */
  VOIDmode,                /* V2TI */
  VOIDmode,                /* V2SF */
  VOIDmode,                /* V4SF */
  VOIDmode,                /* V2DF */
  VOIDmode,                /* V2IF */
  VOIDmode,                /* V2KF */
  VOIDmode,                /* V8SF */
  VOIDmode,                /* V4DF */
  VOIDmode,                /* V2TF */
};

const unsigned HOST_WIDE_INT mode_mask_array[NUM_MACHINE_MODES] =
{
#define MODE_MASK(m)                          \
  ((m) >= HOST_BITS_PER_WIDE_INT)             \
   ? ~(unsigned HOST_WIDE_INT) 0              \
   : ((unsigned HOST_WIDE_INT) 1 << (m)) - 1

  MODE_MASK (0),           /* VOID */
  MODE_MASK (0),           /* BLK */
  MODE_MASK (4*BITS_PER_UNIT),   /* CC */
  MODE_MASK (4*BITS_PER_UNIT),   /* CCUNS */
  MODE_MASK (4*BITS_PER_UNIT),   /* CCFP */
  MODE_MASK (4*BITS_PER_UNIT),   /* CCEQ */
  MODE_MASK (1),           /* BI */
  MODE_MASK (1*BITS_PER_UNIT),   /* QI */
  MODE_MASK (2*BITS_PER_UNIT),   /* HI */
  MODE_MASK (4*BITS_PER_UNIT),   /* SI */
  MODE_MASK (8*BITS_PER_UNIT),   /* DI */
  MODE_MASK (16*BITS_PER_UNIT),    /* TI */
  MODE_MASK (128),         /* PTI */
  MODE_MASK (1*BITS_PER_UNIT),   /* QQ */
  MODE_MASK (2*BITS_PER_UNIT),   /* HQ */
  MODE_MASK (4*BITS_PER_UNIT),   /* SQ */
  MODE_MASK (8*BITS_PER_UNIT),   /* DQ */
  MODE_MASK (16*BITS_PER_UNIT),    /* TQ */
  MODE_MASK (1*BITS_PER_UNIT),   /* UQQ */
  MODE_MASK (2*BITS_PER_UNIT),   /* UHQ */
  MODE_MASK (4*BITS_PER_UNIT),   /* USQ */
  MODE_MASK (8*BITS_PER_UNIT),   /* UDQ */
  MODE_MASK (16*BITS_PER_UNIT),    /* UTQ */
  MODE_MASK (2*BITS_PER_UNIT),   /* HA */
  MODE_MASK (4*BITS_PER_UNIT),   /* SA */
  MODE_MASK (8*BITS_PER_UNIT),   /* DA */
  MODE_MASK (16*BITS_PER_UNIT),    /* TA */
  MODE_MASK (2*BITS_PER_UNIT),   /* UHA */
  MODE_MASK (4*BITS_PER_UNIT),   /* USA */
  MODE_MASK (8*BITS_PER_UNIT),   /* UDA */
  MODE_MASK (16*BITS_PER_UNIT),    /* UTA */
  MODE_MASK (4*BITS_PER_UNIT),   /* SF */
  MODE_MASK (8*BITS_PER_UNIT),   /* DF */
  MODE_MASK (106),         /* IF */
  MODE_MASK (113),         /* KF */
  MODE_MASK (16*BITS_PER_UNIT),    /* TF */
  MODE_MASK (4*BITS_PER_UNIT),   /* SD */
  MODE_MASK (8*BITS_PER_UNIT),   /* DD */
  MODE_MASK (16*BITS_PER_UNIT),    /* TD */
  MODE_MASK (2*BITS_PER_UNIT),   /* CQI */
  MODE_MASK (4*BITS_PER_UNIT),   /* CHI */
  MODE_MASK (8*BITS_PER_UNIT),   /* CSI */
  MODE_MASK (16*BITS_PER_UNIT),    /* CDI */
  MODE_MASK (32*BITS_PER_UNIT),    /* CTI */
  MODE_MASK (8*BITS_PER_UNIT),   /* SC */
  MODE_MASK (16*BITS_PER_UNIT),    /* DC */
  MODE_MASK (212),         /* IC */
  MODE_MASK (226),         /* KC */
  MODE_MASK (32*BITS_PER_UNIT),    /* TC */
  MODE_MASK (8*BITS_PER_UNIT),   /* V8QI */
  MODE_MASK (8*BITS_PER_UNIT),   /* V4HI */
  MODE_MASK (8*BITS_PER_UNIT),   /* V2SI */
  MODE_MASK (8*BITS_PER_UNIT),   /* V1DI */
  MODE_MASK (16*BITS_PER_UNIT),    /* V16QI */
  MODE_MASK (16*BITS_PER_UNIT),    /* V8HI */
  MODE_MASK (16*BITS_PER_UNIT),    /* V4SI */
  MODE_MASK (16*BITS_PER_UNIT),    /* V2DI */
  MODE_MASK (16*BITS_PER_UNIT),    /* V1TI */
  MODE_MASK (32*BITS_PER_UNIT),    /* V32QI */
  MODE_MASK (32*BITS_PER_UNIT),    /* V16HI */
  MODE_MASK (32*BITS_PER_UNIT),    /* V8SI */
  MODE_MASK (32*BITS_PER_UNIT),    /* V4DI */
  MODE_MASK (32*BITS_PER_UNIT),    /* V2TI */
  MODE_MASK (8*BITS_PER_UNIT),   /* V2SF */
  MODE_MASK (16*BITS_PER_UNIT),    /* V4SF */
  MODE_MASK (16*BITS_PER_UNIT),    /* V2DF */
  MODE_MASK (212),         /* V2IF */
  MODE_MASK (226),         /* V2KF */
  MODE_MASK (32*BITS_PER_UNIT),    /* V8SF */
  MODE_MASK (32*BITS_PER_UNIT),    /* V4DF */
  MODE_MASK (32*BITS_PER_UNIT),    /* V2TF */
#undef MODE_MASK
};

const unsigned char mode_inner[NUM_MACHINE_MODES] =
{
  VOIDmode,                /* VOID */
  BLKmode,                 /* BLK */
  CCmode,                  /* CC */
  CCUNSmode,               /* CCUNS */
  CCFPmode,                /* CCFP */
  CCEQmode,                /* CCEQ */
  BImode,                  /* BI */
  QImode,                  /* QI */
  HImode,                  /* HI */
  SImode,                  /* SI */
  DImode,                  /* DI */
  TImode,                  /* TI */
  PTImode,                 /* PTI */
  QQmode,                  /* QQ */
  HQmode,                  /* HQ */
  SQmode,                  /* SQ */
  DQmode,                  /* DQ */
  TQmode,                  /* TQ */
  UQQmode,                 /* UQQ */
  UHQmode,                 /* UHQ */
  USQmode,                 /* USQ */
  UDQmode,                 /* UDQ */
  UTQmode,                 /* UTQ */
  HAmode,                  /* HA */
  SAmode,                  /* SA */
  DAmode,                  /* DA */
  TAmode,                  /* TA */
  UHAmode,                 /* UHA */
  USAmode,                 /* USA */
  UDAmode,                 /* UDA */
  UTAmode,                 /* UTA */
  SFmode,                  /* SF */
  DFmode,                  /* DF */
  IFmode,                  /* IF */
  KFmode,                  /* KF */
  TFmode,                  /* TF */
  SDmode,                  /* SD */
  DDmode,                  /* DD */
  TDmode,                  /* TD */
  QImode,                  /* CQI */
  HImode,                  /* CHI */
  SImode,                  /* CSI */
  DImode,                  /* CDI */
  TImode,                  /* CTI */
  SFmode,                  /* SC */
  DFmode,                  /* DC */
  IFmode,                  /* IC */
  KFmode,                  /* KC */
  TFmode,                  /* TC */
  QImode,                  /* V8QI */
  HImode,                  /* V4HI */
  SImode,                  /* V2SI */
  DImode,                  /* V1DI */
  QImode,                  /* V16QI */
  HImode,                  /* V8HI */
  SImode,                  /* V4SI */
  DImode,                  /* V2DI */
  TImode,                  /* V1TI */
  QImode,                  /* V32QI */
  HImode,                  /* V16HI */
  SImode,                  /* V8SI */
  DImode,                  /* V4DI */
  TImode,                  /* V2TI */
  SFmode,                  /* V2SF */
  SFmode,                  /* V4SF */
  DFmode,                  /* V2DF */
  IFmode,                  /* V2IF */
  KFmode,                  /* V2KF */
  SFmode,                  /* V8SF */
  DFmode,                  /* V4DF */
  TFmode,                  /* V2TF */
};

const unsigned char mode_unit_size[NUM_MACHINE_MODES] = 
{
  0,                       /* VOID */
  0,                       /* BLK */
  4,                       /* CC */
  4,                       /* CCUNS */
  4,                       /* CCFP */
  4,                       /* CCEQ */
  1,                       /* BI */
  1,                       /* QI */
  2,                       /* HI */
  4,                       /* SI */
  8,                       /* DI */
  16,                      /* TI */
  16,                      /* PTI */
  1,                       /* QQ */
  2,                       /* HQ */
  4,                       /* SQ */
  8,                       /* DQ */
  16,                      /* TQ */
  1,                       /* UQQ */
  2,                       /* UHQ */
  4,                       /* USQ */
  8,                       /* UDQ */
  16,                      /* UTQ */
  2,                       /* HA */
  4,                       /* SA */
  8,                       /* DA */
  16,                      /* TA */
  2,                       /* UHA */
  4,                       /* USA */
  8,                       /* UDA */
  16,                      /* UTA */
  4,                       /* SF */
  8,                       /* DF */
  16,                      /* IF */
  16,                      /* KF */
  16,                      /* TF */
  4,                       /* SD */
  8,                       /* DD */
  16,                      /* TD */
  1,                       /* CQI */
  2,                       /* CHI */
  4,                       /* CSI */
  8,                       /* CDI */
  16,                      /* CTI */
  4,                       /* SC */
  8,                       /* DC */
  16,                      /* IC */
  16,                      /* KC */
  16,                      /* TC */
  1,                       /* V8QI */
  2,                       /* V4HI */
  4,                       /* V2SI */
  8,                       /* V1DI */
  1,                       /* V16QI */
  2,                       /* V8HI */
  4,                       /* V4SI */
  8,                       /* V2DI */
  16,                      /* V1TI */
  1,                       /* V32QI */
  2,                       /* V16HI */
  4,                       /* V8SI */
  8,                       /* V4DI */
  16,                      /* V2TI */
  4,                       /* V2SF */
  4,                       /* V4SF */
  8,                       /* V2DF */
  16,                      /* V2IF */
  16,                      /* V2KF */
  4,                       /* V8SF */
  8,                       /* V4DF */
  16,                      /* V2TF */
};

const unsigned short mode_unit_precision[NUM_MACHINE_MODES] =
{
  0,                       /* VOID */
  0,                       /* BLK */
  4*BITS_PER_UNIT,         /* CC */
  4*BITS_PER_UNIT,         /* CCUNS */
  4*BITS_PER_UNIT,         /* CCFP */
  4*BITS_PER_UNIT,         /* CCEQ */
  1,                       /* BI */
  1*BITS_PER_UNIT,         /* QI */
  2*BITS_PER_UNIT,         /* HI */
  4*BITS_PER_UNIT,         /* SI */
  8*BITS_PER_UNIT,         /* DI */
  16*BITS_PER_UNIT,        /* TI */
  128,                     /* PTI */
  1*BITS_PER_UNIT,         /* QQ */
  2*BITS_PER_UNIT,         /* HQ */
  4*BITS_PER_UNIT,         /* SQ */
  8*BITS_PER_UNIT,         /* DQ */
  16*BITS_PER_UNIT,        /* TQ */
  1*BITS_PER_UNIT,         /* UQQ */
  2*BITS_PER_UNIT,         /* UHQ */
  4*BITS_PER_UNIT,         /* USQ */
  8*BITS_PER_UNIT,         /* UDQ */
  16*BITS_PER_UNIT,        /* UTQ */
  2*BITS_PER_UNIT,         /* HA */
  4*BITS_PER_UNIT,         /* SA */
  8*BITS_PER_UNIT,         /* DA */
  16*BITS_PER_UNIT,        /* TA */
  2*BITS_PER_UNIT,         /* UHA */
  4*BITS_PER_UNIT,         /* USA */
  8*BITS_PER_UNIT,         /* UDA */
  16*BITS_PER_UNIT,        /* UTA */
  4*BITS_PER_UNIT,         /* SF */
  8*BITS_PER_UNIT,         /* DF */
  106,                     /* IF */
  113,                     /* KF */
  16*BITS_PER_UNIT,        /* TF */
  4*BITS_PER_UNIT,         /* SD */
  8*BITS_PER_UNIT,         /* DD */
  16*BITS_PER_UNIT,        /* TD */
  1*BITS_PER_UNIT,         /* CQI */
  2*BITS_PER_UNIT,         /* CHI */
  4*BITS_PER_UNIT,         /* CSI */
  8*BITS_PER_UNIT,         /* CDI */
  16*BITS_PER_UNIT,        /* CTI */
  4*BITS_PER_UNIT,         /* SC */
  8*BITS_PER_UNIT,         /* DC */
  106,                     /* IC */
  113,                     /* KC */
  16*BITS_PER_UNIT,        /* TC */
  1*BITS_PER_UNIT,         /* V8QI */
  2*BITS_PER_UNIT,         /* V4HI */
  4*BITS_PER_UNIT,         /* V2SI */
  8*BITS_PER_UNIT,         /* V1DI */
  1*BITS_PER_UNIT,         /* V16QI */
  2*BITS_PER_UNIT,         /* V8HI */
  4*BITS_PER_UNIT,         /* V4SI */
  8*BITS_PER_UNIT,         /* V2DI */
  16*BITS_PER_UNIT,        /* V1TI */
  1*BITS_PER_UNIT,         /* V32QI */
  2*BITS_PER_UNIT,         /* V16HI */
  4*BITS_PER_UNIT,         /* V8SI */
  8*BITS_PER_UNIT,         /* V4DI */
  16*BITS_PER_UNIT,        /* V2TI */
  4*BITS_PER_UNIT,         /* V2SF */
  4*BITS_PER_UNIT,         /* V4SF */
  8*BITS_PER_UNIT,         /* V2DF */
  106,                     /* V2IF */
  113,                     /* V2KF */
  4*BITS_PER_UNIT,         /* V8SF */
  8*BITS_PER_UNIT,         /* V4DF */
  16*BITS_PER_UNIT,        /* V2TF */
};

const unsigned char mode_base_align[NUM_MACHINE_MODES] = 
{
  0,                       /* VOID */
  0,                       /* BLK */
  4,                       /* CC */
  4,                       /* CCUNS */
  4,                       /* CCFP */
  4,                       /* CCEQ */
  1,                       /* BI */
  1,                       /* QI */
  2,                       /* HI */
  4,                       /* SI */
  8,                       /* DI */
  16,                      /* TI */
  16,                      /* PTI */
  1,                       /* QQ */
  2,                       /* HQ */
  4,                       /* SQ */
  8,                       /* DQ */
  16,                      /* TQ */
  1,                       /* UQQ */
  2,                       /* UHQ */
  4,                       /* USQ */
  8,                       /* UDQ */
  16,                      /* UTQ */
  2,                       /* HA */
  4,                       /* SA */
  8,                       /* DA */
  16,                      /* TA */
  2,                       /* UHA */
  4,                       /* USA */
  8,                       /* UDA */
  16,                      /* UTA */
  4,                       /* SF */
  8,                       /* DF */
  16,                      /* IF */
  16,                      /* KF */
  16,                      /* TF */
  4,                       /* SD */
  8,                       /* DD */
  16,                      /* TD */
  1,                       /* CQI */
  2,                       /* CHI */
  4,                       /* CSI */
  8,                       /* CDI */
  16,                      /* CTI */
  4,                       /* SC */
  8,                       /* DC */
  16,                      /* IC */
  16,                      /* KC */
  16,                      /* TC */
  8,                       /* V8QI */
  8,                       /* V4HI */
  8,                       /* V2SI */
  8,                       /* V1DI */
  16,                      /* V16QI */
  16,                      /* V8HI */
  16,                      /* V4SI */
  16,                      /* V2DI */
  16,                      /* V1TI */
  32,                      /* V32QI */
  32,                      /* V16HI */
  32,                      /* V8SI */
  32,                      /* V4DI */
  32,                      /* V2TI */
  8,                       /* V2SF */
  16,                      /* V4SF */
  16,                      /* V2DF */
  32,                      /* V2IF */
  32,                      /* V2KF */
  32,                      /* V8SF */
  32,                      /* V4DF */
  32,                      /* V2TF */
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

const struct real_format *
 real_format_for_mode[MAX_MODE_FLOAT - MIN_MODE_FLOAT + 1 + MAX_MODE_DECIMAL_FLOAT - MIN_MODE_DECIMAL_FLOAT + 1] =
{
  &ieee_single_format,     /* SF */
  &ieee_double_format,     /* DF */
  &ibm_extended_format,    /* IF */
  &ieee_quad_format,       /* KF */
  &ieee_quad_format,       /* TF */
  &decimal_single_format,  /* SD */
  &decimal_double_format,  /* DD */
  &decimal_quad_format,    /* TD */
};

void
init_adjust_machine_modes (void)
{
  size_t s ATTRIBUTE_UNUSED;
}

const unsigned char mode_ibit[NUM_MACHINE_MODES] = 
{
  0,                       /* VOID */
  0,                       /* BLK */
  0,                       /* CC */
  0,                       /* CCUNS */
  0,                       /* CCFP */
  0,                       /* CCEQ */
  0,                       /* BI */
  0,                       /* QI */
  0,                       /* HI */
  0,                       /* SI */
  0,                       /* DI */
  0,                       /* TI */
  0,                       /* PTI */
  0,                       /* QQ */
  0,                       /* HQ */
  0,                       /* SQ */
  0,                       /* DQ */
  0,                       /* TQ */
  0,                       /* UQQ */
  0,                       /* UHQ */
  0,                       /* USQ */
  0,                       /* UDQ */
  0,                       /* UTQ */
  8,                       /* HA */
  16,                      /* SA */
  32,                      /* DA */
  64,                      /* TA */
  8,                       /* UHA */
  16,                      /* USA */
  32,                      /* UDA */
  64,                      /* UTA */
  0,                       /* SF */
  0,                       /* DF */
  0,                       /* IF */
  0,                       /* KF */
  0,                       /* TF */
  0,                       /* SD */
  0,                       /* DD */
  0,                       /* TD */
  0,                       /* CQI */
  0,                       /* CHI */
  0,                       /* CSI */
  0,                       /* CDI */
  0,                       /* CTI */
  0,                       /* SC */
  0,                       /* DC */
  0,                       /* IC */
  0,                       /* KC */
  0,                       /* TC */
  0,                       /* V8QI */
  0,                       /* V4HI */
  0,                       /* V2SI */
  0,                       /* V1DI */
  0,                       /* V16QI */
  0,                       /* V8HI */
  0,                       /* V4SI */
  0,                       /* V2DI */
  0,                       /* V1TI */
  0,                       /* V32QI */
  0,                       /* V16HI */
  0,                       /* V8SI */
  0,                       /* V4DI */
  0,                       /* V2TI */
  0,                       /* V2SF */
  0,                       /* V4SF */
  0,                       /* V2DF */
  0,                       /* V2IF */
  0,                       /* V2KF */
  0,                       /* V8SF */
  0,                       /* V4DF */
  0,                       /* V2TF */
};

const unsigned char mode_fbit[NUM_MACHINE_MODES] = 
{
  0,                       /* VOID */
  0,                       /* BLK */
  0,                       /* CC */
  0,                       /* CCUNS */
  0,                       /* CCFP */
  0,                       /* CCEQ */
  0,                       /* BI */
  0,                       /* QI */
  0,                       /* HI */
  0,                       /* SI */
  0,                       /* DI */
  0,                       /* TI */
  0,                       /* PTI */
  7,                       /* QQ */
  15,                      /* HQ */
  31,                      /* SQ */
  63,                      /* DQ */
  127,                     /* TQ */
  8,                       /* UQQ */
  16,                      /* UHQ */
  32,                      /* USQ */
  64,                      /* UDQ */
  128,                     /* UTQ */
  7,                       /* HA */
  15,                      /* SA */
  31,                      /* DA */
  63,                      /* TA */
  8,                       /* UHA */
  16,                      /* USA */
  32,                      /* UDA */
  64,                      /* UTA */
  0,                       /* SF */
  0,                       /* DF */
  0,                       /* IF */
  0,                       /* KF */
  0,                       /* TF */
  0,                       /* SD */
  0,                       /* DD */
  0,                       /* TD */
  0,                       /* CQI */
  0,                       /* CHI */
  0,                       /* CSI */
  0,                       /* CDI */
  0,                       /* CTI */
  0,                       /* SC */
  0,                       /* DC */
  0,                       /* IC */
  0,                       /* KC */
  0,                       /* TC */
  0,                       /* V8QI */
  0,                       /* V4HI */
  0,                       /* V2SI */
  0,                       /* V1DI */
  0,                       /* V16QI */
  0,                       /* V8HI */
  0,                       /* V4SI */
  0,                       /* V2DI */
  0,                       /* V1TI */
  0,                       /* V32QI */
  0,                       /* V16HI */
  0,                       /* V8SI */
  0,                       /* V4DI */
  0,                       /* V2TI */
  0,                       /* V2SF */
  0,                       /* V4SF */
  0,                       /* V2DF */
  0,                       /* V2IF */
  0,                       /* V2KF */
  0,                       /* V8SF */
  0,                       /* V4DF */
  0,                       /* V2TF */
};

const int_n_data_t int_n_data[] =
{
 {
  128,                     /* TI */
TImode, },
};
