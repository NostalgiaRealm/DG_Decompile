/*
 * FUN_1800ea9a0 at 1800ea9a0
 * undefined FUN_1800ea9a0(void)
 * Address ranges: 1800ea9a0-1800ea9cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800ea9a0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb10) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x48))();
  }
  return 0x80004005;
}

