/*
 * FUN_100ae748 at 100ae748
 * undefined FUN_100ae748(void)
 * Address ranges: 100ae748-100aea3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_100ae748(int param_1,int *param_2,int param_3,uint param_4,int param_5,int param_6,
                  int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  
  uVar7 = *(uint *)(param_1 + 4);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  uVar7 = uVar7 >> (ulonglong)(param_4 & 0x1f);
  if (uVar7 == 0) {
    uVar7 = 1;
  }
  uVar8 = *(uint *)(param_1 + 8) >> (ulonglong)(param_4 & 0x1f);
  if (uVar8 == 0) {
    uVar8 = 1;
  }
  uVar9 = *(uint *)(param_1 + 0xc) >> (ulonglong)(param_4 & 0x1f);
  if (uVar9 == 0) {
    uVar9 = 1;
  }
  iVar10 = FUN_100fece0(uVar9 * uVar8 * uVar7 * 4);
  if (iVar10 != 0) {
    *param_2 = iVar10;
    param_2[1] = uVar7;
    param_2[2] = uVar8;
    param_2[3] = uVar9;
    iVar12 = *(uint *)(param_1 + 0x10) * 4;
    if (*(uint *)(param_1 + 0x10) < 0xe) {
      iVar15 = iVar12 + param_3;
      iVar13 = param_3 + *(char *)(iVar15 + 0x3c) * 0x400 + 0x98;
      iVar14 = param_3 + *(char *)(iVar15 + 0x3d) * 0x400 + 0x98;
      iVar16 = param_3 + *(char *)(iVar15 + 0x3e) * 0x400 + 0x98;
      iVar15 = param_3 + *(char *)(iVar15 + 0x3f) * 0x400 + 0x98;
    }
    else {
      iVar13 = 0;
      iVar16 = 0;
      iVar15 = 0;
      iVar14 = 0;
    }
    iVar12 = *(int *)(&DAT_1012cda0 + iVar12);
    if (iVar12 == 8) {
      uVar17 = 0;
      if (uVar9 != 0) {
        do {
          iVar12 = param_5 + uVar17 * param_7;
          uVar11 = 0;
          if (uVar8 != 0) {
            do {
              uVar18 = 0;
              if (uVar7 != 0) {
                do {
                  pbVar6 = (byte *)(uVar18 + iVar12);
                  iVar14 = uVar18 * 4;
                  uVar18 = uVar18 + 1;
                  *(undefined4 *)(iVar10 + iVar14) = *(undefined4 *)(iVar13 + (uint)*pbVar6 * 4);
                } while (uVar18 < uVar7);
              }
              uVar11 = uVar11 + 1;
              iVar10 = iVar10 + uVar7 * 4;
              iVar12 = iVar12 + param_6;
            } while (uVar11 < uVar8);
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar9);
      }
    }
    else if (iVar12 == 0x10) {
      uVar17 = 0;
      if (uVar9 != 0) {
        do {
          iVar12 = param_5 + uVar17 * param_7;
          uVar11 = 0;
          if (uVar8 != 0) {
            do {
              uVar18 = 0;
              if (uVar7 != 0) {
                do {
                  iVar16 = uVar18 * 2;
                  iVar15 = uVar18 * 2;
                  iVar1 = uVar18 * 4;
                  uVar18 = uVar18 + 1;
                  *(uint *)(iVar10 + iVar1) =
                       *(uint *)(iVar14 + (uint)*(byte *)(iVar12 + 1 + iVar16) * 4) |
                       *(uint *)(iVar13 + (uint)*(byte *)(iVar12 + iVar15) * 4);
                } while (uVar18 < uVar7);
              }
              uVar11 = uVar11 + 1;
              iVar10 = iVar10 + uVar7 * 4;
              iVar12 = iVar12 + param_6;
            } while (uVar11 < uVar8);
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar9);
      }
    }
    else if ((iVar12 == 0x20) && (uVar17 = 0, uVar9 != 0)) {
      do {
        iVar12 = param_5 + uVar17 * param_7;
        uVar11 = 0;
        if (uVar8 != 0) {
          do {
            uVar18 = 0;
            if (uVar7 != 0) {
              do {
                iVar1 = uVar18 * 4;
                iVar2 = uVar18 * 4;
                iVar3 = uVar18 * 4;
                iVar4 = uVar18 * 4;
                iVar5 = uVar18 * 4;
                uVar18 = uVar18 + 1;
                *(uint *)(iVar10 + iVar5) =
                     *(uint *)(iVar13 + (uint)*(byte *)(iVar12 + iVar1) * 4) |
                     *(uint *)(iVar15 + (uint)*(byte *)(iVar12 + 3 + iVar2) * 4) |
                     *(uint *)(iVar16 + (uint)*(byte *)(iVar12 + 2 + iVar3) * 4) |
                     *(uint *)(iVar14 + (uint)*(byte *)(iVar12 + 1 + iVar4) * 4);
              } while (uVar18 < uVar7);
            }
            uVar11 = uVar11 + 1;
            iVar10 = iVar10 + uVar7 * 4;
            iVar12 = iVar12 + param_6;
          } while (uVar11 < uVar8);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar9);
    }
  }
  return param_2;
}

