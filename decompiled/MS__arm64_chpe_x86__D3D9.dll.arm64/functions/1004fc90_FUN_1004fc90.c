/*
 * FUN_1004fc90 at 1004fc90
 * undefined FUN_1004fc90(void)
 * Address ranges: 1004fc90-1004fd47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1004fc90(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if ((((*param_1 != *param_2) || (param_1[1] != param_2[1])) || (param_1[2] != param_2[2])) ||
     (((param_1[3] != param_2[3] || (param_1[4] != param_2[4])) ||
      ((param_1[5] != param_2[5] || (uVar1 = 1, param_1[6] != param_2[6])))))) {
    uVar1 = 0;
  }
  return uVar1;
}

