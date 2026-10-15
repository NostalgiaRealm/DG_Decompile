/*
 * FUN_1801bdc78 at 1801bdc78
 * undefined FUN_1801bdc78(void)
 * Address ranges: 1801bdc78-1801be09f;1801be0b0-1801be363;1801be38c-1801be73f;1801be7b4-1801bea93;1801beaa4-1801bf6c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1801bdc78(uint param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  longlong *plVar8;
  longlong *plVar9;
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
  undefined *puVar22;
  undefined8 extraout_x1;
  undefined1 uVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong extraout_x8;
  longlong lVar26;
  longlong lVar27;
  undefined8 extraout_x10;
  longlong extraout_x10_00;
  longlong extraout_x10_01;
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
  undefined8 *puVar28;
  undefined8 *puVar29;
  uint uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  code *pcVar33;
  undefined8 uVar34;
  undefined4 extraout_s0;
  float extraout_s0_00;
  double dVar35;
  double extraout_d0;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  uint local_2c0;
  uint local_2bc;
  code *local_2b8;
  undefined8 *local_2b0;
  undefined8 *local_2a8;
  uint local_2a0;
  uint local_29c;
  undefined8 *local_298;
  longlong *local_290;
  undefined8 *local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 *local_260;
  undefined *local_258;
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
  
  local_288 = (undefined8 *)0x0;
  local_258 = (undefined *)0x0;
  if ((DAT_1802588c8 != 0) ||
     (DAT_1802588c8 = FUN_1801bb848(s_Direct3DCreate9_18022e1e8), DAT_1802588c8 != 0)) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    puVar22 = (undefined *)(*extraout_x11_23)(param_1);
    return (undefined8 *)puVar22;
  }
  if (1 < (param_1 & 0x7fffffff) - 0x1f) {
    return (undefined8 *)(undefined *)local_288;
  }
  if (DAT_18024d93c == '\0') {
    FUN_1802229d8(DAT_18024e830);
    DAT_18024e830 = 0;
    _DAT_18024e838 = 0;
    FUN_1802229d8(0);
    DAT_18024d93c = '\x01';
  }
  pcVar33 = (code *)__hybrid_os_arm64x_dispatch_icall;
  if (DAT_18024d920 == (undefined8 *)0x0) {
    DAT_18024d928 = FUN_18021f2d0();
    if (DAT_18024d928 == 0) {
      return (undefined8 *)(undefined *)local_288;
    }
    uVar15 = *(uint *)(DAT_18024d928 + 0x800);
    bVar7 = false;
    if ((uVar15 < 7) && ((0x69U >> (ulonglong)(uVar15 & 0x1f) & 1) != 0)) {
      *(undefined1 *)(DAT_18024d928 + 0x826) = 1;
    }
    if (uVar15 - 5 < 2) {
      bVar6 = false;
      if ((uVar15 != 6) && (uVar15 != 5)) goto LAB_1801bdd80;
LAB_1801bdd8c:
      uVar19 = DAT_180258908;
      uVar15 = *(uint *)(DAT_18024d928 + 0x8d2);
      if (uVar15 < 2) {
LAB_1801bdddc:
        uVar34 = 0;
      }
      else if (uVar15 == 2) {
        uVar34 = 1;
      }
      else if (uVar15 == 3) {
        uVar34 = 2;
      }
      else {
        if (uVar15 != 4) goto LAB_1801bdddc;
        uVar34 = 3;
      }
      lVar18 = FUN_1802229a8(0x490);
      if (lVar18 != 0) {
        DAT_18024d920 = (undefined8 *)FUN_1801fb568(lVar18,uVar19,uVar34);
        *DAT_18024d920 = &PTR_FUN_180238050;
        DAT_18024d920[0x90] = 0;
        *(undefined4 *)(DAT_18024d920 + 0x91) = 0xc000;
        *(undefined1 *)(DAT_18024d920 + 0x8f) = 0;
        uVar19 = (*pcVar33)(0x180224000);
        auVar41 = (*extraout_x11)(uVar19,&DAT_1802290f0);
        lVar18 = DAT_18024d928;
        (*pcVar33)(0x180224000,auVar41._0_8_,auVar41._8_8_,auVar41._0_8_);
        cVar10 = (*extraout_x11_00)(DAT_18024d920,lVar18 + 0x800);
        if (cVar10 == '\0') {
          if (DAT_18024d920 != (undefined8 *)0x0) {
            uVar19 = (*pcVar33)(0x180224000);
            (*extraout_x11_01)(uVar19,1);
          }
          DAT_18024d920 = (undefined8 *)0x0;
        }
        else {
          bVar7 = true;
        }
        goto LAB_1801bdea0;
      }
      DAT_18024d920 = (undefined8 *)0x0;
LAB_1801bdeb0:
      uVar19 = DAT_180258908;
      if (bVar6) {
        FUN_1801fc208(&local_280,DAT_18024d928 + 0x800);
        uVar15 = *(uint *)(extraout_x15 + 0x8d2);
        if (uVar15 < 2) {
LAB_1801bdf10:
          uVar34 = 0;
        }
        else if (uVar15 == 2) {
          uVar34 = 1;
        }
        else if (uVar15 == 3) {
          uVar34 = 2;
        }
        else {
          if (uVar15 != 4) goto LAB_1801bdf10;
          uVar34 = 3;
        }
        lVar18 = FUN_1802229a8(0x4a0);
        if (lVar18 == 0) {
          DAT_18024d920 = (undefined8 *)0x0;
        }
        else {
          puVar21 = local_280;
          uVar38 = uStack_278;
          DAT_18024d920 = (undefined8 *)FUN_1801fb568(lVar18,uVar19,uVar34);
          *DAT_18024d920 = &PTR_FUN_180238110;
          DAT_18024d920[0x90] = 0;
          DAT_18024d920[0x92] = uVar38;
          DAT_18024d920[0x91] = puVar21;
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
          uVar19 = (*pcVar33)(0x180224000);
          cVar10 = (*extraout_x11_02)(uVar19,lVar18 + 0x800,0);
          if (cVar10 != '\0') goto LAB_1801bdfa4;
        }
      }
    }
    else {
      bVar6 = true;
LAB_1801bdd80:
      if ((uVar15 == 0) && (uVar17 = FUN_180116730(), (uVar17 & 1) != 0)) goto LAB_1801bdd8c;
LAB_1801bdea0:
      if (DAT_18024d920 == (undefined8 *)0x0) goto LAB_1801bdeb0;
    }
    if (!bVar7) {
      if (DAT_18024d920 != (undefined8 *)0x0) {
        uVar19 = (*pcVar33)(0x180224000);
        (*extraout_x11_03)(uVar19,1);
      }
      DAT_18024d920 = (undefined8 *)0x0;
      FUN_18021fa28(DAT_18024d928);
      return (undefined8 *)(undefined *)local_288;
    }
  }
LAB_1801bdfa4:
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
          if ((int)uVar17 != -1) goto LAB_1801be0d0;
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
      auVar41._8_8_ = 0;
      auVar41._0_8_ = CONCAT44(0,uVar15);
      lVar26 = CONCAT44(0,uVar15) << 3;
      if (SUB168(auVar41 * ZEXT816(8),8) != 0) {
        lVar26 = -1;
      }
      lVar26 = FUN_1802229a8(lVar26);
      if (lVar26 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(lVar26,*(longlong *)(lVar18 + 0x78),
                            (ulonglong)*(uint *)(lVar18 + 0x84) << 3);
      }
    }
    else {
      *(undefined ***)(*(longlong *)(lVar18 + 0x78) + (ulonglong)*(uint *)(lVar18 + 0x80) * 8) =
           &PTR_PTR_180248b78;
      *(int *)(lVar18 + 0x80) = *(int *)(lVar18 + 0x80) + 1;
    }
LAB_1801be0d0:
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
  local_260 = (undefined8 *)FUN_1802229a8(0x100);
  if (local_260 == (undefined8 *)0x0) goto LAB_1801bf66c;
  *(undefined4 *)(local_260 + 2) = 0;
  local_260[1] = 0;
  local_260[3] = 0;
  local_260[4] = 0;
  local_260[5] = 0;
  local_260[6] = 0;
  local_260[7] = 0;
  *local_260 = &PTR_FUN_180229b48;
  local_260[0xd] = 0;
  local_260[0xe] = 0;
  local_260[0xf] = 0;
  local_260[0x10] = 0;
  *(uint *)(local_260 + 8) = param_1;
  *(undefined1 *)((longlong)local_260 + 0x44) = 0;
  *(undefined2 *)((longlong)local_260 + 0x66) = 0;
  if (DAT_18024d900 == 0) {
    DAT_18024d900 = FUN_1802229a8(0x200);
    uVar17 = 0x40;
    DAT_18024d8f8 = 0x40;
    if (DAT_18024d900 != 0) goto LAB_1801be31c;
LAB_1801be310:
    uVar23 = 0;
  }
  else {
    uVar17 = (ulonglong)DAT_18024d8f8;
LAB_1801be31c:
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
      goto LAB_1801be310;
    }
    *(undefined8 **)(DAT_18024d900 + (ulonglong)DAT_18024d8fc * 8) = local_260;
    DAT_18024d8fc = DAT_18024d8fc + 1;
    uVar23 = 1;
  }
  *(undefined1 *)((longlong)local_260 + 0x45) = uVar23;
  *(undefined8 *)((longlong)local_260 + 0x4e) = 0;
  *(undefined8 *)((longlong)local_260 + 0x46) = 0;
  *(undefined8 *)((longlong)local_260 + 0x5e) = 0;
  *(undefined8 *)((longlong)local_260 + 0x56) = 0;
  local_260[0x12] = 0;
  local_260[0x13] = 0;
  local_260[0x15] = 0;
  *(undefined4 *)(local_260 + 0x16) = 0;
  local_260[0x17] = local_260 + 0x14;
  local_260[0x19] = 0;
  local_260[0x18] = 0;
  local_260[0x1b] = 0;
  local_260[0x1a] = 0;
  local_260[0x1d] = 0;
  local_260[0x1c] = 0;
  *local_260 = &DAT_18022e2f0;
  local_260[0x11] = &PTR_FUN_1802296c8;
  local_260[0x1e] = 0;
  local_260[0x1f] = 0;
  local_260[0x14] = &PTR_FUN_18022e240;
  if (*(char *)((longlong)local_260 + 0x45) != '\0') {
    FUN_1801bda88(local_260 + 0x15,&DAT_180229438);
    FUN_1801bda88(extraout_x10_00 + 0xa8,&DAT_180229208);
    *(undefined1 *)(extraout_x10_01 + 0x67) = 0;
  }
  puVar29 = local_260;
  if (*(char *)((longlong)local_260 + 0x45) != '\0') {
    *(undefined4 *)(local_260 + 2) = *(undefined4 *)(DAT_18024d928 + 0x858);
    (*pcVar33)(0x180224000);
    cVar10 = (*extraout_x11_04)();
    puVar28 = puVar29;
    if (cVar10 != '\0') {
      local_2b8 = pcVar33;
      local_2b0 = puVar29;
      local_2a8 = puVar29;
      lVar18 = 0;
      do {
        if ((&DAT_18024e9a8)[lVar18 * 0x4b] == 0) {
LAB_1801be4d0:
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
          if (iVar11 == 0) goto LAB_1801be4d0;
          bVar7 = true;
        }
        (&DAT_18024ea4c)[lVar18 * 600] = bVar7;
        if ((&DAT_18024e840)[lVar18 * 0x4b] == 0 && !bVar7) {
          FUN_180222c50(&DAT_18024e840 + lVar18 * 0x4b,0,600);
        }
        puVar28 = local_2a8;
        puVar29 = local_2b0;
        pcVar33 = local_2b8;
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
        local_2b8 = pcVar33;
        local_2b0 = puVar29;
        local_2a8 = puVar28;
        do {
          uVar19 = (*local_2b8)();
          iVar11 = (*extraout_x11_06)(uVar19,uVar14);
          uVar12 = 0;
          if (iVar11 != 0) {
            local_298 = (undefined8 *)CONCAT44(local_298._4_4_,iVar11);
            local_29c = uVar14;
            do {
              pcVar33 = local_2b8;
              if (((0x1f < uVar30) ||
                  ((1 << (ulonglong)(uVar30 & 0x1f) & *(uint *)(DAT_18024d928 + 0x9ef)) != 0)) &&
                 ((*(int *)(DAT_18024d928 + 0x808) == 0 ||
                  (*(int *)(DAT_18024d928 + 0x808) - 1U == uVar12)))) {
                uVar19 = (*local_2b8)(0x180224000);
                uVar14 = local_29c;
                iVar11 = (*extraout_x11_07)(uVar19,local_29c);
                uVar19 = (*pcVar33)(0x180224000);
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
                      local_290 = (longlong *)(uVar17 * 600 + 0x18024e9d4);
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
            } while (uVar12 < (uint)local_298);
          }
          uVar14 = uVar14 + 1;
          puVar29 = local_2b0;
          puVar28 = local_2a8;
          pcVar33 = local_2b8;
        } while (uVar14 < local_2c0);
      }
    }
    uVar17 = FUN_1801042e0(&DAT_18024d938);
    if ((int)uVar17 == 1) {
      DAT_18024d930 = thunk_FUN_180223798(uVar17,FUN_18012c7d8);
      uVar17 = thunk_FUN_180223770(1,FUN_18012c7d8);
      DAT_18024d948 = uVar17;
    }
    local_298 = puVar28 + 1;
    local_290 = puVar28 + 0xd;
    local_2a0 = 0;
    uVar31 = 0;
    local_2b8 = pcVar33;
    local_2b0 = puVar29;
    local_2a8 = puVar28;
    do {
      lVar18 = uVar31 * 600;
      if ((&DAT_18024ea4c)[lVar18] != '\0') {
        local_280 = &DAT_18024e848;
        local_2bc = local_2a0;
        FUN_1801042e0(&DAT_18024e848 + uVar31 * 0x96);
        lVar26 = DAT_18024d928;
        if ((&DAT_18024e840)[uVar31 * 0x4b] == 0) {
          if (*(uint *)(local_260 + 2) < 7) {
            uVar17 = 0;
            do {
              lVar20 = uVar17 * 600;
              if (((&DAT_18024e85c)[uVar17 * 0x96] == (&DAT_18024e85c)[uVar31 * 0x96]) &&
                 (lVar27 = (&DAT_18024e840)[uVar17 * 0x4b], lVar27 != 0)) goto LAB_1801be8d8;
              uVar15 = (int)uVar17 + 1;
              uVar17 = (ulonglong)uVar15;
            } while (uVar15 < 0x20);
            lVar27 = 0;
LAB_1801be8d8:
            (&DAT_18024ea58)[uVar31 * 0x4b] = *(undefined8 *)(DAT_18024d928 + 0x85c);
            if ((longlong *)*local_298 != (longlong *)0x0) {
              *(longlong *)*local_298 = lVar26 + 0xd0;
            }
            if (lVar27 == 0) {
              (*local_2b8)();
              iVar11 = (*extraout_x11_14)();
              local_29c = (&DAT_18024e85c)[uVar31 * 0x96];
              if (iVar11 == 2) {
                lVar26 = FUN_1802229a8(0x1d198);
                puVar29 = (undefined8 *)(lVar26 + 0x17U & 0xfffffffffffffff0);
                puVar29[-1] = lVar26;
                FUN_1801b7cb8(puVar29,local_29c);
                *puVar29 = &PTR_FUN_18022ce40;
                puVar29[3] = &PTR_FUN_18022c6b8;
                puVar29[0x39e2] = 0;
                puVar29[0x39e3] = 0;
                puVar29[0x39e4] = 0;
                puVar29[0x39f9] = 0;
                puVar29[0x39fa] = 0;
                puVar29[0x3a25] = 0;
                puVar29[0x3a26] = 0;
                puVar29[0x3a27] = 0;
                puVar29[0x3a28] = 0;
                *(undefined4 *)(puVar29 + 0x3a29) = 0;
                puVar29[0x3a2a] = 0;
                puVar29[0x3a2b] = 0xffffffff;
                puVar29[0x3a2c] = 0;
                *(undefined4 *)(puVar29 + 0x3a2d) = 0;
                *(undefined4 *)((longlong)puVar29 + 0x1d16c) = 0;
                puVar29[0x3a2e] = 0;
                puVar29[0x39e6] = 0;
                puVar29[0x39e5] = 0;
                puVar29[0x39e8] = 0;
                puVar29[0x39e7] = 0;
                puVar29[0x39ea] = 0;
                puVar29[0x39e9] = 0;
                puVar29[0x39ec] = 0;
                puVar29[0x39eb] = 0;
                puVar29[0x39ee] = 0;
                puVar29[0x39ed] = 0;
                puVar29[0x39f0] = 0;
                puVar29[0x39ef] = 0;
                puVar29[0x39f2] = 0;
                puVar29[0x39f1] = 0;
                puVar29[0x39f4] = 0;
                puVar29[0x39f3] = 0;
                puVar29[0x39f6] = 0;
                puVar29[0x39f5] = 0;
                puVar29[0x39f8] = 0;
                puVar29[0x39f7] = 0;
                puVar29[0x39fc] = 0;
                puVar29[0x39fb] = 0;
                puVar29[0x39fe] = 0;
                puVar29[0x39fd] = 0;
                puVar29[0x3a00] = 0;
                puVar29[0x39ff] = 0;
                puVar29[0x3a02] = 0;
                puVar29[0x3a01] = 0;
                puVar29[0x3a04] = 0;
                puVar29[0x3a03] = 0;
                puVar29[0x3a06] = 0;
                puVar29[0x3a05] = 0;
                puVar29[0x3a08] = 0;
                puVar29[0x3a07] = 0;
                puVar29[0x3a0a] = 0;
                puVar29[0x3a09] = 0;
                puVar29[0x3a0c] = 0;
                puVar29[0x3a0b] = 0;
                puVar29[0x3a0e] = 0;
                puVar29[0x3a0d] = 0;
                puVar29[0x3a10] = 0;
                puVar29[0x3a0f] = 0;
                puVar29[0x3a12] = 0;
                puVar29[0x3a11] = 0;
                puVar29[0x3a14] = 0;
                puVar29[0x3a13] = 0;
                puVar29[0x3a16] = 0;
                puVar29[0x3a15] = 0;
                puVar29[0x3a18] = 0;
                puVar29[0x3a17] = 0;
                puVar29[0x3a1a] = 0;
                puVar29[0x3a19] = 0;
                puVar29[0x3a1c] = 0;
                puVar29[0x3a1b] = 0;
                puVar29[0x3a1e] = 0;
                puVar29[0x3a1d] = 0;
                puVar29[0x3a20] = 0;
                puVar29[0x3a1f] = 0;
                puVar29[0x3a22] = 0;
                puVar29[0x3a21] = 0;
                puVar29[0x3a23] = 0;
                puVar29[0x3a24] = 0;
              }
              else {
                lVar26 = FUN_1802229a8(0x1d518);
                puVar29 = (undefined8 *)(lVar26 + 0x17U & 0xfffffffffffffff0);
                puVar29[-1] = lVar26;
                FUN_1801b7cb8(puVar29,local_29c);
                *puVar29 = &PTR_FUN_18022c6c0;
                puVar29[3] = &PTR_FUN_18022c6b8;
                puVar29[0x39e2] = 0;
                puVar29[0x39e3] = 0;
                puVar29[0x3a0e] = 0;
                puVar29[0x3a0f] = 0;
                puVar29[0x3a10] = 0;
                puVar29[0x3a11] = 0;
                *(undefined4 *)(puVar29 + 0x3a12) = 0;
                uVar19 = FUN_1802229a8(0xc0);
                puVar29[0x3a13] = uVar19;
                puVar29[0x3a14] = 8;
                puVar29[0x3a15] = 0;
                *(undefined1 *)(puVar29 + 0x3a16) = 0;
                puVar29[14999] = 0;
                puVar29[15000] = 0;
                uVar19 = FUN_1802229a8(0x4800);
                puVar29[0x3a99] = uVar19;
                puVar29[0x3a9a] = 0x100;
                puVar29[0x3a9b] = 0;
                *(undefined4 *)(puVar29 + 0x3a9c) = 0;
                puVar29[0x3a9d] = 0;
                puVar29[0x3a9e] = 0;
                puVar29[0x3a9f] = 0;
                puVar29[0x39e5] = 0;
                puVar29[0x39e4] = 0;
                puVar29[0x39e7] = 0;
                puVar29[0x39e6] = 0;
                puVar29[0x39e9] = 0;
                puVar29[0x39e8] = 0;
                puVar29[0x39eb] = 0;
                puVar29[0x39ea] = 0;
                puVar29[0x39ed] = 0;
                puVar29[0x39ec] = 0;
                puVar29[0x39ef] = 0;
                puVar29[0x39ee] = 0;
                puVar29[0x39f1] = 0;
                puVar29[0x39f0] = 0;
                puVar29[0x39f3] = 0;
                puVar29[0x39f2] = 0;
                puVar29[0x39f5] = 0;
                puVar29[0x39f4] = 0;
                puVar29[0x39f7] = 0;
                puVar29[0x39f6] = 0;
                puVar29[0x39f9] = 0;
                puVar29[0x39f8] = 0;
                puVar29[0x39fb] = 0;
                puVar29[0x39fa] = 0;
                puVar29[0x39fd] = 0;
                puVar29[0x39fc] = 0;
                puVar29[0x39ff] = 0;
                puVar29[0x39fe] = 0;
                puVar29[0x3a01] = 0;
                puVar29[0x3a00] = 0;
                puVar29[0x3a03] = 0;
                puVar29[0x3a02] = 0;
                puVar29[0x3a05] = 0;
                puVar29[0x3a04] = 0;
                puVar29[0x3a07] = 0;
                puVar29[0x3a06] = 0;
                puVar29[0x3a09] = 0;
                puVar29[0x3a08] = 0;
                puVar29[0x3a0b] = 0;
                puVar29[0x3a0a] = 0;
                puVar29[0x3a0c] = 0;
                puVar29[0x3a0d] = 0;
                puVar29[0x3a18] = 0;
                puVar29[0x3a17] = 0;
                puVar29[0x3a1a] = 0;
                puVar29[0x3a19] = 0;
                puVar29[0x3a1c] = 0;
                puVar29[0x3a1b] = 0;
                puVar29[0x3a1e] = 0;
                puVar29[0x3a1d] = 0;
                puVar29[0x3a20] = 0;
                puVar29[0x3a1f] = 0;
                puVar29[0x3a22] = 0;
                puVar29[0x3a21] = 0;
                puVar29[0x3a24] = 0;
                puVar29[0x3a23] = 0;
                puVar29[0x3a26] = 0;
                puVar29[0x3a25] = 0;
                puVar29[0x3a28] = 0;
                puVar29[0x3a27] = 0;
                puVar29[0x3a2a] = 0;
                puVar29[0x3a29] = 0;
                puVar29[0x3a2c] = 0;
                puVar29[0x3a2b] = 0;
                puVar29[0x3a2e] = 0;
                puVar29[0x3a2d] = 0;
                puVar29[0x3a30] = 0;
                puVar29[0x3a2f] = 0;
                puVar29[0x3a32] = 0;
                puVar29[0x3a31] = 0;
                puVar29[0x3a34] = 0;
                puVar29[0x3a33] = 0;
                puVar29[0x3a36] = 0;
                puVar29[0x3a35] = 0;
                puVar29[0x3a38] = 0;
                puVar29[0x3a37] = 0;
                puVar29[0x3a3a] = 0;
                puVar29[0x3a39] = 0;
                puVar29[0x3a3c] = 0;
                puVar29[0x3a3b] = 0;
                puVar29[0x3a3e] = 0;
                puVar29[0x3a3d] = 0;
                puVar29[0x3a40] = 0;
                puVar29[0x3a3f] = 0;
                puVar29[0x3a42] = 0;
                puVar29[0x3a41] = 0;
                puVar29[0x3a44] = 0;
                puVar29[0x3a43] = 0;
                puVar29[0x3a46] = 0;
                puVar29[0x3a45] = 0;
                puVar29[0x3a48] = 0;
                puVar29[0x3a47] = 0;
                puVar29[0x3a4a] = 0;
                puVar29[0x3a49] = 0;
                puVar29[0x3a4c] = 0;
                puVar29[0x3a4b] = 0;
                puVar29[0x3a4e] = 0;
                puVar29[0x3a4d] = 0;
                puVar29[0x3a50] = 0;
                puVar29[0x3a4f] = 0;
                puVar29[0x3a52] = 0;
                puVar29[0x3a51] = 0;
                puVar29[0x3a54] = 0;
                puVar29[0x3a53] = 0;
                puVar29[0x3a56] = 0;
                puVar29[0x3a55] = 0;
                puVar29[0x3a58] = 0;
                puVar29[0x3a57] = 0;
                puVar29[0x3a5a] = 0;
                puVar29[0x3a59] = 0;
                puVar29[0x3a5c] = 0;
                puVar29[0x3a5b] = 0;
                puVar29[0x3a5e] = 0;
                puVar29[0x3a5d] = 0;
                puVar29[0x3a60] = 0;
                puVar29[0x3a5f] = 0;
                puVar29[0x3a62] = 0;
                puVar29[0x3a61] = 0;
                puVar29[0x3a64] = 0;
                puVar29[0x3a63] = 0;
                puVar29[0x3a66] = 0;
                puVar29[0x3a65] = 0;
                puVar29[0x3a68] = 0;
                puVar29[0x3a67] = 0;
                puVar29[0x3a6a] = 0;
                puVar29[0x3a69] = 0;
                puVar29[0x3a6c] = 0;
                puVar29[0x3a6b] = 0;
                puVar29[0x3a6e] = 0;
                puVar29[0x3a6d] = 0;
                puVar29[0x3a70] = 0;
                puVar29[0x3a6f] = 0;
                puVar29[0x3a72] = 0;
                puVar29[0x3a71] = 0;
                puVar29[0x3a74] = 0;
                puVar29[0x3a73] = 0;
                puVar29[0x3a76] = 0;
                puVar29[0x3a75] = 0;
                puVar29[0x3a78] = 0;
                puVar29[0x3a77] = 0;
                puVar29[0x3a7a] = 0;
                puVar29[0x3a79] = 0;
                puVar29[0x3a7c] = 0;
                puVar29[0x3a7b] = 0;
                puVar29[0x3a7e] = 0;
                puVar29[0x3a7d] = 0;
                puVar29[0x3a80] = 0;
                puVar29[0x3a7f] = 0;
                puVar29[0x3a82] = 0;
                puVar29[0x3a81] = 0;
                puVar29[0x3a84] = 0;
                puVar29[0x3a83] = 0;
                puVar29[0x3a86] = 0;
                puVar29[0x3a85] = 0;
                puVar29[0x3a88] = 0;
                puVar29[0x3a87] = 0;
                puVar29[0x3a8a] = 0;
                puVar29[0x3a89] = 0;
                puVar29[0x3a8c] = 0;
                puVar29[0x3a8b] = 0;
                puVar29[0x3a8e] = 0;
                puVar29[0x3a8d] = 0;
                puVar29[0x3a90] = 0;
                puVar29[0x3a8f] = 0;
                puVar29[0x3a92] = 0;
                puVar29[0x3a91] = 0;
                puVar29[0x3a94] = 0;
                puVar29[0x3a93] = 0;
                puVar29[0x3a96] = 0;
                puVar29[0x3a95] = 0;
                FUN_180222c50(puVar29 + 0x2018,0,0xc180);
              }
              pcVar33 = local_2b8;
              (&DAT_18024e840)[uVar31 * 0x4b] = puVar29;
              if (puVar29 != (undefined8 *)0x0) {
                uVar19 = (*local_2b8)();
                uVar17 = (*extraout_x11_15)(uVar19,extraout_x8 + 0x800,&PTR_PTR_1802472b0);
                if ((uVar17 & 0xff) != 0) {
                  uVar17 = FUN_18012ca90(uVar17,uVar31,(&DAT_18024e860)[uVar31 * 0x96]);
                  if ((uVar17 & 1) != 0) {
                    uVar15 = *(uint *)(&DAT_18024e9d0 + uVar31 * 0x4b);
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
                    if ((ulonglong)uVar15 < (ulonglong)(&DAT_18024ea58)[uVar31 * 0x4b]) {
                      lVar18 = (&DAT_18024ea58)[uVar31 * 0x4b] - (ulonglong)uVar15;
                    }
                    (&DAT_18024ea60)[uVar31 * 0x4b] = lVar18;
                    uVar19 = (*pcVar33)(0x180224000);
                    uVar16 = (*extraout_x11_16)(uVar19,(&DAT_18024e85c)[uVar31 * 0x96]);
                    (&DAT_18024ea24)[uVar31 * 0x96] = uVar16;
                    uVar19 = (*pcVar33)(0x180224000);
                    puVar21 = (undefined4 *)
                              (*extraout_x11_17)(uVar19,&local_2c0,(&DAT_18024e85c)[uVar31 * 0x96]);
                    (&DAT_18024ea48)[uVar31 * 0x96] = *puVar21;
                    if (*(int *)(DAT_18024d928 + 0x9d7) == 1) {
                      uVar16 = 0x18;
                    }
                    else {
                      uVar16 = 0;
                      if (*(int *)(DAT_18024d928 + 0x9d7) == 2) {
                        uVar16 = 0x20;
                      }
                    }
                    (*local_2b8)((&DAT_18024e840)[uVar31 * 0x4b],uVar16);
                    (*extraout_x11_18)();
                    goto LAB_1801be968;
                  }
                  (*pcVar33)(0x180224000);
                  (*extraout_x11_19)();
                }
                (*local_2b8)();
                (*extraout_x11_20)();
              }
              (&DAT_18024e840)[uVar31 * 0x4b] = 0;
            }
            else {
              uVar16 = (&DAT_18024e860)[uVar31 * 0x96];
              bVar7 = false;
              (&DAT_18024e840)[uVar31 * 0x4b] = lVar27;
              uVar17 = FUN_18012ca90(lVar20,uVar31,uVar16);
              if ((uVar17 & 1) != 0) {
                uVar15 = *(uint *)(&DAT_18024e9d0 + uVar31 * 0x4b);
                uVar14 = *(uint *)((longlong)&DAT_18024e9d0 + lVar18 + 4);
                bVar7 = true;
                if (0x500 < uVar15) {
                  uVar15 = 0x500;
                }
                if (0x400 < uVar14) {
                  uVar14 = 0x400;
                }
                uVar15 = (*(uint *)((longlong)&DAT_18024e9e0 + lVar18 + 4) >> 3) * uVar14 * uVar15;
                lVar18 = 0;
                if ((ulonglong)uVar15 < (ulonglong)(&DAT_18024ea58)[uVar31 * 0x4b]) {
                  lVar18 = (&DAT_18024ea58)[uVar31 * 0x4b] - (ulonglong)uVar15;
                }
                (&DAT_18024ea60)[uVar31 * 0x4b] = lVar18;
              }
              if (bVar7) goto LAB_1801be968;
            }
          }
          uVar17 = FUN_1801042d0(local_280 + uVar31 * 0x96);
        }
        else {
LAB_1801be968:
          uVar17 = FUN_180108518(local_290,&local_2bc);
        }
      }
      plVar9 = local_290;
      puVar28 = local_2b0;
      local_2bc = local_2a0 + 1;
      uVar31 = (ulonglong)local_2bc;
      local_2a0 = local_2bc;
    } while (local_2bc < 0x20);
    uVar15 = 0;
    if (*(uint *)(local_2b0 + 0xe) != 0) {
      uVar31 = 0;
      uVar15 = *(uint *)(local_2b0 + 0xe);
      do {
        local_280 = (undefined4 *)0x0;
        uStack_278 = 0;
        if (uVar15 != 0) {
          uVar25 = 0;
          uStack_278._0_4_ = 0;
          uStack_278._4_4_ = 0;
          uVar14 = 0x7fffffff;
          uVar32 = (ulonglong)*(uint *)(*plVar9 + uVar31 * 4);
          local_280._0_4_ = 0;
          local_280._4_4_ = 0;
          iVar11 = (int)uStack_278;
          uVar12 = uStack_278._4_4_;
          uVar30 = (uint)local_280;
          iVar13 = local_280._4_4_;
          do {
            uVar3 = (ulonglong)*(uint *)(*plVar9 + uVar25 * 4);
            uVar24 = (uint)uVar25;
            if ((&DAT_18024e85c)[uVar32 * 0x96] == (&DAT_18024e85c)[uVar3 * 0x96]) {
              uVar2 = (&DAT_18024e860)[uVar3 * 0x96];
              iVar11 = iVar11 + 1;
              uStack_278 = CONCAT44(uStack_278._4_4_,iVar11);
              if (uVar2 < uVar14) {
                uVar14 = uVar2;
                uVar30 = uVar24;
              }
              if (uVar2 < (uint)(&DAT_18024e860)[uVar32 * 0x96]) {
                iVar13 = iVar13 + 1;
                local_280._4_4_ = iVar13;
              }
              local_280 = (undefined4 *)CONCAT44(local_280._4_4_,uVar30);
              if ((uint)uVar31 != uVar24) {
                uVar12 = 1 << (ulonglong)(uVar24 & 0x1f) | uVar12;
                uStack_278 = CONCAT44(uVar12,iVar11);
              }
            }
            uVar25 = (ulonglong)(uVar24 + 1);
          } while (uVar24 + 1 < uVar15);
        }
        iVar11 = *(int *)((longlong)puVar28 + 0x84);
        if (*(int *)(puVar28 + 0x10) == iVar11) {
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
            thunk_FUN_180104c48(uVar17,puVar28[0xf],
                                (ulonglong)*(uint *)((longlong)puVar28 + 0x84) << 4);
          }
        }
        else {
          puVar29 = (undefined8 *)(puVar28[0xf] + (ulonglong)*(uint *)(puVar28 + 0x10) * 0x10);
          puVar29[1] = uStack_278;
          *puVar29 = local_280;
          *(int *)(puVar28 + 0x10) = *(int *)(puVar28 + 0x10) + 1;
        }
        uVar15 = *(uint *)(puVar28 + 0xe);
        uVar14 = (uint)uVar31 + 1;
        uVar31 = (ulonglong)uVar14;
      } while (uVar14 < uVar15);
    }
    pcVar33 = local_2b8;
    puVar29 = local_2a8;
    plVar9 = local_290;
    if (uVar15 != 0) {
      uVar31 = 0;
      if (uVar15 != 0) {
        while( true ) {
          local_2b0 = puVar28;
          plVar9 = local_290;
          uVar17 = FUN_18012bd08(local_298,*(undefined4 *)(*local_290 + uVar31 * 4));
          puVar28 = local_2b0;
          puVar29 = local_2a8;
          if ((uVar17 & 1) == 0) break;
          uVar32 = (ulonglong)*(uint *)(*plVar9 + uVar31 * 4);
          local_280 = (undefined4 *)(uVar32 * 600 + 0x18024e9d4);
          FUN_1802229d8((&DAT_18024ea88)[uVar32 * 0x4b]);
          (&DAT_18024ea88)[uVar32 * 0x4b] = 0;
          (&DAT_18024ea90)[uVar32 * 0x4b] = 0;
          uVar16 = (&DAT_18024e85c)[uVar32 * 0x96];
          uVar19 = (*pcVar33)(0x180224000);
          uVar14 = (*extraout_x11_10)(uVar19,uVar16);
          uVar17 = 0;
          uVar15 = (uint)uVar31;
          if (uVar14 != 0) {
            uVar12 = 0;
            local_2bc = (uint)uVar31;
            do {
              uVar19 = (*pcVar33)(0x180224000);
              local_2c0 = (*extraout_x11_11)(uVar19,uVar16,uVar12);
              uVar17 = FUN_180108518(&DAT_18024ea88 + uVar32 * 0x4b,&local_2c0);
              puVar21 = local_280;
              puVar29 = local_2a8;
              puVar28 = local_2b0;
              if ((uVar17 & 1) == 0) {
                uVar31 = (ulonglong)local_2bc;
                uVar17 = FUN_1802229d8(*(undefined8 *)(local_280 + 0x2d));
                *(undefined8 *)(puVar21 + 0x2d) = 0;
                *(undefined8 *)(puVar21 + 0x2f) = 0;
                goto LAB_1801bebdc;
              }
              uVar12 = uVar12 + 1;
              uVar15 = local_2bc;
            } while (uVar12 < uVar14);
          }
          uVar31 = (ulonglong)(uVar15 + 1);
          puVar28 = local_2b0;
          puVar29 = local_2a8;
          if (*(uint *)(local_2b0 + 0xe) <= uVar15 + 1) break;
        }
      }
LAB_1801bebdc:
      uVar15 = (uint)uVar31;
      plVar9 = local_290;
      if (uVar15 == *(uint *)(puVar28 + 0xe)) {
        lVar18 = FUN_1802229a8(0x1004);
        puVar28[3] = lVar18;
        uVar17 = 0;
        plVar9 = local_290;
        if (lVar18 != 0) {
          lVar18 = FUN_1802229a8(0x1004);
          puVar28[4] = lVar18;
          if (lVar18 != 0) {
            lVar18 = FUN_1802229a8(0x1004);
            puVar28[5] = lVar18;
            if (lVar18 != 0) {
              lVar18 = FUN_1802229a8(0x1004);
              puVar28[6] = lVar18;
              if (lVar18 != 0) {
                lVar18 = FUN_1802229a8(0x1004);
                puVar28[7] = lVar18;
                if (lVar18 != 0) {
                  fVar40 = 1.0;
                  uVar15 = 0;
                  fVar39 = fVar40;
                  do {
                    fVar36 = (float)uVar15 * 0.0009765625;
                    dVar35 = (double)FUN_180220d60(0x4000000000000000,fVar36);
                    fVar37 = (float)dVar35;
                    uVar17 = FUN_180220d60((double)fVar36);
                    *(float *)(puVar28[3] + (uVar17 & 0xffffffff) * 4) = (float)extraout_d0 / fVar37
                    ;
                    uVar15 = FUN_1802209f0(0x40000000);
                    *(undefined4 *)(puVar28[4] + (ulonglong)uVar15 * 4) = extraout_s0;
                    *(float *)(puVar28[5] + (ulonglong)uVar15 * 4) = fVar39;
                    uVar15 = uVar15 + 1;
                    fVar39 = fVar39 + fVar39;
                  } while (uVar15 < 0x401);
                  uVar15 = 0;
                  do {
                    uVar15 = FUN_1802209f0(0x402df854,(float)uVar15 * 0.0009765625);
                    puVar1 = local_260;
                    *(float *)(puVar28[6] + (ulonglong)uVar15 * 4) = 1.0 / extraout_s0_00;
                    fVar39 = 1.0 / fVar40;
                    fVar40 = fVar40 * 2.7182817;
                    *(float *)(puVar28[7] + (ulonglong)uVar15 * 4) = fVar39;
                    uVar15 = uVar15 + 1;
                  } while (uVar15 < 0x401);
                  *(undefined1 *)((longlong)puVar28 + 0x44) = 1;
                  uVar17 = 0;
                  if (*(int *)(puVar28 + 0xe) != 0) {
                    do {
                      local_2a8 = puVar29;
                      local_2b0 = puVar28;
                      local_2b8 = pcVar33;
                      uVar31 = (ulonglong)*(uint *)(*local_290 + uVar17 * 4);
                      FUN_1802229d8((&DAT_18024e338)[uVar31 * 5]);
                      local_2c0 = 1;
                      (&DAT_18024e338)[uVar31 * 5] = 0;
                      (&DAT_18024e340)[uVar31 * 5] = 0;
                      FUN_180108518(&DAT_18024e338 + uVar31 * 5,&local_2c0);
                      uVar15 = 0;
                      uVar14 = (uint)uVar17;
                      if ((&DAT_180246580)[(ulonglong)*(uint *)(puVar1 + 2) * 0x1b0] != '\0') {
                        local_288 = (undefined8 *)&DAT_180246580;
                        local_280 = (undefined4 *)&DAT_180246580;
                        local_2bc = (uint)uVar17;
                        do {
                          puVar21 = local_280;
                          uVar17 = 0;
                          if (*(int *)(&DAT_18024ea90 + uVar31 * 0x4b) != 0) {
                            local_298 = (undefined8 *)CONCAT44(local_298._4_4_,uVar15);
                            do {
                              uVar14 = (uint)*(byte *)((longlong)puVar21 +
                                                      (ulonglong)*(uint *)(puVar1 + 2) * 0x1b0 +
                                                      (ulonglong)uVar15);
                              if (*(uint *)((&DAT_18024ea88)[uVar31 * 0x4b] + uVar17 * 4) == uVar14)
                              {
                                local_2c0 = uVar14;
                                FUN_180108518(&DAT_18024e338 + uVar31 * 5,&local_2c0);
                              }
                              uVar14 = (int)uVar17 + 1;
                              uVar17 = (ulonglong)uVar14;
                            } while (uVar14 < *(uint *)(&DAT_18024ea90 + uVar31 * 0x4b));
                            uVar15 = (uint)local_298;
                          }
                          uVar15 = uVar15 + 1;
                          uVar14 = local_2bc;
                        } while (*(char *)((longlong)local_288 +
                                          (ulonglong)*(uint *)(puVar1 + 2) * 0x1b0 +
                                          (ulonglong)uVar15) != '\0');
                      }
                      uVar17 = (ulonglong)(uVar14 + 1);
                      pcVar33 = local_2b8;
                      puVar28 = local_2b0;
                      puVar29 = local_2a8;
                    } while (uVar14 + 1 < *(uint *)(local_2b0 + 0xe));
                    uVar17 = 0;
                    if (*(uint *)(local_2b0 + 0xe) != 0) {
                      do {
                        uVar31 = (ulonglong)*(uint *)(*local_290 + uVar17 * 4);
                        FUN_1802229d8((&DAT_18024e348)[uVar31 * 5]);
                        local_2c0 = 1;
                        (&DAT_18024e348)[uVar31 * 5] = 0;
                        (&DAT_18024e350)[uVar31 * 5] = 0;
                        FUN_180108518(&DAT_18024e348 + uVar31 * 5,&local_2c0);
                        uVar32 = 0;
                        iVar11 = (int)uVar17;
                        if (DAT_1802463d0 != '\0') {
                          local_298 = (undefined8 *)CONCAT44(local_298._4_4_,(int)uVar17);
                          do {
                            uVar17 = 0;
                            if (*(int *)(&DAT_18024ea90 + uVar31 * 0x4b) != 0) {
                              do {
                                if (*(uint *)((&DAT_18024ea88)[uVar31 * 0x4b] + uVar17 * 4) ==
                                    (uint)(byte)(&DAT_1802463d0)[uVar32]) {
                                  local_2c0 = (uint)(byte)(&DAT_1802463d0)[uVar32];
                                  FUN_180108518(&DAT_18024e348 + uVar31 * 5,&local_2c0);
                                }
                                uVar15 = (int)uVar17 + 1;
                                uVar17 = (ulonglong)uVar15;
                              } while (uVar15 < *(uint *)(&DAT_18024ea90 + uVar31 * 0x4b));
                            }
                            uVar32 = (ulonglong)((int)uVar32 + 1);
                          } while ((&DAT_1802463d0)[uVar32] != '\0');
                          iVar11 = (uint)local_298;
                        }
                        uVar17 = (ulonglong)(iVar11 + 1U);
                        puVar28 = local_2b0;
                        puVar29 = local_2a8;
                        pcVar33 = local_2b8;
                      } while (iVar11 + 1U < *(uint *)(local_2b0 + 0xe));
                    }
                  }
                  lVar18 = DAT_18024d928;
                  puVar1 = (undefined8 *)0x0;
                  if (puVar29 != (undefined8 *)0x0) {
                    puVar1 = puVar29 + 0x11;
                  }
                  (*pcVar33)(0x180224000);
                  uVar14 = (*extraout_x11_12)(lVar18,&DAT_1802290c0);
                  uVar19 = 0x180224000;
                  local_2b0 = puVar28;
                  local_288 = puVar1;
                  for (uVar15 = 0; puVar1 = local_288, puVar28 = local_2b0, uVar15 < uVar14;
                      uVar15 = uVar15 + 1) {
                    (*pcVar33)();
                    local_280 = (undefined4 *)(*extraout_x11_13)(lVar18,&DAT_1802290c0,uVar15);
                    if (local_280 == (undefined4 *)0x0) goto LAB_1801bf5ac;
                    auVar41 = FUN_18010be98(puVar29 + 0x12,&local_280);
                    uVar19 = auVar41._8_8_;
                    if ((auVar41._0_8_ & 1) == 0) goto LAB_1801bf5ac;
                  }
                  uVar14 = 1;
                  for (uVar15 = 0; uVar15 < *(uint *)(puVar28 + 0x13); uVar15 = uVar15 + 1) {
                    uVar19 = (*pcVar33)(*(undefined8 *)(puVar29[0x12] + (ulonglong)uVar15 * 8),
                                        uVar19);
                    uVar12 = (*extraout_x11_21)(uVar19,puVar1);
                    uVar14 = uVar12 & 0xff & uVar14;
                    if (uVar14 == 0) goto joined_r0x0001801bf56c;
                    uVar19 = extraout_x1;
                  }
                  goto LAB_1801bf5ac;
                }
                FUN_1802229d8(puVar28[6]);
                puVar28[6] = 0;
              }
              FUN_1802229d8(puVar28[5]);
              puVar28[5] = 0;
            }
            FUN_1802229d8(puVar28[4]);
            puVar28[4] = 0;
          }
          uVar17 = FUN_1802229d8(puVar28[3]);
          puVar28[3] = 0;
          plVar9 = local_290;
        }
      }
      while (plVar8 = local_290, uVar15 != 0) {
        lVar18 = *local_290;
        uVar15 = (int)uVar31 - 1;
        uVar31 = (ulonglong)uVar15;
        local_290 = plVar9;
        uVar17 = FUN_18012bbb8(uVar17,*(undefined4 *)(lVar18 + uVar31 * 4));
        plVar9 = local_290;
        local_290 = plVar8;
      }
    }
    local_290 = plVar9;
    iVar11 = FUN_1801042d0(&DAT_18024d938);
    if ((iVar11 == 0) && (DAT_18024d930 != 0)) {
      thunk_FUN_180223784();
      thunk_FUN_1802237ac(DAT_18024d948);
    }
  }
LAB_1801bf658:
  FUN_1801bb990(puVar29);
  FUN_1802229d8(puVar29,0x100);
LAB_1801bf66c:
  uVar17 = FUN_180106818();
  if ((uVar17 & 1) != 0) {
    FUN_1801c1640();
  }
  return local_288;
joined_r0x0001801bf56c:
  for (; uVar15 != 0; uVar15 = uVar15 - 1) {
    uVar19 = (*pcVar33)();
    (*extraout_x11_22)(uVar19,puVar1);
  }
  FUN_1802229d8(puVar29[0x12]);
  puVar29[0x12] = 0;
  puVar28[0x13] = 0;
LAB_1801bf5ac:
  iVar11 = FUN_1801bc2e8(puVar29 + 0x14,&DAT_180229208,&local_258);
  if (-1 < iVar11) {
    return (undefined8 *)local_258;
  }
  FUN_1801bbae0(puVar29);
  local_288 = (undefined8 *)local_258;
  goto LAB_1801bf658;
}

