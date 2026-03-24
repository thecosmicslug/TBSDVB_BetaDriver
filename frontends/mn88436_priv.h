
#ifndef MN_DMD_API_H
#define MN_DMD_API_H

#define AIC_RESET_REG                  0xFF // For MxL603 Tuner

#define PAGE_CHANGE_REG                0x00 // Page change, can configured as page 0 or page 1 
#define XTAL_CAP_CTRL_REG              0x01 // Xtal frequency and CAP register 
#define XTAL_ENABLE_DIV_REG            0x02 // Xtal enable and frequency div 4 register 
#define XTAL_CALI_SET_REG              0x03 // Xtal calibration enable register enable register 
#define IF_FREQ_SEL_REG                0x04 // IF frequency selection and manual set bypass register  
#define IF_PATH_GAIN_REG               0x05 // IF gain level and path selection register  
#define IF_FCW_LOW_REG                 0x06 // Low register of IF FCW set when manual program IF frequency   
#define IF_FCW_HIGH_REG                0x07 // High register of IF FCW set when manual program IF frequency 
#define AGC_CONFIG_REG                 0x08 // AGC configuration, include AGC select and AGC type  
#define AGC_SET_POINT_REG              0x09
#define AGC_FLIP_REG                   0x5E
#define AGC_SLOPE_REG                  0xB5
#define AGC_OFFSET_REG                 0xB4
#define GPO_SETTING_REG                0x0A // GPO set and inquiring register 
#define TUNER_ENABLE_REG               0x0B // Power up register, bit<0>
#define TUNE_MODE_REG                  0x0D
#define MAIN_REG_AMP                   0x0E
#define CHAN_TUNE_BW_REG               0x0F // Band width register 
#define CHAN_TUNE_LOW_REG              0x10 // Tune frequency set low byte 
#define CHAN_TUNE_HI_REG               0x11 // Tune frequency set high byte 
#define START_TUNE_REG                 0x12 // sequencer setting register 
#define FINE_TUNE_SET_REG              0x13 // Fine tune operation register 
#define FINE_TUNE_CTRL_REG_0           0x13 // Fine tune operation register 
#define FINE_TUNE_CTRL_REG_1           0x14 // Fine tune operation register 

#define FINE_TUNE_OFFSET_LOW_REG       0x14 // Fine tune frequency offset low byte 
#define FINE_TUNE_OFFSET_HIGH_REG      0x15 // Fine tune frequency offset high byte
#define CHIP_ID_REQ_REG                0x18 // Tuner Chip ID register 
#define CHIP_VERSION_REQ_REG           0x1A // Tuner Chip Revision register 

#define RFPIN_RB_LOW_REG               0x1D // RF power low 8 bit register 
#define RFPIN_RB_HIGH_REG              0x1E // RF power high 8 bit register 
#define SIGNAL_TYPE_REG                0x1E // Signal type

#define DFE_CTRL_ACCUM_LOW_REG         0x24 // Bit<7:0> 
#define DFE_CTRL_ACCUM_MID_REG         0x25 // Bit<7:0>
#define DFE_CTRL_ACCUM_HI_REG          0x26 // Bit<1:0>

#define DFE_CTRL_TRIG_REG              0xA0 // Bit<3>
#define DFE_CTRL_RB_HI_REG             0x7B // Bit<7:0>
#define DFE_CTRL_RB_LOW_REG            0x7A // Bit<1:0>

#define RF_REF_STATUS_REG              0x2B // RF/REF lock status register 

#define AGC_SAGCLOCK_STATUS_REG        0x2C 

#define DFE_DACIF_BYP_GAIN_REG         0x43 
#define DIG_ANA_RFRSSI_REG             0x57 

#define RSSI_RESET_REG                 0x78
#define DIG_ANA_GINJO_LT_REG           0x96 
#define FINE_TUNE_INIT1_REG            0xA9 
#define FINE_TUNE_INIT2_REG            0xAA

#define DFE_AGC_CEIL1_REG              0xB0 

#define DFE_RFLUT_BYP_REG              0xDB  // Dec: 220, bit<7>
#define DFE_RFLUT_DIV_MOD_REG          0xDB  // Dec: 221 

#define DFE_RFLUT_SWP1_REG             0x49 

#define DFE_RFSX_FRAC_MOD1_REG         0xDF
#define DFE_RFSX_FRAC_MOD2_REG         0xE0
#define DFE_RFSX_FRAC_MOD3_REG         0xE1
#define DFE_RFSX_FRAC_MOD4_REG         0xE2

#define DFE_REFLUT_BYP_REG             0xEA  // Dec: 240, bit<6>
#define DFE_REFSX_INT_MOD_REG          0xEB  // Dec: 241

#define APP_MODE_FREQ_HZ_THRESHOLD_1   358000000
#define APP_MODE_FREQ_HZ_THRESHOLD_2   625000000

#define IF_GAIN_SET_POINT1             10 
#define IF_GAIN_SET_POINT2             11 
#define IF_GAIN_SET_POINT3             12 

