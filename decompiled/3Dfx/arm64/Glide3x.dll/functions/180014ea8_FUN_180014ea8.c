/*
 * FUN_180014ea8 at 180014ea8
 * undefined __cdecl FUN_180014ea8(longlong * param_1, byte param_2)
 * Address ranges: 180014ea8-180014ef7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180014ea8(longlong *param_1,byte param_2)

{
  (**(code **)(*param_1 + 0x2e0))();
  *(undefined1 *)(param_1 + 0x65e) = 1;
  *(float *)((longlong)param_1 + 0x2d44) = (float)param_2;
  *(float *)((longlong)param_1 + 0x2d0c) = (float)param_2 / 255.0;
  return;
}

