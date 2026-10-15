/*
 * FUN_180032a00 at 180032a00
 * undefined FUN_180032a00(void)
 * Address ranges: 180032a00-180032cab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180032a00(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint local_70;
  
  uVar1 = *(uint *)(param_1 + 2);
  if (uVar1 != 0) {
    local_70 = 0;
    do {
      if (local_70 < uVar1) {
        lVar2 = param_1[1] + (ulonglong)local_70 * 0x2f0;
        lVar11 = lVar2 + 0x28;
        lVar7 = lVar2 + 0x30;
        puVar5 = (undefined8 *)(lVar2 + 0x18);
        plVar3 = (longlong *)(lVar2 + 0x10);
      }
      else {
        lVar11 = 0x20;
        lVar7 = 0x28;
        puVar5 = (undefined8 *)&DAT_00000010;
        plVar3 = (longlong *)&DAT_00000008;
      }
      lVar2 = 0;
      do {
        plVar4 = *(longlong **)(lVar11 + lVar2 * 0x50);
        if (plVar4 != (longlong *)0x0) {
          lVar6 = param_1[3];
          lVar9 = lVar6 + (ulonglong)*(uint *)(param_1 + 4) * 0x18c0;
          (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar6 + 0x620);
          if (plVar4 == *(longlong **)(lVar9 + 0xba0)) {
            *(undefined8 *)(lVar9 + 0xba0) = 0;
          }
          (**(code **)(*plVar4 + 0x10))(plVar4);
          (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar6 + 0x620);
          lVar6 = param_1[3];
          plVar4 = *(longlong **)(lVar7 + lVar2 * 0x50);
          lVar9 = lVar6 + (ulonglong)*(uint *)(param_1 + 4) * 0x18c0;
          (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar6 + 0x620);
          if (plVar4 == *(longlong **)(lVar9 + 0xba0)) {
            *(undefined8 *)(lVar9 + 0xba0) = 0;
          }
          (**(code **)(*plVar4 + 0x10))(plVar4);
          (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar6 + 0x620);
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 != 8);
      thunk_FUN_180102fc0(*puVar5);
      lVar11 = *plVar3;
      if (*(int *)(lVar11 + 0x10) != 0) {
        uVar8 = 0;
        lVar2 = param_1[3];
        lVar6 = lVar2 + (ulonglong)*(uint *)(param_1 + 4) * 0x18c0;
        lVar7 = lVar2 + (ulonglong)*(uint *)(param_1 + 4) * 0x18c0;
        if (*(int *)(lVar11 + 0x10) == 0) {
          puVar5 = (undefined8 *)&DAT_00000008;
          puVar10 = (undefined8 *)&DAT_00000010;
          goto LAB_180032b98;
        }
        do {
          puVar5 = (undefined8 *)((uVar8 << 5 | 0x10) + *(longlong *)(lVar11 + 8));
          puVar10 = (undefined8 *)((uVar8 << 5 | 0x18) + *(longlong *)(lVar11 + 8));
LAB_180032b98:
          plVar4 = (longlong *)*puVar5;
          if (plVar4 != (longlong *)0x0) {
            (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar2 + 0x620);
            if (plVar4 == *(longlong **)(lVar6 + 0xba8)) {
              *(undefined8 *)(lVar6 + 0xba8) = 0;
            }
            (**(code **)(*plVar4 + 0x10))(plVar4);
            (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar2 + 0x620);
          }
          plVar4 = (longlong *)*puVar10;
          if (plVar4 != (longlong *)0x0) {
            (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar2 + 0x620);
            if (plVar4 == *(longlong **)(lVar7 + 3000)) {
              *(undefined8 *)(lVar7 + 3000) = 0;
            }
            (**(code **)(*plVar4 + 0x10))(plVar4);
            (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar2 + 0x620);
          }
          uVar1 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(lVar11 + 0x10));
      }
      puVar5 = (undefined8 *)*plVar3;
      if (puVar5 != (undefined8 *)0x0) {
        thunk_FUN_180102fc0(*puVar5);
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        FUN_180102fc0(puVar5,0x270);
      }
      uVar1 = *(uint *)(param_1 + 2);
      local_70 = local_70 + 1;
    } while (local_70 < uVar1);
  }
  (*__imp_KERNEL32_dll_DeleteCriticalSection)(param_1 + 5);
  thunk_FUN_180102fc0(*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  return;
}

