/*
 * FUN_1800ec830 at 1800ec830
 * ulonglong __fastcall FUN_1800ec830(int * param_1, uint param_2, int param_3, uint param_4)
 * Address ranges: 1800ec830-1800ec876
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800ec830(int *param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  uVar2 = FUN_1800ee040(*param_1);
  iVar1 = (int)uVar2;
  if (((iVar1 == 0x40) || (iVar1 == 0x41)) || (iVar1 == 0x50)) {
    uVar3 = (ulonglong)(param_2 | 0x410700);
  }
  else if (iVar1 == 0x51) {
    uVar3 = (ulonglong)(param_3 << 0xe | param_4 | 0x420700);
  }
  return uVar3 & 0xffffffff;
}

