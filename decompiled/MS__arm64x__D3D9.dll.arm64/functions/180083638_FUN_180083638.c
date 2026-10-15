/*
 * FUN_180083638 at 180083638
 * undefined FUN_180083638(void)
 * Address ranges: 180083638-180083a83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180083638(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong in_stack_ffffffffffffff48;
  ulonglong in_stack_ffffffffffffff50;
  ulonglong in_stack_ffffffffffffff60;
  
  uVar14 = *(uint *)((longlong)param_1 + 0x2c);
  if (10 < uVar14 - 0x15) {
    uVar7 = 7;
    if (*(int *)((longlong)param_1 + 0x44) != 0) {
      uVar7 = 5;
    }
    if (((uVar7 < *(uint *)(&DAT_180231470 + (ulonglong)uVar14 * 4)) || ((int)param_1[7] != 0)) &&
       (2 < *(int *)((longlong)param_1 + 0x44) - 3U)) {
      if (param_1[0x26] == 0) {
        iVar6 = *(int *)((longlong)param_1 + 0x34);
        uVar8 = 4;
        if (iVar6 == 1) {
          uVar8 = 0;
        }
        uVar9 = 0x1f;
        if ((&DAT_180231738)[uVar14] == '\0') {
          uVar9 = 0x1c;
        }
        lVar16 = 0x30;
        if ((int)param_1[7] != 0) {
          lVar16 = 0x38;
        }
        FUN_180082d80(param_1 + 0x23,*(undefined4 *)((longlong)param_1 + 0x24),(int)param_1[5],
                      *(undefined4 *)((longlong)param_1 + lVar16),iVar6,1,0x1b,uVar9,0x1c,
                      in_stack_ffffffffffffff48 & 0xffffffff00000000,
                      in_stack_ffffffffffffff50 & 0xffffffff00000000,0x28,
                      in_stack_ffffffffffffff60 & 0xffffffff00000000,uVar8,0,iVar6 != 1,0);
        FUN_180083f10(param_1);
      }
      if (((param_2 & 1) != 0) || (*(char *)((longlong)param_1 + 0x4d) == '\x01')) {
        FUN_180083430(param_1 + 0x23,0);
      }
      lVar16 = param_1[(param_2 & 0xff) * 2 + 0x28];
      if (param_1[0x26] == 0) {
        return lVar16;
      }
      uVar7 = 0;
      uVar14 = 0;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        do {
          if ((int)param_1[6] != 0) {
            uVar2 = 1 << (ulonglong)(uVar14 & 0x1f);
            uVar15 = 0;
            do {
              cVar5 = (**(code **)(*param_1 + 8))(param_1,uVar15,uVar14,1);
              uVar17 = 0;
              if (cVar5 != '\0') {
                uVar17 = uVar2;
              }
              lVar12 = 0x38;
              if ((int)param_1[7] == 0) {
                lVar12 = 0x30;
              }
              iVar6 = *(int *)((longlong)param_1 + lVar12);
              if (*(char *)((longlong)param_1 + 0x169) != '\0') {
                uVar3 = *(uint *)(param_1 + 5) >> (ulonglong)(uVar15 & 0x1f);
                uVar4 = *(uint *)((longlong)param_1 + 0x24) >> (ulonglong)(uVar15 & 0x1f);
                if (uVar3 == 0) {
                  uVar3 = 1;
                }
                if (uVar4 == 0) {
                  uVar4 = 1;
                }
                (*__imp_USER32_dll_SetRect)
                          (param_1[0x29] + (ulonglong)(uVar15 + iVar6 * uVar14) * 0x28 + 0x18,0,0,
                           uVar4,uVar3);
              }
              uVar10 = (ulonglong)(uVar15 + iVar6 * uVar14);
              iVar6 = (*__imp_USER32_dll_IsRectEmpty)(param_1[0x29] + uVar10 * 0x28 + 0x18);
              if (iVar6 == 0) {
                puVar1 = (undefined8 *)(param_1[0x29] + uVar10 * 0x28);
                FUN_180082340(param_1[0x22],*(undefined4 *)((longlong)param_1 + 0x2c),uVar15,uVar14,
                              param_1[2],*(undefined4 *)(puVar1 + 3),
                              *(undefined4 *)((longlong)puVar1 + 0x1c),*(undefined4 *)(puVar1 + 4),
                              *(undefined4 *)((longlong)puVar1 + 0x24),param_1[0x26],*puVar1,
                              param_1[0xf],param_1[0x11]);
                (*__imp_USER32_dll_SetRectEmpty)(param_1[0x29] + uVar10 * 0x28 + 0x18);
                lVar13 = param_1[0x28];
                lVar12 = param_1[10] + (ulonglong)*(uint *)(param_1 + 4) * 0x18c0 + 0x870;
                lVar11 = 0;
                do {
                  if (lVar13 == *(longlong *)(lVar12 + lVar11 * 8)) {
                    *(undefined8 *)(lVar12 + lVar11 * 8) = 0;
                  }
                  lVar11 = lVar11 + 1;
                  uVar17 = uVar2;
                } while (lVar11 != 0x40);
              }
              uVar15 = uVar15 + 1;
              uVar7 = uVar17 | uVar7;
            } while (uVar15 < *(uint *)(param_1 + 6));
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(uint *)((longlong)param_1 + 0x34));
      }
      *(undefined1 *)((longlong)param_1 + 0x169) = 0;
      if (*(char *)((longlong)param_1 + 0x4d) == '\x01') {
        FUN_180083208(param_1 + 0xc,(int)param_1[6]);
        *(undefined1 *)((longlong)param_1 + 0x4d) = 2;
      }
      if (uVar7 == 0) {
        return lVar16;
      }
      lVar12 = 0x60;
      if (param_1[0x28] != 0) {
        lVar12 = 0x118;
      }
      lVar11 = 0x30;
      if ((int)param_1[7] != 0) {
        lVar11 = 0x38;
      }
      FUN_180084968(param_1,lVar12 + (longlong)param_1,0,uVar7,
                    *(undefined4 *)((longlong)param_1 + lVar11));
      return lVar16;
    }
  }
  uVar7 = 0;
  uVar14 = 0;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    do {
      lVar16 = param_1[0x29];
      if (((lVar16 != 0) || (lVar16 = param_1[0x12], lVar16 != 0)) &&
         (iVar6 = (*__imp_USER32_dll_IsRectEmpty)
                            (lVar16 + (ulonglong)(*(int *)((longlong)param_1 + 0x3c) * uVar14) *
                                      0x28 + 0x18), iVar6 == 0)) {
        uVar7 = 1 << (ulonglong)(uVar14 & 0x1f) | uVar7;
      }
      if ((int)param_1[6] != 0) {
        uVar15 = 0;
        do {
          cVar5 = (**(code **)(*param_1 + 8))(param_1,uVar15,uVar14,1);
          uVar15 = uVar15 + 1;
          uVar2 = 0;
          if (cVar5 != '\0') {
            uVar2 = 1 << (ulonglong)(uVar14 & 0x1f);
          }
          uVar7 = uVar7 | uVar2;
        } while (uVar15 < *(uint *)(param_1 + 6));
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(uint *)((longlong)param_1 + 0x34));
  }
  lVar16 = param_1[0x28];
  if ((param_2 & 1) == 0) {
    if (lVar16 == 0) {
      lVar16 = param_1[0x11];
    }
  }
  else {
    if (lVar16 == 0) {
      lVar16 = 0;
      lVar11 = 0x98;
      lVar12 = 0x60;
    }
    else {
      lVar16 = param_1[0xf];
      lVar11 = 0x150;
      lVar12 = 0x118;
    }
    FUN_180083430(lVar12 + (longlong)param_1,lVar16);
    lVar16 = *(longlong *)(lVar11 + (longlong)param_1);
  }
  if (uVar7 != 0) {
    FUN_180084968(param_1,param_1 + 0xc,0,uVar7,*(undefined4 *)((longlong)param_1 + 0x3c));
  }
  return lVar16;
}

