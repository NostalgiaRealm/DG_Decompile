/*
 * FUN_180012a8c at 180012a8c
 * undefined __fastcall FUN_180012a8c(longlong * param_1, int param_2)
 * Address ranges: 180012a8c-180012ac2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180012a8c(longlong *param_1,int param_2)

{
  (**(code **)(*param_1 + 0x2e0))();
  *(undefined1 *)(param_1 + 0x65e) = 1;
  *(uint *)(param_1 + 0x5a6) = (uint)(param_2 != 0);
  return;
}

