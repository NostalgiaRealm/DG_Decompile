/*
 * FUN_1801bb310 at 1801bb310
 * undefined FUN_1801bb310(void)
 * Address ranges: 1801bb310-1801bb58b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong *
FUN_1801bb310(longlong param_1,longlong *param_2,longlong param_3,uint param_4,longlong param_5,
             ulonglong param_6,int param_7)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar3 = *(uint *)(param_1 + 0xc);
  uVar4 = *(uint *)(param_1 + 0x10);
  param_6 = param_6 & 0xffffffff;
  param_2[1] = 0;
  *param_2 = 0;
  uVar2 = uVar2 >> (ulonglong)(param_4 & 0x1f);
  param_2[2] = 0;
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  uVar3 = uVar3 >> (ulonglong)(param_4 & 0x1f);
  uVar4 = uVar4 >> (ulonglong)(param_4 & 0x1f);
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  lVar8 = FUN_1802229a8(((ulonglong)(uVar4 * uVar3 * uVar2) & 0x3fffffff) << 2);
  if (lVar8 != 0) {
    *(uint *)(param_2 + 1) = uVar2;
    *(uint *)((longlong)param_2 + 0xc) = uVar3;
    *(uint *)(param_2 + 2) = uVar4;
    lVar11 = 0;
    *param_2 = lVar8;
    lVar12 = 0;
    lVar14 = 0;
    uVar10 = *(uint *)(param_1 + 0x14);
    lVar13 = 0;
    if (uVar10 < 0xe) {
      lVar14 = param_3 + (ulonglong)uVar10 * 4;
      lVar11 = param_3 + ((-((ulonglong)(longlong)*(char *)(lVar14 + 0x58) >> 0x17 & 1) &
                           0xffffffff00000000 |
                          ((longlong)*(char *)(lVar14 + 0x58) & 0xffffffU) << 8) << 2 | 0xb0);
      lVar12 = param_3 + ((-((ulonglong)(longlong)*(char *)(lVar14 + 0x59) >> 0x17 & 1) &
                           0xffffffff00000000 |
                          ((longlong)*(char *)(lVar14 + 0x59) & 0xffffffU) << 8) << 2 | 0xb0);
      lVar13 = param_3 + ((-((ulonglong)(longlong)*(char *)(lVar14 + 0x5b) >> 0x17 & 1) &
                           0xffffffff00000000 |
                          ((longlong)*(char *)(lVar14 + 0x5b) & 0xffffffU) << 8) << 2 | 0xb0);
      lVar14 = param_3 + ((-((ulonglong)(longlong)*(char *)(lVar14 + 0x5a) >> 0x17 & 1) &
                           0xffffffff00000000 |
                          ((longlong)*(char *)(lVar14 + 0x5a) & 0xffffffU) << 8) << 2 | 0xb0);
    }
    iVar5 = *(int *)(&DAT_18022e050 + (ulonglong)uVar10 * 4);
    if (iVar5 == 8) {
      uVar10 = 0;
      if (uVar4 != 0) {
        do {
          lVar12 = param_5 + (ulonglong)(uVar10 * param_7);
          for (uVar7 = uVar3; uVar7 != 0; uVar7 = uVar7 - 1) {
            uVar15 = 0;
            if (uVar2 != 0) {
              do {
                *(undefined4 *)(lVar8 + uVar15 * 4) =
                     *(undefined4 *)(lVar11 + (ulonglong)*(byte *)(lVar12 + uVar15) * 4);
                uVar9 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar9;
              } while (uVar9 < uVar2);
            }
            lVar12 = lVar12 + param_6;
            lVar8 = lVar8 + (ulonglong)uVar2 * 4;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar4);
      }
    }
    else if (iVar5 == 0x10) {
      uVar10 = 0;
      if (uVar4 != 0) {
        do {
          lVar13 = param_5 + (ulonglong)(uVar10 * param_7);
          for (uVar7 = uVar3; uVar7 != 0; uVar7 = uVar7 - 1) {
            uVar9 = 0;
            if (uVar2 != 0) {
              do {
                *(uint *)(lVar8 + (ulonglong)uVar9 * 4) =
                     *(uint *)(lVar12 + (ulonglong)*(byte *)(lVar13 + (ulonglong)(uVar9 * 2 + 1)) *
                                        4) |
                     *(uint *)(lVar11 + (ulonglong)*(byte *)(lVar13 + (ulonglong)(uVar9 * 2)) * 4);
                uVar9 = uVar9 + 1;
              } while (uVar9 < uVar2);
            }
            lVar13 = lVar13 + param_6;
            lVar8 = lVar8 + (ulonglong)uVar2 * 4;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar4);
      }
    }
    else if ((iVar5 == 0x20) && (uVar10 = 0, uVar4 != 0)) {
      do {
        lVar1 = param_5 + (ulonglong)(uVar10 * param_7);
        for (uVar7 = uVar3; uVar7 != 0; uVar7 = uVar7 - 1) {
          uVar9 = 0;
          if (uVar2 != 0) {
            do {
              uVar6 = uVar9 * 4;
              *(uint *)(lVar8 + (ulonglong)uVar9 * 4) =
                   *(uint *)(lVar13 + (ulonglong)*(byte *)(lVar1 + (ulonglong)(uVar6 + 3)) * 4) |
                   *(uint *)(lVar14 + (ulonglong)*(byte *)(lVar1 + (ulonglong)(uVar6 + 2)) * 4) |
                   *(uint *)(lVar12 + (ulonglong)*(byte *)(lVar1 + (ulonglong)(uVar6 + 1)) * 4) |
                   *(uint *)(lVar11 + (ulonglong)*(byte *)(lVar1 + (ulonglong)uVar6) * 4);
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar2);
          }
          lVar1 = lVar1 + param_6;
          lVar8 = lVar8 + (ulonglong)uVar2 * 4;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar4);
    }
  }
  return param_2;
}

