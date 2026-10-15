/*
 * FUN_180048e24 at 180048e24
 * undefined8 __fastcall FUN_180048e24(longlong param_1)
 * Address ranges: 180048e24-180048e48
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180048e24(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb10) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x48))();
  }
  return 0x80004005;
}