#define DIG_ANA_IF_CFG_0              0x5A
#define DIG_ANA_IF_CFG_1              0x5B
#define DIG_ANA_IF_PWR                0x5C

#define DFE_CSF_SS_SEL                0xEA
#define DFE_DACIF_GAIN                0xDC

#define FINE_TUNE_FREQ_INCREASE       0x01
#define FINE_TUNE_FREQ_DECREASE       0x02

#define RF_SX_FRAC_N_RANGE            0xDD

#define HIGH_IF_35250_KHZ             35250



 enum MXL_STATUS
{
  MXL_TRUE = 0,
  MXL_FALSE = 1,
  MXL_SUCCESS = 0,
  MXL_FAILED,
  MXL_BUSY,
  MXL_NULL_PTR,
  MXL_INVALID_PARAMETER,
  MXL_NOT_INITIALIZED,
  MXL_ALREADY_INITIALIZED,
  MXL_BUFFER_TOO_SMALL,
  MXL_NOT_SUPPORTED,
  MXL_TIMEOUT
};

 enum MxL_ERR_MSG{
	MxL_OK					        =  0x0,
	MxL_ERR_INIT			      =  0x1,
	MxL_ERR_RFTUNE			    =  0x2,
	MxL_ERR_SET_REG			    =  0x3,
	MxL_ERR_GET_REG			    =  0x4,
	MxL_ERR_MODE			      =  0x10,
	MxL_ERR_IF_FREQ			    =  0x11,
	MxL_ERR_XTAL_FREQ		    =  0x12,
	MxL_ERR_BANDWIDTH		    =  0x13,
	MxL_GET_ID_FAIL			    =  0x14,
	MxL_ERR_DEMOD_LOCK		  =  0x20,
	MxL_NOREADY_DEMOD_LOCK	=  0x21,
	MxL_ERR_OTHERS			    =  0x0A
};

enum MXL_BOOL
{
  MXL_DISABLE = 0,
  MXL_ENABLE,

  MXL_UNLOCKED = 0,
  MXL_LOCKED,

  MXL_INVALID = 0, 
  MXL_VALID,      

  MXL_PORT_LOW = 0,
  MXL_PORT_HIGH,

  MXL_START = 0,
  MXL_FINISH,

  MXL_ABORT_TUNE = 0,
  MXL_START_TUNE,

  MXL_FINE_TUNE_STEP_DOWN = 0,
  MXL_FINE_TUNE_STEP_UP

} ;

enum IFX_STATUS
{
  IFX_SUCCESS = 0,
  IFX_FAILED,
  IFX_BUSY,
  IFX_NULL_PTR,
  IFX_INVALID_PARAMETER,
  IFX_BUFFER_TOO_SMALL,
  IFX_TIMEOUT  
} ;



#define MXL603_VERSION_SIZE     5

#define MXL603_I2C_ADDR 0x60//(0x60<<1), for Demod to control tuner, slave address treated as normal data -- Repeator mode 

#define MXL603_MAX_NUM_DEVICES  4


 
struct MXL603_VER_INFO_T
{
  u8 chipId;                           /* OUT, Device chip ID information  */
  u8 chipVersion;                      /* OUT, Device chip revision  */
  u8 mxlwareVer[MXL603_VERSION_SIZE];  /* OUT, MxLWare version information */    
};

enum MXL603_XTAL_FREQ_E
{
  MXL603_XTAL_16MHz = 0,
  MXL603_XTAL_24MHz
} ;

 struct MXL603_XTAL_SET_CFG_T
{
  enum MXL603_XTAL_FREQ_E xtalFreqSel;  /* IN, XTAL Frequency, refers above */
  u8 xtalCap;                   /* IN, XTAL capacity, 1 LSB = 1pF, maximum is 31pF */
  enum MXL_BOOL clkOutEnable;           /* IN, enable or disable clock out */
  enum MXL_BOOL clkOutDiv;              /* IN, indicate if XTAL frequency is dived by 4 or not */
  enum MXL_BOOL clkOutExt;              /* IN, enable or disable external clock out*/
  enum MXL_BOOL singleSupply_3_3V;      /* IN, Single Supply 3.3v */
  enum MXL_BOOL XtalSharingMode;        /* IN, XTAL sharing mode. default Master, MXL_ENABLE to config Slave mode */
} ;

enum MXL603_PWR_MODE_E
{
  MXL603_PWR_MODE_SLEEP = 0,      /* power saving mode - Sleep */
  MXL603_PWR_MODE_ACTIVE,         /* power saving mode - Active */
  MXL603_PWR_MODE_STANDBY         /* power saving mode - Standby */
} ;    

enum MXL603_GPO_STATE_E
{
  MXL603_GPO_LOW = 0,
  MXL603_GPO_HIGH = 1,
  MXL603_GPO_AUTO_CTRL = 2
} ;         /* GPO control*/

enum MXL603_SIGNAL_MODE_E
{
  MXL603_DIG_DVB_C = 0,     /* DVB-C mode */
  MXL603_DIG_ISDBT_ATSC,    /* ATSC/ISDB-T mode */
  MXL603_DIG_DVB_T_DTMB,    /* DVB-T/DVB-T2 and DTMB mode */
  MXL603_DIG_J83B           /* J.83B mode */
} ;     /* MxL603 Application mode */

