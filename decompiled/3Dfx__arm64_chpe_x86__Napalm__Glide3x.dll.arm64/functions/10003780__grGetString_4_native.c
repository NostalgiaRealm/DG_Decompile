/*
 * _grGetString@4_native at 10003780
 * undefined _grGetString@4_native(void)
 * Address ranges: 10003780-1000387f
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
    uVar1 = FUN_1000ae60();
    iVar2 = FUN_1000cd68(uVar1);
    pcVar3 = (&PTR_s_GETGAMMA_100aa5b4)[iVar2 * 6];
    break;
  case 0xa1:
    uVar1 = FUN_1000ae60();
    iVar2 = FUN_1000cd68(uVar1);
    pcVar3 = (&PTR_s_Voodoo_Graphics__tm__100aa5b0)[iVar2 * 6];
    if (*pcVar3 == '\0') {
      iVar2 = FUN_1000ae60();
      uVar4 = FUN_1000b5c0(iVar2);
      if ((uVar4 & 1) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(iVar2 + 0x1c) + 0x822);
      }
      pcVar3 = (char *)0x100a05a8;
      if (iVar2 == 2) {
        pcVar3 = &DAT_100a05b8;
      }
    }
    break;
  case 0xa2:
    pcVar3 = s_Glide_100a05c8;
    break;
  case 0xa3:
    pcVar3 = &DAT_100a05d0;
    break;
  case 0xa4:
    pcVar3 = &DAT_100a05d8;
    break;
  default:
    pcVar3 = (char *)0x0;
  }
  return pcVar3;
}

