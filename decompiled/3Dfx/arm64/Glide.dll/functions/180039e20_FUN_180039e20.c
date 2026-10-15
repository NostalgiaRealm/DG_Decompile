/*
 * FUN_180039e20 at 180039e20
 * undefined __cdecl FUN_180039e20(longlong * param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 180039e20-180039eb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180039e20(longlong *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  
  (**(code **)(*param_1 + 0x2a0))();
  lVar2 = (longlong)param_2;
  uVar1 = 0;
  if (*(int *)(param_1[1] + 0x4b) != 0x100) {
    uVar1 = param_3;
  }
  if (*(int *)(param_1[1] + 0x4b) == 0x200) {
    uVar1 = 1;
  }
  *(undefined4 *)((longlong)param_1 + lVar2 * 0x180 + 0x2d2c) = uVar1;
  uVar1 = 0;
  if (*(int *)(param_1[1] + 0x4b) != 0x100) {
    uVar1 = param_4;
  }
  if (*(int *)(param_1[1] + 0x4b) == 0x200) {
    uVar1 = 1;
  }
  *(undefined4 *)(param_1 + lVar2 * 0x30 + 0x5a6) = uVar1;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  *(undefined1 *)((longlong)param_1 + lVar2 + 0x3173) = 1;
  return;
}

