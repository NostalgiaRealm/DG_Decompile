/*
 * FUN_180039d60 at 180039d60
 * undefined __cdecl FUN_180039d60(longlong * param_1, undefined4 param_2)
 * Address ranges: 180039d60-180039dbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180039d60(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x2a0))();
  if (*(int *)(param_1[1] + 0xeb) == 0) {
    param_2 = 0;
  }
  else if (*(int *)(param_1[1] + 0xeb) == 2) {
    param_2 = 1;
  }
  *(undefined4 *)((longlong)param_1 + 0x2c64) = param_2;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

