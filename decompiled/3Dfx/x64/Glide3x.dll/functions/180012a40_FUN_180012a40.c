/*
 * FUN_180012a40 at 180012a40
 * undefined __fastcall FUN_180012a40(longlong * param_1, byte param_2)
 * Address ranges: 180012a40-180012a89
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180012a40(longlong *param_1,byte param_2)

{
  (**(code **)(*param_1 + 0x2e0))();
  *(undefined1 *)(param_1 + 0x65e) = 1;
  *(float *)((longlong)param_1 + 0x2d44) = (float)param_2;
  *(float *)((longlong)param_1 + 0x2d0c) = (float)param_2 / 255.0;
  return;
}

