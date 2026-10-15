/*
 * FUN_1800efec0 at 1800efec0
 * undefined FUN_1800efec0(void)
 * Address ranges: 1800efec0-1800f01cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800efec0(longlong param_1,int param_2,int param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar5 = *(uint *)(param_1 + 0x68);
  if (uVar5 != 0) {
    uVar13 = 0;
    uVar12 = uVar5;
    do {
      uVar6 = uVar12 + uVar13 >> 1;
      uVar14 = (ulonglong)uVar6;
      uVar15 = *(ulonglong *)(*(longlong *)(param_1 + 0x60) + uVar14 * 0x48);
      if (uVar15 <= param_4) {
        if (param_4 <= uVar15) break;
        uVar13 = uVar6 + 1;
        uVar14 = (ulonglong)(uVar6 + 1);
        uVar6 = uVar12;
      }
      uVar12 = uVar6;
    } while (uVar12 != uVar13);
    if ((((uint)uVar14 != uVar5) &&
        (puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x60) + uVar14 * 0x48), *puVar2 == param_4))
       && (puVar1 = puVar2 + 2, puVar1 != (ulonglong *)0x0)) {
      uVar13 = *(uint *)(param_1 + 0x40);
      uVar5 = (uVar13 + param_2) - 1 & -uVar13;
      uVar12 = param_3 - (int)param_4;
      if (uVar13 == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(0xf004,0x1800eff6c);
        (*pcVar8)();
      }
      uVar6 = 0;
      if (uVar13 != 0) {
        uVar6 = (uVar12 + uVar5) / uVar13;
      }
      uVar14 = puVar2[5];
      uVar15 = puVar2[6];
      uVar7 = 0;
      if (uVar13 != 0) {
        uVar7 = uVar12 / uVar13;
      }
      if (uVar7 < uVar6) {
        uVar13 = uVar7;
        do {
          uVar9 = -1L << ((ulonglong)uVar13 & 0x3f);
          uVar12 = (uVar13 & 0xffffffc0) + 0x40;
          if (uVar6 < uVar12) {
            uVar9 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar6 & 0x3f) & uVar9;
          }
          *(ulonglong *)(uVar14 + (ulonglong)(uVar13 >> 6) * 8) =
               *(ulonglong *)(uVar14 + (ulonglong)(uVar13 >> 6) * 8) & (uVar9 ^ 0xffffffffffffffff);
          uVar13 = uVar12;
        } while (uVar12 < uVar6);
      }
      uVar9 = (ulonglong)uVar7 + 0x3f >> 6;
      uVar13 = uVar6 >> 6;
      if ((uint)uVar9 < uVar13) {
        do {
          uVar10 = -1L << (uVar9 & 0x3f);
          uVar12 = ((uint)uVar9 & 0xffffffc0) + 0x40;
          if (uVar13 < uVar12) {
            uVar10 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar13 & 0x3f) & uVar10;
          }
          *(ulonglong *)(uVar15 + (uVar9 >> 6) * 8) =
               *(ulonglong *)(uVar15 + (uVar9 >> 6) * 8) & (uVar10 ^ 0xffffffffffffffff);
          uVar9 = (ulonglong)uVar12;
        } while (uVar12 < uVar13);
      }
      uVar11 = *(ulonglong *)(uVar15 + (ulonglong)(uVar7 >> 0xc) * 8);
      uVar10 = 1L << ((ulonglong)(uVar7 >> 6) & 0x3f);
      uVar9 = uVar11 & (uVar10 ^ 0xffffffffffffffff);
      if (*(longlong *)(uVar14 + (ulonglong)(uVar7 >> 6) * 8) == -1) {
        uVar9 = uVar10 | uVar11;
      }
      *(ulonglong *)(uVar15 + (ulonglong)(uVar7 >> 0xc) * 8) = uVar9;
      uVar12 = uVar13 - 1;
      if ((uVar6 & 0x3f) != 0) {
        uVar12 = uVar13;
      }
      uVar11 = *(ulonglong *)(uVar15 + (ulonglong)(uVar12 >> 6) * 8);
      uVar10 = 1L << ((ulonglong)uVar12 & 0x3f);
      uVar9 = uVar11 & (uVar10 ^ 0xffffffffffffffff);
      if (*(longlong *)(uVar14 + (ulonglong)uVar12 * 8) == -1) {
        uVar9 = uVar10 | uVar11;
      }
      *(ulonglong *)(uVar15 + (ulonglong)(uVar12 >> 6) * 8) = uVar9;
      uVar13 = *(uint *)(param_1 + 0x40);
      if (uVar13 == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(0xf004,0x1800f0088);
        (*pcVar8)();
      }
      uVar12 = 0;
      if (uVar13 != 0) {
        uVar12 = uVar5 / uVar13;
      }
      *(uint *)(puVar2 + 8) = (int)puVar2[8] - uVar12;
      *(uint *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) - uVar5;
      if ((((int)puVar2[8] == 0) && ((ulonglong)*(uint *)(param_1 + 0x44) < puVar2[4])) &&
         (*(int *)(param_1 + 0x48) == 0)) {
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - (int)puVar2[4];
        FUN_1800f1570(*(undefined8 *)(param_1 + 0x38),*puVar1,1);
        (**(code **)(*(longlong *)*puVar1 + 0x10))();
        thunk_FUN_180102fc0(puVar2[5]);
        thunk_FUN_180102fc0(puVar2[6]);
        uVar5 = *(uint *)(param_1 + 0x68);
        if (uVar5 != 0) {
          uVar13 = 0;
          uVar12 = uVar5;
          do {
            uVar6 = uVar12 + uVar13 >> 1;
            uVar14 = (ulonglong)uVar6;
            uVar15 = *(ulonglong *)(*(longlong *)(param_1 + 0x60) + uVar14 * 0x48);
            if (uVar15 <= param_4) {
              if (param_4 <= uVar15) break;
              uVar13 = uVar6 + 1;
              uVar14 = (ulonglong)(uVar6 + 1);
              uVar6 = uVar12;
            }
            uVar12 = uVar6;
          } while (uVar12 != uVar13);
          if (((uint)uVar14 != uVar5) &&
             (*(ulonglong *)(*(longlong *)(param_1 + 0x60) + uVar14 * 0x48) == param_4)) {
            uVar13 = (uint)uVar14 + 1;
            if (uVar13 < uVar5) {
              do {
                uVar14 = (ulonglong)uVar13;
                puVar3 = (undefined8 *)
                         (*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar13 - 1) * 0x48);
                uVar13 = uVar13 + 1;
                puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + uVar14 * 0x48);
                uVar18 = *puVar4;
                uVar17 = puVar4[3];
                uVar16 = puVar4[2];
                puVar3[1] = puVar4[1];
                *puVar3 = uVar18;
                puVar3[3] = uVar17;
                puVar3[2] = uVar16;
                uVar18 = puVar4[4];
                uVar17 = puVar4[7];
                uVar16 = puVar4[6];
                puVar3[5] = puVar4[5];
                puVar3[4] = uVar18;
                puVar3[7] = uVar17;
                puVar3[6] = uVar16;
                puVar3[8] = puVar4[8];
              } while (uVar13 < *(uint *)(param_1 + 0x68));
            }
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
          }
        }
      }
    }
  }
  return;
}

