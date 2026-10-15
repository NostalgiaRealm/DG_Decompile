/*
 * FUN_180054f58 at 180054f58
 * undefined __cdecl FUN_180054f58(LPCRITICAL_SECTION param_1, int param_2, int param_3, ulonglong param_4)
 * Address ranges: 180054f58-18005526f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180054f58(LPCRITICAL_SECTION param_1,int param_2,int param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  HANDLE pvVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  EnterCriticalSection(param_1);
  uVar3 = (uint)param_1[1].SpinCount;
  if (uVar3 != 0) {
    uVar11 = 0;
    uVar10 = uVar3;
    do {
      uVar4 = uVar10 + uVar11 >> 1;
      uVar13 = (ulonglong)uVar4;
      uVar15 = *(ulonglong *)((longlong)param_1[1].LockSemaphore + uVar13 * 0x40);
      if (uVar15 <= param_4) {
        if (param_4 <= uVar15) break;
        uVar11 = uVar4 + 1;
        uVar13 = (ulonglong)(uVar4 + 1);
        uVar4 = uVar10;
      }
      uVar10 = uVar4;
    } while (uVar10 != uVar11);
    if ((uint)uVar13 != uVar3) {
      pvVar16 = param_1[1].LockSemaphore;
      uVar13 = uVar13 * 0x40;
      if ((*(ulonglong *)((longlong)pvVar16 + uVar13) == param_4) &&
         (puVar1 = (undefined8 *)((longlong)pvVar16 + (uVar13 | 0x10)), puVar1 != (undefined8 *)0x0)
         ) {
        uVar11 = *(uint *)&param_1[1].DebugInfo;
        uVar15 = uVar13 | 0x38;
        uVar3 = (uVar11 + param_2) - 1 & -uVar11;
        if (uVar3 != 0) {
          uVar10 = param_3 - (int)param_4;
          if (uVar11 == 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x180055030);
            (*pcVar6)();
          }
          uVar4 = 0;
          if (uVar11 != 0) {
            uVar4 = (uVar10 + uVar3) / uVar11;
          }
          lVar12 = *(longlong *)((longlong)pvVar16 + (uVar13 | 0x28));
          uVar5 = 0;
          if (uVar11 != 0) {
            uVar5 = uVar10 / uVar11;
          }
          lVar14 = *(longlong *)((longlong)pvVar16 + (uVar13 | 0x20));
          if (uVar5 < uVar4) {
            uVar11 = uVar5;
            do {
              uVar7 = -1L << ((ulonglong)uVar11 & 0x3f);
              uVar10 = (uVar11 & 0xffffffc0) + 0x40;
              if (uVar4 < uVar10) {
                uVar7 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar4 & 0x3f) & uVar7;
              }
              *(ulonglong *)(lVar14 + (ulonglong)(uVar11 >> 6) * 8) =
                   *(ulonglong *)(lVar14 + (ulonglong)(uVar11 >> 6) * 8) &
                   (uVar7 ^ 0xffffffffffffffff);
              uVar11 = uVar10;
            } while (uVar10 < uVar4);
          }
          uVar7 = (ulonglong)uVar5 + 0x3f >> 6;
          uVar11 = uVar4 >> 6;
          if ((uint)uVar7 < uVar11) {
            do {
              uVar8 = -1L << (uVar7 & 0x3f);
              uVar10 = ((uint)uVar7 & 0xffffffc0) + 0x40;
              if (uVar11 < uVar10) {
                uVar8 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar11 & 0x3f) & uVar8;
              }
              *(ulonglong *)(lVar12 + (uVar7 >> 6) * 8) =
                   *(ulonglong *)(lVar12 + (uVar7 >> 6) * 8) & (uVar8 ^ 0xffffffffffffffff);
              uVar7 = (ulonglong)uVar10;
            } while (uVar10 < uVar11);
          }
          uVar9 = *(ulonglong *)(lVar12 + (ulonglong)(uVar5 >> 0xc) * 8);
          uVar8 = 1L << ((ulonglong)(uVar5 >> 6) & 0x3f);
          uVar7 = uVar9 & (uVar8 ^ 0xffffffffffffffff);
          if (*(longlong *)(lVar14 + (ulonglong)(uVar5 >> 6) * 8) == -1) {
            uVar7 = uVar8 | uVar9;
          }
          *(ulonglong *)(lVar12 + (ulonglong)(uVar5 >> 0xc) * 8) = uVar7;
          uVar10 = uVar11 - 1;
          if ((uVar4 & 0x3f) != 0) {
            uVar10 = uVar11;
          }
          uVar9 = *(ulonglong *)(lVar12 + (ulonglong)(uVar10 >> 6) * 8);
          uVar8 = 1L << ((ulonglong)uVar10 & 0x3f);
          uVar7 = uVar9 & (uVar8 ^ 0xffffffffffffffff);
          if (*(longlong *)(lVar14 + (ulonglong)uVar10 * 8) == -1) {
            uVar7 = uVar8 | uVar9;
          }
          *(ulonglong *)(lVar12 + (ulonglong)(uVar10 >> 6) * 8) = uVar7;
          uVar11 = *(uint *)&param_1[1].DebugInfo;
          if (uVar11 == 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x180055150);
            (*pcVar6)();
          }
          uVar10 = 0;
          if (uVar11 != 0) {
            uVar10 = uVar3 / uVar11;
          }
          *(uint *)((longlong)pvVar16 + uVar15) = *(int *)((longlong)pvVar16 + uVar15) - uVar10;
        }
        if (((*(int *)((longlong)pvVar16 + uVar15) == 0) &&
            ((ulonglong)*(uint *)((longlong)&param_1[1].DebugInfo + 4) <
             *(ulonglong *)((longlong)pvVar16 + (uVar13 | 0x18)))) && (param_1[1].LockCount == 0)) {
          thunk_FUN_18005fbc8((LPVOID)*puVar1);
          thunk_FUN_18005fbc8(*(LPVOID *)((longlong)pvVar16 + (uVar13 | 0x20)));
          thunk_FUN_18005fbc8(*(LPVOID *)((longlong)pvVar16 + (uVar13 | 0x28)));
          uVar3 = (uint)param_1[1].SpinCount;
          if (uVar3 != 0) {
            uVar11 = 0;
            uVar10 = uVar3;
            do {
              uVar4 = uVar10 + uVar11 >> 1;
              uVar13 = (ulonglong)uVar4;
              uVar15 = *(ulonglong *)((longlong)param_1[1].LockSemaphore + uVar13 * 0x40);
              if (uVar15 <= param_4) {
                if (param_4 <= uVar15) break;
                uVar11 = uVar4 + 1;
                uVar13 = (ulonglong)(uVar4 + 1);
                uVar4 = uVar10;
              }
              uVar10 = uVar4;
            } while (uVar10 != uVar11);
            if (((uint)uVar13 != uVar3) &&
               (*(ulonglong *)((longlong)param_1[1].LockSemaphore + uVar13 * 0x40) == param_4)) {
              uVar11 = (uint)uVar13 + 1;
              if (uVar11 < uVar3) {
                do {
                  puVar1 = (undefined8 *)
                           ((longlong)param_1[1].LockSemaphore + (ulonglong)(uVar11 - 1) * 0x40);
                  puVar2 = (undefined8 *)
                           ((longlong)param_1[1].LockSemaphore + (ulonglong)uVar11 * 0x40);
                  uVar11 = uVar11 + 1;
                  uVar19 = *puVar2;
                  uVar18 = puVar2[3];
                  uVar17 = puVar2[2];
                  puVar1[1] = puVar2[1];
                  *puVar1 = uVar19;
                  puVar1[3] = uVar18;
                  puVar1[2] = uVar17;
                  uVar19 = puVar2[4];
                  uVar18 = puVar2[7];
                  uVar17 = puVar2[6];
                  puVar1[5] = puVar2[5];
                  puVar1[4] = uVar19;
                  puVar1[7] = uVar18;
                  puVar1[6] = uVar17;
                } while (uVar11 < (uint)param_1[1].SpinCount);
              }
              *(int *)&param_1[1].SpinCount = (int)param_1[1].SpinCount + -1;
            }
          }
        }
      }
    }
  }
  LeaveCriticalSection(param_1);
  return;
}

