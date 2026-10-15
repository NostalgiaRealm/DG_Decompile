/*
 * FUN_180043478 at 180043478
 * undefined __fastcall FUN_180043478(longlong param_1, LPVOID param_2)
 * Address ranges: 180043478-18004357a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180043478(longlong param_1,LPVOID param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  
  lVar10 = 0;
  do {
    uVar11 = *(uint *)((longlong)param_2 + lVar10 * 0x24 + 0x1c);
    if (uVar11 != 0xffffffff) {
      lVar3 = *(longlong *)(param_1 + 0x10);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
      FUN_180048b44(lVar3,uVar11,1);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
      lVar3 = *(longlong *)(param_1 + 0x18);
      uVar11 = *(uint *)(lVar3 + 0x10);
      if (uVar11 != 0) {
        uVar12 = (ulonglong)*(uint *)((longlong)param_2 + lVar10 * 0x24 + 0x1c);
        uVar9 = 0;
        do {
          uVar8 = uVar11 + uVar9 >> 1;
          uVar4 = *(ulonglong *)(*(longlong *)(lVar3 + 8) + (ulonglong)uVar8 * 0x18);
          uVar7 = uVar8;
          if (uVar4 <= uVar12) {
            if (uVar12 <= uVar4) break;
            uVar9 = uVar8 + 1;
            uVar7 = uVar11;
            uVar8 = uVar9;
          }
          uVar11 = uVar7;
        } while (uVar11 != uVar9);
        if ((uVar8 != *(uint *)(lVar3 + 0x10)) &&
           (*(ulonglong *)(*(longlong *)(lVar3 + 8) + (ulonglong)uVar8 * 0x18) == uVar12)) {
          while( true ) {
            uVar11 = uVar8 + 1;
            if (*(uint *)(lVar3 + 0x10) <= uVar11) break;
            lVar5 = *(longlong *)(lVar3 + 8);
            puVar1 = (undefined8 *)(lVar5 + (ulonglong)uVar11 * 0x18);
            uVar6 = puVar1[1];
            puVar2 = (undefined8 *)(lVar5 + (ulonglong)uVar8 * 0x18);
            *puVar2 = *puVar1;
            puVar2[1] = uVar6;
            *(undefined8 *)(lVar5 + 0x10 + (ulonglong)uVar8 * 0x18) =
                 *(undefined8 *)(lVar5 + 0x10 + (ulonglong)uVar11 * 0x18);
            uVar8 = uVar11;
          }
          *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
        }
      }
    }
    lVar10 = lVar10 + 1;
    if (lVar10 == 0x14) {
      FUN_180060ac0(param_2);
      return;
    }
  } while( true );
}

