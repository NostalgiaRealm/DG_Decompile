/*
 * FUN_1800e42d8 at 1800e42d8
 * undefined8 __fastcall FUN_1800e42d8(longlong param_1)
 * Address ranges: 1800e42d8-1800e42fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800e42d8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb10) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x50))();
  }
  return 0x80004005;
}