enum MXL603_IF_FREQ_E
{
  MXL603_IF_3_65MHz  = 0,
  MXL603_IF_4MHz     = 1,
  MXL603_IF_4_1MHz   = 2,
  MXL603_IF_4_15MHz  = 3,
  MXL603_IF_4_5MHz   = 4, 
  MXL603_IF_4_57MHz  = 5,
  MXL603_IF_5MHz     = 6,
  MXL603_IF_5_38MHz  = 7, 
  MXL603_IF_6MHz     = 8,
  MXL603_IF_6_28MHz  = 9,
  MXL603_IF_7_2MHz   = 10, 
  MXL603_IF_8_25MHz  = 11,
  MXL603_IF_35_25MHz = 12,
  MXL603_IF_36MHz    = 13, 
  MXL603_IF_36_15MHz = 14, 
  MXL603_IF_36_65MHz = 15,
  MXL603_IF_44MHz    = 16
} ;       /* Pre-Define IF out values */

struct MXL603_TUNER_MODE_CFG_T
{
  enum MXL603_SIGNAL_MODE_E signalMode;       /* IN , Tuner application mode */
  enum MXL603_XTAL_FREQ_E xtalFreqSel;        /* XTAL Frequency, refers above */
  u32 ifOutFreqinKHz;                 /* IN, IF Frequency in KHz */
  u8 ifOutGainLevel;                  /* IF out gain level */ 
};

 enum MXL603_AGC_TYPE_E
{
  MXL603_AGC_SELF = 0,   
  MXL603_AGC_EXTERNAL = 1 
} ;

 struct MXL603_AGC_CFG_T
{
  u8 setPoint;                   /* IN, AGC attack point set value */
  enum MXL_BOOL agcPolarityInverstion;   /* IN, Config AGC Polarity inversion */  
  enum MXL603_AGC_TYPE_E agcType;        /* IN, AGC mode selection, self or closed loop */
};

enum MXL603_BW_E
{
  MXL603_CABLE_BW_6MHz = 0x00,    /* Digital Cable Mode 6 MHz */      
  MXL603_CABLE_BW_7MHz = 0x01,    /* Digital Cable Mode 7 MHz */            
  MXL603_CABLE_BW_8MHz = 0x02,    /* Digital Cable Mode 8 MHz */              
  MXL603_TERR_BW_6MHz = 0x20,     /* Digital Terrestrial Mode 6 MHz */     
  MXL603_TERR_BW_7MHz = 0x21,     /* Digital Terrestrial Mode 7 MHz */    
  MXL603_TERR_BW_8MHz = 0x22      /* Digital Terrestrial Mode 8 MHz */    
} ;

struct MXL603_CHAN_TUNE_CFG_T
{
  u32 freqInHz;                     /* IN, Radio Frequency in Hz */ 
  enum MXL_BOOL startTune;                  /* IN, MXL_ENABLE to start tune, MXL_DISABLE to Abort tune */
  enum MXL603_BW_E bandWidth;               /* IN, band width in MHz. Refer "MXL603_BW_E" */
  enum MXL603_SIGNAL_MODE_E signalMode;     /* IN, Tuner application mode */
  enum MXL603_XTAL_FREQ_E xtalFreqSel;      /* IN, Xtal frequency */
} ;

struct MXL603_IF_OUT_CFG_T
{
  enum MXL603_IF_FREQ_E ifOutFreq;       /* IN, band width of IF out signal */
  enum MXL_BOOL manualFreqSet;           /* IN, IF out frequency is set by manual or not */ 
  enum MXL_BOOL ifInversion;             /* IN, IF spectrum is inverted or not */
  u8 gainLevel;                  /* IN, IF out gain level */
  u32 manualIFOutFreqInKHz;      /* IN, IF out frequency selection when manualFreqSet = 0*/
};

struct MXL603_REG_CTRL_INFO_T
{
  u8 regAddr;
  u8 mask;
  u8 data;
};



/* **************************************************** */
/* Defines */
/* **************************************************** */
#define DMD_INFORMATION_MAX	512
#define DMD_INFO_VALUE_MAX	32

#define DMD_MAX_DEVICE	4
#define DMD_REG_BANK    2

#define DMD_NOT_SUPPORT		0
#define DMD_SYSTEM_MAX		15
#define DMD_TCB_DATA_MAX	256
#define DMD_REGISTER_MAX	2048
#define DMD_I2C_MAXSIZE	127

#define BXIN_OK		0x03
#define ON_400K		0x01
#define OFF_400K	0x00
#define ACK			1
#define NOACK		0
#define ERRSEND		-1	//please i2c_ini();
#define bmpSTART	0x80
#define bmpSTOP		0x40
#define bmpLASTRD	0x20
#define bmpBERR		0x04
#define bmpACK		0x02
#define bmpDONE		0x01
#define WAIT_SEND 0x80		
#define LAST_WAIT 0x53
#define LAST_400 0x13



