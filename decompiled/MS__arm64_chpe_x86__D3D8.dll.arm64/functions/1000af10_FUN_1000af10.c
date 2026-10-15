/*
 * FUN_1000af10 at 1000af10
 * undefined FUN_1000af10(void)
 * Address ranges: 1000af10-1000af3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1000af10(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (((param_2 < 0x18) && ((0xff000cU >> (ulonglong)(param_2 & 0x1f) & 1) != 0)) ||
     (uVar1 = 0, param_2 - 0x100 < 0x100)) {
    uVar1 = 1;
  }
  return uVar1;
}

