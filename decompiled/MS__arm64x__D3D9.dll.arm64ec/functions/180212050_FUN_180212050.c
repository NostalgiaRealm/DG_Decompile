/*
 * FUN_180212050 at 180212050
 * undefined FUN_180212050(void)
 * Address ranges: 180212050-180212357
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180212050(longlong param_1,int param_2,int param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  thunk_FUN_1802236f8();
  uVar3 = *(uint *)(param_1 + 0x48);
  if (uVar3 != 0) {
    uVar10 = 0;
    uVar9 = uVar3;
    do {
      uVar4 = uVar9 + uVar10 >> 1;
      uVar12 = (ulonglong)uVar4;
      uVar14 = *(ulonglong *)(*(longlong *)(param_1 + 0x40) + uVar12 * 0x40);
      if (uVar14 <= param_4) {
        if (param_4 <= uVar14) break;
        uVar10 = uVar4 + 1;
        uVar12 = (ulonglong)(uVar4 + 1);
        uVar4 = uVar9;
      }
      uVar9 = uVar4;
    } while (uVar9 != uVar10);
    if ((uint)uVar12 != uVar3) {
      lVar15 = *(longlong *)(param_1 + 0x40);
      uVar12 = uVar12 * 0x40;
      if ((*(ulonglong *)(lVar15 + uVar12) == param_4) &&
         (puVar1 = (undefined8 *)(lVar15 + (uVar12 | 0x10)), puVar1 != (undefined8 *)0x0)) {
        uVar10 = *(uint *)(param_1 + 0x28);
        uVar14 = uVar12 | 0x38;
        uVar3 = (uVar10 + param_2) - 1 & -uVar10;
        if (uVar3 != 0) {
          uVar9 = param_3 - (int)param_4;
          if (uVar10 == 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x180212120);
            (*pcVar6)();
          }
          uVar4 = 0;
          if (uVar10 != 0) {
            uVar4 = (uVar9 + uVar3) / uVar10;
          }
          lVar11 = *(longlong *)(lVar15 + (uVar12 | 0x28));
          uVar5 = 0;
          if (uVar10 != 0) {
            uVar5 = uVar9 / uVar10;
          }
          lVar13 = *(longlong *)(lVar15 + (uVar12 | 0x20));
          if (uVar5 < uVar4) {
            uVar10 = uVar5;
            do {
              uVar7 = -1L << ((ulonglong)uVar10 & 0x3f);
              uVar9 = (uVar10 & 0xffffffc0) + 0x40;
              if (uVar4 < uVar9) {
                uVar7 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar4 & 0x3f) & uVar7;
              }
              *(ulonglong *)(lVar13 + (ulonglong)(uVar10 >> 6) * 8) =
                   *(ulonglong *)(lVar13 + (ulonglong)(uVar10 >> 6) * 8) &
                   (uVar7 ^ 0xffffffffffffffff);
              uVar10 = uVar9;
            } while (uVar9 < uVar4);
          }
          uVar7 = (ulonglong)uVar5 + 0x3f >> 6;
          uVar10 = uVar4 >> 6;
          if ((uint)uVar7 < uVar10) {
            do {
              uVar8 = -1L << (uVar7 & 0x3f);
              uVar9 = ((uint)uVar7 & 0xffffffc0) + 0x40;
              if (uVar10 < uVar9) {
                uVar8 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar10 & 0x3f) & uVar8;
              }
              *(ulonglong *)(lVar11 + (uVar7 >> 6) * 8) =
                   *(ulonglong *)(lVar11 + (uVar7 >> 6) * 8) & (uVar8 ^ 0xffffffffffffffff);
              uVar7 = (ulonglong)uVar9;
            } while (uVar9 < uVar10);
          }
          uVar8 = *(ulonglong *)(lVar11 + (ulonglong)(uVar5 >> 0xc) * 8);
          uVar16 = 1L << ((ulonglong)(uVar5 >> 6) & 0x3f);
          uVar7 = uVar8 & (uVar16 ^ 0xffffffffffffffff);
          if (*(longlong *)(lVar13 + (ulonglong)(uVar5 >> 6) * 8) == -1) {
            uVar7 = uVar16 | uVar8;
          }
          *(ulonglong *)(lVar11 + (ulonglong)(uVar5 >> 0xc) * 8) = uVar7;
          uVar9 = uVar10 - 1;
          if ((uVar4 & 0x3f) != 0) {
            uVar9 = uVar10;
          }
          uVar8 = 1L << ((ulonglong)uVar9 & 0x3f);
          uVar16 = *(ulonglong *)(lVar11 + (ulonglong)(uVar9 >> 6) * 8);
          uVar7 = uVar16 & (uVar8 ^ 0xffffffffffffffff);
          if (*(longlong *)(lVar13 + (ulonglong)uVar9 * 8) == -1) {
            uVar7 = uVar8 | uVar16;
          }
          *(ulonglong *)(lVar11 + (ulonglong)(uVar9 >> 6) * 8) = uVar7;
          uVar10 = *(uint *)(param_1 + 0x28);
          if (uVar10 == 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x180212240);
            (*pcVar6)();
          }
          uVar9 = 0;
          if (uVar10 != 0) {
            uVar9 = uVar3 / uVar10;
          }
          *(uint *)(lVar15 + uVar14) = *(int *)(lVar15 + uVar14) - uVar9;
        }
        if (((*(int *)(lVar15 + uVar14) == 0) &&
            ((ulonglong)*(uint *)(param_1 + 0x2c) < *(ulonglong *)(lVar15 + (uVar12 | 0x18)))) &&
           (*(int *)(param_1 + 0x30) == 0)) {
          FUN_1802229d8(*puVar1);
          FUN_1802229d8(*(undefined8 *)(lVar15 + (uVar12 | 0x20)));
          FUN_1802229d8(*(undefined8 *)(lVar15 + (uVar12 | 0x28)));
          uVar3 = *(uint *)(param_1 + 0x48);
          if (uVar3 != 0) {
            uVar10 = 0;
            uVar9 = uVar3;
            do {
              uVar4 = uVar9 + uVar10 >> 1;
              uVar12 = (ulonglong)uVar4;
              uVar14 = *(ulonglong *)(*(longlong *)(param_1 + 0x40) + uVar12 * 0x40);
              if (uVar14 <= param_4) {
                if (param_4 <= uVar14) break;
                uVar10 = uVar4 + 1;
                uVar12 = (ulonglong)(uVar4 + 1);
                uVar4 = uVar9;
              }
              uVar9 = uVar4;
            } while (uVar9 != uVar10);
            if (((uint)uVar12 != uVar3) &&
               (*(ulonglong *)(*(longlong *)(param_1 + 0x40) + uVar12 * 0x40) == param_4)) {
              uVar10 = (uint)uVar12 + 1;
              if (uVar10 < uVar3) {
                do {
                  puVar1 = (undefined8 *)
                           (*(longlong *)(param_1 + 0x40) + (ulonglong)(uVar10 - 1) * 0x40);
                  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar10 * 0x40);
                  uVar10 = uVar10 + 1;
                  uVar17 = *puVar2;
                  uVar19 = puVar2[3];
                  uVar18 = puVar2[2];
                  puVar1[1] = puVar2[1];
                  *puVar1 = uVar17;
                  puVar1[3] = uVar19;
                  puVar1[2] = uVar18;
                  uVar17 = puVar2[4];
                  uVar19 = puVar2[7];
                  uVar18 = puVar2[6];
                  puVar1[5] = puVar2[5];
                  puVar1[4] = uVar17;
                  puVar1[7] = uVar19;
                  puVar1[6] = uVar18;
                } while (uVar10 < *(uint *)(param_1 + 0x48));
              }
              *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
            }
          }
        }
      }
    }
  }
  thunk_FUN_18022370c(param_1);
  return;
}

