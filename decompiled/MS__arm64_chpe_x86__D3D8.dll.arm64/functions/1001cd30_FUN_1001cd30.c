/*
 * FUN_1001cd30 at 1001cd30
 * undefined FUN_1001cd30(void)
 * Address ranges: 1001cd30-1001cdcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1001cd30(int *param_1,int *param_2)

{
  undefined8 uVar1;
  
  if ((((*param_1 != *param_2) || (param_1[1] != param_2[1])) || (param_1[2] != param_2[2])) ||
     (((param_1[3] != param_2[3] || (param_1[4] != param_2[4])) ||
      (uVar1 = 1, param_1[5] != param_2[5])))) {
    uVar1 = 0;
  }
  return uVar1;
}

