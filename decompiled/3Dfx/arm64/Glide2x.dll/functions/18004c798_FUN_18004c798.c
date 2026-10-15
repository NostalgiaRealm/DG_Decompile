/*
 * FUN_18004c798 at 18004c798
 * undefined4 __cdecl FUN_18004c798(longlong param_1)
 * Address ranges: 18004c798-18004c7c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18004c798(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb10) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x50))();
  }
  return 0x80004005;
}

