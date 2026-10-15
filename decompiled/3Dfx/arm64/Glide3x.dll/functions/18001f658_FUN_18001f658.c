/*
 * FUN_18001f658 at 18001f658
 * undefined __cdecl FUN_18001f658(undefined8 * param_1)
 * Address ranges: 18001f658-18001f8fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001f658(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  byte bVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  plVar13 = (longlong *)*param_1;
  uVar8 = *(uint *)(param_1 + 1);
  uVar10 = *(uint *)((longlong)param_1 + 0xc);
  plVar18 = (longlong *)param_1[2];
  bVar6 = *(byte *)(param_1 + 3);
  *(undefined4 *)((longlong)plVar13 + 0x43fc) = *(undefined4 *)((longlong)param_1 + 0x1c);
  (**(code **)(*(longlong *)plVar13[0x660] + 0x50))((longlong *)plVar13[0x660],0,2);
  bVar6 = FUN_18000c0a0((longlong *)plVar13[0x661],uVar8,uVar10,plVar18,0,(uint)bVar6);
  if ((bVar6 & 1) != 0) {
    if ((*(uint *)((longlong)plVar13 + 0x2be4) >> 1 & 1) != 0) {
      (**(code **)(*plVar13 + 0x2e0))(plVar13);
    }
    (**(code **)(*(longlong *)plVar13[0x660] + 0x90))();
  }
  lVar19 = param_1[4];
  if (lVar19 != 0) {
    lVar14 = plVar13[0x668];
    uVar17 = param_1[5];
    iVar2 = *(int *)(param_1 + 6);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar14 + 0x17f0));
    uVar8 = *(uint *)(lVar14 + 0x1838);
    if (uVar8 != 0) {
      uVar10 = 0;
      uVar9 = uVar8;
      do {
        uVar3 = uVar9 + uVar10 >> 1;
        uVar11 = (ulonglong)uVar3;
        uVar12 = *(ulonglong *)(*(longlong *)(lVar14 + 0x1830) + uVar11 * 0x40);
        if (uVar12 <= uVar17) {
          if (uVar17 <= uVar12) break;
          uVar10 = uVar3 + 1;
          uVar11 = (ulonglong)(uVar3 + 1);
          uVar3 = uVar9;
        }
        uVar9 = uVar3;
      } while (uVar9 != uVar10);
      if ((uint)uVar11 != uVar8) {
        lVar16 = *(longlong *)(lVar14 + 0x1830);
        uVar11 = uVar11 * 0x40;
        if ((*(ulonglong *)(lVar16 + uVar11) == uVar17) &&
           (puVar7 = (undefined8 *)(lVar16 + (uVar11 | 0x10)), puVar7 != (undefined8 *)0x0)) {
          uVar10 = *(uint *)(lVar14 + 0x1818);
          uVar20 = uVar11 | 0x28;
          uVar15 = uVar11 | 0x20;
          uVar12 = uVar11 | 0x38;
          uVar8 = (uVar10 + iVar2) - 1 & -uVar10;
          if (uVar8 != 0) {
            uVar9 = (int)lVar19 - (int)uVar17;
            if (uVar10 == 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x18001f7bc);
              (*pcVar5)();
            }
            uVar3 = 0;
            if (uVar10 != 0) {
              uVar3 = (uVar8 + uVar9) / uVar10;
            }
            uVar4 = 0;
            if (uVar10 != 0) {
              uVar4 = uVar9 / uVar10;
            }
            uVar11 = FUN_180061510(uVar11,*(longlong *)(lVar16 + uVar15),
                                   *(longlong *)(lVar16 + uVar20),uVar4,(ulonglong)uVar3);
            uVar10 = *(uint *)(lVar14 + 0x1818);
            if (uVar10 == 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x18001f7dc);
              (*pcVar5)();
            }
            uVar9 = 0;
            if (uVar10 != 0) {
              uVar9 = uVar8 / uVar10;
            }
            *(uint *)(lVar16 + uVar12) = *(int *)(lVar16 + uVar12) - uVar9;
          }
          if (((*(int *)(lVar16 + uVar12) == 0) &&
              ((ulonglong)*(uint *)(lVar14 + 0x181c) < *(ulonglong *)(lVar16 + (uVar11 | 0x18)))) &&
             (*(int *)(lVar14 + 0x1820) == 0)) {
            thunk_FUN_180063700((LPVOID)*puVar7);
            thunk_FUN_180063700(*(LPVOID *)(lVar16 + uVar15));
            thunk_FUN_180063700(*(LPVOID *)(lVar16 + uVar20));
            uVar8 = *(uint *)(lVar14 + 0x1838);
            if (uVar8 != 0) {
              uVar10 = 0;
              uVar9 = uVar8;
              do {
                uVar3 = uVar9 + uVar10 >> 1;
                uVar11 = (ulonglong)uVar3;
                uVar12 = *(ulonglong *)(*(longlong *)(lVar14 + 0x1830) + uVar11 * 0x40);
                if (uVar12 <= uVar17) {
                  if (uVar17 <= uVar12) break;
                  uVar10 = uVar3 + 1;
                  uVar11 = (ulonglong)(uVar3 + 1);
                  uVar3 = uVar9;
                }
                uVar9 = uVar3;
              } while (uVar9 != uVar10);
              if (((uint)uVar11 != uVar8) &&
                 (*(ulonglong *)(*(longlong *)(lVar14 + 0x1830) + uVar11 * 0x40) == uVar17)) {
                uVar10 = (uint)uVar11 + 1;
                if (uVar10 < uVar8) {
                  do {
                    puVar7 = (undefined8 *)
                             (*(longlong *)(lVar14 + 0x1830) + (ulonglong)(uVar10 - 1) * 0x40);
                    puVar1 = (undefined8 *)
                             (*(longlong *)(lVar14 + 0x1830) + (ulonglong)uVar10 * 0x40);
                    uVar10 = uVar10 + 1;
                    uVar23 = *puVar1;
                    uVar22 = puVar1[3];
                    uVar21 = puVar1[2];
                    puVar7[1] = puVar1[1];
                    *puVar7 = uVar23;
                    puVar7[3] = uVar22;
                    puVar7[2] = uVar21;
                    uVar23 = puVar1[4];
                    uVar22 = puVar1[7];
                    uVar21 = puVar1[6];
                    puVar7[5] = puVar1[5];
                    puVar7[4] = uVar23;
                    puVar7[7] = uVar22;
                    puVar7[6] = uVar21;
                  } while (uVar10 < *(uint *)(lVar14 + 0x1838));
                }
                *(int *)(lVar14 + 0x1838) = *(int *)(lVar14 + 0x1838) + -1;
              }
            }
          }
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar14 + 0x17f0));
  }
  return;
}

