/*
 * FUN_1008f050 at 1008f050
 * undefined FUN_1008f050(void)
 * Address ranges: 1008f050-1008f3b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008f050(undefined8 param_1,int param_2,int param_3)

{
  byte *pbVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
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
  
  iVar10 = DAT_100be0c0;
  piVar12 = (int *)FUN_1008f3b8(DAT_100be0c0,param_2);
  if (*(uint *)(iVar10 + 0xd4) == 0) {
    return;
  }
  piVar2 = (int *)(iVar10 + 0xd0);
  uVar17 = 0;
  while ((piVar4 = (int *)(*piVar2 + uVar17 * 0x48), *piVar4 != param_2 || (piVar4[2] != param_3)))
  {
    uVar17 = uVar17 + 1;
    if (*(uint *)(iVar10 + 0xd4) <= uVar17) {
      return;
    }
  }
  if ((piVar4[5] != 0) &&
     (*(int *)(iVar10 + 0xcc) = *(int *)(iVar10 + 0xcc) + -1, piVar12 == piVar4)) {
    piVar4 = piVar4 + 10;
    iVar13 = *piVar4;
    while (iVar13 != 0) {
      (*(code *)PTR_FUN_100ba2d4)(0);
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
          goto LAB_1008f178;
        }
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    (*(code *)PTR_FUN_100ba258)(param_2,0xaaaa);
LAB_1008f178:
    if (iVar18 != 0) {
      uVar16 = *(uint *)(*piVar2 + uVar17 * 0x48 + 0x20);
      iVar13 = (*(code *)PTR_FUN_100ba250)(param_2);
      pcVar6 = (code *)PTR_FUN_100ba228;
      if (iVar13 != 0) {
        pcVar6 = (code *)PTR_FUN_100ba22c;
      }
      iVar14 = (*pcVar6)(param_2,0xfffffffc);
      iVar9 = DAT_100bb044;
      iVar13 = DAT_100bb034;
      uVar7 = *(uint *)(iVar10 + 0xe0);
      bVar11 = iVar14 == *(int *)(iVar10 + 0xc0) + uVar16 * DAT_100bb044;
      if (uVar7 != 0) {
        uVar15 = 0;
        do {
          piVar12 = (int *)(*(int *)(iVar10 + 0xdc) + uVar15 * 0x10);
          if (*piVar12 == param_2) {
            iVar8 = piVar12[2];
            if (iVar8 != -1) {
              *(int *)(DAT_100bb038 + iVar8 * DAT_100bb034 + *(int *)(iVar10 + 0xbc)) = iVar18;
              if ((uVar19 != 0) ||
                 (bVar11 = true, iVar14 != *(int *)(iVar10 + 0xbc) + iVar8 * iVar13)) {
                bVar11 = false;
              }
            }
            break;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar7);
      }
      if (bVar11) {
        FUN_1008ec10(iVar14,param_2,iVar18);
        pbVar1 = (byte *)((uVar16 >> 3 & 3) + iVar10 + ((uVar16 >> 5) + 0x3a) * 4);
        *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar16 & 7)) ^ 0xff);
      }
      else {
        *(int *)(*(int *)(iVar10 + 0xc0) + uVar16 * iVar9 + DAT_100bb050) = iVar18;
        uVar19 = *(uint *)(iVar10 + 0xe0);
        if (uVar19 != 0) {
          uVar16 = 0;
          do {
            piVar12 = (int *)(*(int *)(iVar10 + 0xdc) + uVar16 * 0x10);
            if (*piVar12 == param_2) {
              piVar4 = (int *)(iVar10 + 0xf0);
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
  puVar3 = (uint *)(iVar10 + 0xd4);
  uVar19 = *puVar3;
  if (uVar19 <= uVar17) {
    return;
  }
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
  return;
}

