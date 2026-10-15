/*
 * FUN_10079878 at 10079878
 * undefined FUN_10079878(void)
 * Address ranges: 10079878-100798d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10079878(undefined4 *param_1,undefined8 param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint extraout_w1;
  
  iVar1 = FUN_1007ac30(*param_1);
  if ((iVar1 - 0x40U & 0xffffffee) == 0 && iVar1 != 0x51) {
    uVar2 = extraout_w1 | 0x410700;
  }
  else if (iVar1 == 0x51) {
    uVar2 = param_4 | param_3 << 0xe | 0x420700;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

