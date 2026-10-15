/*
 * FUN_10026bb0 at 10026bb0
 * undefined FUN_10026bb0(void)
 * Address ranges: 10026bb0-10026f23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10026bb0(int param_1,int param_2)

{
  byte *pbVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  
  if (param_2 != 0) {
    iVar13 = 0;
    if (param_1 != 0) {
      iVar13 = param_1 + 4;
    }
    iVar6 = *(int *)(param_1 + 0x1c);
    piVar12 = (int *)FUN_100076e8(iVar6,param_2);
    if (*(uint *)(iVar6 + 0xd4) != 0) {
      piVar2 = (int *)(iVar6 + 0xd0);
      uVar17 = 0;
      while ((piVar4 = (int *)(*piVar2 + uVar17 * 0x48), *piVar4 != param_2 || (piVar4[2] != iVar13)
             )) {
        uVar17 = uVar17 + 1;
        if (*(uint *)(iVar6 + 0xd4) <= uVar17) {
          return;
        }
      }
      if ((piVar4[5] != 0) &&
         (*(int *)(iVar6 + 0xcc) = *(int *)(iVar6 + 0xcc) + -1, piVar12 == piVar4)) {
        piVar4 = piVar4 + 10;
        iVar13 = *piVar4;
        while (iVar13 != 0) {
          (*(code *)PTR_FUN_1009d200)(0);
          iVar13 = *piVar4 + -1;
          *piVar4 = iVar13;
        }
        iVar13 = *piVar2;
        iVar18 = *(int *)(iVar13 + uVar17 * 0x48 + 0x14);
        uVar19 = uVar17;
        if (uVar17 != 0) {
          do {
            if (*(int *)(iVar13 + -0x48 + uVar19 * 0x48) == param_2) {
              iVar18 = *(int *)(iVar13 + uVar19 * 0x48 + -0x30);
              goto LAB_10026ce8;
            }
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        (*(code *)PTR_FUN_1009d1a4)(param_2,0xaaaa);
LAB_10026ce8:
        if (iVar18 != 0) {
          uVar16 = *(uint *)(*piVar2 + uVar17 * 0x48 + 0x20);
          iVar13 = (*(code *)PTR_FUN_1009d1a0)(param_2);
          pcVar7 = (code *)PTR_FUN_1009d180;
          if (iVar13 != 0) {
            pcVar7 = (code *)PTR_FUN_1009d184;
          }
          iVar14 = (*pcVar7)(param_2,0xfffffffc);
          iVar10 = DAT_1009e044;
          iVar13 = DAT_1009e034;
          uVar8 = *(uint *)(iVar6 + 0xe0);
          bVar11 = iVar14 == *(int *)(iVar6 + 0xc0) + uVar16 * DAT_1009e044;
          if (uVar8 != 0) {
            uVar15 = 0;
            do {
              piVar12 = (int *)(*(int *)(iVar6 + 0xdc) + uVar15 * 0x10);
              if (*piVar12 == param_2) {
                iVar9 = piVar12[2];
                if (iVar9 != -1) {
                  *(int *)(*(int *)(iVar6 + 0xbc) + iVar9 * DAT_1009e034 + DAT_1009e038) = iVar18;
                  if ((uVar19 != 0) ||
                     (bVar11 = true, iVar14 != *(int *)(iVar6 + 0xbc) + iVar9 * iVar13)) {
                    bVar11 = false;
                  }
                }
                break;
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar8);
          }
          if (bVar11) {
            FUN_100072b0(iVar14,param_2,iVar18);
            pbVar1 = (byte *)((uVar16 >> 3 & 3) + iVar6 + ((uVar16 >> 5) + 0x3a) * 4);
            *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar16 & 7)) ^ 0xff);
          }
          else {
            *(int *)(*(int *)(iVar6 + 0xc0) + uVar16 * iVar10 + DAT_1009e050) = iVar18;
            uVar19 = *(uint *)(iVar6 + 0xe0);
            if (uVar19 != 0) {
              uVar16 = 0;
              do {
                piVar12 = (int *)(*(int *)(iVar6 + 0xdc) + uVar16 * 0x10);
                if (*piVar12 == param_2) {
                  piVar4 = (int *)(iVar6 + 0xf0);
                  piVar12[2] = *piVar4;
                  *piVar4 = *piVar4 + 1;
                  break;
                }
                uVar16 = uVar16 + 1;
              } while (uVar16 < uVar19);
            }
          }
        }
      }
      puVar3 = (uint *)(iVar6 + 0xd4);
      uVar19 = *puVar3;
      if (uVar17 < uVar19) {
        uVar17 = uVar17 + 1;
        if (uVar17 < uVar19) {
          do {
            uVar16 = uVar17 + 1;
            puVar5 = (undefined8 *)(*piVar2 + uVar17 * 0x48);
            puVar5[-8] = puVar5[1];
            puVar5[-9] = *puVar5;
            puVar5[-6] = puVar5[3];
            puVar5[-7] = puVar5[2];
            puVar5[-4] = puVar5[5];
            puVar5[-5] = puVar5[4];
            puVar5[-2] = puVar5[7];
            puVar5[-3] = puVar5[6];
            puVar5[-1] = puVar5[8];
            uVar19 = *puVar3;
            uVar17 = uVar16;
          } while (uVar16 < uVar19);
        }
        *puVar3 = uVar19 - 1;
      }
    }
  }
  return;
}