//For Main
#define DMD_MAIN_IBMOD		0x0
#define DMD_MAIN_CPOSET1		0x1
#define DMD_MAIN_CPOSET2		0x2
#define DMD_MAIN_HIZSET		0x3
#define DMD_MAIN_INVSET		0x4
#define DMD_MAIN_GPSET1		0x5
#define DMD_MAIN_GPSET2		0x6
#define DMD_MAIN_GPSET3		0x7
#define DMD_MAIN_MDADATL		0x8
#define DMD_MAIN_MDADATU		0x9
#define DMD_MAIN_IQDSET		0xA
#define DMD_MAIN_FOFFSET1U		0xB
#define DMD_MAIN_FOFFSET1L		0xC
#define DMD_MAIN_SRATEIN1		0xD
#define DMD_MAIN_SRATEIN2		0xE
#define DMD_MAIN_SRATEIN3		0xF
#define DMD_MAIN_RSTSET1		0x10
#define DMD_MAIN_RSTSET2		0x11
#define DMD_MAIN_FOFFSET2U		0x12
#define DMD_MAIN_FOFFSET2L		0x13
#define DMD_MAIN_I2CSET		0x14
#define DMD_MAIN_TCBSET		0x15
#define DMD_MAIN_TCBRT		0x16
#define DMD_MAIN_TCBADR		0x17
#define DMD_MAIN_TCBDT0		0x18
#define DMD_MAIN_TCBDT1		0x19
#define DMD_MAIN_TCBDT2		0x1A
#define DMD_MAIN_TCBDT3		0x1B
#define DMD_MAIN_TCBDT4		0x1C
#define DMD_MAIN_TCBDT5		0x1D
#define DMD_MAIN_TCBDT6		0x1E
#define DMD_MAIN_TCBDT7		0x1F
#define DMD_MAIN_TCBCOM		0x20
#define DMD_MAIN_VAGCREF		0x21
#define DMD_MAIN_QAGCREF		0x22
#define DMD_MAIN_AGCCO1		0x23
#define DMD_MAIN_AGCSET1		0x24
#define DMD_MAIN_VAGCDLY1L		0x25
#define DMD_MAIN_VQAGCDLY1U		0x26
#define DMD_MAIN_QAGCDLY1L		0x27
#define DMD_MAIN_ERRCNTTHU		0x28
#define DMD_MAIN_ERRCNTTHL		0x29
#define DMD_MAIN_ALCSET1		0x2A
#define DMD_MAIN_ALCSET2		0x2B
#define DMD_MAIN_ALCSET3		0x2C
#define DMD_MAIN_CLIPVUL		0x2D
#define DMD_MAIN_CLIPVL		0x2E
#define DMD_MAIN_PIRETH2U		0x2F
#define DMD_MAIN_PIRETH2L		0x30
#define DMD_MAIN_PIRETH3U		0x31
#define DMD_MAIN_PIRETH3L		0x32
#define DMD_MAIN_PAFCSGSET1		0x33
#define DMD_MAIN_PAFCSGSET2		0x34
#define DMD_MAIN_PAFCLPFSET1		0x35
#define DMD_MAIN_PAFCLPFSETA2		0x36
#define DMD_MAIN_PAFCLPFSETA3		0x37
#define DMD_MAIN_PAFCLPFSETA4		0x38
#define DMD_MAIN_PAFCLPFSETB2		0x39
#define DMD_MAIN_PAFCLPFSETB3		0x3A
#define DMD_MAIN_PAFCLPFSETB4		0x3B
#define DMD_MAIN_AFCSET1		0x3C
#define DMD_MAIN_AFCCO		0x3D
#define DMD_MAIN_AFCADD		0x3E
#define DMD_MAIN_APCSET1		0x3F
#define DMD_MAIN_APCSET2		0x40
#define DMD_MAIN_APCSET4		0x41
#define DMD_MAIN_APCSET5		0x42
#define DMD_MAIN_APCCO1		0x43
#define DMD_MAIN_APCCO2		0x44
#define DMD_MAIN_APCCO3		0x45
#define DMD_MAIN_APCCO4		0x46
#define DMD_MAIN_VCKRSET1		0x47
#define DMD_MAIN_VCKRSET2		0x48
#define DMD_MAIN_VCKRCOUL		0x49
#define DMD_MAIN_VCKRCOL		0x4A
#define DMD_MAIN_VFCKSET1		0x4B
#define DMD_MAIN_VFCKSET2		0x4C
#define DMD_MAIN_VFCKBWUL		0x4D
#define DMD_MAIN_VFCKBWLK		0x4E
#define DMD_MAIN_VFCKATUL		0x4F
#define DMD_MAIN_VFCKATLK		0x50
#define DMD_MAIN_VTCKSET1		0x51
#define DMD_MAIN_VTCKSET2		0x52
#define DMD_MAIN_VDAGCREF		0x53
#define DMD_MAIN_QDAGCREF		0x54
#define DMD_MAIN_GMIN		0x55
#define DMD_MAIN_DAGCCO		0x56
#define DMD_MAIN_CKRCO1		0x57
#define DMD_MAIN_CKRCO2		0x58
#define DMD_MAIN_CKRSET1		0x59
#define DMD_MAIN_CKRSET2		0x5A
#define DMD_MAIN_PNTSET		0x5B
#define DMD_MAIN_PNTCO		0x5C
#define DMD_MAIN_NRFMODE		0x5D
#define DMD_MAIN_FDATSC		0x5E
#define DMD_MAIN_FLTBW1		0x5F
#define DMD_MAIN_NRFRSEL		0x60
#define DMD_MAIN_SYNCSET1		0x61
#define DMD_MAIN_SYNCSET2		0x62
#define DMD_MAIN_SYNCSET6		0x63
#define DMD_MAIN_QDETREF		0x64
#define DMD_MAIN_QDETSET1		0x65
#define DMD_MAIN_QDETSET2		0x66
#define DMD_MAIN_EQSET		0x67
#define DMD_MAIN_VEQSET1		0x68
#define DMD_MAIN_VEQSET2		0x69
#define DMD_MAIN_VEQSET3		0x6A
#define DMD_MAIN_VEQSET4		0x6B
#define DMD_MAIN_VEQSET5		0x6C
#define DMD_MAIN_VEQSET6		0x6D
#define DMD_MAIN_VEQSET7		0x6E
#define DMD_MAIN_VEQSET8		0x6F
#define DMD_MAIN_VEQSET9		0x70
#define DMD_MAIN_AGCMON		0x71
#define DMD_MAIN_CKRFEMON		0x72
#define DMD_MAIN_DAGCMON		0x73
#define DMD_MAIN_QEQSET		0x74
#define DMD_MAIN_PAFCPILOT		0x75
#define DMD_MAIN_VCKRSYM		0x76
#define DMD_MAIN_APCMON		0x77
#define DMD_MAIN_PNTMON		0x78
#define DMD_MAIN_VEQSET10		0x79
#define DMD_MAIN_VEQSET11		0x7A
#define DMD_MAIN_VEQSET12		0x7B
#define DMD_MAIN_VEQSET13		0x7C
#define DMD_MAIN_VEQSET14		0x7D
#define DMD_MAIN_VEQSET15		0x7E
#define DMD_MAIN_VEQSET16		0x7F
#define DMD_MAIN_VEQSET17		0x80
#define DMD_MAIN_VEQSET18		0x81
#define DMD_MAIN_VEQSET19		0x82
#define DMD_MAIN_VEQSET20		0x83
#define DMD_MAIN_VEQSET21		0x84
#define DMD_MAIN_VEQSET22		0x85
#define DMD_MAIN_PLOCKTH1		0x86
#define DMD_MAIN_PLOCKTH2		0x87
#define DMD_MAIN_PLOCKTH3		0x88
#define DMD_MAIN_CRCDIVASET1		0x89
#define DMD_MAIN_CRCDIVASET2		0x8A
#define DMD_MAIN_CRCDIVASET3		0x8B
#define DMD_MAIN_CRCDIVBSET1		0x8C
#define DMD_MAIN_CRCDIVBSET2		0x8D
#define DMD_MAIN_CRCDIVBSET3		0x8E
#define DMD_MAIN_CRCDIVSMV		0x8F
#define DMD_MAIN_CRCDIVTIM		0x90
#define DMD_MAIN_PNDETSET1		0x91
#define DMD_MAIN_PNDETSET2		0x92
#define DMD_MAIN_PREIDETSET1		0x93
#define DMD_MAIN_PREQDETSET1		0x94
#define DMD_MAIN_PNDETSET3		0x95
#define DMD_MAIN_PNDETSET4		0x96
#define DMD_MAIN_PNSMSET1		0x97
#define DMD_MAIN_PNSMSET2		0x98
#define DMD_MAIN_PNSMSET3		0x99
#define DMD_MAIN_PNSMSET4		0x9A
#define DMD_MAIN_PNSMSET5		0x9B
#define DMD_MAIN_PNSMSET6		0x9C
#define DMD_MAIN_PNSMSET7		0x9D
#define DMD_MAIN_PNSMSET8		0x9E
#define DMD_MAIN_PNSMSET9		0x9F
#define DMD_MAIN_PNSMSET10		0xA0
#define DMD_MAIN_PNSMSET11		0xA1
#define DMD_MAIN_PNSMSET12		0xA2
#define DMD_MAIN_PNSMSET13		0xA3
#define DMD_MAIN_PNREGSET1		0xA4
#define DMD_MAIN_PNREGSET2		0xA5
#define DMD_MAIN_PNREGSET3		0xA6
#define DMD_MAIN_PNREGSET4		0xA7
#define DMD_MAIN_PNREGSET5		0xA8
#define DMD_MAIN_PNREGSET6		0xA9
#define DMD_MAIN_FREQSET		0xAA
#define DMD_MAIN_FREQU		0xAB
#define DMD_MAIN_FREQL		0xAC
#define DMD_MAIN_PNREGSET10		0xAD
#define DMD_MAIN_PNREGSET11		0xAE
#define DMD_MAIN_PNREGSET12		0xAF
#define DMD_MAIN_PNREGSET13		0xB0
#define DMD_MAIN_PNREGSET14		0xB1
#define DMD_MAIN_PNREGSET15		0xB2
#define DMD_MAIN_PNREGSET16		0xB3
#define DMD_MAIN_PNREGSET17		0xB4
#define DMD_MAIN_PNREGSET18		0xB5
#define DMD_MAIN_PNREGSET19		0xB6
#define DMD_MAIN_PNREGSET20		0xB7
#define DMD_MAIN_PNREGSET21		0xB8
#define DMD_MAIN_NTCWTH1		0xB9
#define DMD_MAIN_IBTGSET		0xBA
#define DMD_MAIN_AFCMON		0xBB
#define DMD_MAIN_CKRMON		0xBC
#define DMD_MAIN_NRFRDAT		0xBD
#define DMD_MAIN_MEANFERR		0xBE
#define DMD_MAIN_MEANMAGERR		0xBF
#define DMD_MAIN_PAFCSGGATE		0xC0
#define DMD_MAIN_AFCMONB		0xC1
#define DMD_MAIN_PLOCKMONAU		0xC2
#define DMD_MAIN_PLOCKMONAL		0xC3
#define DMD_MAIN_STSMON1		0xC4
#define DMD_MAIN_STSMON2		0xC5
#define DMD_MAIN_SYNCRD2		0xC6
#define DMD_MAIN_SYNCRD3		0xC7
#define DMD_MAIN_PLOCKMONBU		0xC8
#define DMD_MAIN_PLOCKMONBL		0xC9
#define DMD_MAIN_PNDETU		0xCA
#define DMD_MAIN_PNDETL		0xCB
#define DMD_MAIN_PIBETAU		0xCC
#define DMD_MAIN_PIBETAL		0xCD
#define DMD_MAIN_EQMNSET		0xCE
#define DMD_MAIN_EQERR1		0xCF
#define DMD_MAIN_EQERR2		0xD0
#define DMD_MAIN_RFAGCMON1P		0xD1
#define DMD_MAIN_RFAGCMON2P		0xD2
#define DMD_MAIN_IFAGCMON1P		0xD3
#define DMD_MAIN_IFAGCMON2P		0xD4
#define DMD_MAIN_PLOCKSTATE		0xD5
#define DMD_MAIN_PIBETAQU		0xD6
#define DMD_MAIN_PIBETAQL		0xD7
#define DMD_MAIN_PNDETSTATE		0xD8
#define DMD_MAIN_CNSETP		0xD9
#define DMD_MAIN_CNFLGP		0xDA
#define DMD_MAIN_CNMON1P		0xDB
#define DMD_MAIN_CNMON2P		0xDC
#define DMD_MAIN_CNMON3P		0xDD
#define DMD_MAIN_CNMON4P		0xDE
#define DMD_MAIN_FECSET		0xDF
#define DMD_MAIN_BERDSETP		0xE0
#define DMD_MAIN_BERTSET1P		0xE1
#define DMD_MAIN_BERTSET2P		0xE2
#define DMD_MAIN_BERFLGP		0xE3
#define DMD_MAIN_BERMON1P		0xE4
#define DMD_MAIN_BERMON2P		0xE5
#define DMD_MAIN_BERMON3P		0xE6
#define DMD_MAIN_NTCWTH2		0xE7
#define DMD_MAIN_PWDSET1		0xE8
#define DMD_MAIN_PWDSET2		0xE9
#define DMD_MAIN_PSEQOP1		0xEA
#define DMD_MAIN_PSEQOP2		0xEB
#define DMD_MAIN_PSEQOP3		0xEC
#define DMD_MAIN_PSEQOP4		0xED
#define DMD_MAIN_PSEQOP5		0xEE
#define DMD_MAIN_PSEQOP6		0xEF
#define DMD_MAIN_PSEQSET		0xF0
#define DMD_MAIN_PSEQPRG		0xF1
#define DMD_MAIN_PSEQSEL		0xF2
#define DMD_MAIN_PSEQDBG		0xF3
#define DMD_MAIN_PSEQOP7		0xF4
#define DMD_MAIN_PSEQOP8		0xF5
#define DMD_MAIN_PSEQOP9		0xF6
#define DMD_MAIN_PSEQOP10		0xF7
#define DMD_MAIN_PSEQADRU		0xF8
#define DMD_MAIN_PSEQADRL		0xF9
#define DMD_MAIN_PSEQDT		0xFA
#define DMD_MAIN_TESTSET3		0xFB
#define DMD_MAIN_CLKGSET		0xFC
#define DMD_MAIN_TPLLSET1		0xFD
#define DMD_MAIN_TPLLSET2		0xFE
#define DMD_MAIN_RDCHK		0xFF


