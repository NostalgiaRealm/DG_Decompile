/*
 * FUN_18004c760 at 18004c760
 * undefined4 __cdecl FUN_18004c760(longlong param_1)
 * Address ranges: 18004c760-18004c78b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18004c760(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb10) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x48))();
  }
  return 0x80004005;
}

