/*
 * FUN_1800ec878 at 1800ec878
 * ulonglong __fastcall FUN_1800ec878(int * param_1, uint param_2, int param_3, uint param_4)
 * Address ranges: 1800ec878-1800ec8be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800ec878(int *param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  uVar2 = FUN_1800ee040(*param_1);
  iVar1 = (int)uVar2;
  if (((iVar1 == 0x40) || (iVar1 == 0x41)) || (iVar1 == 0x50)) {
    uVar3 = (ulonglong)(param_2 | 0x20010600);
  }
  else if (iVar1 == 0x51) {
    uVar3 = (ulonglong)(param_3 << 0xe | param_4 | 0x20020600);
  }
  return uVar3 & 0xffffffff;
}