//For USR
#define DMD_USR_INTDEFR		0x9
#define DMD_USR_INTDEFF		0xA
#define DMD_USR_INTSET		0xB
#define DMD_USR_INTCNT		0xC
#define DMD_USR_INTCND		0xD
#define DMD_USR_I2CSET		0x14
#define DMD_USR_CNSET		0x5A
#define DMD_USR_CNFLG		0x5B
#define DMD_USR_CNMON1		0x5C
#define DMD_USR_CNMON2		0x5D
#define DMD_USR_CNMON3		0x5E
#define DMD_USR_CNMON4		0x5F
#define DMD_USR_BERTSET1		0x60
#define DMD_USR_BERTSET2		0x61
#define DMD_USR_BERPSET1		0x62
#define DMD_USR_BERPSET2		0x63
#define DMD_USR_BERFLG		0x64
#define DMD_USR_BERMON1		0x65
#define DMD_USR_BERMON2		0x66
#define DMD_USR_BERMON3		0x67
#define DMD_USR_RFAGCMON1		0x68
#define DMD_USR_RFAGCMON2		0x69
#define DMD_USR_IFAGCMON1		0x6A
#define DMD_USR_IFAGCMON2		0x6B
#define DMD_USR_IMON		0x74
#define DMD_USR_QMON		0x79
#define DMD_USR_SDCC		0x80
#define DMD_USR_VSAGCREFU		0x81
#define DMD_USR_VSAGCREFL		0x82
#define DMD_USR_QSAGCREFU		0x83
#define DMD_USR_QSAGCREFL		0x84
#define DMD_USR_SAGCCO		0x85
#define DMD_USR_SAGCSET		0x86
#define DMD_USR_VPWMSET1		0x87
#define DMD_USR_VPWMDAT1		0x88
#define DMD_USR_QPWMSET1		0x89
#define DMD_USR_QPWMDAT1		0x8A
#define DMD_USR_QFECSET1		0x8B
#define DMD_USR_QFECSET4		0x8C
#define DMD_USR_QFECSET5		0x8D
#define DMD_USR_TSCSETV1		0x8E
#define DMD_USR_TSCSETQ1		0x8F
#define DMD_USR_TSCSET2		0x90
#define DMD_USR_TSCSET4		0x91
#define DMD_USR_FAD064U		0x92
#define DMD_USR_FAD064M		0x93
#define DMD_USR_FAD064L		0x94
#define DMD_USR_FAD256U		0x95
#define DMD_USR_FAD256M		0x96
#define DMD_USR_FAD256L		0x97
#define DMD_USR_FAD188U		0x98
#define DMD_USR_FAD188M		0x99
#define DMD_USR_FAD188L		0x9A
#define DMD_USR_FAD208U		0x9B
#define DMD_USR_FAD208M		0x9C
#define DMD_USR_FAD208L		0x9D
#define DMD_USR_TESTSET1		0x9E
#define DMD_USR_TESTSET2		0x9F
#define DMD_USR_AD10SET1		0xA0
#define DMD_USR_AD10SET2		0xA1
#define DMD_USR_AD10SET3		0xA2
#define DMD_USR_AD10SET4		0xA3
#define DMD_USR_RDCHK		0xFF





