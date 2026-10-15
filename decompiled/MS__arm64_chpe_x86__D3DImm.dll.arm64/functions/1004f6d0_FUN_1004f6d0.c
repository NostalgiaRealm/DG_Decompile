/*
 * FUN_1004f6d0 at 1004f6d0
 * undefined FUN_1004f6d0(void)
 * Address ranges: 1004f6d0-1004f71f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1004f6d0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10081cb0(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_1009ccb4;
    puVar1[1] = param_1;
  }
  return puVar1;
}

