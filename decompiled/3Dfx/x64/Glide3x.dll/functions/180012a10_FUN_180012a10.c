/*
 * FUN_180012a10 at 180012a10
 * undefined __fastcall FUN_180012a10(longlong * param_1, undefined4 param_2)
 * Address ranges: 180012a10-180012a3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180012a10(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x2e0))();
  *(undefined4 *)(param_1 + 0x5a1) = param_2;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  return;
}