/* **************************************************** */
/* DMD Enums */
/* **************************************************** */
/*! SYSTEM Enum */
enum DMD_SYSTEM_t{
	DMD_E_ISDBT=0,
	DMD_E_ISDBS,
	DMD_E_DVBT,
	DMD_E_DVBT2,
	DMD_E_DVBC,
	DMD_E_DVBC2,
	DMD_E_ATSC,
	DMD_E_QAMB_64QAM,
	DMD_E_QAMB_256QAM,
	DMD_E_QAMC_64QAM,
	DMD_E_QAMC_256QAM,
	DMD_E_ISDBT_BRAZIL,
	DMD_E_ANALOG,
	DMD_E_NTSC_M_BTSC,
	DMD_E_PAL_M_BTSC,
	DMD_E_PAL_N_BTSC,
	DMD_E_PAL_B_G_NICAM,
	DMD_E_PAL_I_NiCAM,
	DMD_E_PAL_D_NiCAM,
	DMD_E_PAL_B_G_A2,
	DMD_E_SECAM_L_NiCAM,
	DMD_E_SECAM_L1_NiCAM,
	DMD_E_SECAM_D_K_A2,
	DMD_E_SECAM_BG_NICAM,
	DMD_E_END_OF_SYSTEM,
	DMD_E_NOT_DEFINED,
} ;

