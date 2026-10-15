/*
 * FUN_180036150 at 180036150
 * undefined __fastcall FUN_180036150(longlong * param_1, int param_2)
 * Address ranges: 180036150-180036186
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180036150(longlong *param_1,int param_2)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(undefined1 *)(param_1 + 0x62e) = 1;
  *(uint *)(param_1 + 0x592) = (uint)(param_2 != 0);
  return;
}

