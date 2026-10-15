/*
 * FUN_180079e70 at 180079e70
 * undefined FUN_180079e70(void)
 * Address ranges: 180079e70-180079f57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180079e70(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (*(int *)(param_1 + 2) != 0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 2) == 0) {
      puVar2 = (undefined8 *)&DAT_00000008;
      goto LAB_180079ec8;
    }
    do {
      puVar2 = (undefined8 *)(param_1[1] + uVar3 * 0x18 + 0x10);
LAB_180079ec8:
      plVar5 = (longlong *)*puVar2;
      lVar4 = param_1[3];
      lVar6 = lVar4 + (ulonglong)*(uint *)(param_1 + 4) * 0x18c0;
      (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar4 + 0x620);
      if (plVar5 == *(longlong **)(lVar6 + 0xbb0)) {
        *(undefined8 *)(lVar6 + 0xbb0) = 0;
      }
      (**(code **)(*plVar5 + 0x10))(plVar5);
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar4 + 0x620);
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 2));
  }
  thunk_FUN_180102fc0(*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  thunk_FUN_180102fc0(0);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  return;
}

