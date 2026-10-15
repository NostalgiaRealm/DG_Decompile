/*
 * FUN_1800e87a0 at 1800e87a0
 * longlong __fastcall FUN_1800e87a0(longlong param_1, ulonglong param_2, int param_3)
 * Address ranges: 1800e87a0-1800e892a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800e87a0(longlong param_1,ulonglong param_2,int param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 local_res8 [8];
  ulonglong local_res10;
  int local_res18;
  int local_68 [10];
  
  local_res10 = param_2;
  local_res18 = param_3;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  uVar10 = *(uint *)(param_1 + 0x58);
  lVar13 = 0;
  lVar14 = lVar13;
  if (uVar10 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x50);
    uVar9 = 0;
    uVar11 = uVar10;
    do {
      uVar7 = uVar11 + uVar9 >> 1;
      uVar12 = *(ulonglong *)(lVar3 + (ulonglong)uVar7 * 0x18);
      uVar8 = uVar7;
      if (uVar12 <= param_2) {
        if (param_2 <= uVar12) break;
        uVar9 = uVar7 + 1;
        uVar8 = uVar11;
        uVar7 = uVar9;
      }
      uVar11 = uVar8;
    } while (uVar11 != uVar9);
    if (((uVar7 != uVar10) && (*(ulonglong *)(lVar3 + (ulonglong)uVar7 * 0x18) == param_2)) &&
       (plVar1 = (longlong *)(lVar3 + 0x10 + (ulonglong)uVar7 * 0x18), lVar14 = 0,
       plVar1 != (longlong *)0x0)) {
      lVar14 = lVar13;
      uVar10 = *(uint *)(*plVar1 + 8);
      do {
        if (uVar10 == 0) break;
        uVar9 = uVar10 - 1;
        uVar12 = (ulonglong)uVar9;
        plVar4 = *(longlong **)(*(longlong *)(*(longlong *)*plVar1 + uVar12 * 0x10) + 0x48);
        (**(code **)(*plVar4 + 0x70))(plVar4,local_68,local_res8);
        if (local_68[0] == local_res18) {
          plVar4 = (longlong *)*plVar1;
          lVar14 = *(longlong *)(*plVar4 + uVar12 * 0x10);
          uVar11 = *(uint *)(*plVar4 + 8 + uVar12 * 0x10);
          uVar8 = *(uint *)(plVar4 + 1);
          if (uVar9 < uVar8) {
            for (; uVar10 < uVar8; uVar10 = uVar10 + 1) {
              puVar5 = (undefined8 *)(*plVar4 + (ulonglong)uVar10 * 0x10);
              uVar6 = puVar5[1];
              puVar2 = (undefined8 *)(*plVar4 + (ulonglong)(uVar10 - 1) * 0x10);
              *puVar2 = *puVar5;
              puVar2[1] = uVar6;
              uVar8 = *(uint *)(plVar4 + 1);
            }
            *(uint *)(plVar4 + 1) = uVar8 - 1;
          }
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) - param_2;
          puVar5 = (undefined8 *)*plVar1;
          if (*(int *)(puVar5 + 1) == 0) {
            if (puVar5 != (undefined8 *)0x0) {
              FUN_1800fbcf0((LPVOID)*puVar5);
              FUN_1800fbcf0(puVar5);
            }
            FUN_180057844(param_1 + 0x48,&local_res10);
          }
          FUN_1800f5748((ulonglong *)(param_1 + 0x60),uVar11);
        }
        uVar10 = uVar9;
      } while (lVar14 == 0);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return lVar14;
}