/* RF Frequency Unit */
 enum DMD_FREQ_UNIT_t
{
	DMD_E_MHZ,
	DMD_E_KHZ,
	DMD_E_HZ
} ;

/*! Lock Status */
 enum DMD_LOCK_STATUS_t{
	DMD_E_LOCKED = 0,
	DMD_E_LOCK_NOSIGNAL,
	DMD_E_LOCK_NOSYNC,
	DMD_E_LOCK_ERROR
} ;


/*! BAND WIDTH */
 enum DMD_BANDWIDTH_t {
	DMD_E_BW_NOT_SPECIFIED,
	DMD_E_BW_6MHZ,
	DMD_E_BW_7MHZ,
	DMD_E_BW_8MHZ,
	DMD_E_BW_5MHZ,
	DMD_E_BW_1_7MHZ,
	DMD_E_BW_END_OF_BW
};


/* '11/08/29 : OKAMOTO	Select TS output. */
enum DMD_TSOUT {
	DMD_E_TSOUT_PARALLEL_FIXED_CLOCK = 0,
	//DMD_E_TSOUT_PARALLEL_VARIABLE_CLOCK,
	DMD_E_TSOUT_SERIAL_VARIABLE_CLOCK,
};

/* '11/08/29 : OKAMOTO	Select TS output. */
 enum DMD_TSOUT_MODE {
	DMD_E_TSOUT_PARALLEL_BRTG_MODE = 0, //default. Variable clock, DEN,CLK always "High" when data invalid 
	DMD_E_TSOUT_PARALLEL_SMOOTH_MODE = 1, //Fixed clock, DEN,CLK always "High" when data invalid 
	DMD_E_TSOUT_PARALLEL_BURST_GATED_MODE = 2,//Fixed clock, DEN,CLK always "Low" when data invalid 
	DMD_E_TSOUT_PARALLEL_BURST_CONTINUOUS_MODE = 3,//Fixed clock, DEN "Low" + CLK "High", when data invalid 
	DMD_E_TSOUT_SERIAL_BRTG_MODE = 0x10, //Variable clock, DEN,CLK always "High" when data invalid 
	DMD_E_TSOUT_SERIAL_SMOOTH_MODE = 0x11, //Fixed clock, DEN,CLK always "High" when data invalid 
	DMD_E_TSOUT_SERIAL_BURST_GATED_MODE = 0x12,//Fixed clock, DEN,CLK always "Low" when data invalid 
	DMD_E_TSOUT_SERIAL_BURST_CONTINUOUS_MODE = 0x13,//Fixed clock, DEN "Low" + CLK "High", when data invalid 	
} ;
//20140512, troy.wangyx, added TS output mode and TS clk polarity selection.
 enum DMD_TSCLK_POLARITY{
	DMD_E_TSCLK_POLARITY_NORMAL = 0,
	DMD_E_TSCLK_POLARITY_INVERSE = 1,
};



