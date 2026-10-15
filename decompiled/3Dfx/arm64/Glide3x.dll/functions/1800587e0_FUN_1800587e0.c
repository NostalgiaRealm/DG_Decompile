/*
 * FUN_1800587e0 at 1800587e0
 * bool __cdecl FUN_1800587e0(LPCRITICAL_SECTION param_1, uint param_2, longlong * param_3)
 * Address ranges: 1800587e0-1800589ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800587e0(LPCRITICAL_SECTION param_1,uint param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  int *piVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  HANDLE pvVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  param_3[1] = 0;
  *param_3 = 0;
  param_3[2] = 0;
  EnterCriticalSection(param_1);
  iVar2 = (int)param_1[1].SpinCount;
  if (iVar2 != 0) {
    uVar11 = 0;
    if (iVar2 == 0) goto LAB_180058870;
    do {
      pvVar12 = param_1[1].LockSemaphore;
      uVar13 = uVar11 << 6;
      if (((uVar13 | 8) + (longlong)pvVar12 != 0) &&
         ((ulonglong)param_2 <= *(ulonglong *)((uVar13 | 0x18) + (longlong)pvVar12))) {
        uVar13 = uVar13 | 0x10;
        uVar5 = FUN_180058778((longlong)param_1,uVar13 + (longlong)pvVar12,param_2);
        if ((int)uVar5 != -1) {
          *param_3 = *(longlong *)(uVar13 + (longlong)pvVar12) +
                     (ulonglong)(uint)(*(int *)&param_1[1].DebugInfo * (int)uVar5);
          lVar8 = *(longlong *)(uVar13 + (longlong)pvVar12);
          *(uint *)(param_3 + 2) = param_2;
          param_3[1] = lVar8;
          break;
        }
      }
LAB_180058870:
      uVar7 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar7;
    } while (uVar7 < (uint)param_1[1].SpinCount);
  }
  if (*param_3 == 0) {
    do {
      plVar6 = (longlong *)FUN_1800584f8((longlong)param_1,param_2);
      if (plVar6 != (longlong *)0x0) {
        uVar5 = FUN_180058778((longlong)param_1,(longlong)plVar6,param_2);
        if ((int)uVar5 != -1) {
          *param_3 = *plVar6 + (ulonglong)(uint)(*(int *)&param_1[1].DebugInfo * (int)uVar5);
          lVar8 = *plVar6;
          *(uint *)(param_3 + 2) = param_2;
          param_3[1] = lVar8;
        }
        break;
      }
      uVar7 = (uint)param_1[1].SpinCount;
      if (uVar7 == 0) break;
      bVar4 = false;
      uVar1 = uVar7;
      do {
        uVar3 = uVar1 - 1;
        if (uVar3 < uVar7) {
          pvVar12 = param_1[1].LockSemaphore;
          uVar11 = (ulonglong)uVar3 << 6;
          puVar10 = (undefined8 *)((uVar11 | 0x10) + (longlong)pvVar12);
          piVar9 = (int *)((uVar11 | 0x38) + (longlong)pvVar12);
          puVar15 = (undefined8 *)((uVar11 | 0x20) + (longlong)pvVar12);
          puVar14 = (undefined8 *)((uVar11 | 0x28) + (longlong)pvVar12);
        }
        else {
          puVar10 = (undefined8 *)&DAT_00000008;
          piVar9 = (int *)&DAT_00000030;
          puVar15 = (undefined8 *)&DAT_00000018;
          puVar14 = (undefined8 *)&DAT_00000020;
        }
        if (*piVar9 == 0) {
          thunk_FUN_180063700((LPVOID)*puVar10);
          thunk_FUN_180063700((LPVOID)*puVar15);
          thunk_FUN_180063700((LPVOID)*puVar14);
          while( true ) {
            uVar7 = (uint)param_1[1].SpinCount;
            if (uVar7 <= uVar1) break;
            puVar10 = (undefined8 *)
                      ((longlong)param_1[1].LockSemaphore + (ulonglong)(uVar1 - 1) * 0x40);
            puVar15 = (undefined8 *)((longlong)param_1[1].LockSemaphore + (ulonglong)uVar1 * 0x40);
            uVar1 = uVar1 + 1;
            uVar17 = *puVar15;
            uVar16 = puVar15[3];
            uVar5 = puVar15[2];
            puVar10[1] = puVar15[1];
            *puVar10 = uVar17;
            puVar10[3] = uVar16;
            puVar10[2] = uVar5;
            uVar17 = puVar15[4];
            uVar16 = puVar15[7];
            uVar5 = puVar15[6];
            puVar10[5] = puVar15[5];
            puVar10[4] = uVar17;
            puVar10[7] = uVar16;
            puVar10[6] = uVar5;
          }
          uVar7 = uVar7 - 1;
          *(uint *)&param_1[1].SpinCount = uVar7;
          bVar4 = true;
        }
        uVar1 = uVar3;
      } while (uVar3 != 0);
    } while (bVar4);
  }
  lVar8 = *param_3;
  LeaveCriticalSection(param_1);
  return lVar8 != 0;
}

