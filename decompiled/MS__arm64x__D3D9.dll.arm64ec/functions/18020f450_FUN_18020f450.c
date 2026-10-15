/*
 * FUN_18020f450 at 18020f450
 * undefined FUN_18020f450(void)
 * Address ranges: 18020f450-18020f773
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18020f450(longlong param_1,int param_2,int param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  code *extraout_x11;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar4 = *(uint *)(param_1 + 0x68);
  if (uVar4 != 0) {
    uVar12 = 0;
    uVar11 = uVar4;
    do {
      uVar5 = uVar11 + uVar12 >> 1;
      uVar13 = (ulonglong)uVar5;
      uVar14 = *(ulonglong *)(*(longlong *)(param_1 + 0x60) + uVar13 * 0x48);
      if (uVar14 <= param_4) {
        if (param_4 <= uVar14) break;
        uVar12 = uVar5 + 1;
        uVar13 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar11;
      }
      uVar11 = uVar5;
    } while (uVar11 != uVar12);
    if ((((uint)uVar13 != uVar4) &&
        (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x60) + uVar13 * 0x48), *puVar1 == param_4))
       && (puVar1 + 2 != (ulonglong *)0x0)) {
      uVar12 = *(uint *)(param_1 + 0x40);
      uVar4 = (uVar12 + param_2) - 1 & -uVar12;
      uVar11 = param_3 - (int)param_4;
      if (uVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x18020f4fc);
        (*pcVar7)();
      }
      uVar5 = 0;
      if (uVar12 != 0) {
        uVar5 = (uVar11 + uVar4) / uVar12;
      }
      uVar6 = 0;
      if (uVar12 != 0) {
        uVar6 = uVar11 / uVar12;
      }
      uVar13 = puVar1[5];
      uVar14 = puVar1[6];
      if (uVar6 < uVar5) {
        uVar12 = uVar6;
        do {
          uVar8 = -1L << ((ulonglong)uVar12 & 0x3f);
          uVar11 = (uVar12 & 0xffffffc0) + 0x40;
          if (uVar5 < uVar11) {
            uVar8 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar5 & 0x3f) & uVar8;
          }
          *(ulonglong *)(uVar13 + (ulonglong)(uVar12 >> 6) * 8) =
               *(ulonglong *)(uVar13 + (ulonglong)(uVar12 >> 6) * 8) & (uVar8 ^ 0xffffffffffffffff);
          uVar12 = uVar11;
        } while (uVar11 < uVar5);
      }
      uVar8 = (ulonglong)uVar6 + 0x3f >> 6;
      uVar12 = uVar5 >> 6;
      if ((uint)uVar8 < uVar12) {
        do {
          uVar9 = -1L << (uVar8 & 0x3f);
          uVar11 = ((uint)uVar8 & 0xffffffc0) + 0x40;
          if (uVar12 < uVar11) {
            uVar9 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar12 & 0x3f) & uVar9;
          }
          *(ulonglong *)(uVar14 + (uVar8 >> 6) * 8) =
               *(ulonglong *)(uVar14 + (uVar8 >> 6) * 8) & (uVar9 ^ 0xffffffffffffffff);
          uVar8 = (ulonglong)uVar11;
        } while (uVar11 < uVar12);
      }
      uVar10 = *(ulonglong *)(uVar14 + (ulonglong)(uVar6 >> 0xc) * 8);
      uVar9 = 1L << ((ulonglong)(uVar6 >> 6) & 0x3f);
      uVar8 = uVar10 & (uVar9 ^ 0xffffffffffffffff);
      if (*(longlong *)(uVar13 + (ulonglong)(uVar6 >> 6) * 8) == -1) {
        uVar8 = uVar9 | uVar10;
      }
      *(ulonglong *)(uVar14 + (ulonglong)(uVar6 >> 0xc) * 8) = uVar8;
      uVar11 = uVar12 - 1;
      if ((uVar5 & 0x3f) != 0) {
        uVar11 = uVar12;
      }
      uVar9 = 1L << ((ulonglong)uVar11 & 0x3f);
      uVar10 = *(ulonglong *)(uVar14 + (ulonglong)(uVar11 >> 6) * 8);
      uVar8 = uVar10 & (uVar9 ^ 0xffffffffffffffff);
      if (*(longlong *)(uVar13 + (ulonglong)uVar11 * 8) == -1) {
        uVar8 = uVar9 | uVar10;
      }
      *(ulonglong *)(uVar14 + (ulonglong)(uVar11 >> 6) * 8) = uVar8;
      uVar12 = *(uint *)(param_1 + 0x40);
      if (uVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x18020f618);
        (*pcVar7)();
      }
      uVar11 = 0;
      if (uVar12 != 0) {
        uVar11 = uVar4 / uVar12;
      }
      *(uint *)(puVar1 + 8) = (int)puVar1[8] - uVar11;
      *(uint *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) - uVar4;
      if ((((int)puVar1[8] == 0) && ((ulonglong)*(uint *)(param_1 + 0x44) < puVar1[4])) &&
         (*(int *)(param_1 + 0x48) == 0)) {
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - (int)puVar1[4];
        FUN_18020dc08(*(undefined8 *)(param_1 + 0x38),puVar1[2],1);
        (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
        (*extraout_x11)();
        FUN_1802229d8(puVar1[5]);
        FUN_1802229d8(puVar1[6]);
        uVar4 = *(uint *)(param_1 + 0x68);
        if (uVar4 != 0) {
          uVar12 = 0;
          uVar11 = uVar4;
          do {
            uVar5 = uVar11 + uVar12 >> 1;
            uVar13 = (ulonglong)uVar5;
            uVar14 = *(ulonglong *)(*(longlong *)(param_1 + 0x60) + uVar13 * 0x48);
            if (uVar14 <= param_4) {
              if (param_4 <= uVar14) break;
              uVar12 = uVar5 + 1;
              uVar13 = (ulonglong)(uVar5 + 1);
              uVar5 = uVar11;
            }
            uVar11 = uVar5;
          } while (uVar11 != uVar12);
          if (((uint)uVar13 != uVar4) &&
             (*(ulonglong *)(*(longlong *)(param_1 + 0x60) + uVar13 * 0x48) == param_4)) {
            uVar12 = (uint)uVar13 + 1;
            if (uVar12 < uVar4) {
              do {
                uVar13 = (ulonglong)uVar12;
                puVar2 = (undefined8 *)
                         (*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar12 - 1) * 0x48);
                uVar12 = uVar12 + 1;
                puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + uVar13 * 0x48);
                uVar15 = *puVar3;
                uVar17 = puVar3[3];
                uVar16 = puVar3[2];
                puVar2[1] = puVar3[1];
                *puVar2 = uVar15;
                puVar2[3] = uVar17;
                puVar2[2] = uVar16;
                uVar15 = puVar3[4];
                uVar17 = puVar3[7];
                uVar16 = puVar3[6];
                puVar2[5] = puVar3[5];
                puVar2[4] = uVar15;
                puVar2[7] = uVar17;
                puVar2[6] = uVar16;
                puVar2[8] = puVar3[8];
              } while (uVar12 < *(uint *)(param_1 + 0x68));
            }
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
          }
        }
      }
    }
  }
  return;
}

