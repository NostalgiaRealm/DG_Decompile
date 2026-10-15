/*
 * FUN_1004f550 at 1004f550
 * undefined FUN_1004f550(void)
 * Address ranges: 1004f550-1004f59f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1004f550(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10081cb0(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_1009ca10;
  }
  return puVar1;
}

