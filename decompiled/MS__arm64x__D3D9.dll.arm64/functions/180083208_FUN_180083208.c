/*
 * FUN_180083208 at 180083208
 * undefined FUN_180083208(void)
 * Address ranges: 180083208-18008342b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180083208(longlong *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  
  if ((param_1[6] != 0) && (uVar8 = 0, param_3 != 0)) {
    do {
      uVar7 = 0;
      if (param_2 != 0) {
        do {
          uVar2 = (ulonglong)(uVar7 + uVar8 * param_2);
          plVar6 = *(longlong **)(param_1[6] + uVar2 * 0x28);
          if (plVar6 != (longlong *)0x0) {
            lVar4 = *param_1;
            uVar1 = *(uint *)(param_1 + 1);
            (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar4 + 0x620);
            lVar5 = lVar4 + (ulonglong)uVar1 * 0x18c0 + 0xbc0;
            lVar3 = 0;
            do {
              if (plVar6 == *(longlong **)(lVar5 + lVar3 * 8)) {
                *(undefined8 *)(lVar5 + lVar3 * 8) = 0;
              }
              lVar3 = lVar3 + 1;
            } while (lVar3 != 4);
            (**(code **)(*plVar6 + 0x10))(plVar6);
            (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar4 + 0x620);
          }
          plVar6 = *(longlong **)(param_1[6] + uVar2 * 0x28 + 8);
          if (plVar6 != (longlong *)0x0) {
            lVar5 = *param_1;
            lVar3 = lVar5 + (ulonglong)*(uint *)(param_1 + 1) * 0x18c0;
            (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar5 + 0x620);
            if (plVar6 == *(longlong **)(lVar3 + 0xbe0)) {
              *(undefined8 *)(lVar3 + 0xbe0) = 0;
            }
            (**(code **)(*plVar6 + 0x10))(plVar6);
            (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar5 + 0x620);
          }
          plVar6 = *(longlong **)(param_1[6] + uVar2 * 0x28 + 0x10);
          if (plVar6 != (longlong *)0x0) {
            lVar4 = *param_1;
            uVar1 = *(uint *)(param_1 + 1);
            (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar4 + 0x620);
            lVar5 = lVar4 + (ulonglong)uVar1 * 0x18c0 + 0xbc0;
            lVar3 = 0;
            do {
              if (plVar6 == *(longlong **)(lVar5 + lVar3 * 8)) {
                *(undefined8 *)(lVar5 + lVar3 * 8) = 0;
              }
              lVar3 = lVar3 + 1;
            } while (lVar3 != 4);
            (**(code **)(*plVar6 + 0x10))(plVar6);
            (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar4 + 0x620);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < param_2);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_3);
  }
  thunk_FUN_180102fc0(param_1[6]);
  param_1[6] = 0;
  if (param_1[7] != 0) {
    FUN_1800e1808(*param_1,(int)param_1[1]);
    param_1[7] = 0;
  }
  if (param_1[5] != 0) {
    FUN_1800e1808(*param_1,(int)param_1[1]);
    param_1[5] = 0;
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
    param_1[3] = 0;
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
    param_1[4] = 0;
  }
  return;
}

