/*
 * FUN_1800418f0 at 1800418f0
 * undefined FUN_1800418f0(void)
 * Address ranges: 1800418f0-180041997
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800418f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  
  *param_1 = &PTR_FUN_180234348;
  param_1[0x1eda] = &PTR_FUN_180234538;
  FUN_180038340();
  thunk_FUN_180102fc0(param_1[8000]);
  param_1[0x1f42] = 0;
  param_1[8000] = 0;
  param_1[0x1f41] = 0;
  param_1[0x1f01] = &PTR_FUN_180234608;
  thunk_FUN_180102fc0(param_1[0x1f0e]);
  param_1[0x1f10] = 0;
  param_1[0x1f0e] = 0;
  param_1[0x1f0f] = 0;
  thunk_FUN_180102fc0(param_1[0x1f09]);
  thunk_FUN_180102fc0(param_1[0x1f06]);
  param_1[0x1f08] = 0;
  param_1[0x1f06] = 0;
  param_1[0x1f07] = 0;
  thunk_FUN_180102fc0(param_1[0x1efa]);
  if (*(int *)(param_1 + 0x1ef9) != 0) {
    uVar3 = 0;
    iVar2 = 0;
    if (*(int *)(param_1 + 0x1ef9) == 0) {
      puVar1 = (undefined8 *)&DAT_00000008;
      goto LAB_1800419c8;
    }
    do {
      iVar2 = (int)uVar3;
      puVar1 = (undefined8 *)(param_1[0x1ef8] + uVar3 * 0x18 + 0x10);
LAB_1800419c8:
      FUN_180102fc0(*puVar1,0x254);
      uVar3 = (ulonglong)(iVar2 + 1U);
    } while (iVar2 + 1U < *(uint *)(param_1 + 0x1ef9));
  }
  thunk_FUN_180102fc0(param_1[0x1ef7]);
  param_1[0x1ef7] = 0;
  param_1[0x1ef8] = 0;
  *(undefined4 *)(param_1 + 0x1ef9) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf7cc) = 0;
  FUN_180053290(param_1 + 0x1ef2);
  thunk_FUN_180102fc0(param_1[0x1eef]);
  FUN_18004f958(param_1 + 0x1ee9);
  *param_1 = &PTR_FUN_180233cb8;
  FUN_180103118(param_1[-1]);
  return;
}

