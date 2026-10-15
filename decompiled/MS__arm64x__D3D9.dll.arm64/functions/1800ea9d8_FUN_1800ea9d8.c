/*
 * FUN_1800ea9d8 at 1800ea9d8
 * undefined FUN_1800ea9d8(void)
 * Address ranges: 1800ea9d8-1800eaa03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800ea9d8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb10) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x50))();
  }
  return 0x80004005;
}

