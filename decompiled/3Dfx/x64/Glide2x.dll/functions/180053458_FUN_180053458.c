/*
 * FUN_180053458 at 180053458
 * bool __fastcall FUN_180053458(LPCRITICAL_SECTION param_1, uint param_2, longlong * param_3)
 * Address ranges: 180053458-18005362d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180053458(LPCRITICAL_SECTION param_1,uint param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  HANDLE pvVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int *piVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  bool bVar15;
  
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  EnterCriticalSection(param_1);
  iVar2 = (int)param_1[1].SpinCount;
  if (iVar2 != 0) {
    uVar11 = 0;
    if (iVar2 == 0) goto LAB_1800534cd;
    do {
      pvVar3 = param_1[1].LockSemaphore;
      uVar9 = (ulonglong)uVar11 << 6;
      if (((uVar9 | 8) + (longlong)pvVar3 != 0) &&
         ((ulonglong)param_2 <= *(ulonglong *)((uVar9 | 0x18) + (longlong)pvVar3))) {
        plVar6 = (longlong *)((uVar9 | 0x10) + (longlong)pvVar3);
        uVar5 = FUN_180053224((longlong)param_1,(longlong)plVar6,param_2);
        if (uVar5 != 0xffffffff) {
          *param_3 = (ulonglong)(uVar5 * *(int *)&param_1[1].DebugInfo) + *plVar6;
          param_3[1] = *plVar6;
          *(uint *)(param_3 + 2) = param_2;
          break;
        }
      }
LAB_1800534cd:
      uVar11 = uVar11 + 1;
    } while (uVar11 < (uint)param_1[1].SpinCount);
  }
  bVar15 = false;
  if (*param_3 == 0) {
    do {
      plVar6 = (longlong *)FUN_180052eac((longlong)param_1,param_2);
      if (plVar6 != (longlong *)0x0) {
        uVar11 = FUN_180053224((longlong)param_1,(longlong)plVar6,param_2);
        if (uVar11 != 0xffffffff) {
          *param_3 = (ulonglong)(uVar11 * *(int *)&param_1[1].DebugInfo) + *plVar6;
          param_3[1] = *plVar6;
          *(uint *)(param_3 + 2) = param_2;
        }
        break;
      }
      uVar11 = (uint)param_1[1].SpinCount;
      if (uVar11 == 0) break;
      bVar15 = false;
      uVar5 = uVar11;
      do {
        uVar1 = uVar5 - 1;
        if (uVar1 < uVar11) {
          pvVar3 = param_1[1].LockSemaphore;
          uVar9 = (ulonglong)uVar1 << 6;
          puVar12 = (undefined8 *)((uVar9 | 0x10) + (longlong)pvVar3);
          piVar10 = (int *)((uVar9 | 0x38) + (longlong)pvVar3);
          puVar14 = (undefined8 *)((uVar9 | 0x20) + (longlong)pvVar3);
          puVar13 = (undefined8 *)((uVar9 | 0x28) + (longlong)pvVar3);
        }
        else {
          piVar10 = (int *)&DAT_00000030;
          puVar12 = (undefined8 *)&DAT_00000008;
          puVar14 = (undefined8 *)0x18;
          puVar13 = (undefined8 *)&DAT_00000020;
        }
        if (*piVar10 == 0) {
          FUN_18005d720((LPVOID)*puVar12);
          FUN_18005d720((LPVOID)*puVar14);
          FUN_18005d720((LPVOID)*puVar13);
          for (; uVar11 = (uint)param_1[1].SpinCount, uVar5 < uVar11; uVar5 = uVar5 + 1) {
            pvVar3 = param_1[1].LockSemaphore;
            lVar8 = (ulonglong)(uVar5 - 1) * 0x40;
            lVar7 = (ulonglong)uVar5 * 0x40;
            uVar4 = ((undefined8 *)((longlong)pvVar3 + lVar7))[1];
            *(undefined8 *)((longlong)pvVar3 + lVar8) = *(undefined8 *)((longlong)pvVar3 + lVar7);
            ((undefined8 *)((longlong)pvVar3 + lVar8))[1] = uVar4;
            puVar12 = (undefined8 *)((longlong)pvVar3 + lVar7 + 0x10);
            uVar4 = puVar12[1];
            puVar13 = (undefined8 *)((longlong)pvVar3 + lVar8 + 0x10);
            *puVar13 = *puVar12;
            puVar13[1] = uVar4;
            puVar12 = (undefined8 *)((longlong)pvVar3 + lVar7 + 0x20);
            uVar4 = puVar12[1];
            puVar13 = (undefined8 *)((longlong)pvVar3 + lVar8 + 0x20);
            *puVar13 = *puVar12;
            puVar13[1] = uVar4;
            puVar12 = (undefined8 *)((longlong)pvVar3 + lVar7 + 0x30);
            uVar4 = puVar12[1];
            puVar13 = (undefined8 *)((longlong)pvVar3 + lVar8 + 0x30);
            *puVar13 = *puVar12;
            puVar13[1] = uVar4;
          }
          uVar11 = uVar11 - 1;
          bVar15 = true;
          *(uint *)&param_1[1].SpinCount = uVar11;
        }
        uVar5 = uVar1;
      } while (uVar1 != 0);
    } while (bVar15);
    bVar15 = *param_3 == 0;
  }
  LeaveCriticalSection(param_1);
  return !bVar15;
}

