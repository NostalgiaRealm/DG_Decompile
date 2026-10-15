/*
 * FUN_180055628 at 180055628
 * undefined __cdecl FUN_180055628(longlong param_1, longlong param_2)
 * Address ranges: 180055628-18005575f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180055628(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = 0;
  do {
    lVar8 = lVar7 * 0x60;
    if (*(longlong *)(param_1 + 0x318 + lVar8) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar8 + param_1 + 0x338));
      lVar1 = param_1 + lVar8;
      uVar2 = *(uint *)(lVar1 + 0x328);
      while (uVar6 = uVar2, uVar6 != 0) {
        uVar2 = uVar6 - 1;
        lVar3 = (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 800) + (ulonglong)uVar2 * 8) +
                            0x10))();
        if (lVar3 == param_2) {
          puVar4 = *(undefined8 **)(*(longlong *)(lVar1 + 800) + (ulonglong)uVar2 * 8);
          if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4,1);
          }
          uVar5 = *(uint *)(lVar1 + 0x328);
          if (uVar2 < uVar5) {
            for (; uVar6 < uVar5; uVar6 = uVar6 + 1) {
              *(undefined8 *)(*(longlong *)(lVar1 + 800) + (ulonglong)(uVar6 - 1) * 8) =
                   *(undefined8 *)(*(longlong *)(lVar1 + 800) + (ulonglong)uVar6 * 8);
              uVar5 = *(uint *)(lVar1 + 0x328);
            }
            *(uint *)(lVar1 + 0x328) = uVar5 - 1;
          }
        }
      }
      lVar3 = *(longlong *)(lVar1 + 0x368);
      while (lVar3 == param_2) {
        Sleep(0);
        lVar3 = *(longlong *)(lVar1 + 0x368);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + param_1 + 0x338));
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 8);
  return;
}

