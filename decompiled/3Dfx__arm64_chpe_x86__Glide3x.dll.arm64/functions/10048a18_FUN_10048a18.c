/*
 * FUN_10048a18 at 10048a18
 * undefined FUN_10048a18(void)
 * Address ranges: 10048a18-100491a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_10048a18(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  undefined8 uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int local_60;
  ulonglong local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  
  piVar1 = (int *)(param_1 + 0x34);
  piVar2 = (int *)(param_1 + 0x38);
  iVar15 = FUN_10049410(param_1,*piVar1,*piVar2);
  bVar11 = iVar15 != -1;
  if (iVar15 == -1) goto LAB_10048cd4;
  piVar3 = (int *)(param_1 + 0x50);
  piVar4 = (int *)(param_1 + 0x5c);
  iVar16 = *piVar3;
  iVar20 = *piVar4;
  uVar21 = 0;
  if (*(int *)(iVar20 + iVar16 * 0x10 + 8) != 0) {
    do {
      iVar16 = FUN_1007de60(*(int *)(*(int *)(iVar20 + iVar16 * 0x10 + 4) + uVar21 * 0x1c) +
                            *(int *)(param_1 + 0x44),*(int *)(param_1 + 0x44) + iVar15);
      if (iVar16 == 0) {
        *(int *)(param_1 + 0x4c) = (*(int *)(param_1 + 0x4c) - *piVar2) + -1;
        break;
      }
      iVar16 = *piVar3;
      uVar21 = uVar21 + 1;
      iVar20 = *piVar4;
    } while (uVar21 < *(uint *)(iVar20 + iVar16 * 0x10 + 8));
  }
  iVar16 = *piVar4 + *piVar3 * 0x10;
  if (uVar21 == *(uint *)(iVar16 + 8)) {
    piVar3 = (int *)(iVar16 + 4);
    puVar5 = (uint *)(iVar16 + 8);
    local_5c = 0;
    puVar6 = (uint *)(iVar16 + 0xc);
    uVar22 = *puVar6;
    local_54 = 0;
    local_4c = 0;
    local_60 = iVar15;
    if (*puVar5 == uVar22) {
      uVar10 = uVar22 << 1;
      if (uVar22 == 0) {
        uVar10 = 0x10;
      }
      uVar22 = uVar10 * 0x1c;
      if ((ulonglong)uVar10 * 0x1c >> 0x20 != 0) {
        uVar22 = 0xffffffff;
      }
      iVar15 = uVar22 + 4;
      if (0xfffffffb < uVar22) {
        iVar15 = -1;
      }
      puVar17 = (uint *)FUN_1007dd60(iVar15);
      if (puVar17 != (uint *)0x0) {
        *puVar17 = uVar10;
        puVar7 = puVar17 + 1;
        if (uVar10 != 0) {
          puVar8 = puVar17 + 2;
          puVar17 = puVar17 + 5;
          uVar22 = uVar10;
          do {
            puVar8[0] = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
            puVar17[0] = 0;
            puVar17[1] = 0;
            uVar22 = uVar22 - 1;
            puVar17[2] = 0;
            puVar8 = puVar8 + 7;
            puVar17 = puVar17 + 7;
          } while (uVar22 != 0);
        }
        if (puVar7 != (uint *)0x0) {
          iVar15 = *piVar3;
          uVar9 = *puVar6;
          uVar22 = 0;
          if (uVar9 != 0) {
            do {
              FUN_10049d20(puVar7 + uVar22 * 7,iVar15 + uVar22 * 0x1c);
              uVar22 = uVar22 + 1;
            } while (uVar22 < uVar9);
          }
          iVar15 = *piVar3;
          if (iVar15 != 0) {
            piVar4 = (int *)(iVar15 + -4);
            iVar16 = *piVar4;
            iVar15 = iVar15 + iVar16 * 0x1c;
            for (; iVar16 != 0; iVar16 = iVar16 + -1) {
              FUN_1007dd80(*(undefined4 *)(iVar15 + -0xc));
              FUN_1007dd80(*(undefined4 *)(iVar15 + -0x18));
              iVar15 = iVar15 + -0x1c;
            }
            FUN_1007dd90(piVar4,*piVar4 * 0x1c + 4);
          }
          *piVar3 = (int)puVar7;
          *puVar6 = uVar10;
          goto LAB_10048c8c;
        }
      }
      bVar11 = false;
    }
    else {
LAB_10048c8c:
      uVar22 = *puVar5;
      *puVar5 = uVar22 + 1;
      FUN_10049d20(*piVar3 + uVar22 * 0x1c,&local_60);
      bVar11 = true;
    }
    FUN_1007dd80(local_54._4_4_);
    FUN_1007dd80(local_5c & 0xffffffff);
  }
  *(uint *)(param_1 + 0x54) = uVar21;
LAB_10048cd4:
  if (bVar11) {
    bVar13 = FUN_10048520(param_1);
    puVar5 = (uint *)(param_1 + 0x40);
    uVar21 = *puVar5;
    if (uVar21 != 5) {
      bVar13 = 0;
    }
    if (bVar13 != 0) {
      bVar11 = false;
      do {
        if ((*(char *)(param_1 + 0x2c) != '\0') || (bVar11)) break;
        switch(uVar21) {
        case 0:
          bVar14 = FUN_10048520(param_1);
          uVar21 = *puVar5;
          if ((uVar21 < 7) && ((0x5bU >> (ulonglong)(uVar21 & 0x1f) & 1) != 0)) {
            bVar13 = 1;
          }
          else {
            bVar13 = 0;
          }
          bVar13 = bVar13 & bVar14;
          if (bVar13 == 0) break;
          if (uVar21 == 0) {
            bVar14 = FUN_100492e0(param_1,0x1000,*(int *)(param_1 + 0x3c));
            bVar13 = bVar14 & bVar13;
            FUN_1007e4a0(*piVar1 + 0x1000,*piVar1,*piVar2);
            *(int *)(param_1 + 0x3c) = *piVar2;
            break;
          }
          if (uVar21 == 1) {
            bVar14 = FUN_100492e0(param_1,0x1000,*(undefined4 *)(param_1 + 0x3c));
            bVar13 = bVar14 & bVar13;
            goto LAB_10048e58;
          }
          if (uVar21 == 6) {
            iVar15 = *(int *)(param_1 + 0x3c);
            iVar16 = FUN_10049410(param_1,*piVar1 + 0x1000,iVar15);
            bVar12 = iVar16 != -1;
            if (iVar16 == -1) {
              bVar12 = false;
            }
            else {
              uVar21 = 0;
              iVar20 = *(int *)(*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x50) * 0x10 + 4) +
                       *(int *)(param_1 + 0x54) * 0x1c;
              puVar6 = (uint *)(iVar20 + 0x14);
              if (*puVar6 != 0) {
                do {
                  iVar18 = FUN_1007de60(*(int *)(*(int *)(iVar20 + 0x10) + uVar21 * 8) +
                                        *(int *)(param_1 + 0x44),*(int *)(param_1 + 0x44) + iVar16);
                  if (iVar18 == 0) {
                    *(int *)(param_1 + 0x4c) = (*(int *)(param_1 + 0x4c) - iVar15) + -1;
                    break;
                  }
                  uVar21 = uVar21 + 1;
                } while (uVar21 < *puVar6);
                bVar11 = false;
              }
              if (uVar21 == *puVar6) {
                piVar3 = (int *)(iVar20 + 0x10);
                puVar6 = (uint *)(iVar20 + 0x18);
                puVar17 = (uint *)(iVar20 + 0x14);
                uVar22 = *puVar6;
                if (*puVar17 == uVar22) {
                  uVar10 = uVar22 << 1;
                  if (uVar22 == 0) {
                    uVar10 = 0x10;
                  }
                  iVar15 = uVar10 * 8;
                  if (uVar10 >> 0x1d != 0) {
                    iVar15 = -1;
                  }
                  iVar15 = FUN_1007dd60(iVar15);
                  if (iVar15 == 0) {
                    bVar12 = false;
                    goto LAB_10049040;
                  }
                  FUN_1007e4a0(iVar15,*piVar3,*puVar6 << 3);
                  FUN_1007dd80(*piVar3);
                  *piVar3 = iVar15;
                  *puVar6 = uVar10;
                }
                *(ulonglong *)(*piVar3 + *puVar17 * 8) = CONCAT44(0xffffffff,iVar16);
                *puVar17 = *puVar17 + 1;
                bVar12 = true;
              }
LAB_10049040:
              *(uint *)(param_1 + 0x58) = uVar21;
            }
            bVar13 = bVar13 & bVar12;
            iVar15 = FUN_10049410(param_1,*piVar1,*piVar2);
            if (iVar15 == -1) {
              bVar13 = 0;
            }
            else {
              *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x50) * 0x10
                                        + 4) + *(int *)(param_1 + 0x54) * 0x1c + 0x10) +
                       *(int *)(param_1 + 0x58) * 8 + 4) = iVar15;
            }
            break;
          }
          if ((uVar21 != 3) && (uVar21 != 4)) break;
          iVar15 = *(int *)(param_1 + 0x3c);
          uVar19 = 0x1000;
          goto LAB_100490e8;
        case 1:
        case 6:
          bVar13 = FUN_10048520(param_1);
          uVar21 = *puVar5;
          if ((uVar21 != 2 && uVar21 < 0x80000000) && (int)uVar21 < 5) goto LAB_10048d64;
LAB_10049114:
          bVar13 = 0;
          break;
        case 4:
          bVar13 = FUN_10048520(param_1);
          uVar21 = *puVar5;
          if (1 < uVar21) goto LAB_10049114;
          goto LAB_10048d64;
        case 5:
          bVar13 = FUN_10048520(param_1);
          uVar21 = *puVar5;
          if ((uVar21 & 0xfffffffc) != 0 || uVar21 == 2) goto LAB_10049114;
LAB_10048d64:
          if (uVar21 == 0) {
            FUN_1007e4a0(*piVar1 + 0x1000,*piVar1,*piVar2);
            *(int *)(param_1 + 0x3c) = *piVar2;
          }
          else if (uVar21 == 1) {
LAB_10048e58:
            iVar15 = *piVar2;
            uVar19 = 0;
LAB_100490e8:
            bVar14 = FUN_100492e0(param_1,uVar19,iVar15);
            bVar13 = bVar14 & bVar13;
          }
        }
        uVar21 = *puVar5;
        if (*(char *)(param_1 + 0x2c) == '\0') {
          bVar11 = **(char **)(param_1 + 0x24) == '\r' || **(char **)(param_1 + 0x24) == '\n';
        }
      } while (bVar13 != 0);
      if ((uVar21 == 0) && (*(int *)(param_1 + 0x3c) != 0)) {
        bVar14 = FUN_100492e0(param_1,0x1000,*(int *)(param_1 + 0x3c));
        bVar13 = bVar14 & bVar13;
      }
    }
  }
  else {
    bVar13 = 0;
  }
  return bVar13;
}

