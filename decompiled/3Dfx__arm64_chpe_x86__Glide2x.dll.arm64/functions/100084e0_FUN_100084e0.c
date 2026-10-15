/*
 * FUN_100084e0 at 100084e0
 * undefined FUN_100084e0(void)
 * Address ranges: 100084e0-10008a1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

int FUN_100084e0(undefined4 param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int extraout_w11;
  int extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  uint local_890;
  int local_88c;
  int local_888 [2];
  undefined1 uStack_880;
  undefined1 auStack_87f [31];
  ushort auStack_860 [24];
  undefined1 auStack_830 [5];
  char acStack_82b [6];
  char acStack_825 [1013];
  undefined1 auStack_430 [1024];
  
  local_888[0] = 0;
  local_888[1] = 0;
  local_890 = 0;
  local_88c = 0;
  uVar9 = FUN_10008250(param_1,auStack_830,auStack_430,local_888,local_888 + 1,&local_88c);
  if ((((((uVar9 & 1) != 0) && (uVar9 = FUN_10008438(auStack_830,0x100956a0,5), (uVar9 & 1) != 0))
       && (iVar7 = FUN_10008480(acStack_82b,&local_890), iVar7 != 0)) &&
      ((acStack_82b[iVar7] == '.' &&
       (iVar7 = FUN_10008480(acStack_82b + iVar7 + 1,&local_890), iVar7 != 0)))) &&
     ((acStack_82b[extraout_w11 + iVar7 + 1] == '\0' &&
      (uVar9 = FUN_10008250(param_1,auStack_830,auStack_430,local_888,local_888 + 1,&local_88c),
      (uVar9 & 1) != 0)))) {
    uVar9 = ZEXT48(&PTR_DAT_10095740);
    local_890 = 0;
    while (uVar14 = local_890, uVar13 = local_890,
          uVar10 = FUN_10008438(auStack_830,*(undefined4 *)((int)uVar9 + local_890 * 4),0xffffffff),
          (uVar10 & 1) == 0) {
      local_890 = uVar14 + 1;
      if (0xc < local_890) {
        return 0;
      }
    }
    param_2[5] = (&DAT_100956e8)[uVar13];
    if (0xc < uVar14) {
      return 0;
    }
    uVar9 = FUN_10008250(param_1,auStack_830,auStack_430,local_888,local_888 + 1,&local_88c);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    uVar9 = FUN_10008438(auStack_830,s_lod_range__100956a8,0xb);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    iVar7 = FUN_10008480(acStack_825,&local_890);
    if (iVar7 == 0) {
      return 0;
    }
    iVar15 = 1;
    for (uVar14 = local_890; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1) {
      iVar15 = iVar15 + 1;
    }
    iVar8 = 0;
    if (uVar14 == 1) {
      iVar8 = iVar15;
    }
    if (iVar8 == 0) {
      return 0;
    }
    puVar12 = &DAT_10095778;
    param_2[2] = *(uint *)(iVar8 * 4 + 0x10095774);
    if (acStack_825[iVar7] != ' ') {
      return 0;
    }
    iVar7 = FUN_10008480(acStack_825 + iVar7 + 1,&local_890);
    if (iVar7 == 0) {
      return 0;
    }
    if (*(char *)(extraout_w11_00 + iVar7) != '\0') {
      return 0;
    }
    iVar7 = 1;
    for (uVar14 = local_890; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1) {
      iVar7 = iVar7 + 1;
    }
    iVar15 = 0;
    if (uVar14 == 1) {
      iVar15 = iVar7;
    }
    if (iVar15 == 0) {
      return 0;
    }
    param_2[3] = puVar12[iVar15 + -1];
    uVar9 = FUN_10008250(param_1,auStack_830,auStack_430,local_888,local_888 + 1,&local_88c);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    uVar9 = FUN_10008438(auStack_830,s_aspect_ratio__100956b8,0xe);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    uVar9 = ZEXT48(&PTR_DAT_10095720);
    uVar14 = 0;
    do {
      uVar13 = uVar14;
      uVar10 = FUN_10008438(acStack_825 + 3,*(undefined4 *)((int)uVar9 + uVar14 * 4),0xffffffff);
      if ((uVar10 & 1) != 0) {
        param_2[4] = (&DAT_100956c8)[uVar13];
        if (6 < uVar14) {
          return 0;
        }
        uVar13 = param_2[4];
        uVar4 = param_2[3];
        uVar5 = *(uint *)(&DAT_10096968 + uVar4 * 4);
        uVar14 = uVar5 >> (ulonglong)(*(byte *)(uVar13 + 0x1009695c) & 0x1f);
        if (uVar14 == 0) {
          uVar14 = 1;
        }
        uVar3 = uVar14;
        if (uVar13 - 4 < 3) {
          uVar3 = uVar5;
          uVar5 = uVar14;
        }
        *param_2 = (uVar3 | uVar5 << 0x10) >> 0x10;
        param_2[1] = uVar3 & 0xffff;
        uVar14 = param_2[5];
        uVar11 = FUN_1001ef08(3,param_2[2],uVar4,uVar13);
        iVar15 = local_888[0];
        iVar7 = local_88c;
        local_890 = 0;
        param_2[0x107] = (int)uVar11 + 7U & 0xfffffff8;
        pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
        if ((uVar14 - 1 & 0xfffffff7) == 0) {
          (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (uVar11,local_88c + local_888[0] + -0x400);
          (*extraout_w11_03)(param_1,extraout_x1_00,0,0);
          (*pcVar6)();
          iVar8 = (*extraout_w11_04)(param_1,0x50,&uStack_880,&local_890);
          if (local_890 != 0x50 || iVar8 != 0) {
            return 0;
          }
          uVar14 = 0;
          do {
            iVar8 = uVar14 * 2;
            iVar16 = uVar14 + 0x18;
            uVar14 = uVar14 + 1;
            *(undefined1 *)((int)param_2 + iVar16) = auStack_87f[iVar8];
          } while (uVar14 < 0x10);
          iVar16 = 0x18;
          iVar8 = 0;
          do {
            iVar16 = iVar16 + -1;
            *(ushort *)((int)param_2 + iVar8 + 0x28) =
                 *(ushort *)((int)auStack_860 + iVar8) >> 8 |
                 *(ushort *)((int)auStack_860 + iVar8) << 8;
            iVar8 = iVar8 + 2;
          } while (iVar16 != 0);
          local_88c = iVar7 + 0x50;
        }
        else if ((uVar14 < 0xf) && ((0x4020U >> (ulonglong)(uVar14 & 0x1f) & 1) != 0)) {
          (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (uVar11,local_88c + local_888[0] + -0x400);
          (*extraout_w11_01)(param_1,extraout_x1,0,0);
          puVar1 = param_2 + 6;
          (*pcVar6)();
          iVar8 = (*extraout_w11_02)(param_1,0x400,puVar1,&local_890);
          if (local_890 != 0x400 || iVar8 != 0) {
            return 0;
          }
          uVar14 = 0;
          do {
            iVar8 = uVar14 * 4;
            puVar2 = puVar1 + uVar14;
            iVar16 = uVar14 * 4;
            uVar14 = uVar14 + 1;
            uVar13 = *puVar2;
            *puVar2 = (uint)(CONCAT44((uint)*(byte *)((int)param_2 + iVar16 + 0x1a) |
                                      ((uint)*(byte *)((int)param_2 + iVar8 + 0x19) |
                                      (uVar13 & 0xffff) << 8) << 8,uVar13) >> 0x18);
          } while (uVar14 < 0x100);
          local_88c = iVar7 + 0x400;
        }
        return local_88c + iVar15 + -0x400;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < 7);
  }
  return 0;
}

