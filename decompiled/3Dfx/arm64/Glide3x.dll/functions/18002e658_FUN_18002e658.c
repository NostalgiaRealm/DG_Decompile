/*
 * FUN_18002e658 at 18002e658
 * undefined __cdecl FUN_18002e658(longlong * param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 18002e658-18002e6eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002e658(longlong *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x2e0))();
  uVar1 = 0;
  if (*(int *)(param_1[1] + 0x4b) != 0x100) {
    uVar1 = param_3;
  }
  if (*(int *)(param_1[1] + 0x4b) == 0x200) {
    uVar1 = 1;
  }
  *(undefined4 *)((longlong)param_1 + (longlong)param_2 * 0x1a0 + 0x2dcc) = uVar1;
  uVar1 = 0;
  if (*(int *)(param_1[1] + 0x4b) != 0x100) {
    uVar1 = param_4;
  }
  if (*(int *)(param_1[1] + 0x4b) == 0x200) {
    uVar1 = 1;
  }
  *(undefined4 *)(param_1 + (longlong)param_2 * 0x34 + 0x5ba) = uVar1;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  *(undefined1 *)((longlong)param_1 + (longlong)param_2 + 0x32f3) = 1;
  return;
}

