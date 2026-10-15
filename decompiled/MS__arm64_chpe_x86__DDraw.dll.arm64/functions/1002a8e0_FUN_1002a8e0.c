/*
 * FUN_1002a8e0 at 1002a8e0
 * undefined FUN_1002a8e0(void)
 * Address ranges: 1002a8e0-1002abc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002a8e0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  code *extraout_w11;
  ulonglong uVar18;
  uint local_40 [4];
  
  iVar4 = *param_1;
  iVar5 = param_1[1];
  iVar6 = param_1[2];
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
            (param_1[9],param_1[10],param_1[3],param_1[4],param_1[5],param_1[6],param_1[7],
             param_1[8]);
  (*extraout_w11)(iVar4,iVar5);
  FUN_1006f598(iVar4,iVar6,0);
  iVar6 = param_1[0xc];
  if (iVar6 != 0) {
    uVar7 = param_1[0xd];
    iVar8 = param_1[0xe];
    iVar4 = iVar4 + *(int *)(iVar5 + 8) * 0x16c0;
    (*(code *)PTR_FUN_100ba0a0)(iVar4 + 0x1bb0);
    local_40[0] = uVar7;
    puVar11 = (undefined4 *)FUN_10083ea0(iVar4 + 0x1bd8,local_40);
    if (puVar11 != (undefined4 *)0x0) {
      puVar12 = (uint *)(iVar4 + 0x1bc8);
      uVar17 = *puVar12;
      puVar1 = puVar11 + 5;
      piVar14 = puVar11 + 8;
      puVar2 = puVar11 + 4;
      uVar13 = (iVar8 + uVar17) - 1 & -uVar17;
      if (uVar13 != 0) {
        if (uVar17 == 0) {
                    /* WARNING: Does not return */
          uVar10 = SoftwareBreakpoint(0xf004,0x1002aa34);
          (*(code *)uVar10)();
        }
        uVar16 = 0;
        if (uVar17 != 0) {
          uVar16 = ((uVar13 - uVar7) + iVar6) / uVar17;
        }
        uVar15 = 0;
        if (uVar17 != 0) {
          uVar15 = (iVar6 - uVar7) / uVar17;
        }
        puVar11 = (undefined4 *)FUN_10089fe8(puVar11,*puVar2,*puVar1,uVar15,uVar16);
        uVar17 = *puVar12;
        if (uVar17 == 0) {
                    /* WARNING: Does not return */
          uVar10 = SoftwareBreakpoint(0xf004,0x1002aa58);
          (*(code *)uVar10)();
        }
        uVar16 = 0;
        if (uVar17 != 0) {
          uVar16 = uVar13 / uVar17;
        }
        *piVar14 = *piVar14 - uVar16;
      }
      if (((*piVar14 == 0) && ((ulonglong)*(uint *)(iVar4 + 0x1bcc) < *(ulonglong *)(puVar11 + 2)))
         && (*(int *)(iVar4 + 0x1bd0) == 0)) {
        FUN_100914d0(*puVar11);
        FUN_100914d0(*puVar2);
        FUN_100914d0(*puVar1);
        puVar12 = (uint *)(iVar4 + 0x1be0);
        uVar13 = *puVar12;
        if (uVar13 != 0) {
          uVar17 = 0;
          uVar16 = uVar13;
          do {
            uVar15 = uVar16 + uVar17 >> 1;
            uVar18 = *(ulonglong *)(*(int *)(iVar4 + 0x1bdc) + uVar15 * 0x38);
            uVar9 = uVar15;
            if (uVar18 <= uVar7) {
              if (uVar7 <= uVar18) break;
              uVar17 = uVar15 + 1;
              uVar15 = uVar17;
              uVar9 = uVar16;
            }
            uVar16 = uVar9;
          } while (uVar16 != uVar17);
          if ((uVar15 != uVar13) &&
             (*(ulonglong *)(*(int *)(iVar4 + 0x1bdc) + uVar15 * 0x38) == (ulonglong)uVar7)) {
            uVar15 = uVar15 + 1;
            if (uVar15 < uVar13) {
              do {
                uVar7 = uVar15 + 1;
                puVar3 = (undefined8 *)(*(int *)(iVar4 + 0x1bdc) + uVar15 * 0x38);
                puVar3[-6] = puVar3[1];
                puVar3[-7] = *puVar3;
                puVar3[-4] = puVar3[3];
                puVar3[-5] = puVar3[2];
                puVar3[-2] = puVar3[5];
                puVar3[-3] = puVar3[4];
                puVar3[-1] = puVar3[6];
                uVar15 = uVar7;
              } while (uVar7 < *puVar12);
            }
            *puVar12 = *puVar12 - 1;
          }
        }
      }
    }
    (*(code *)PTR_FUN_100ba0f0)(iVar4 + 0x1bb0);
  }
  return;
}

