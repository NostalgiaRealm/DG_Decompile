/*
 * FUN_1801bf6e8 at 1801bf6e8
 * undefined FUN_1801bf6e8(void)
 * Address ranges: 1801bf6e8-1801bfb07;1801bfb18-1801bfdcb;1801bfdf4-1801c01bf;1801c0234-1801c0513;1801c0524-1801c1143
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1801bf6e8(undefined4 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong lVar20;
  undefined4 *puVar21;
  undefined8 extraout_x1;
  undefined1 uVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong extraout_x8;
  longlong lVar25;
  longlong lVar26;
  undefined8 extraout_x10;
  longlong extraout_x10_00;
  longlong extraout_x10_01;
  longlong extraout_x10_02;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  code *extraout_x11_08;
  code *extraout_x11_09;
  code *extraout_x11_10;
  code *extraout_x11_11;
  code *extraout_x11_12;
  code *extraout_x11_13;
  code *extraout_x11_14;
  code *extraout_x11_15;
  code *extraout_x11_16;
  code *extraout_x11_17;
  code *extraout_x11_18;
  code *extraout_x11_19;
  code *extraout_x11_20;
  code *extraout_x11_21;
  code *extraout_x11_22;
  code *extraout_x11_23;
  longlong extraout_x15;
  undefined8 *puVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong uVar31;
  code *pcVar32;
  undefined8 uVar33;
  undefined4 extraout_s0;
  float extraout_s0_00;
  double dVar34;
  double extraout_d0;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  uint local_2c0;
  uint local_2bc;
  code *local_2b8;
  undefined8 *local_2b0;
  undefined8 *local_2a8;
  uint local_2a0;
  uint local_29c;
  longlong *local_298;
  undefined8 *local_290;
  undefined8 *local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined *local_260;
  undefined8 *local_258;
  undefined1 auStack_250 [32];
  undefined4 local_230 [10];
  undefined4 local_208;
  undefined8 local_204;
  undefined8 uStack_1fc;
  undefined8 uStack_1f4;
  undefined8 uStack_1ec;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined8 uStack_1d4;
  undefined8 uStack_1cc;
  undefined8 uStack_1c4;
  undefined4 local_1bc;
  undefined1 auStack_1b8 [320];
  longlong local_78;
  
  lVar18 = DAT_1802588d0;
  *param_2 = 0;
  local_258 = param_2;
  if ((lVar18 != 0) ||
     (DAT_1802588d0 = FUN_1801bb848(s_Direct3DCreate9Ex_18022e1f8), DAT_1802588d0 != 0)) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    uVar15 = (*extraout_x11_23)(param_1,local_258);
    local_260 = (undefined *)(ulonglong)uVar15;
    goto LAB_1801c111c;
  }
  local_260 = (undefined *)CONCAT44(local_260._4_4_,0x80004005);
  if (DAT_18024d93c == '\0') {
    FUN_1802229d8(DAT_18024e830);
    DAT_18024e830 = 0;
    _DAT_18024e838 = 0;
    FUN_1802229d8(0);
    DAT_18024d93c = '\x01';
  }
  pcVar32 = (code *)__hybrid_os_arm64x_dispatch_icall;
  if (DAT_18024d920 == (undefined8 *)0x0) {
    DAT_18024d928 = FUN_18021f2d0();
    if (DAT_18024d928 == 0) goto LAB_1801c111c;
    uVar15 = *(uint *)(DAT_18024d928 + 0x800);
    bVar7 = false;
    if ((uVar15 < 7) && ((0x69U >> (ulonglong)(uVar15 & 0x1f) & 1) != 0)) {
      *(undefined1 *)(DAT_18024d928 + 0x826) = 1;
    }
    if (uVar15 - 5 < 2) {
      bVar6 = false;
      if ((uVar15 != 6) && (uVar15 != 5)) goto LAB_1801bf7e8;
LAB_1801bf7f4:
      uVar19 = DAT_180258908;
      uVar15 = *(uint *)(DAT_18024d928 + 0x8d2);
      if (uVar15 < 2) {
LAB_1801bf844:
        uVar33 = 0;
      }
      else if (uVar15 == 2) {
        uVar33 = 1;
      }
      else if (uVar15 == 3) {
        uVar33 = 2;
      }
      else {
        if (uVar15 != 4) goto LAB_1801bf844;
        uVar33 = 3;
      }
      lVar18 = FUN_1802229a8(0x490);
      if (lVar18 != 0) {
        DAT_18024d920 = (undefined8 *)FUN_1801fb568(lVar18,uVar19,uVar33);
        *DAT_18024d920 = &PTR_FUN_180238050;
        DAT_18024d920[0x90] = 0;
        *(undefined4 *)(DAT_18024d920 + 0x91) = 0xc000;
        *(undefined1 *)(DAT_18024d920 + 0x8f) = 0;
        uVar19 = (*pcVar32)(0x180224000);
        auVar40 = (*extraout_x11)(uVar19,&DAT_1802290f0);
        lVar18 = DAT_18024d928;
        (*pcVar32)(0x180224000,auVar40._0_8_,auVar40._8_8_,auVar40._0_8_);
        cVar10 = (*extraout_x11_00)(DAT_18024d920,lVar18 + 0x800);
        if (cVar10 == '\0') {
          if (DAT_18024d920 != (undefined8 *)0x0) {
            uVar19 = (*pcVar32)(0x180224000);
            (*extraout_x11_01)(uVar19,1);
          }
          DAT_18024d920 = (undefined8 *)0x0;
        }
        else {
          bVar7 = true;
        }
        goto LAB_1801bf908;
      }
      DAT_18024d920 = (undefined8 *)0x0;
LAB_1801bf918:
      uVar19 = DAT_180258908;
      if (bVar6) {
        FUN_1801fc208(&local_280,DAT_18024d928 + 0x800);
        uVar15 = *(uint *)(extraout_x15 + 0x8d2);
        if (uVar15 < 2) {
LAB_1801bf978:
          uVar33 = 0;
        }
        else if (uVar15 == 2) {
          uVar33 = 1;
        }
        else if (uVar15 == 3) {
          uVar33 = 2;
        }
        else {
          if (uVar15 != 4) goto LAB_1801bf978;
          uVar33 = 3;
        }
        lVar18 = FUN_1802229a8(0x4a0);
        if (lVar18 == 0) {
          DAT_18024d920 = (undefined8 *)0x0;
        }
        else {
          puVar28 = local_280;
          uVar37 = uStack_278;
          DAT_18024d920 = (undefined8 *)FUN_1801fb568(lVar18,uVar19,uVar33);
          *DAT_18024d920 = &PTR_FUN_180238110;
          DAT_18024d920[0x90] = 0;
          DAT_18024d920[0x92] = uVar37;
          DAT_18024d920[0x91] = puVar28;
          DAT_18024d920[0x93] = extraout_x10;
          *(undefined8 *)((longlong)DAT_18024d920 + 0x43c) = 0xffffffffffffffff;
          *(undefined8 *)((longlong)DAT_18024d920 + 0x434) = 0xffffffffffffffff;
          *(undefined8 *)((longlong)DAT_18024d920 + 0x44c) = 0xffffffffffffffff;
          *(undefined8 *)((longlong)DAT_18024d920 + 0x444) = 0xffffffffffffffff;
          *(undefined8 *)((longlong)DAT_18024d920 + 0x45c) = 0xffffffffffffffff;
          *(undefined8 *)((longlong)DAT_18024d920 + 0x454) = 0xffffffffffffffff;
          *(undefined8 *)((longlong)DAT_18024d920 + 0x46c) = 0xffffffffffffffff;
          *(undefined8 *)((longlong)DAT_18024d920 + 0x464) = 0xffffffffffffffff;
          *(bool *)(DAT_18024d920 + 0x8f) = *(int *)(DAT_18024d920 + 0x91) == 5;
          lVar18 = DAT_18024d928;
          uVar19 = (*pcVar32)(0x180224000);
          cVar10 = (*extraout_x11_02)(uVar19,lVar18 + 0x800,0);
          if (cVar10 != '\0') goto LAB_1801bfa0c;
        }
      }
    }
    else {
      bVar6 = true;
LAB_1801bf7e8:
      if ((uVar15 == 0) && (uVar17 = FUN_180116730(), (uVar17 & 1) != 0)) goto LAB_1801bf7f4;
LAB_1801bf908:
      if (DAT_18024d920 == (undefined8 *)0x0) goto LAB_1801bf918;
    }
    if (!bVar7) {
      if (DAT_18024d920 != (undefined8 *)0x0) {
        uVar19 = (*pcVar32)(0x180224000);
        (*extraout_x11_03)(uVar19,1);
      }
      DAT_18024d920 = (undefined8 *)0x0;
      FUN_18021fa28(DAT_18024d928);
      goto LAB_1801c111c;
    }
  }
LAB_1801bfa0c:
  lVar18 = FUN_18021f2d0();
  if (lVar18 != 0) {
    _DAT_18024cfc8 = *(undefined8 *)(lVar18 + 0xd8);
    DAT_18024cfc0 = *(undefined8 *)(lVar18 + 0xd0);
    _DAT_18024cfd8 = *(undefined8 *)(lVar18 + 0xe8);
    PTR_DAT_18024cfd0 = *(undefined **)(lVar18 + 0xe0);
    DAT_18024cfe0 = *(undefined8 *)(lVar18 + 0xf0);
    FUN_18021fa28();
  }
  lVar18 = FUN_18021f2d0();
  if (lVar18 != 0) {
    uVar15 = *(uint *)(lVar18 + 0x80);
    if (uVar15 != 0) {
      uVar17 = 0;
      do {
        if (*(undefined ***)(*(longlong *)(lVar18 + 0x78) + uVar17 * 8) == &PTR_PTR_180248b78) {
          if ((int)uVar17 != -1) goto LAB_1801bfb38;
          break;
        }
        uVar14 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar14;
      } while (uVar14 < uVar15);
    }
    uVar14 = *(uint *)(lVar18 + 0x84);
    if (uVar15 == uVar14) {
      uVar15 = uVar14 << 1;
      if (uVar14 == 0) {
        uVar15 = 0x10;
      }
      auVar40._8_8_ = 0;
      auVar40._0_8_ = CONCAT44(0,uVar15);
      lVar25 = CONCAT44(0,uVar15) << 3;
      if (SUB168(auVar40 * ZEXT816(8),8) != 0) {
        lVar25 = -1;
      }
      lVar25 = FUN_1802229a8(lVar25);
      if (lVar25 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(lVar25,*(longlong *)(lVar18 + 0x78),
                            (ulonglong)*(uint *)(lVar18 + 0x84) << 3);
      }
    }
    else {
      *(undefined ***)(*(longlong *)(lVar18 + 0x78) + (ulonglong)*(uint *)(lVar18 + 0x80) * 8) =
           &PTR_PTR_180248b78;
      *(int *)(lVar18 + 0x80) = *(int *)(lVar18 + 0x80) + 1;
    }
LAB_1801bfb38:
    FUN_18021fa28(lVar18);
  }
  DAT_180246550 = &DAT_180247250;
  DAT_180246558 = &DAT_1802472a0;
  DAT_180246560 = &DAT_180247294;
  DAT_180246568 = &DAT_180247118;
  DAT_180246570 = &DAT_180247064;
  DAT_180246578 = &DAT_180247028;
  DAT_180246700 = &DAT_180247238;
  DAT_180246708 = &DAT_1802471b8;
  DAT_180246710 = &DAT_180247130;
  DAT_180246718 = &DAT_1802470f0;
  DAT_180246720 = &DAT_180247058;
  DAT_180246728 = &DAT_180247018;
  DAT_1802468b0 = &DAT_180247228;
  DAT_1802468b8 = &DAT_180247280;
  DAT_1802468c0 = &DAT_180247274;
  DAT_1802468c8 = &DAT_1802470e0;
  DAT_1802468d0 = &DAT_18024704c;
  DAT_1802468d8 = &DAT_180247010;
  DAT_180246a60 = &DAT_180247218;
  DAT_180246a68 = &DAT_1802471a0;
  DAT_180246a70 = &DAT_18024726c;
  DAT_180246a78 = &DAT_1802470c8;
  DAT_180246a80 = &DAT_180247048;
  DAT_180246a88 = &DAT_180247008;
  DAT_180246c10 = &DAT_180247208;
  DAT_180246c18 = &DAT_180247168;
  DAT_180246c20 = &DAT_180247128;
  DAT_180246c28 = &DAT_1802470b0;
  DAT_180246c30 = &DAT_180247040;
  DAT_180246c38 = &DAT_180247000;
  DAT_180246dc0 = &DAT_1802471f8;
  DAT_180246dc8 = &DAT_180247180;
  DAT_180246dd0 = &DAT_180247264;
  DAT_180246dd8 = &DAT_180247090;
  DAT_180246de0 = &DAT_180247038;
  DAT_180246de8 = &DAT_180246ff8;
  DAT_180246f70 = &DAT_1802471e0;
  DAT_180246f78 = &DAT_180247140;
  DAT_180246f80 = &DAT_18024725c;
  DAT_180246f88 = &DAT_180247068;
  DAT_180246f90 = &DAT_180247030;
  DAT_180246f98 = &DAT_180246ff0;
  DAT_1802463a0 = &DAT_180247238;
  DAT_1802463a8 = &DAT_1802471b8;
  DAT_1802463b0 = &DAT_180247130;
  DAT_1802463b8 = &DAT_1802470f0;
  DAT_1802463c0 = &DAT_180247058;
  DAT_1802463c8 = &DAT_180247018;
  local_288 = (undefined8 *)FUN_1802229a8(0x100);
  if (local_288 != (undefined8 *)0x0) {
    *(undefined4 *)(local_288 + 2) = 0;
    local_288[1] = 0;
    local_288[3] = 0;
    local_288[4] = 0;
    local_288[5] = 0;
    local_288[6] = 0;
    local_288[7] = 0;
    *local_288 = &PTR_FUN_180229b48;
    local_288[0xd] = 0;
    local_288[0xe] = 0;
    local_288[0xf] = 0;
    local_288[0x10] = 0;
    *(undefined4 *)(local_288 + 8) = param_1;
    *(undefined1 *)((longlong)local_288 + 0x44) = 0;
    *(undefined2 *)((longlong)local_288 + 0x66) = 0;
    if (DAT_18024d900 == 0) {
      DAT_18024d900 = FUN_1802229a8(0x200);
      uVar17 = 0x40;
      DAT_18024d8f8 = 0x40;
      if (DAT_18024d900 != 0) goto LAB_1801bfd84;
LAB_1801bfd78:
      uVar22 = 0;
    }
    else {
      uVar17 = (ulonglong)DAT_18024d8f8;
LAB_1801bfd84:
      if ((uint)uVar17 == DAT_18024d8fc) {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (uVar17 & 0x7fffffff) << 1;
        lVar18 = (uVar17 & 0x7fffffff) << 4;
        if (SUB168(auVar4 * ZEXT816(8),8) != 0) {
          lVar18 = -1;
        }
        lVar18 = FUN_1802229a8(lVar18);
        if (lVar18 != 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(lVar18,DAT_18024d900,(ulonglong)DAT_18024d8f8 << 3);
        }
        goto LAB_1801bfd78;
      }
      *(undefined8 **)(DAT_18024d900 + (ulonglong)DAT_18024d8fc * 8) = local_288;
      DAT_18024d8fc = DAT_18024d8fc + 1;
      uVar22 = 1;
    }
    *(undefined1 *)((longlong)local_288 + 0x45) = uVar22;
    *(undefined8 *)((longlong)local_288 + 0x4e) = 0;
    *(undefined8 *)((longlong)local_288 + 0x46) = 0;
    *(undefined8 *)((longlong)local_288 + 0x5e) = 0;
    *(undefined8 *)((longlong)local_288 + 0x56) = 0;
    local_288[0x12] = 0;
    local_288[0x13] = 0;
    local_288[0x15] = 0;
    *(undefined4 *)(local_288 + 0x16) = 0;
    local_288[0x17] = local_288 + 0x14;
    local_288[0x19] = 0;
    local_288[0x18] = 0;
    local_288[0x1b] = 0;
    local_288[0x1a] = 0;
    local_288[0x1d] = 0;
    local_288[0x1c] = 0;
    *local_288 = &DAT_18022e2f0;
    local_288[0x11] = &PTR_FUN_1802296c8;
    local_288[0x1e] = 0;
    local_288[0x1f] = 0;
    local_288[0x14] = &PTR_FUN_18022e240;
    if (*(char *)((longlong)local_288 + 0x45) != '\0') {
      FUN_1801bda88(local_288 + 0x15,&DAT_180229438);
      FUN_1801bda88(extraout_x10_00 + 0xa8,&DAT_180229208);
      FUN_1801bda88(extraout_x10_01 + 0xa8,&DAT_1802292f8);
      *(undefined1 *)(extraout_x10_02 + 0x67) = 1;
    }
    puVar28 = local_288;
    if (*(char *)((longlong)local_288 + 0x45) != '\0') {
      *(undefined4 *)(local_288 + 2) = *(undefined4 *)(DAT_18024d928 + 0x858);
      (*pcVar32)(0x180224000);
      cVar10 = (*extraout_x11_04)();
      puVar27 = puVar28;
      if (cVar10 != '\0') {
        local_2b8 = pcVar32;
        local_2b0 = puVar28;
        local_2a8 = puVar28;
        lVar18 = 0;
        do {
          if ((&DAT_18024e9a8)[lVar18 * 0x4b] == 0) {
LAB_1801bff4c:
            bVar7 = false;
          }
          else {
            local_208 = 0x28;
            uStack_1fc = 0;
            local_204 = 0;
            uStack_1ec = 0;
            uStack_1f4 = 0;
            local_1e4 = 0;
            iVar11 = thunk_FUN_180223dec((&DAT_18024e9a8)[lVar18 * 0x4b],&local_208);
            if (iVar11 == 0) goto LAB_1801bff4c;
            bVar7 = true;
          }
          (&DAT_18024ea4c)[lVar18 * 600] = bVar7;
          if ((&DAT_18024e840)[lVar18 * 0x4b] == 0 && !bVar7) {
            FUN_180222c50(&DAT_18024e840 + lVar18 * 0x4b,0,600);
          }
          puVar27 = local_2a8;
          puVar28 = local_2b0;
          pcVar32 = local_2b8;
          lVar18 = lVar18 + 1;
        } while (lVar18 != 0x20);
        local_2a0 = 0;
        uVar15 = 0;
        (*local_2b8)(0x180224000);
        uVar12 = (*extraout_x11_05)();
        uVar14 = 0;
        if (uVar12 != 0) {
          uVar30 = 0;
          local_2c0 = uVar12;
          local_2b8 = pcVar32;
          local_2b0 = puVar28;
          local_2a8 = puVar27;
          do {
            uVar19 = (*local_2b8)();
            iVar11 = (*extraout_x11_06)(uVar19,uVar14);
            uVar12 = 0;
            if (iVar11 != 0) {
              local_290 = (undefined8 *)CONCAT44(local_290._4_4_,iVar11);
              local_29c = uVar14;
              do {
                pcVar32 = local_2b8;
                if (((0x1f < uVar30) ||
                    ((1 << (ulonglong)(uVar30 & 0x1f) & *(uint *)(DAT_18024d928 + 0x9ef)) != 0)) &&
                   ((*(int *)(DAT_18024d928 + 0x808) == 0 ||
                    (*(int *)(DAT_18024d928 + 0x808) - 1U == uVar12)))) {
                  uVar19 = (*local_2b8)(0x180224000);
                  uVar14 = local_29c;
                  iVar11 = (*extraout_x11_07)(uVar19,local_29c);
                  uVar19 = (*pcVar32)(0x180224000);
                  (*extraout_x11_08)(uVar19,auStack_1b8,uVar14,uVar12);
                  uVar17 = 0;
                  local_2bc = uVar15;
                  local_2a0 = uVar30;
                  do {
                    uVar14 = (uint)uVar17;
                    if (((iVar11 == (&DAT_18024e85c)[uVar17 * 0x96]) &&
                        (uVar12 == (&DAT_18024e860)[uVar17 * 0x96])) &&
                       ((&DAT_18024e9a8)[uVar17 * 0x4b] != 0)) {
                      local_1e0 = 0x28;
                      uStack_1d4 = 0;
                      local_1dc = 0;
                      uStack_1c4 = 0;
                      uStack_1cc = 0;
                      local_1bc = 0;
                      iVar13 = thunk_FUN_180223dec((&DAT_18024e9a8)[uVar17 * 0x4b],&local_1e0);
                      if (iVar13 != 0) break;
                    }
                    uVar14 = uVar14 + 1;
                    uVar17 = (ulonglong)uVar14;
                  } while (uVar14 < 0x20);
                  uVar30 = local_2a0;
                  uVar15 = local_2bc;
                  if ((uVar14 == 0x20) && (local_78 != 0)) {
                    local_230[0] = 0x28;
                    iVar13 = thunk_FUN_180223dec(local_78,local_230);
                    if (uVar15 < 0x20 && iVar13 != 0) {
                      do {
                        uVar17 = (ulonglong)uVar15;
                        local_298 = (longlong *)(uVar17 * 600 + 0x18024e9d4);
                        if ((&DAT_18024e9a8)[uVar17 * 0x4b] == 0) {
                          uVar19 = (*local_2b8)();
                          (*extraout_x11_09)(uVar19,auStack_250,iVar11,uVar12);
                          (&DAT_18024e840)[uVar17 * 0x4b] = 0;
                          (&DAT_18024e848)[uVar17 * 0x96] = 0;
                          (&DAT_18024e85c)[uVar17 * 0x96] = iVar11;
                          (&DAT_18024e860)[uVar17 * 0x96] = uVar12;
                    /* WARNING: Subroutine does not return */
                          thunk_FUN_180104c48(uVar17 * 600 + 0x18024e868,auStack_1b8,0x150);
                        }
                        uVar15 = uVar15 + 1;
                      } while (uVar15 < 0x20);
                    }
                  }
                }
                uVar12 = uVar12 + 1;
                uVar30 = uVar30 + 1;
                uVar14 = local_29c;
              } while (uVar12 < (uint)local_290);
            }
            uVar14 = uVar14 + 1;
            puVar28 = local_2b0;
            puVar27 = local_2a8;
            pcVar32 = local_2b8;
          } while (uVar14 < local_2c0);
        }
      }
      uVar17 = FUN_1801042e0(&DAT_18024d938);
      if ((int)uVar17 == 1) {
        DAT_18024d930 = thunk_FUN_180223798(uVar17,FUN_18012c7d8);
        uVar17 = thunk_FUN_180223770(1,FUN_18012c7d8);
        DAT_18024d948 = uVar17;
      }
      local_290 = puVar27 + 1;
      local_298 = puVar27 + 0xd;
      local_2a0 = 0;
      uVar29 = 0;
      local_2b8 = pcVar32;
      local_2b0 = puVar28;
      local_2a8 = puVar27;
      do {
        lVar18 = uVar29 * 600;
        if ((&DAT_18024ea4c)[lVar18] != '\0') {
          local_280 = (undefined8 *)&DAT_18024e848;
          local_2bc = local_2a0;
          FUN_1801042e0(&DAT_18024e848 + uVar29 * 0x96);
          lVar25 = DAT_18024d928;
          if ((&DAT_18024e840)[uVar29 * 0x4b] == 0) {
            if (*(uint *)(local_288 + 2) < 7) {
              uVar17 = 0;
              do {
                lVar20 = uVar17 * 600;
                if (((&DAT_18024e85c)[uVar17 * 0x96] == (&DAT_18024e85c)[uVar29 * 0x96]) &&
                   (lVar26 = (&DAT_18024e840)[uVar17 * 0x4b], lVar26 != 0)) goto LAB_1801c0358;
                uVar15 = (int)uVar17 + 1;
                uVar17 = (ulonglong)uVar15;
              } while (uVar15 < 0x20);
              lVar26 = 0;
LAB_1801c0358:
              (&DAT_18024ea58)[uVar29 * 0x4b] = *(undefined8 *)(DAT_18024d928 + 0x85c);
              if ((longlong *)*local_290 != (longlong *)0x0) {
                *(longlong *)*local_290 = lVar25 + 0xd0;
              }
              if (lVar26 == 0) {
                (*local_2b8)();
                iVar11 = (*extraout_x11_14)();
                local_29c = (&DAT_18024e85c)[uVar29 * 0x96];
                if (iVar11 == 2) {
                  lVar25 = FUN_1802229a8(0x1d198);
                  puVar28 = (undefined8 *)(lVar25 + 0x17U & 0xfffffffffffffff0);
                  puVar28[-1] = lVar25;
                  FUN_1801b7cb8(puVar28,local_29c);
                  *puVar28 = &PTR_FUN_18022ce40;
                  puVar28[3] = &PTR_FUN_18022c6b8;
                  puVar28[0x39e2] = 0;
                  puVar28[0x39e3] = 0;
                  puVar28[0x39e4] = 0;
                  puVar28[0x39f9] = 0;
                  puVar28[0x39fa] = 0;
                  puVar28[0x3a25] = 0;
                  puVar28[0x3a26] = 0;
                  puVar28[0x3a27] = 0;
                  puVar28[0x3a28] = 0;
                  *(undefined4 *)(puVar28 + 0x3a29) = 0;
                  puVar28[0x3a2a] = 0;
                  puVar28[0x3a2b] = 0xffffffff;
                  puVar28[0x3a2c] = 0;
                  *(undefined4 *)(puVar28 + 0x3a2d) = 0;
                  *(undefined4 *)((longlong)puVar28 + 0x1d16c) = 0;
                  puVar28[0x3a2e] = 0;
                  puVar28[0x39e6] = 0;
                  puVar28[0x39e5] = 0;
                  puVar28[0x39e8] = 0;
                  puVar28[0x39e7] = 0;
                  puVar28[0x39ea] = 0;
                  puVar28[0x39e9] = 0;
                  puVar28[0x39ec] = 0;
                  puVar28[0x39eb] = 0;
                  puVar28[0x39ee] = 0;
                  puVar28[0x39ed] = 0;
                  puVar28[0x39f0] = 0;
                  puVar28[0x39ef] = 0;
                  puVar28[0x39f2] = 0;
                  puVar28[0x39f1] = 0;
                  puVar28[0x39f4] = 0;
                  puVar28[0x39f3] = 0;
                  puVar28[0x39f6] = 0;
                  puVar28[0x39f5] = 0;
                  puVar28[0x39f8] = 0;
                  puVar28[0x39f7] = 0;
                  puVar28[0x39fc] = 0;
                  puVar28[0x39fb] = 0;
                  puVar28[0x39fe] = 0;
                  puVar28[0x39fd] = 0;
                  puVar28[0x3a00] = 0;
                  puVar28[0x39ff] = 0;
                  puVar28[0x3a02] = 0;
                  puVar28[0x3a01] = 0;
                  puVar28[0x3a04] = 0;
                  puVar28[0x3a03] = 0;
                  puVar28[0x3a06] = 0;
                  puVar28[0x3a05] = 0;
                  puVar28[0x3a08] = 0;
                  puVar28[0x3a07] = 0;
                  puVar28[0x3a0a] = 0;
                  puVar28[0x3a09] = 0;
                  puVar28[0x3a0c] = 0;
                  puVar28[0x3a0b] = 0;
                  puVar28[0x3a0e] = 0;
                  puVar28[0x3a0d] = 0;
                  puVar28[0x3a10] = 0;
                  puVar28[0x3a0f] = 0;
                  puVar28[0x3a12] = 0;
                  puVar28[0x3a11] = 0;
                  puVar28[0x3a14] = 0;
                  puVar28[0x3a13] = 0;
                  puVar28[0x3a16] = 0;
                  puVar28[0x3a15] = 0;
                  puVar28[0x3a18] = 0;
                  puVar28[0x3a17] = 0;
                  puVar28[0x3a1a] = 0;
                  puVar28[0x3a19] = 0;
                  puVar28[0x3a1c] = 0;
                  puVar28[0x3a1b] = 0;
                  puVar28[0x3a1e] = 0;
                  puVar28[0x3a1d] = 0;
                  puVar28[0x3a20] = 0;
                  puVar28[0x3a1f] = 0;
                  puVar28[0x3a22] = 0;
                  puVar28[0x3a21] = 0;
                  puVar28[0x3a23] = 0;
                  puVar28[0x3a24] = 0;
                }
                else {
                  lVar25 = FUN_1802229a8(0x1d518);
                  puVar28 = (undefined8 *)(lVar25 + 0x17U & 0xfffffffffffffff0);
                  puVar28[-1] = lVar25;
                  FUN_1801b7cb8(puVar28,local_29c);
                  *puVar28 = &PTR_FUN_18022c6c0;
                  puVar28[3] = &PTR_FUN_18022c6b8;
                  puVar28[0x39e2] = 0;
                  puVar28[0x39e3] = 0;
                  puVar28[0x3a0e] = 0;
                  puVar28[0x3a0f] = 0;
                  puVar28[0x3a10] = 0;
                  puVar28[0x3a11] = 0;
                  *(undefined4 *)(puVar28 + 0x3a12) = 0;
                  uVar19 = FUN_1802229a8(0xc0);
                  puVar28[0x3a13] = uVar19;
                  puVar28[0x3a14] = 8;
                  puVar28[0x3a15] = 0;
                  *(undefined1 *)(puVar28 + 0x3a16) = 0;
                  puVar28[14999] = 0;
                  puVar28[15000] = 0;
                  uVar19 = FUN_1802229a8(0x4800);
                  puVar28[0x3a99] = uVar19;
                  puVar28[0x3a9a] = 0x100;
                  puVar28[0x3a9b] = 0;
                  *(undefined4 *)(puVar28 + 0x3a9c) = 0;
                  puVar28[0x3a9d] = 0;
                  puVar28[0x3a9e] = 0;
                  puVar28[0x3a9f] = 0;
                  puVar28[0x39e5] = 0;
                  puVar28[0x39e4] = 0;
                  puVar28[0x39e7] = 0;
                  puVar28[0x39e6] = 0;
                  puVar28[0x39e9] = 0;
                  puVar28[0x39e8] = 0;
                  puVar28[0x39eb] = 0;
                  puVar28[0x39ea] = 0;
                  puVar28[0x39ed] = 0;
                  puVar28[0x39ec] = 0;
                  puVar28[0x39ef] = 0;
                  puVar28[0x39ee] = 0;
                  puVar28[0x39f1] = 0;
                  puVar28[0x39f0] = 0;
                  puVar28[0x39f3] = 0;
                  puVar28[0x39f2] = 0;
                  puVar28[0x39f5] = 0;
                  puVar28[0x39f4] = 0;
                  puVar28[0x39f7] = 0;
                  puVar28[0x39f6] = 0;
                  puVar28[0x39f9] = 0;
                  puVar28[0x39f8] = 0;
                  puVar28[0x39fb] = 0;
                  puVar28[0x39fa] = 0;
                  puVar28[0x39fd] = 0;
                  puVar28[0x39fc] = 0;
                  puVar28[0x39ff] = 0;
                  puVar28[0x39fe] = 0;
                  puVar28[0x3a01] = 0;
                  puVar28[0x3a00] = 0;
                  puVar28[0x3a03] = 0;
                  puVar28[0x3a02] = 0;
                  puVar28[0x3a05] = 0;
                  puVar28[0x3a04] = 0;
                  puVar28[0x3a07] = 0;
                  puVar28[0x3a06] = 0;
                  puVar28[0x3a09] = 0;
                  puVar28[0x3a08] = 0;
                  puVar28[0x3a0b] = 0;
                  puVar28[0x3a0a] = 0;
                  puVar28[0x3a0c] = 0;
                  puVar28[0x3a0d] = 0;
                  puVar28[0x3a18] = 0;
                  puVar28[0x3a17] = 0;
                  puVar28[0x3a1a] = 0;
                  puVar28[0x3a19] = 0;
                  puVar28[0x3a1c] = 0;
                  puVar28[0x3a1b] = 0;
                  puVar28[0x3a1e] = 0;
                  puVar28[0x3a1d] = 0;
                  puVar28[0x3a20] = 0;
                  puVar28[0x3a1f] = 0;
                  puVar28[0x3a22] = 0;
                  puVar28[0x3a21] = 0;
                  puVar28[0x3a24] = 0;
                  puVar28[0x3a23] = 0;
                  puVar28[0x3a26] = 0;
                  puVar28[0x3a25] = 0;
                  puVar28[0x3a28] = 0;
                  puVar28[0x3a27] = 0;
                  puVar28[0x3a2a] = 0;
                  puVar28[0x3a29] = 0;
                  puVar28[0x3a2c] = 0;
                  puVar28[0x3a2b] = 0;
                  puVar28[0x3a2e] = 0;
                  puVar28[0x3a2d] = 0;
                  puVar28[0x3a30] = 0;
                  puVar28[0x3a2f] = 0;
                  puVar28[0x3a32] = 0;
                  puVar28[0x3a31] = 0;
                  puVar28[0x3a34] = 0;
                  puVar28[0x3a33] = 0;
                  puVar28[0x3a36] = 0;
                  puVar28[0x3a35] = 0;
                  puVar28[0x3a38] = 0;
                  puVar28[0x3a37] = 0;
                  puVar28[0x3a3a] = 0;
                  puVar28[0x3a39] = 0;
                  puVar28[0x3a3c] = 0;
                  puVar28[0x3a3b] = 0;
                  puVar28[0x3a3e] = 0;
                  puVar28[0x3a3d] = 0;
                  puVar28[0x3a40] = 0;
                  puVar28[0x3a3f] = 0;
                  puVar28[0x3a42] = 0;
                  puVar28[0x3a41] = 0;
                  puVar28[0x3a44] = 0;
                  puVar28[0x3a43] = 0;
                  puVar28[0x3a46] = 0;
                  puVar28[0x3a45] = 0;
                  puVar28[0x3a48] = 0;
                  puVar28[0x3a47] = 0;
                  puVar28[0x3a4a] = 0;
                  puVar28[0x3a49] = 0;
                  puVar28[0x3a4c] = 0;
                  puVar28[0x3a4b] = 0;
                  puVar28[0x3a4e] = 0;
                  puVar28[0x3a4d] = 0;
                  puVar28[0x3a50] = 0;
                  puVar28[0x3a4f] = 0;
                  puVar28[0x3a52] = 0;
                  puVar28[0x3a51] = 0;
                  puVar28[0x3a54] = 0;
                  puVar28[0x3a53] = 0;
                  puVar28[0x3a56] = 0;
                  puVar28[0x3a55] = 0;
                  puVar28[0x3a58] = 0;
                  puVar28[0x3a57] = 0;
                  puVar28[0x3a5a] = 0;
                  puVar28[0x3a59] = 0;
                  puVar28[0x3a5c] = 0;
                  puVar28[0x3a5b] = 0;
                  puVar28[0x3a5e] = 0;
                  puVar28[0x3a5d] = 0;
                  puVar28[0x3a60] = 0;
                  puVar28[0x3a5f] = 0;
                  puVar28[0x3a62] = 0;
                  puVar28[0x3a61] = 0;
                  puVar28[0x3a64] = 0;
                  puVar28[0x3a63] = 0;
                  puVar28[0x3a66] = 0;
                  puVar28[0x3a65] = 0;
                  puVar28[0x3a68] = 0;
                  puVar28[0x3a67] = 0;
                  puVar28[0x3a6a] = 0;
                  puVar28[0x3a69] = 0;
                  puVar28[0x3a6c] = 0;
                  puVar28[0x3a6b] = 0;
                  puVar28[0x3a6e] = 0;
                  puVar28[0x3a6d] = 0;
                  puVar28[0x3a70] = 0;
                  puVar28[0x3a6f] = 0;
                  puVar28[0x3a72] = 0;
                  puVar28[0x3a71] = 0;
                  puVar28[0x3a74] = 0;
                  puVar28[0x3a73] = 0;
                  puVar28[0x3a76] = 0;
                  puVar28[0x3a75] = 0;
                  puVar28[0x3a78] = 0;
                  puVar28[0x3a77] = 0;
                  puVar28[0x3a7a] = 0;
                  puVar28[0x3a79] = 0;
                  puVar28[0x3a7c] = 0;
                  puVar28[0x3a7b] = 0;
                  puVar28[0x3a7e] = 0;
                  puVar28[0x3a7d] = 0;
                  puVar28[0x3a80] = 0;
                  puVar28[0x3a7f] = 0;
                  puVar28[0x3a82] = 0;
                  puVar28[0x3a81] = 0;
                  puVar28[0x3a84] = 0;
                  puVar28[0x3a83] = 0;
                  puVar28[0x3a86] = 0;
                  puVar28[0x3a85] = 0;
                  puVar28[0x3a88] = 0;
                  puVar28[0x3a87] = 0;
                  puVar28[0x3a8a] = 0;
                  puVar28[0x3a89] = 0;
                  puVar28[0x3a8c] = 0;
                  puVar28[0x3a8b] = 0;
                  puVar28[0x3a8e] = 0;
                  puVar28[0x3a8d] = 0;
                  puVar28[0x3a90] = 0;
                  puVar28[0x3a8f] = 0;
                  puVar28[0x3a92] = 0;
                  puVar28[0x3a91] = 0;
                  puVar28[0x3a94] = 0;
                  puVar28[0x3a93] = 0;
                  puVar28[0x3a96] = 0;
                  puVar28[0x3a95] = 0;
                  FUN_180222c50(puVar28 + 0x2018,0,0xc180);
                }
                pcVar32 = local_2b8;
                (&DAT_18024e840)[uVar29 * 0x4b] = puVar28;
                if (puVar28 != (undefined8 *)0x0) {
                  uVar19 = (*local_2b8)();
                  uVar17 = (*extraout_x11_15)(uVar19,extraout_x8 + 0x800,&PTR_PTR_1802472b0);
                  if ((uVar17 & 0xff) != 0) {
                    uVar17 = FUN_18012ca90(uVar17,uVar29,(&DAT_18024e860)[uVar29 * 0x96]);
                    if ((uVar17 & 1) != 0) {
                      uVar15 = *(uint *)(&DAT_18024e9d0 + uVar29 * 0x4b);
                      uVar14 = *(uint *)((longlong)&DAT_18024e9d0 + lVar18 + 4);
                      if (0x500 < uVar15) {
                        uVar15 = 0x500;
                      }
                      if (0x400 < uVar14) {
                        uVar14 = 0x400;
                      }
                      uVar15 = (*(uint *)((longlong)&DAT_18024e9e0 + lVar18 + 4) >> 3) * uVar14 *
                               uVar15;
                      lVar18 = 0;
                      if ((ulonglong)uVar15 < (ulonglong)(&DAT_18024ea58)[uVar29 * 0x4b]) {
                        lVar18 = (&DAT_18024ea58)[uVar29 * 0x4b] - (ulonglong)uVar15;
                      }
                      (&DAT_18024ea60)[uVar29 * 0x4b] = lVar18;
                      uVar19 = (*pcVar32)(0x180224000);
                      uVar16 = (*extraout_x11_16)(uVar19,(&DAT_18024e85c)[uVar29 * 0x96]);
                      (&DAT_18024ea24)[uVar29 * 0x96] = uVar16;
                      uVar19 = (*pcVar32)(0x180224000);
                      puVar21 = (undefined4 *)
                                (*extraout_x11_17)(uVar19,&local_2c0,(&DAT_18024e85c)[uVar29 * 0x96]
                                                  );
                      (&DAT_18024ea48)[uVar29 * 0x96] = *puVar21;
                      if (*(int *)(DAT_18024d928 + 0x9d7) == 1) {
                        uVar16 = 0x18;
                      }
                      else {
                        uVar16 = 0;
                        if (*(int *)(DAT_18024d928 + 0x9d7) == 2) {
                          uVar16 = 0x20;
                        }
                      }
                      (*local_2b8)((&DAT_18024e840)[uVar29 * 0x4b],uVar16);
                      (*extraout_x11_18)();
                      goto LAB_1801c03e8;
                    }
                    (*pcVar32)(0x180224000);
                    (*extraout_x11_19)();
                  }
                  (*local_2b8)();
                  (*extraout_x11_20)();
                }
                (&DAT_18024e840)[uVar29 * 0x4b] = 0;
              }
              else {
                uVar16 = (&DAT_18024e860)[uVar29 * 0x96];
                bVar7 = false;
                (&DAT_18024e840)[uVar29 * 0x4b] = lVar26;
                uVar17 = FUN_18012ca90(lVar20,uVar29,uVar16);
                if ((uVar17 & 1) != 0) {
                  uVar15 = *(uint *)(&DAT_18024e9d0 + uVar29 * 0x4b);
                  uVar14 = *(uint *)((longlong)&DAT_18024e9d0 + lVar18 + 4);
                  bVar7 = true;
                  if (0x500 < uVar15) {
                    uVar15 = 0x500;
                  }
                  if (0x400 < uVar14) {
                    uVar14 = 0x400;
                  }
                  uVar15 = (*(uint *)((longlong)&DAT_18024e9e0 + lVar18 + 4) >> 3) * uVar14 * uVar15
                  ;
                  lVar18 = 0;
                  if ((ulonglong)uVar15 < (ulonglong)(&DAT_18024ea58)[uVar29 * 0x4b]) {
                    lVar18 = (&DAT_18024ea58)[uVar29 * 0x4b] - (ulonglong)uVar15;
                  }
                  (&DAT_18024ea60)[uVar29 * 0x4b] = lVar18;
                }
                if (bVar7) goto LAB_1801c03e8;
              }
            }
            uVar17 = FUN_1801042d0(local_280 + uVar29 * 0x4b);
          }
          else {
LAB_1801c03e8:
            uVar17 = FUN_180108518(local_298,&local_2bc);
          }
        }
        plVar1 = local_298;
        puVar27 = local_2b0;
        local_2bc = local_2a0 + 1;
        uVar29 = (ulonglong)local_2bc;
        local_2a0 = local_2bc;
      } while (local_2bc < 0x20);
      uVar15 = 0;
      if (*(uint *)(local_2b0 + 0xe) != 0) {
        uVar29 = 0;
        uVar15 = *(uint *)(local_2b0 + 0xe);
        do {
          local_280 = (undefined8 *)0x0;
          uStack_278 = 0;
          if (uVar15 != 0) {
            uVar24 = 0;
            uStack_278._0_4_ = 0;
            uStack_278._4_4_ = 0;
            uVar14 = 0x7fffffff;
            uVar31 = (ulonglong)*(uint *)(*plVar1 + uVar29 * 4);
            local_280._0_4_ = 0;
            local_280._4_4_ = 0;
            iVar11 = (int)uStack_278;
            uVar12 = uStack_278._4_4_;
            uVar30 = (uint)local_280;
            iVar13 = local_280._4_4_;
            do {
              uVar3 = (ulonglong)*(uint *)(*plVar1 + uVar24 * 4);
              uVar23 = (uint)uVar24;
              if ((&DAT_18024e85c)[uVar31 * 0x96] == (&DAT_18024e85c)[uVar3 * 0x96]) {
                uVar2 = (&DAT_18024e860)[uVar3 * 0x96];
                iVar11 = iVar11 + 1;
                uStack_278 = CONCAT44(uStack_278._4_4_,iVar11);
                if (uVar2 < uVar14) {
                  uVar14 = uVar2;
                  uVar30 = uVar23;
                }
                if (uVar2 < (uint)(&DAT_18024e860)[uVar31 * 0x96]) {
                  iVar13 = iVar13 + 1;
                  local_280._4_4_ = iVar13;
                }
                local_280 = (undefined8 *)CONCAT44(local_280._4_4_,uVar30);
                if ((uint)uVar29 != uVar23) {
                  uVar12 = 1 << (ulonglong)(uVar23 & 0x1f) | uVar12;
                  uStack_278 = CONCAT44(uVar12,iVar11);
                }
              }
              uVar24 = (ulonglong)(uVar23 + 1);
            } while (uVar23 + 1 < uVar15);
          }
          iVar11 = *(int *)((longlong)puVar27 + 0x84);
          if (*(int *)(puVar27 + 0x10) == iVar11) {
            uVar15 = iVar11 << 1;
            if (iVar11 == 0) {
              uVar15 = 0x10;
            }
            auVar5._8_8_ = 0;
            auVar5._0_8_ = CONCAT44(0,uVar15);
            lVar18 = CONCAT44(0,uVar15) << 4;
            if (SUB168(auVar5 * ZEXT816(0x10),8) != 0) {
              lVar18 = -1;
            }
            uVar17 = FUN_1802229a8(lVar18);
            if (uVar17 != 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_180104c48(uVar17,puVar27[0xf],
                                  (ulonglong)*(uint *)((longlong)puVar27 + 0x84) << 4);
            }
          }
          else {
            puVar28 = (undefined8 *)(puVar27[0xf] + (ulonglong)*(uint *)(puVar27 + 0x10) * 0x10);
            puVar28[1] = uStack_278;
            *puVar28 = local_280;
            *(int *)(puVar27 + 0x10) = *(int *)(puVar27 + 0x10) + 1;
          }
          uVar15 = *(uint *)(puVar27 + 0xe);
          uVar14 = (uint)uVar29 + 1;
          uVar29 = (ulonglong)uVar14;
        } while (uVar14 < uVar15);
      }
      pcVar32 = local_2b8;
      puVar28 = local_2a8;
      plVar1 = local_298;
      if (uVar15 != 0) {
        uVar29 = 0;
        if (uVar15 != 0) {
          while( true ) {
            local_2b0 = puVar27;
            plVar1 = local_298;
            uVar17 = FUN_18012bd08(local_290,*(undefined4 *)(*local_298 + uVar29 * 4));
            puVar27 = local_2b0;
            puVar28 = local_2a8;
            if ((uVar17 & 1) == 0) break;
            uVar31 = (ulonglong)*(uint *)(*plVar1 + uVar29 * 4);
            local_280 = (undefined8 *)(uVar31 * 600 + 0x18024e9d4);
            FUN_1802229d8((&DAT_18024ea88)[uVar31 * 0x4b]);
            (&DAT_18024ea88)[uVar31 * 0x4b] = 0;
            (&DAT_18024ea90)[uVar31 * 0x4b] = 0;
            uVar16 = (&DAT_18024e85c)[uVar31 * 0x96];
            uVar19 = (*pcVar32)(0x180224000);
            uVar14 = (*extraout_x11_10)(uVar19,uVar16);
            uVar17 = 0;
            uVar15 = (uint)uVar29;
            if (uVar14 != 0) {
              uVar12 = 0;
              local_2bc = (uint)uVar29;
              do {
                uVar19 = (*pcVar32)(0x180224000);
                local_2c0 = (*extraout_x11_11)(uVar19,uVar16,uVar12);
                uVar17 = FUN_180108518(&DAT_18024ea88 + uVar31 * 0x4b,&local_2c0);
                puVar9 = local_280;
                puVar28 = local_2a8;
                puVar27 = local_2b0;
                if ((uVar17 & 1) == 0) {
                  uVar29 = (ulonglong)local_2bc;
                  uVar17 = FUN_1802229d8(*(undefined8 *)((longlong)local_280 + 0xb4));
                  *(undefined8 *)((longlong)puVar9 + 0xb4) = 0;
                  *(undefined8 *)((longlong)puVar9 + 0xbc) = 0;
                  goto LAB_1801c065c;
                }
                uVar12 = uVar12 + 1;
                uVar15 = local_2bc;
              } while (uVar12 < uVar14);
            }
            uVar29 = (ulonglong)(uVar15 + 1);
            puVar27 = local_2b0;
            puVar28 = local_2a8;
            if (*(uint *)(local_2b0 + 0xe) <= uVar15 + 1) break;
          }
        }
LAB_1801c065c:
        uVar15 = (uint)uVar29;
        plVar1 = local_298;
        if (uVar15 == *(uint *)(puVar27 + 0xe)) {
          lVar18 = FUN_1802229a8(0x1004);
          puVar27[3] = lVar18;
          uVar17 = 0;
          plVar1 = local_298;
          if (lVar18 != 0) {
            lVar18 = FUN_1802229a8(0x1004);
            puVar27[4] = lVar18;
            if (lVar18 != 0) {
              lVar18 = FUN_1802229a8(0x1004);
              puVar27[5] = lVar18;
              if (lVar18 != 0) {
                lVar18 = FUN_1802229a8(0x1004);
                puVar27[6] = lVar18;
                if (lVar18 != 0) {
                  lVar18 = FUN_1802229a8(0x1004);
                  puVar27[7] = lVar18;
                  if (lVar18 != 0) {
                    fVar39 = 1.0;
                    uVar15 = 0;
                    fVar38 = fVar39;
                    do {
                      fVar35 = (float)uVar15 * 0.0009765625;
                      dVar34 = (double)FUN_180220d60(0x4000000000000000,fVar35);
                      fVar36 = (float)dVar34;
                      uVar17 = FUN_180220d60((double)fVar35);
                      *(float *)(puVar27[3] + (uVar17 & 0xffffffff) * 4) =
                           (float)extraout_d0 / fVar36;
                      uVar15 = FUN_1802209f0(0x40000000);
                      *(undefined4 *)(puVar27[4] + (ulonglong)uVar15 * 4) = extraout_s0;
                      *(float *)(puVar27[5] + (ulonglong)uVar15 * 4) = fVar38;
                      uVar15 = uVar15 + 1;
                      fVar38 = fVar38 + fVar38;
                    } while (uVar15 < 0x401);
                    uVar15 = 0;
                    do {
                      uVar15 = FUN_1802209f0(0x402df854,(float)uVar15 * 0.0009765625);
                      puVar9 = local_288;
                      *(float *)(puVar27[6] + (ulonglong)uVar15 * 4) = 1.0 / extraout_s0_00;
                      fVar38 = 1.0 / fVar39;
                      fVar39 = fVar39 * 2.7182817;
                      *(float *)(puVar27[7] + (ulonglong)uVar15 * 4) = fVar38;
                      uVar15 = uVar15 + 1;
                    } while (uVar15 < 0x401);
                    *(undefined1 *)((longlong)puVar27 + 0x44) = 1;
                    uVar17 = 0;
                    if (*(int *)(puVar27 + 0xe) != 0) {
                      do {
                        local_2a8 = puVar28;
                        local_2b0 = puVar27;
                        local_2b8 = pcVar32;
                        uVar29 = (ulonglong)*(uint *)(*local_298 + uVar17 * 4);
                        local_280 = &DAT_18024e338;
                        FUN_1802229d8((&DAT_18024e338)[uVar29 * 5]);
                        local_2c0 = 1;
                        (&DAT_18024e338)[uVar29 * 5] = 0;
                        (&DAT_18024e340)[uVar29 * 5] = 0;
                        FUN_180108518(&DAT_18024e338 + uVar29 * 5,&local_2c0);
                        puVar28 = local_280;
                        uVar15 = 0;
                        uVar14 = (uint)uVar17;
                        if ((&DAT_180246580)[(ulonglong)*(uint *)(puVar9 + 2) * 0x1b0] != '\0') {
                          local_260 = &DAT_180246580;
                          local_288 = (undefined8 *)&DAT_180246580;
                          local_2bc = (uint)uVar17;
                          do {
                            puVar27 = local_288;
                            uVar17 = 0;
                            if (*(int *)(&DAT_18024ea90 + uVar29 * 0x4b) != 0) {
                              local_290 = (undefined8 *)CONCAT44(local_290._4_4_,uVar15);
                              do {
                                uVar14 = (uint)*(byte *)((longlong)puVar27 +
                                                        (ulonglong)*(uint *)(puVar9 + 2) * 0x1b0 +
                                                        (ulonglong)uVar15);
                                if (*(uint *)((&DAT_18024ea88)[uVar29 * 0x4b] + uVar17 * 4) ==
                                    uVar14) {
                                  local_2c0 = uVar14;
                                  FUN_180108518(puVar28 + uVar29 * 5,&local_2c0);
                                }
                                uVar14 = (int)uVar17 + 1;
                                uVar17 = (ulonglong)uVar14;
                              } while (uVar14 < *(uint *)(&DAT_18024ea90 + uVar29 * 0x4b));
                              uVar15 = (uint)local_290;
                            }
                            uVar15 = uVar15 + 1;
                            uVar14 = local_2bc;
                          } while (local_260[(ulonglong)*(uint *)(puVar9 + 2) * 0x1b0 +
                                             (ulonglong)uVar15] != '\0');
                        }
                        uVar17 = (ulonglong)(uVar14 + 1);
                        pcVar32 = local_2b8;
                        puVar27 = local_2b0;
                        puVar28 = local_2a8;
                      } while (uVar14 + 1 < *(uint *)(local_2b0 + 0xe));
                      uVar17 = 0;
                      if (*(uint *)(local_2b0 + 0xe) != 0) {
                        do {
                          uVar29 = (ulonglong)*(uint *)(*local_298 + uVar17 * 4);
                          FUN_1802229d8((&DAT_18024e348)[uVar29 * 5]);
                          local_2c0 = 1;
                          (&DAT_18024e348)[uVar29 * 5] = 0;
                          (&DAT_18024e350)[uVar29 * 5] = 0;
                          FUN_180108518(&DAT_18024e348 + uVar29 * 5,&local_2c0);
                          uVar31 = 0;
                          iVar11 = (int)uVar17;
                          if (DAT_1802463d0 != '\0') {
                            local_290 = (undefined8 *)CONCAT44(local_290._4_4_,(int)uVar17);
                            do {
                              uVar17 = 0;
                              if (*(int *)(&DAT_18024ea90 + uVar29 * 0x4b) != 0) {
                                do {
                                  if (*(uint *)((&DAT_18024ea88)[uVar29 * 0x4b] + uVar17 * 4) ==
                                      (uint)(byte)(&DAT_1802463d0)[uVar31]) {
                                    local_2c0 = (uint)(byte)(&DAT_1802463d0)[uVar31];
                                    FUN_180108518(&DAT_18024e348 + uVar29 * 5,&local_2c0);
                                  }
                                  uVar15 = (int)uVar17 + 1;
                                  uVar17 = (ulonglong)uVar15;
                                } while (uVar15 < *(uint *)(&DAT_18024ea90 + uVar29 * 0x4b));
                              }
                              uVar31 = (ulonglong)((int)uVar31 + 1);
                            } while ((&DAT_1802463d0)[uVar31] != '\0');
                            iVar11 = (uint)local_290;
                          }
                          uVar17 = (ulonglong)(iVar11 + 1U);
                          puVar27 = local_2b0;
                          puVar28 = local_2a8;
                          pcVar32 = local_2b8;
                        } while (iVar11 + 1U < *(uint *)(local_2b0 + 0xe));
                      }
                    }
                    lVar18 = DAT_18024d928;
                    plVar1 = (longlong *)0x0;
                    if (puVar28 != (undefined8 *)0x0) {
                      plVar1 = puVar28 + 0x11;
                    }
                    (*pcVar32)(0x180224000);
                    uVar14 = (*extraout_x11_12)(lVar18,&DAT_1802290c0);
                    uVar19 = 0x180224000;
                    local_2b0 = puVar27;
                    local_298 = plVar1;
                    for (uVar15 = 0; plVar1 = local_298, puVar27 = local_2b0, uVar15 < uVar14;
                        uVar15 = uVar15 + 1) {
                      (*pcVar32)();
                      local_280 = (undefined8 *)(*extraout_x11_13)(lVar18,&DAT_1802290c0,uVar15);
                      if (local_280 == (undefined8 *)0x0) goto LAB_1801c1034;
                      auVar40 = FUN_18010be98(puVar28 + 0x12,&local_280);
                      uVar19 = auVar40._8_8_;
                      if ((auVar40._0_8_ & 1) == 0) goto LAB_1801c1034;
                    }
                    uVar14 = 1;
                    for (uVar15 = 0; uVar15 < *(uint *)(puVar27 + 0x13); uVar15 = uVar15 + 1) {
                      uVar19 = (*pcVar32)(*(undefined8 *)(puVar28[0x12] + (ulonglong)uVar15 * 8),
                                          uVar19);
                      uVar12 = (*extraout_x11_21)(uVar19,plVar1);
                      uVar14 = uVar12 & 0xff & uVar14;
                      if (uVar14 == 0) goto joined_r0x0001801c0ff4;
                      uVar19 = extraout_x1;
                    }
                    goto LAB_1801c1034;
                  }
                  FUN_1802229d8(puVar27[6]);
                  puVar27[6] = 0;
                }
                FUN_1802229d8(puVar27[5]);
                puVar27[5] = 0;
              }
              FUN_1802229d8(puVar27[4]);
              puVar27[4] = 0;
            }
            uVar17 = FUN_1802229d8(puVar27[3]);
            puVar27[3] = 0;
            plVar1 = local_298;
          }
        }
        while (plVar8 = local_298, uVar15 != 0) {
          lVar18 = *local_298;
          uVar15 = (int)uVar29 - 1;
          uVar29 = (ulonglong)uVar15;
          local_298 = plVar1;
          uVar17 = FUN_18012bbb8(uVar17,*(undefined4 *)(lVar18 + uVar29 * 4));
          plVar1 = local_298;
          local_298 = plVar8;
        }
      }
      local_298 = plVar1;
      iVar11 = FUN_1801042d0(&DAT_18024d938);
      if ((iVar11 == 0) && (DAT_18024d930 != 0)) {
        thunk_FUN_180223784();
        thunk_FUN_1802237ac(DAT_18024d948);
      }
    }
    goto LAB_1801c10d4;
  }
  goto LAB_1801c10e8;
joined_r0x0001801c0ff4:
  for (; uVar15 != 0; uVar15 = uVar15 - 1) {
    uVar19 = (*pcVar32)();
    (*extraout_x11_22)(uVar19,plVar1);
  }
  FUN_1802229d8(puVar28[0x12]);
  puVar28[0x12] = 0;
  puVar27[0x13] = 0;
LAB_1801c1034:
  iVar11 = FUN_1801bc2e8(puVar28 + 0x14,&DAT_1802292f8,local_258);
  local_260 = (undefined *)CONCAT44(local_260._4_4_,iVar11);
  if (-1 < iVar11) goto LAB_1801c111c;
  FUN_1801bbae0(puVar28);
LAB_1801c10d4:
  FUN_1801bb990(puVar28);
  FUN_1802229d8(puVar28,0x100);
LAB_1801c10e8:
  uVar17 = FUN_180106818();
  if ((uVar17 & 1) != 0) {
    FUN_1801c1640();
  }
LAB_1801c111c:
  return (ulonglong)local_260 & 0xffffffff;
}

