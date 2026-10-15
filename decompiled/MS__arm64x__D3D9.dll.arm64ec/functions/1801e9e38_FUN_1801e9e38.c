/*
 * FUN_1801e9e38 at 1801e9e38
 * undefined FUN_1801e9e38(void)
 * Address ranges: 1801e9e38-1801e9e93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801e9e38(uint *param_1,uint *param_2)

{
  undefined8 uVar1;
  
  if ((((*param_2 < *param_1) || (param_2[1] < param_1[1])) || (param_2[2] < param_1[2])) ||
     ((param_2[3] < param_1[3] || (uVar1 = 1, param_2[4] < param_1[4])))) {
    uVar1 = 0;
  }
  return uVar1;
}

