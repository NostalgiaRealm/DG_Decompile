/*
 * FUN_100f0978 at 100f0978
 * undefined FUN_100f0978(void)
 * Address ranges: 100f0978-100f09ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100f0978(uint *param_1,uint *param_2)

{
  undefined8 uVar1;
  
  if ((((*param_2 < *param_1) || (param_2[1] < param_1[1])) || (param_2[2] < param_1[2])) ||
     ((param_2[3] < param_1[3] || (uVar1 = 1, param_2[4] < param_1[4])))) {
    uVar1 = 0;
  }
  return uVar1;
}

