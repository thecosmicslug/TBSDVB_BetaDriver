# TBSDVB_BetaDriver
TBS are testing a new driver now that the existing one no longer works beyond kernel 6.14,

the first version I found (v1002) supported my TV card (TBS6285) but it didnt work! 
TBS have released a few updates since, but they have removed the support for SAA716X which is used by my card.

This repo was an experiment really, I combined TBS's latest beta driver with the SAA716X code I got in the first driver. It appears to work just fine!

It SHOULD support all the cards TBS state, along with any others that use the 'saa716x_tbs-dvb' module such as my TBS6285

### Supported Devices

PCIE:
tbs6910X tbs6910 tbs6910se tbs6916 tbs6216 tbs6909x tbs6909SE tbs6909 tbs6908 tbs6904 tbs6904X tbs6904SE tbs6902 tbs6902SE tbs6590 tbs6903 tbs6903x tbs6905 tbs6508 tbs6522 tbs6522H tbs6504 tbs7901 tbs6528 tbs6912 tbs6504H tbs6590X TBS6281 TBS6281SE TBS6205SE tbs6205 tbs6290 tbs6290se tbs7230 tbs6209 tbs6209SE tbs6514 tbs6814 tbs6704 tbs6302SE tbs6308 tbs6308X tbs6312X tbs6304 tbs6301 tbs6301se tbs6302x tbs6302T tbs6302RV tbs6304X tbs6304T tbs6304RV tbs6324 tbs6322 tbs690a tbs6331 tbs6900 tbs6004 tbs690b tbs6104 tbs6008 tbs6214 tbs6034 tbs6032 tbs6001

USB:
tbs-qbox tbs-qbox2 tbs-qbox22 tbs-qboxs2 tbs-qbox2ci tbs5922se tbs5925 tbs5880 tbs5220 tbs5230 tbs5881 tbs5520 tbs5520se tbs5530 tbs5580 tbs5927 tbs5301 tbs5930 tbs5931 tbs5590

### Installing
just run the script  `./install.sh` with root permission.

### Changes from TBS
I just copied the `/pci/saa716x` directory from the v1002 beta driver into the latest version from TBS (v1013), adjusted the Makefiles and Kconfig files in the 'pci' and root directory so that the module is built along with the others.
I will document full changes at somepoint in the future.

### TODO
Convert into a DKMS module to make kernel upgrades less hassle.

### Common Problems
`SSL error: FFFFF80000002:....`
this is an issue related to the signature certificate and secret key. you can ignore it , it will not affect the installtion and operation of the drivers. but you need enter the BIOS,disable secure boot.

`no adapters on /dev/dvb/`
there are two steps to check it. 
(1) running command (lspci / lsusb) to check the hardware if detected by system; if not,please try to clean the pcie's finger or change to other pcie or usb port. (2)enter the BIOS, disable the secure boot.
