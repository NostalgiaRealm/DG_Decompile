/*
 * FUN_1800492cc at 1800492cc
 * undefined8 __fastcall FUN_1800492cc(longlong param_1)
 * Address ranges: 1800492cc-1800492f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800492cc(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb10) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x48))();
  }
  return 0x80004005;
}

