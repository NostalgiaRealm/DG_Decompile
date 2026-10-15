/*
 * FUN_180034270 at 180034270
 * undefined FUN_180034270(void)
 * Address ranges: 180034270-1800343d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180034270(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar6 = param_1[3];
  *param_1 = &PTR_FUN_180234130;
  if (*(int *)(lVar6 + 0x10) != 0) {
    lVar4 = param_1[1];
    uVar5 = 0;
    lVar9 = lVar4 + (ulonglong)*(uint *)(param_1 + 2) * 0x18c0;
    lVar8 = lVar4 + (ulonglong)*(uint *)(param_1 + 2) * 0x18c0;
    if (*(int *)(lVar6 + 0x10) == 0) {
      puVar2 = (undefined8 *)&DAT_00000008;
      puVar7 = (undefined8 *)&DAT_00000010;
      goto LAB_1800342fc;
    }
    do {
      puVar2 = (undefined8 *)((uVar5 << 5 | 0x10) + *(longlong *)(lVar6 + 8));
      puVar7 = (undefined8 *)((uVar5 << 5 | 0x18) + *(longlong *)(lVar6 + 8));
LAB_1800342fc:
      plVar3 = (longlong *)*puVar2;
      if (plVar3 != (longlong *)0x0) {
        (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar4 + 0x620);
        if (plVar3 == *(longlong **)(lVar9 + 0xba8)) {
          *(undefined8 *)(lVar9 + 0xba8) = 0;
        }
        (**(code **)(*plVar3 + 0x10))(plVar3);
        (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar4 + 0x620);
      }
      plVar3 = (longlong *)*puVar7;
      if (plVar3 != (longlong *)0x0) {
        (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar4 + 0x620);
        if (plVar3 == *(longlong **)(lVar8 + 3000)) {
          *(undefined8 *)(lVar8 + 3000) = 0;
        }
        (**(code **)(*plVar3 + 0x10))(plVar3);
        (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar4 + 0x620);
      }
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(lVar6 + 0x10));
  }
  thunk_FUN_180102fc0(param_1[0x10]);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR_D3DPERF_GetStatus_180234120;
  param_1[4] = &PTR_FUN_180234a00;
  return;
}

