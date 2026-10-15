/*
 * FUN_10059560 at 10059560
 * undefined FUN_10059560(void)
 * Address ranges: 10059560-1005959b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10059560(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (param_1 == param_2) {
LAB_10059594:
    uVar2 = 0;
  }
  else {
    if (param_1 == 0) {
      uVar3 = 0xcc0;
      if ((param_3 & 5) != 0) {
        uVar3 = 0x3fcf;
      }
      uVar1 = 0;
      if ((param_2 & (uVar3 ^ 0xffffffff)) != 0) {
        uVar1 = param_2;
      }
      if (uVar1 == 0) goto LAB_10059594;
    }
    uVar2 = 1;
  }
  return uVar2;
}

