/*
 * FUN_18003abb0 at 18003abb0
 * undefined __cdecl FUN_18003abb0(longlong * param_1, undefined4 param_2)
 * Address ranges: 18003abb0-18003ac0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003abb0(longlong *param_1,undefined4 param_2)

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

