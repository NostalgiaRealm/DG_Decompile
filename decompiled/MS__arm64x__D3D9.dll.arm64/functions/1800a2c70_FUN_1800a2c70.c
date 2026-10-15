/*
 * FUN_1800a2c70 at 1800a2c70
 * undefined FUN_1800a2c70(void)
 * Address ranges: 1800a2c70-1800a2eef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong *
FUN_1800a2c70(longlong param_1,longlong *param_2,longlong param_3,uint param_4,longlong param_5,
             ulonglong param_6,int param_7)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar3 = *(uint *)(param_1 + 0xc);
  param_2[1] = 0;
  *param_2 = 0;
  param_6 = param_6 & 0xffffffff;
  param_2[2] = 0;
  uVar2 = uVar2 >> (ulonglong)(param_4 & 0x1f);
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  uVar3 = uVar3 >> (ulonglong)(param_4 & 0x1f);
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  uVar6 = *(uint *)(param_1 + 0x10) >> (ulonglong)(param_4 & 0x1f);
  if (uVar6 == 0) {
    uVar6 = 1;
  }
  lVar8 = thunk_FUN_180102f80(((ulonglong)(uVar6 * uVar3 * uVar2) & 0x3fffffff) << 2);
  if (lVar8 != 0) {
    uVar11 = *(uint *)(param_1 + 0x14);
    *(uint *)(param_2 + 1) = uVar2;
    *(uint *)((longlong)param_2 + 0xc) = uVar3;
    *(uint *)(param_2 + 2) = uVar6;
    lVar10 = 0;
    *param_2 = lVar8;
    lVar12 = 0;
    lVar14 = 0;
    lVar13 = 0;
    if (uVar11 < 0xe) {
      lVar13 = param_3 + (ulonglong)uVar11 * 4;
      lVar14 = param_3 + ((-((ulonglong)(longlong)*(char *)(lVar13 + 0x5a) >> 0x17 & 1) &
                           0xffffffff00000000 |
                          ((longlong)*(char *)(lVar13 + 0x5a) & 0xffffffU) << 8) << 2 | 0xb0);
      lVar10 = param_3 + ((-((ulonglong)(longlong)*(char *)(lVar13 + 0x58) >> 0x17 & 1) &
                           0xffffffff00000000 |
                          ((longlong)*(char *)(lVar13 + 0x58) & 0xffffffU) << 8) << 2 | 0xb0);
      lVar12 = param_3 + ((-((ulonglong)(longlong)*(char *)(lVar13 + 0x59) >> 0x17 & 1) &
                           0xffffffff00000000 |
                          ((longlong)*(char *)(lVar13 + 0x59) & 0xffffffU) << 8) << 2 | 0xb0);
      lVar13 = param_3 + ((-((ulonglong)(longlong)*(char *)(lVar13 + 0x5b) >> 0x17 & 1) &
                           0xffffffff00000000 |
                          ((longlong)*(char *)(lVar13 + 0x5b) & 0xffffffU) << 8) << 2 | 0xb0);
    }
    iVar4 = *(int *)(&DAT_180231470 + (ulonglong)uVar11 * 4);
    if (iVar4 == 8) {
      uVar11 = 0;
      if (uVar6 != 0) {
        do {
          lVar14 = param_5 + (ulonglong)(uVar11 * param_7);
          for (uVar7 = uVar3; uVar7 != 0; uVar7 = uVar7 - 1) {
            uVar15 = 0;
            if (uVar2 != 0) {
              do {
                *(undefined4 *)(lVar8 + uVar15 * 4) =
                     *(undefined4 *)(lVar10 + (ulonglong)*(byte *)(lVar14 + uVar15) * 4);
                uVar9 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar9;
              } while (uVar9 < uVar2);
            }
            lVar14 = lVar14 + param_6;
            lVar8 = lVar8 + (ulonglong)uVar2 * 4;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar6);
      }
    }
    else if (iVar4 == 0x10) {
      uVar11 = 0;
      if (uVar6 != 0) {
        do {
          lVar14 = param_5 + (ulonglong)(uVar11 * param_7);
          for (uVar7 = uVar3; uVar7 != 0; uVar7 = uVar7 - 1) {
            uVar9 = 0;
            if (uVar2 != 0) {
              do {
                *(uint *)(lVar8 + (ulonglong)uVar9 * 4) =
                     *(uint *)(lVar12 + (ulonglong)*(byte *)(lVar14 + (ulonglong)(uVar9 * 2 + 1)) *
                                        4) |
                     *(uint *)(lVar10 + (ulonglong)*(byte *)(lVar14 + (ulonglong)(uVar9 * 2)) * 4);
                uVar9 = uVar9 + 1;
              } while (uVar9 < uVar2);
            }
            lVar14 = lVar14 + param_6;
            lVar8 = lVar8 + (ulonglong)uVar2 * 4;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar6);
      }
    }
    else if ((iVar4 == 0x20) && (uVar11 = 0, uVar6 != 0)) {
      do {
        lVar1 = param_5 + (ulonglong)(uVar11 * param_7);
        for (uVar7 = uVar3; uVar7 != 0; uVar7 = uVar7 - 1) {
          uVar9 = 0;
          if (uVar2 != 0) {
            do {
              uVar5 = uVar9 * 4;
              *(uint *)(lVar8 + (ulonglong)uVar9 * 4) =
                   *(uint *)(lVar13 + (ulonglong)*(byte *)(lVar1 + (ulonglong)(uVar5 + 3)) * 4) |
                   *(uint *)(lVar14 + (ulonglong)*(byte *)(lVar1 + (ulonglong)(uVar5 + 2)) * 4) |
                   *(uint *)(lVar12 + (ulonglong)*(byte *)(lVar1 + (ulonglong)(uVar5 + 1)) * 4) |
                   *(uint *)(lVar10 + (ulonglong)*(byte *)(lVar1 + (ulonglong)uVar5) * 4);
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar2);
          }
          lVar1 = lVar1 + param_6;
          lVar8 = lVar8 + (ulonglong)uVar2 * 4;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar6);
    }
  }
  return param_2;
}

