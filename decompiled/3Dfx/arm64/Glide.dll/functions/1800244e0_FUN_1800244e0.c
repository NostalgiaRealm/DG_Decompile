/*
 * FUN_1800244e0 at 1800244e0
 * undefined __cdecl FUN_1800244e0(longlong param_1, byte param_2)
 * Address ranges: 1800244e0-18002452b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800244e0(longlong param_1,byte param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x3180) + 0x50))(*(longlong **)(param_1 + 0x3180),1,0);
  *(uint *)(param_1 + 0x2c08) = (uint)param_2;
  *(undefined1 *)(param_1 + 0x3170) = 1;
  return;
}