/* 2012130123 : Troy, power mode selection */
 enum DMD_PWR_MODE_t
{
   DMD_PWR_MODE_NORMAL	= 0,		/* default */
   DMD_PWR_MODE_STANDBY,			/* all blocks in standby, i2c, clock running, arouse by register set */
   DMD_PWR_MODE_SLEEP,	      /* i2c,clock stop, hardware reset needed */
   DMD_PWR_MODE_UNKNOWN
};

 enum DMD_ECHO_PERFORMANCE_SET{
	DMD_E_ENHANCE_MINUS_ECHO_DELAY_DEFAULT = 0, //field test pass result
	DMD_E_ENHANCE_MINUS_ECHO_DELAY_NO_SIDEEFFECT, //Lab test. enhance MINUS echo dalay performance, no side effect
	DMD_E_ENHANCE_MINUS_ECHO_DELAY_HAS_SIDEEFFECT,//Lab test. enhance MINUS echo dalay performance, has side effect on CCI(NTSC interface)
};


/* **************************************************** */
/* DMD Structures */
/* **************************************************** */
/*! DMD Parameter Sturcture */
struct DMD_PARAMETER_t{
	u32				devid;					//!<DeviceID
	enum DMD_SYSTEM_t			system;					//!<Broadcast System
	u32				freq;					//!<RF Frequency
	enum DMD_FREQ_UNIT_t			funit;					//!<RF Frequency unit
	enum DMD_BANDWIDTH_t			bw;						//!<Band width
	u32				ddradr;					//!<DDR memory address
	u32	info[DMD_INFORMATION_MAX];			//!<Demodulator Information
    /* '11/08/29 : OKAMOTO	Select TS output. */
	enum DMD_TSOUT_MODE	ts_out;
	enum DMD_ECHO_PERFORMANCE_SET echo_set; //troy.wangyx, 120801, to enhance "Single static echo MINUS delay"'s performance, 
};

enum DMD_INFO_t	{	
	DMD_E_INFO_ALL		=0	,	
	DMD_E_INFO_REGREV	=1	,	
	DMD_E_INFO_PSEQREV	=2	,	
	DMD_E_INFO_SYSTEM	=3	,	
	DMD_E_INFO_LOCK	=4	,	
	DMD_E_INFO_AGC	=5	,	
	DMD_E_INFO_BERRNUM	=6	,	
	DMD_E_INFO_BITNUM	=7	,	
	DMD_E_INFO_CNR_INT	=8	,	
	DMD_E_INFO_CNR_DEC	=9	,	
	DMD_E_INFO_PERRNUM	=10	,	
	DMD_E_INFO_PACKETNUM	=11	,	
	DMD_E_INFO_STATUS	=12	,
	DMD_E_INFO_ERRORFREE = 13,
	DMD_E_INFO_COMMON_END_OF_INFORMATION
};	


#endif

