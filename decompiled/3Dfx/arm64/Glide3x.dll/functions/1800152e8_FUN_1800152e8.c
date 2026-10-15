/*
 * FUN_1800152e8 at 1800152e8
 * undefined __cdecl FUN_1800152e8(longlong * param_1, undefined4 param_2)
 * Address ranges: 1800152e8-180015343
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800152e8(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x2e0))();
  if (*(int *)(param_1[1] + 0xeb) == 0) {
    param_2 = 0;
  }
  else if (*(int *)(param_1[1] + 0xeb) == 2) {
    param_2 = 1;
  }
  *(undefined4 *)((longlong)param_1 + 0x2d04) = param_2;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  return;
}

