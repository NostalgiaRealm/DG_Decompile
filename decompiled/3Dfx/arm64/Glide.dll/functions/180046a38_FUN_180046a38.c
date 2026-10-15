/*
 * FUN_180046a38 at 180046a38
 * undefined8 __cdecl FUN_180046a38(uint param_1, uint param_2, uint param_3)
 * Address ranges: 180046a38-180046a73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180046a38(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (param_1 == param_2) {
LAB_180046a6c:
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
      if (uVar1 == 0) goto LAB_180046a6c;
    }
    uVar2 = 1;
  }
  return uVar2;
}

