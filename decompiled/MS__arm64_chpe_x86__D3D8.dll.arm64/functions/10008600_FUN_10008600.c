/*
 * FUN_10008600 at 10008600
 * undefined FUN_10008600(void)
 * Address ranges: 10008600-10008cdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10008600(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  bool bVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  int iVar17;
  uint local_8c;
  uint local_88;
  code *local_80;
  int local_7c;
  int local_78;
  int local_74;
  uint *local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  uint *local_5c;
  uint *local_58;
  uint *local_54;
  int local_50;
  
  local_68 = param_1 + 0x4000;
  local_50 = FUN_10021be0(param_1,param_2,0x8876086c);
  if (-1 < local_50) {
    iVar6 = *(int *)(*(int *)(param_1 + 0x210) + param_2 * 4 + -4);
    local_7c = iVar6 + 0x8000;
    local_6c = iVar6 + 0x9000;
    local_8c = *(uint *)(iVar6 + 0x939c);
    local_88 = 0;
    uVar14 = (local_8c & 0xaaaaaaaa) >> 1 | (local_8c & 0x55555555) << 1;
    uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
    for (uVar14 = (uint)LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10); (1 - (uVar14 >> 5) & 0xff) == 0;
        uVar14 = (uint)LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10)) {
      local_88 = local_88 + 0x20;
      if (0xf < local_88) goto LAB_100087d8;
      local_8c = *(uint *)(iVar6 + 0x939c + (local_88 >> 5) * 4);
      uVar14 = (local_8c & 0xaaaaaaaa) >> 1 | (local_8c & 0x55555555) << 1;
      uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
    }
    pbVar9 = (byte *)((int)&local_8c + ((int)uVar14 >> 3));
    *pbVar9 = *pbVar9 & ((byte)(1 << (ulonglong)(uVar14 & 7)) ^ 0xff);
    iVar12 = uVar14 + local_88;
    if (iVar12 != -1) {
      do {
        uVar2 = local_88;
        FUN_1000b3f0(param_1,iVar12,*(undefined4 *)(iVar6 + 0x9270 + iVar12 * 4),
                     *(undefined4 *)(iVar6 + 0x92b0 + iVar12 * 4),
                     *(undefined4 *)(iVar6 + 0x92f0 + iVar12 * 4),0);
        uVar14 = (local_8c & 0xaaaaaaaa) >> 1 | (local_8c & 0x55555555) << 1;
        uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
        for (uVar14 = (uint)LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10);
            (1 - (uVar14 >> 5) & 0xff) == 0; uVar14 = (uint)LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10)
            ) {
          local_88 = uVar2 + 0x20;
          if (0xf < local_88) goto LAB_100087d8;
          local_8c = *(uint *)(iVar6 + 0x939c + (local_88 >> 5) * 4);
          uVar14 = (local_8c & 0xaaaaaaaa) >> 1 | (local_8c & 0x55555555) << 1;
          uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
          uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
          uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
          uVar2 = local_88;
        }
        pbVar9 = (byte *)((int)&local_8c + ((int)uVar14 >> 3));
        *pbVar9 = *pbVar9 & ((byte)(1 << (ulonglong)(uVar14 & 7)) ^ 0xff);
        iVar12 = local_88 + uVar14;
      } while (iVar12 != -1);
    }
LAB_100087d8:
    if (*(char *)(local_6c + 0x3a2) != '\0') {
      FUN_1000b6c0(param_1,*(undefined4 *)(local_7c + 0x126c),0);
    }
    local_8c = *(uint *)(local_7c + 0x1390);
    local_88 = 0;
    uVar14 = (local_8c & 0xaaaaaaaa) >> 1 | (local_8c & 0x55555555) << 1;
    uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
    for (uVar14 = (uint)LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10); (1 - (uVar14 >> 5) & 0xff) == 0;
        uVar14 = (uint)LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10)) {
      local_88 = local_88 + 0x20;
      if (7 < local_88) goto LAB_10008c90;
      local_8c = *(uint *)(iVar6 + 0x9390 + (local_88 >> 5) * 4);
      uVar14 = (local_8c & 0xaaaaaaaa) >> 1 | (local_8c & 0x55555555) << 1;
      uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
    }
    pbVar9 = (byte *)((int)&local_8c + ((int)uVar14 >> 3));
    *pbVar9 = *pbVar9 & ((byte)(1 << (ulonglong)(uVar14 & 7)) ^ 0xff);
    uVar14 = local_88 + uVar14;
    if (uVar14 != 0xffffffff) {
      local_64 = iVar6 + 0x49b4;
      local_60 = param_1 + 0x9c4;
      local_80 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      local_5c = (uint *)(param_1 + 0xa04);
      local_70 = (uint *)(param_1 + 0x58a4);
      local_54 = (uint *)(param_1 + 0xa08);
      iVar12 = param_1 + 0xf94;
      local_78 = param_1;
      local_74 = iVar6;
      local_58 = local_5c;
      do {
        iVar16 = local_78;
        uVar2 = local_88;
        iVar17 = 0;
        piVar3 = (int *)(local_64 + uVar14 * 4);
        iVar7 = *piVar3;
        if (iVar7 == 0) {
          uVar11 = (*local_80)();
          (*extraout_w11_01)(uVar11,uVar14,0,0,0,0,0,0);
          iVar16 = iVar16 + uVar14 * 4;
        }
        else {
          iVar16 = local_78 + uVar14 * 4;
          if (iVar7 != *(int *)(iVar16 + 0xf94)) {
            switch(*(undefined4 *)(iVar7 + 0x18)) {
            case 3:
            case 5:
              puVar13 = (undefined4 *)(iVar7 + 0x44);
              uVar11 = (*local_80)();
              (*extraout_w11)(uVar11,uVar14,0,*puVar13,0,0,0,0);
              iVar17 = 0x58;
              break;
            case 4:
              puVar13 = (undefined4 *)(iVar7 + 0x94);
              uVar11 = (*local_80)();
              (*extraout_w11_00)(uVar11,uVar14,0,*puVar13,0,0,0,0);
              iVar17 = 0xa8;
              break;
            default:
              goto switchD_10008938_default;
            }
            iVar17 = *(int *)(iVar7 + iVar17);
          }
        }
switchD_10008938_default:
        iVar7 = *piVar3;
        iVar15 = *(int *)(iVar12 + uVar14 * 4);
        if (iVar7 != iVar15) {
          if (iVar7 != 0) {
            uVar11 = (*local_80)();
            (*extraout_w11_02)(uVar11);
            puVar1 = (uint *)(*(int *)(local_74 + uVar14 * 4 + 0x49b4) + 0x2c);
            *puVar1 = 1 << (ulonglong)(uVar14 & 0x1f) | *puVar1;
          }
          iVar7 = *(int *)(iVar16 + 0xf94);
          if (iVar7 != 0) {
            puVar1 = (uint *)(iVar7 + 0x2c);
            *puVar1 = *puVar1 & (1 << (ulonglong)(uVar14 & 0x1f) ^ 0xffffffffU);
            uVar11 = (*local_80)();
            (*extraout_w11_03)(uVar11);
          }
          iVar15 = *(int *)(local_74 + uVar14 * 4 + 0x49b4);
          *(int *)(iVar16 + 0xf94) = iVar15;
        }
        *local_58 = (uint)((iVar15 != 0) != (bool)*(char *)(local_60 + uVar14)) <<
                    (ulonglong)(uVar14 & 0x1f) | *local_5c;
        *(char *)(local_60 + uVar14) = iVar15 != 0;
        if ((*(int *)(iVar12 + uVar14 * 4) == 0) || (bVar10 = true, 1 < iVar17 - 0x28U)) {
          bVar10 = false;
        }
        uVar8 = 1 << (ulonglong)(uVar14 & 0x1f);
        uVar5 = *(uint *)(local_68 + 0x18a8);
        uVar4 = *(uint *)(local_68 + 0x18a4) & (uVar8 ^ 0xffffffff);
        if (bVar10) {
          uVar4 = *(uint *)(local_68 + 0x18a4) | uVar8;
        }
        *local_70 = uVar4;
        uVar4 = uVar5 & (uVar8 ^ 0xffffffff);
        if (bVar10) {
          uVar4 = uVar5 | uVar8;
        }
        *(uint *)(param_1 + 0x58a8) = uVar4;
        iVar16 = *(int *)(iVar12 + uVar14 * 4);
        if ((iVar16 == 0) || (*(char *)(iVar16 + 0x32) == '\0')) {
          iVar16 = 0;
        }
        else {
          iVar16 = 1;
        }
        *local_54 = iVar16 << (ulonglong)(uVar14 & 0x1f) | *local_54 & (uVar8 ^ 0xffffffff);
        uVar14 = (local_8c & 0xaaaaaaaa) >> 1 | (local_8c & 0x55555555) << 1;
        uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
        for (uVar14 = (uint)LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10);
            (1 - (uVar14 >> 5) & 0xff) == 0; uVar14 = (uint)LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10)
            ) {
          uVar2 = uVar2 + 0x20;
          if (7 < uVar2) goto LAB_10008c90;
          local_8c = *(uint *)(iVar6 + 0x9390 + (uVar2 >> 5) * 4);
          uVar14 = (local_8c & 0xaaaaaaaa) >> 1 | (local_8c & 0x55555555) << 1;
          uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
          uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
          uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
          local_88 = uVar2;
        }
        pbVar9 = (byte *)((int)&local_8c + ((int)uVar14 >> 3));
        *pbVar9 = *pbVar9 & ((byte)(1 << (ulonglong)(uVar14 & 7)) ^ 0xff);
        uVar14 = local_88 + uVar14;
      } while (uVar14 != 0xffffffff);
    }
LAB_10008c90:
    if ((*(char *)(local_6c + 0x3a3) != '\0') &&
       (*(int *)(local_7c + 0x1330) != *(int *)(local_68 + 0x18a0))) {
      *(int *)(local_68 + 0x18a0) = *(int *)(local_7c + 0x1330);
      *(undefined4 *)(param_1 + 0x58a8) = 0xff;
    }
  }
  return local_50;
}

