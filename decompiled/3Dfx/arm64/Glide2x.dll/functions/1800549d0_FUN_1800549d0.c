/*
 * FUN_1800549d0 at 1800549d0
 * bool __cdecl FUN_1800549d0(LPCRITICAL_SECTION param_1, uint param_2, longlong * param_3)
 * Address ranges: 1800549d0-180054f57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800549d0(LPCRITICAL_SECTION param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 extraout_x0;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  LPVOID pvVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  LPVOID pvVar19;
  int *piVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  HANDLE *ppvVar25;
  HANDLE pvVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  uint uStack_54;
  
  param_3[1] = 0;
  *param_3 = 0;
  param_3[2] = 0;
  EnterCriticalSection(param_1);
  iVar11 = (int)param_1[1].SpinCount;
  if (iVar11 != 0) {
    uVar24 = 0;
    uVar6 = extraout_x0;
    if (iVar11 == 0) goto LAB_180054a9c;
    do {
      pvVar26 = param_1[1].LockSemaphore;
      uVar23 = uVar24 << 6;
      if (((uVar23 | 8) + (longlong)pvVar26 != 0) &&
         ((ulonglong)param_2 <= *(ulonglong *)((uVar23 | 0x18) + (longlong)pvVar26))) {
        uVar12 = *(uint *)&param_1[1].DebugInfo;
        if (uVar12 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x180054a6c);
          (*pcVar5)();
        }
        uVar10 = 0;
        if (uVar12 != 0) {
          uVar10 = ((uVar12 + param_2) - 1 & -uVar12) / uVar12;
        }
        if (uVar10 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_18005dc40(uVar6,*(longlong *)((uVar23 | 0x20) + (longlong)pvVar26),
                                *(byte **)((uVar23 | 0x28) + (longlong)pvVar26),
                                *(uint *)((uVar23 | 0x34) + (longlong)pvVar26),uVar10);
          if ((int)uVar6 == -1) goto LAB_180054a9c;
          *(uint *)((uVar23 | 0x38) + (longlong)pvVar26) =
               *(int *)((uVar23 | 0x38) + (longlong)pvVar26) + uVar10;
        }
        *param_3 = *(longlong *)((uVar23 | 0x10) + (longlong)pvVar26) +
                   (ulonglong)(uint)(*(int *)&param_1[1].DebugInfo * (int)uVar6);
        lVar15 = *(longlong *)((uVar23 | 0x10) + (longlong)pvVar26);
        *(uint *)(param_3 + 2) = param_2;
        param_3[1] = lVar15;
        break;
      }
LAB_180054a9c:
      uVar12 = (int)uVar24 + 1;
      uVar24 = (ulonglong)uVar12;
    } while (uVar12 < (uint)param_1[1].SpinCount);
  }
  if (*param_3 == 0) {
    do {
      uVar12 = *(uint *)((longlong)&param_1[1].DebugInfo + 4);
      if (uVar12 < param_2 << 1) {
        iVar11 = 2;
        if (param_2 <= uVar12 * 3) {
          iVar11 = 3;
        }
        uVar12 = iVar11 * param_2;
      }
      uVar10 = *(uint *)&param_1[1].DebugInfo;
      uVar12 = (uVar10 + uVar12) - 1 & -uVar10;
      uVar24 = (ulonglong)uVar12;
      if ((param_1[1].LockCount == 0) ||
         (param_1[1].RecursionCount + uVar12 <= (uint)param_1[1].LockCount)) {
        if (uVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x180054b4c);
          (*pcVar5)();
        }
        uVar18 = 0;
        if (uVar10 != 0) {
          uVar18 = uVar12 / uVar10;
        }
        lVar15 = -1L << ((ulonglong)uVar18 & 0x3f);
        if ((uVar18 & 0x3f) == 0) {
          lVar15 = 0;
        }
        uVar18 = uVar18 + 0x3f;
        uVar10 = uVar18 >> 6;
        uVar14 = (uVar18 & 0xffffffc0) >> 3;
        lVar16 = -1L << ((ulonglong)uVar10 & 0x3f);
        if ((uVar10 & 0x3f) == 0) {
          lVar16 = 0;
        }
        uVar2 = uVar10 + 0x3f >> 3;
        puVar7 = (undefined1 *)thunk_FUN_18005fb88((ulonglong)uVar14);
        puVar8 = (undefined1 *)thunk_FUN_18005fb88((ulonglong)(uVar2 & 0x1ffffff8));
        if ((puVar7 != (undefined1 *)0x0) && (puVar8 != (undefined1 *)0x0)) {
          FUN_180060360(puVar7,0,(ulonglong)uVar14);
          FUN_180060360(puVar8,0,(ulonglong)(uVar2 & 0x1ffffff8));
          *(longlong *)(puVar7 + (ulonglong)(uVar18 >> 6) * 8 + -8) = lVar15;
          *(longlong *)(puVar8 + (ulonglong)(uVar10 + 0x3f >> 6) * 8 + -8) = lVar16;
          pvVar9 = (LPVOID)thunk_FUN_18005fb88(uVar24);
          if (pvVar9 != (LPVOID)0x0) {
            uVar10 = (uint)param_1[1].SpinCount;
            uVar23 = 0;
            if (uVar10 == 0) {
LAB_180054c88:
              ppvVar25 = &param_1[1].LockSemaphore;
              uVar18 = *(uint *)((longlong)&param_1[1].SpinCount + 4);
              if (uVar18 == uVar10) {
                uVar10 = 0x10;
                if (uVar18 != 0) {
                  uVar10 = uVar18 << 1;
                }
                pvVar26 = (HANDLE)thunk_FUN_18005fb88((ulonglong)uVar10 << 6);
                if (pvVar26 != (HANDLE)0x0) {
                  uVar17 = 0;
                  if ((int)param_1[1].SpinCount != 0) {
                    do {
                      uVar18 = (int)uVar17 + 1;
                      puVar22 = (undefined8 *)((longlong)param_1[1].LockSemaphore + uVar17 * 0x40);
                      puVar28 = (undefined8 *)((longlong)pvVar26 + uVar17 * 0x40);
                      uVar30 = *puVar22;
                      uVar29 = puVar22[3];
                      uVar6 = puVar22[2];
                      puVar28[1] = puVar22[1];
                      *puVar28 = uVar30;
                      puVar28[3] = uVar29;
                      puVar28[2] = uVar6;
                      uVar30 = puVar22[4];
                      uVar29 = puVar22[7];
                      uVar6 = puVar22[6];
                      puVar28[5] = puVar22[5];
                      puVar28[4] = uVar30;
                      puVar28[7] = uVar29;
                      puVar28[6] = uVar6;
                      uVar17 = (ulonglong)uVar18;
                    } while (uVar18 < (uint)param_1[1].SpinCount);
                  }
                  thunk_FUN_18005fbc8(param_1[1].OwningThread);
                  param_1[1].OwningThread = pvVar26;
                  param_1[1].LockSemaphore = pvVar26;
                  *(uint *)((longlong)&param_1[1].SpinCount + 4) = uVar10;
                }
              }
              uVar10 = (uint)param_1[1].SpinCount;
              uVar17 = (ulonglong)uVar10;
              if (*(uint *)((longlong)&param_1[1].SpinCount + 4) != uVar10) {
                while ((uint)uVar23 < (uint)uVar17) {
                  uVar21 = (ulonglong)((uint)uVar17 - 1);
                  puVar22 = (undefined8 *)((longlong)param_1[1].LockSemaphore + uVar17 * 0x40);
                  puVar28 = (undefined8 *)((longlong)param_1[1].LockSemaphore + uVar21 * 0x40);
                  uVar30 = *puVar28;
                  uVar29 = puVar28[3];
                  uVar6 = puVar28[2];
                  puVar22[1] = puVar28[1];
                  *puVar22 = uVar30;
                  puVar22[3] = uVar29;
                  puVar22[2] = uVar6;
                  uVar30 = puVar28[4];
                  uVar29 = puVar28[7];
                  uVar6 = puVar28[6];
                  puVar22[5] = puVar28[5];
                  puVar22[4] = uVar30;
                  puVar22[7] = uVar29;
                  puVar22[6] = uVar6;
                  uVar17 = uVar21;
                }
                lVar15 = uVar23 * 0x40;
                *(int *)&param_1[1].SpinCount = (int)param_1[1].SpinCount + 1;
                *(LPVOID *)((longlong)*ppvVar25 + lVar15 + 8) = pvVar9;
                pvVar26 = *ppvVar25;
                *(ulonglong *)((longlong)pvVar26 + lVar15 + 0x18) = uVar24;
                *(LPVOID *)((longlong)pvVar26 + lVar15 + 0x10) = pvVar9;
                *(undefined1 **)((longlong)pvVar26 + lVar15 + 0x28) = puVar8;
                *(undefined1 **)((longlong)pvVar26 + lVar15 + 0x20) = puVar7;
                *(ulonglong *)((longlong)pvVar26 + lVar15 + 0x38) = (ulonglong)uStack_54 << 0x20;
                *(ulonglong *)((longlong)pvVar26 + lVar15 + 0x30) =
                     CONCAT44(uVar2,uVar14) & 0x1ffffff8ffffffff;
                *(LPVOID *)((longlong)*ppvVar25 + lVar15) = pvVar9;
              }
            }
            else {
              uVar18 = 0;
              uVar13 = uVar10;
              do {
                uVar3 = uVar13 + uVar18 >> 1;
                uVar23 = (ulonglong)uVar3;
                pvVar19 = *(LPVOID *)((longlong)param_1[1].LockSemaphore + uVar23 * 0x40);
                if (pvVar19 <= pvVar9) {
                  if (pvVar9 <= pvVar19) break;
                  uVar18 = uVar3 + 1;
                  uVar23 = (ulonglong)(uVar3 + 1);
                  uVar3 = uVar13;
                }
                uVar13 = uVar3;
              } while (uVar13 != uVar18);
              if (((uint)uVar23 == uVar10) ||
                 (puVar22 = (undefined8 *)((longlong)param_1[1].LockSemaphore + uVar23 * 0x40),
                 (LPVOID)*puVar22 != pvVar9)) goto LAB_180054c88;
              puVar22[3] = uVar24;
              puVar22[2] = pvVar9;
              puVar22[5] = puVar8;
              puVar22[4] = puVar7;
              puVar22[7] = (ulonglong)uStack_54 << 0x20;
              puVar22[6] = CONCAT44(uVar2,uVar14) & 0x1ffffff8ffffffff;
            }
            uVar10 = (uint)param_1[1].SpinCount;
            if (uVar10 != 0) {
              uVar18 = 0;
              uVar14 = uVar10;
              do {
                uVar2 = uVar14 + uVar18 >> 1;
                uVar24 = (ulonglong)uVar2;
                pvVar19 = *(LPVOID *)((longlong)param_1[1].LockSemaphore + uVar24 * 0x40);
                if (pvVar19 <= pvVar9) {
                  if (pvVar9 <= pvVar19) break;
                  uVar18 = uVar2 + 1;
                  uVar24 = (ulonglong)(uVar2 + 1);
                  uVar2 = uVar14;
                }
                uVar14 = uVar2;
              } while (uVar14 != uVar18);
              if ((uint)uVar24 != uVar10) {
                pvVar26 = param_1[1].LockSemaphore;
                if ((*(LPVOID *)((longlong)pvVar26 + uVar24 * 0x40) == pvVar9) &&
                   (plVar1 = (longlong *)((longlong)pvVar26 + (uVar24 * 0x40 | 0x10)),
                   plVar1 != (longlong *)0x0)) {
                  param_1[1].RecursionCount = param_1[1].RecursionCount + uVar12;
                  uVar6 = FUN_180054968((longlong)param_1,(longlong)plVar1,param_2);
                  if ((int)uVar6 != -1) {
                    *param_3 = *plVar1 + (ulonglong)
                                         (uint)(*(int *)&param_1[1].DebugInfo * (int)uVar6);
                    lVar15 = *plVar1;
                    *(uint *)(param_3 + 2) = param_2;
                    param_3[1] = lVar15;
                  }
                  break;
                }
              }
            }
            thunk_FUN_18005fbc8(pvVar9);
          }
        }
        thunk_FUN_18005fbc8(puVar7);
        thunk_FUN_18005fbc8(puVar8);
      }
      uVar12 = (uint)param_1[1].SpinCount;
      if (uVar12 == 0) break;
      bVar4 = false;
      uVar10 = uVar12;
      do {
        uVar18 = uVar10 - 1;
        if (uVar18 < uVar12) {
          pvVar26 = param_1[1].LockSemaphore;
          uVar24 = (ulonglong)uVar18 << 6;
          puVar22 = (undefined8 *)((uVar24 | 0x10) + (longlong)pvVar26);
          piVar20 = (int *)((uVar24 | 0x38) + (longlong)pvVar26);
          puVar28 = (undefined8 *)((uVar24 | 0x20) + (longlong)pvVar26);
          puVar27 = (undefined8 *)((uVar24 | 0x28) + (longlong)pvVar26);
        }
        else {
          puVar22 = (undefined8 *)&DAT_00000008;
          piVar20 = (int *)&DAT_00000030;
          puVar28 = (undefined8 *)&DAT_00000018;
          puVar27 = (undefined8 *)&DAT_00000020;
        }
        if (*piVar20 == 0) {
          thunk_FUN_18005fbc8((LPVOID)*puVar22);
          thunk_FUN_18005fbc8((LPVOID)*puVar28);
          thunk_FUN_18005fbc8((LPVOID)*puVar27);
          while( true ) {
            uVar12 = (uint)param_1[1].SpinCount;
            if (uVar12 <= uVar10) break;
            puVar22 = (undefined8 *)
                      ((longlong)param_1[1].LockSemaphore + (ulonglong)(uVar10 - 1) * 0x40);
            puVar28 = (undefined8 *)((longlong)param_1[1].LockSemaphore + (ulonglong)uVar10 * 0x40);
            uVar10 = uVar10 + 1;
            uVar30 = *puVar28;
            uVar29 = puVar28[3];
            uVar6 = puVar28[2];
            puVar22[1] = puVar28[1];
            *puVar22 = uVar30;
            puVar22[3] = uVar29;
            puVar22[2] = uVar6;
            uVar30 = puVar28[4];
            uVar29 = puVar28[7];
            uVar6 = puVar28[6];
            puVar22[5] = puVar28[5];
            puVar22[4] = uVar30;
            puVar22[7] = uVar29;
            puVar22[6] = uVar6;
          }
          uVar12 = uVar12 - 1;
          *(uint *)&param_1[1].SpinCount = uVar12;
          bVar4 = true;
        }
        uVar10 = uVar18;
      } while (uVar18 != 0);
    } while (bVar4);
  }
  lVar15 = *param_3;
  LeaveCriticalSection(param_1);
  return lVar15 != 0;
}

