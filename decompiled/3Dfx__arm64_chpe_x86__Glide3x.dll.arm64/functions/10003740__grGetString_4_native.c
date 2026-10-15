/*
 * _grGetString@4_native at 10003740
 * undefined _grGetString@4_native(void)
 * Address ranges: 10003740-1000383f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * _grGetString_4_native(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  ulonglong uVar4;
  
  switch(param_1) {
  case 0xa0:
    uVar1 = FUN_100093b8();
    iVar2 = FUN_1000ae88(uVar1);
    pcVar3 = (&PTR_s_GETGAMMA_100a23e4)[iVar2 * 6];
    break;
  case 0xa1:
    uVar1 = FUN_100093b8();
    iVar2 = FUN_1000ae88(uVar1);
    pcVar3 = (&PTR_s_Voodoo_Graphics__tm__100a23e0)[iVar2 * 6];
    if (*pcVar3 == '\0') {
      iVar2 = FUN_100093b8();
      uVar4 = FUN_10009ae0(iVar2);
      if ((uVar4 & 1) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(iVar2 + 0x1c) + 0x822);
      }
      pcVar3 = (char *)0x10099d98;
      if (iVar2 == 2) {
        pcVar3 = &DAT_10099da8;
      }
    }
    break;
  case 0xa2:
    pcVar3 = s_Glide_10099db8;
    break;
  case 0xa3:
    pcVar3 = &DAT_10099dc0;
    break;
  case 0xa4:
    pcVar3 = &DAT_10099dc8;
    break;
  default:
    pcVar3 = (char *)0x0;
  }
  return pcVar3;
}

