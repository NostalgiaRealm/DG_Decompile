/*
 * FUN_18008e2ec at 18008e2ec
 * undefined __fastcall FUN_18008e2ec(longlong * param_1, uint param_2, uint param_3)
 * Address ranges: 18008e2ec-18008e463
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18008e2ec(longlong *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  if ((param_1[6] != 0) && (param_3 != 0)) {
    do {
      uVar5 = 0;
      if (param_2 != 0) {
        do {
          uVar4 = (ulonglong)(uVar6 * param_2 + uVar5);
          plVar2 = *(longlong **)(param_1[6] + uVar4 * 0x28);
          if (plVar2 != (longlong *)0x0) {
            FUN_1800db9a0(*param_1,*(uint *)(param_1 + 1),plVar2);
          }
          plVar2 = *(longlong **)(param_1[6] + 8 + uVar4 * 0x28);
          if (plVar2 != (longlong *)0x0) {
            uVar1 = *(uint *)(param_1 + 1);
            lVar3 = *param_1;
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x620));
            if (plVar2 == *(longlong **)((ulonglong)uVar1 * 0x18c0 + 0xbe0 + lVar3)) {
              *(undefined8 *)((ulonglong)uVar1 * 0x18c0 + 0xbe0 + lVar3) = 0;
            }
            (**(code **)(*plVar2 + 0x10))(plVar2);
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x620));
          }
          plVar2 = *(longlong **)(param_1[6] + 0x10 + uVar4 * 0x28);
          if (plVar2 != (longlong *)0x0) {
            FUN_1800db9a0(*param_1,*(uint *)(param_1 + 1),plVar2);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < param_2);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_3);
  }
  FUN_1800fbcf0((LPVOID)param_1[6]);
  param_1[6] = 0;
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    FUN_1800dba14(*param_1,*(uint *)(param_1 + 1),(longlong *)param_1[7]);
    param_1[7] = 0;
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    FUN_1800dba14(*param_1,*(uint *)(param_1 + 1),(longlong *)param_1[5]);
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

