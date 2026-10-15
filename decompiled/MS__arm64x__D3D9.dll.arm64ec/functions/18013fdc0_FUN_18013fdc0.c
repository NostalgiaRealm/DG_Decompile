/*
 * FUN_18013fdc0 at 18013fdc0
 * undefined FUN_18013fdc0(void)
 * Address ranges: 18013fdc0-18013fe3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18013fdc0(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if ((((*param_1 != *param_2) || (param_1[1] != param_2[1])) || (param_1[2] != param_2[2])) ||
     (((param_1[3] != param_2[3] || (param_1[4] != param_2[4])) ||
      ((param_1[5] != param_2[5] || (uVar1 = 1, param_1[6] != param_2[6])))))) {
    uVar1 = 0;
  }
  return uVar1;
}

