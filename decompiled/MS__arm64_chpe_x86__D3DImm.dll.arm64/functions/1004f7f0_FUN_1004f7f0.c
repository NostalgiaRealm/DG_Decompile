/*
 * FUN_1004f7f0 at 1004f7f0
 * undefined FUN_1004f7f0(void)
 * Address ranges: 1004f7f0-1004f83f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1004f7f0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10081cb0(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_1009cb30;
  }
  return puVar1;
}

