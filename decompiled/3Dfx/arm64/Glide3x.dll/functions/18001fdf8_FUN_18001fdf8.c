/*
 * FUN_18001fdf8 at 18001fdf8
 * undefined __cdecl FUN_18001fdf8(undefined8 * param_1)
 * Address ranges: 18001fdf8-1800200a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001fdf8(undefined8 *param_1)

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
  longlong lVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  longlong local_50 [2];
  
  local_50[0] = param_1[2];
  plVar13 = (longlong *)*param_1;
  uVar8 = *(uint *)(param_1 + 1);
  uVar10 = *(uint *)((longlong)param_1 + 0xc);
  uVar9 = *(uint *)(param_1 + 3);
  bVar6 = *(byte *)((longlong)param_1 + 0x1c);
  *(undefined4 *)((longlong)plVar13 + 0x43fc) = *(undefined4 *)(param_1 + 4);
  if (uVar9 != 0) {
    (**(code **)(*(longlong *)plVar13[0x660] + 0x50))((longlong *)plVar13[0x660],0,2);
    bVar6 = FUN_18000c0a0((longlong *)plVar13[0x661],uVar8,uVar10,local_50,uVar9,(uint)bVar6);
    if ((bVar6 & 1) != 0) {
      if ((*(uint *)((longlong)plVar13 + 0x2be4) >> 1 & 1) != 0) {
        (**(code **)(*plVar13 + 0x2e0))(plVar13);
      }
      (**(code **)(*(longlong *)plVar13[0x660] + 0x90))();
    }
  }
  lVar18 = *(longlong *)((longlong)param_1 + 0x24);
  if (lVar18 != 0) {
    lVar14 = plVar13[0x668];
    uVar17 = *(ulonglong *)((longlong)param_1 + 0x2c);
    iVar2 = *(int *)((longlong)param_1 + 0x34);
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
          uVar19 = uVar11 | 0x28;
          uVar15 = uVar11 | 0x20;
          uVar12 = uVar11 | 0x38;
          uVar8 = (uVar10 + iVar2) - 1 & -uVar10;
          if (uVar8 != 0) {
            uVar9 = (int)lVar18 - (int)uVar17;
            if (uVar10 == 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x18001ff68);
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
                                   *(longlong *)(lVar16 + uVar19),uVar4,(ulonglong)uVar3);
            uVar10 = *(uint *)(lVar14 + 0x1818);
            if (uVar10 == 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x18001ff88);
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
            thunk_FUN_180063700(*(LPVOID *)(lVar16 + uVar19));
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
                    uVar22 = *puVar1;
                    uVar21 = puVar1[3];
                    uVar20 = puVar1[2];
                    puVar7[1] = puVar1[1];
                    *puVar7 = uVar22;
                    puVar7[3] = uVar21;
                    puVar7[2] = uVar20;
                    uVar22 = puVar1[4];
                    uVar21 = puVar1[7];
                    uVar20 = puVar1[6];
                    puVar7[5] = puVar1[5];
                    puVar7[4] = uVar22;
                    puVar7[7] = uVar21;
                    puVar7[6] = uVar20;
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

