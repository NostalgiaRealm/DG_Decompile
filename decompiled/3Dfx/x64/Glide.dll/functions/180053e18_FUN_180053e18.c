/*
 * FUN_180053e18 at 180053e18
 * undefined __fastcall FUN_180053e18(longlong param_1, longlong param_2)
 * Address ranges: 180053e18-180053f1e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180053e18(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar7 = 0;
  do {
    lVar5 = lVar7 * 0x60;
    if (*(longlong *)(param_1 + 0x318 + lVar5) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + param_1 + 0x338));
      uVar1 = *(uint *)(param_1 + 0x328 + lVar5);
      while (uVar6 = uVar1, uVar6 != 0) {
        uVar1 = uVar6 - 1;
        lVar4 = (**(code **)(**(longlong **)
                               (*(longlong *)(param_1 + 800 + lVar5) + (ulonglong)uVar1 * 8) + 0x10)
                )();
        if (lVar4 == param_2) {
          puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 800 + lVar5) + (ulonglong)uVar1 * 8);
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
          }
          uVar3 = *(uint *)(param_1 + 0x328 + lVar5);
          if (uVar1 < uVar3) {
            for (; uVar6 < uVar3; uVar6 = uVar6 + 1) {
              lVar4 = *(longlong *)(param_1 + 800 + lVar5);
              *(undefined8 *)(lVar4 + (ulonglong)(uVar6 - 1) * 8) =
                   *(undefined8 *)(lVar4 + (ulonglong)uVar6 * 8);
              uVar3 = *(uint *)(param_1 + 0x328 + lVar5);
            }
            *(uint *)(param_1 + 0x328 + lVar5) = uVar3 - 1;
          }
        }
      }
      while (*(longlong *)(param_1 + 0x368 + lVar5) == param_2) {
        Sleep(0);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + param_1 + 0x338));
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 8);
  return;
}

