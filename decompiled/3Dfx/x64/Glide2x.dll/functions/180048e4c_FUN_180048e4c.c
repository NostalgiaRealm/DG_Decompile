/*
 * FUN_180048e4c at 180048e4c
 * undefined8 __fastcall FUN_180048e4c(longlong param_1)
 * Address ranges: 180048e4c-180048e70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180048e4c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb10) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x50))();
  }
  return 0x80004005;
}

