/*
 * FUN_100798e0 at 100798e0
 * undefined FUN_100798e0(void)
 * Address ranges: 100798e0-1007993b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100798e0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  uint extraout_w1;
  
  iVar1 = FUN_1007ac30(*param_1);
  if ((iVar1 - 0x40U & 0xffffffee) == 0 && iVar1 != 0x51) {
    param_4 = extraout_w1 | 0x20010600;
  }
  else if (iVar1 == 0x51) {
    param_4 = param_4 | 0x20020600;
  }
  else {
    param_4 = 0;
  }
  return param_4;
}

