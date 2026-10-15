/*
 * FUN_1801d3508 at 1801d3508
 * undefined FUN_1801d3508(void)
 * Address ranges: 1801d3508-1801d3a07;1801d3a20-1801d3c13;1801d3d38-1801d3d3f;1801d3ffc-1801d409b;1801d41c4-1801d4343
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0001801d4038) */
/* WARNING: Removing unreachable block (ram,0x0001801d4040) */
/* WARNING: Removing unreachable block (ram,0x0001801d405c) */
/* WARNING: Removing unreachable block (ram,0x0001801d4074) */
/* WARNING: Removing unreachable block (ram,0x0001801d407c) */
/* WARNING: Removing unreachable block (ram,0x0001801d4084) */
/* WARNING: Removing unreachable block (ram,0x0001801d41c4) */
/* WARNING: Removing unreachable block (ram,0x0001801d41cc) */
/* WARNING: Removing unreachable block (ram,0x0001801d41e4) */
/* WARNING: Removing unreachable block (ram,0x0001801d4204) */
/* WARNING: Removing unreachable block (ram,0x0001801d420c) */
/* WARNING: Removing unreachable block (ram,0x0001801d4214) */
/* WARNING: Removing unreachable block (ram,0x0001801d4230) */
/* WARNING: Removing unreachable block (ram,0x0001801d4238) */
/* WARNING: Removing unreachable block (ram,0x0001801d424c) */
/* WARNING: Removing unreachable block (ram,0x0001801d427c) */
/* WARNING: Removing unreachable block (ram,0x0001801d4294) */
/* WARNING: Removing unreachable block (ram,0x0001801d42a0) */
/* WARNING: Removing unreachable block (ram,0x0001801d42c0) */
/* WARNING: Removing unreachable block (ram,0x0001801d42cc) */

undefined4
FUN_1801d3508(longlong param_1,undefined8 *param_2,longlong param_3,undefined4 param_4,uint param_5,
             undefined4 param_6,uint param_7,undefined8 param_8)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  undefined8 uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 uStack_160;
  uint local_15f;
  longlong local_158;
  undefined8 local_150;
  uint local_148;
  undefined4 local_144;
  longlong local_140;
  uint local_138;
  undefined8 *local_130;
  ulonglong *local_120;
  ulonglong uStack_118;
  uint local_110;
  undefined4 uStack_10c;
  uint local_100;
  undefined4 local_fc;
  longlong local_f8;
  undefined8 *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  int local_d8;
  ulonglong local_d4;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = __hybrid_os_arm64x_dispatch_icall;
  local_158 = CONCAT44(local_158._4_4_,param_6);
  local_100 = param_5 & 0xff;
  local_138 = param_7 & 0xff;
  local_144 = 0x8007000e;
  puVar11 = (undefined8 *)0x0;
  if (param_3 != 0) {
    puVar11 = (undefined8 *)(param_3 + -8);
  }
  local_140 = param_1;
  local_fc = param_4;
  local_f8 = param_3;
  local_b8 = param_8;
  local_b0 = param_2;
  if (puVar11 == (undefined8 *)0x0) {
    uVar17 = *(undefined8 *)(param_1 + 0xe98);
    cVar7 = *(char *)(param_1 + 0x6894);
    puVar11 = (undefined8 *)FUN_1802229a8(0x188);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      puVar11[0x26] = 0;
      *(undefined4 *)(puVar11 + 0x27) = 0;
      puVar11[0x28] = puVar11;
      puVar11[0x2a] = 0;
      puVar11[0x29] = 0;
      puVar11[0x2c] = 0;
      puVar11[0x2b] = 0;
      puVar11[0x2e] = 0;
      puVar11[0x2d] = 0;
      lVar15 = *(longlong *)(param_1 + 0xe28);
      puVar11[3] = 0;
      *(undefined4 *)(puVar11 + 4) = 0;
      puVar11[7] = 0;
      puVar11[8] = 0;
      puVar11[0x10] = 0;
      puVar11[0x11] = uVar17;
      lVar12 = 0;
      if (lVar15 != 0) {
        lVar12 = lVar15 + 8;
      }
      puVar11[0x21] = 0;
      puVar11[0x22] = 0;
      *(undefined4 *)(puVar11 + 9) = 1;
      puVar11[5] = 0;
      puVar11[6] = 0xffffffffffffffff;
      puVar11[1] = &PTR_FUN_180229df8;
      puVar11[2] = lVar12;
      puVar11[0x13] = 0;
      puVar11[0x14] = 0;
      puVar11[10] = &PTR_FUN_180229db0;
      puVar11[0xb] = param_1;
      puVar11[0x15] = 0;
      *(undefined4 *)(puVar11 + 0x23) = 0;
      *(undefined4 *)((longlong)puVar11 + 0x11c) = param_4;
      puVar11[0x24] = 0;
      *(undefined2 *)(puVar11 + 0x25) = 0;
      uVar19 = *param_2;
      uVar21 = param_2[3];
      uVar20 = param_2[2];
      puVar11[0x13] = param_2[1];
      puVar11[0x12] = uVar19;
      puVar11[0x15] = uVar21;
      puVar11[0x14] = uVar20;
      uVar19 = param_2[4];
      uVar21 = param_2[7];
      uVar20 = param_2[6];
      puVar11[0x17] = param_2[5];
      puVar11[0x16] = uVar19;
      puVar11[0x19] = uVar21;
      puVar11[0x18] = uVar20;
      uVar19 = param_2[8];
      uVar21 = param_2[0xb];
      uVar20 = param_2[10];
      puVar11[0x1b] = param_2[9];
      puVar11[0x1a] = uVar19;
      puVar11[0x1d] = uVar21;
      puVar11[0x1c] = uVar20;
      uVar19 = param_2[0xc];
      puVar11[0x1f] = param_2[0xd];
      puVar11[0x1e] = uVar19;
      puVar11[0x20] = param_2[0xe];
      puVar11[0xd] = 0;
      puVar11[0xc] = 0;
      puVar11[0xf] = 0;
      puVar11[0xe] = 0;
      (*(code *)puVar5)(0x180224000);
      iVar8 = (*extraout_x11)(uVar17);
      *(bool *)((longlong)puVar11 + 0x49) = iVar8 == 1;
      puVar11[0x2f] = param_1;
      *(char *)(puVar11 + 0x30) = cVar7;
      *(undefined1 *)((longlong)puVar11 + 0x181) = (undefined1)local_158;
      *puVar11 = &PTR_FUN_18022efe0;
      puVar11[1] = &PTR_FUN_18022ef28;
      puVar11[10] = &PTR_FUN_180229db0;
      FUN_1801bda88(puVar11 + 0x26,&DAT_180229438);
      FUN_1801bda88(puVar11 + 0x26,&DAT_180229298);
      if (cVar7 != '\0') {
        FUN_1801bda88(puVar11 + 0x26,&DAT_180229318);
      }
    }
    if (puVar11 == (undefined8 *)0x0) {
      return local_144;
    }
  }
  else {
    uVar17 = *param_2;
    uVar20 = param_2[3];
    uVar19 = param_2[2];
    bVar6 = param_3 != 0;
    puVar2 = (undefined8 *)&DAT_00000090;
    if (bVar6) {
      puVar2 = (undefined8 *)(param_3 + 0x88);
    }
    puVar2[1] = param_2[1];
    *puVar2 = uVar17;
    puVar2[3] = uVar20;
    puVar2[2] = uVar19;
    uVar17 = param_2[4];
    uVar20 = param_2[7];
    uVar19 = param_2[6];
    puVar2[5] = param_2[5];
    puVar2[4] = uVar17;
    puVar2[7] = uVar20;
    puVar2[6] = uVar19;
    uVar17 = param_2[8];
    uVar20 = param_2[0xb];
    uVar19 = param_2[10];
    puVar2[9] = param_2[9];
    puVar2[8] = uVar17;
    puVar2[0xb] = uVar20;
    puVar2[10] = uVar19;
    uVar17 = param_2[0xc];
    puVar2[0xd] = param_2[0xd];
    puVar2[0xc] = uVar17;
    puVar2[0xe] = param_2[0xe];
    puVar4 = (undefined4 *)&DAT_0000011c;
    if (bVar6) {
      puVar4 = (undefined4 *)(param_3 + 0x114);
    }
    *puVar4 = param_4;
    puVar3 = &DAT_00000128;
    if (bVar6) {
      puVar3 = (undefined1 *)(param_3 + 0x120);
    }
    *puVar3 = 0;
  }
  puVar2 = puVar11 + 1;
  local_148 = (uint)*(byte *)((longlong)puVar11 + 0x181);
  local_130 = puVar11;
  local_f0 = puVar11;
  FUN_1801181c0(&uStack_160);
  lVar12 = DAT_18024d928;
  *(uint *)((longlong)puVar11 + 0x1c) = *(uint *)(DAT_18024d928 + 0x8c2) >> 2 & 1;
  *(uint *)(puVar11 + 4) = *(uint *)(DAT_18024d928 + 0x8c6) & 1;
  iVar8 = *(int *)(lVar12 + 0x160);
  *(int *)(lVar12 + 0x160) = iVar8 + 1;
  uVar17 = extraout_x1;
  if ((iVar8 == 0) && (*(char *)(lVar12 + 0x825) != '\0')) {
    uVar9 = thunk_FUN_180223a2c(0x80000002);
    *(undefined4 *)(lVar12 + 0x15c) = uVar9;
    uVar17 = extraout_x1_00;
  }
  uStack_e4 = *(undefined4 *)(puVar11 + 0x13);
  uStack_dc = *(undefined4 *)((longlong)puVar11 + 0x9c);
  auVar22._8_8_ = uVar17;
  auVar22._0_8_ = 1;
  uStack_c8 = *(undefined4 *)(puVar11 + 0x1d);
  local_c4 = *(undefined4 *)((longlong)puVar11 + 0xec);
  uVar10 = 1;
  local_15f = 1;
  local_d4 = 0x100000001;
  local_e8 = *(undefined4 *)(puVar11 + 0x16);
  local_e0 = *(undefined4 *)((longlong)puVar11 + 0xb4);
  local_cc = 0;
  uStack_c0 = uStack_e4;
  local_bc = uStack_dc;
  if (*(int *)((longlong)puVar11 + 0xd4) != -1) {
    local_158 = CONCAT44(local_158._4_4_,uStack_c8);
    uVar18 = 0;
    puVar4 = (undefined4 *)0x0;
    if (local_148 == 0) {
      puVar4 = &local_e8;
    }
    do {
      if (uVar10 == 0) goto LAB_1801d3ffc;
      local_d8 = *(int *)(puVar11 + 0x1c);
      (*(code *)puVar5)(0x180224000);
      auVar22 = (*extraout_x11_00)(puVar2,&local_d8,puVar4,*(undefined4 *)(puVar11 + 0x1b));
      if (auVar22._0_8_ == 0) {
        uVar10 = 0;
      }
      else {
        puVar11[uVar18 + 0xc] = auVar22._0_8_;
      }
      uVar14 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar14;
    } while (uVar14 < *(int *)((longlong)puVar11 + 0xd4) + 1U);
    local_15f = uVar10;
    if (uVar10 == 0) goto LAB_1801d3ffc;
  }
  if (*(int *)((longlong)puVar11 + 0xe4) != 0) {
    if (local_138 != 0) {
      local_d4 = local_d4 | 0x200000000;
      puVar4 = (undefined4 *)0x0;
      if (local_148 == 0) {
        puVar4 = &local_e8;
      }
      local_d8 = *(int *)((longlong)puVar11 + 0xe4);
      (*(code *)puVar5)(0x180224000,auVar22._0_8_,auVar22._8_8_,puVar4);
      lVar12 = (*extraout_x11_01)(puVar2,&local_d8);
      puVar11[0x10] = lVar12;
      local_15f = (uint)(lVar12 != 0);
    }
    if (local_15f == 0) goto LAB_1801d3ffc;
  }
  lVar12 = DAT_18024d928;
  lVar15 = puVar11[0x12];
  uVar18 = 0;
  uVar10 = *(uint *)(DAT_18024d928 + 0x148);
  if (uVar10 != 0) {
    do {
      if (*(longlong *)(*(longlong *)(DAT_18024d928 + 0x140) + uVar18 * 0x18) == lVar15)
      goto LAB_1801d3a50;
      uVar14 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar14;
    } while (uVar14 < uVar10);
  }
  if ((uint)uVar18 == uVar10) {
    iVar8 = thunk_FUN_180224170(lVar15);
    uStack_10c = CONCAT31(uStack_10c._1_3_,iVar8 != 0);
    local_110 = *(int *)(lVar12 + 0x158);
    *(uint *)(lVar12 + 0x158) = local_110 + 1;
    iVar8 = thunk_FUN_180224170(lVar15);
    if (iVar8 == 0) {
      lVar13 = thunk_FUN_180223e64(lVar15,0xfffffffc);
    }
    else {
      lVar13 = thunk_FUN_180223d4c(lVar15);
    }
    iVar8 = *(int *)(lVar12 + 0x14c);
    if (*(int *)(lVar12 + 0x148) == iVar8) {
      uVar10 = iVar8 << 1;
      if (iVar8 == 0) {
        uVar10 = 0x10;
      }
      local_150 = CONCAT44(local_150._4_4_,uVar10);
      lVar15 = (ulonglong)uVar10 * 0x18;
      if (SUB168(ZEXT416(uVar10) * ZEXT816(0x18),8) != 0) {
        lVar15 = -1;
      }
      local_158 = FUN_1802229a8(lVar15);
      if (local_158 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(local_158,*(undefined8 *)(lVar12 + 0x140),
                            (ulonglong)*(uint *)(lVar12 + 0x14c) * 0x18);
      }
    }
    else {
      plVar1 = (longlong *)
               (*(longlong *)(lVar12 + 0x140) + (ulonglong)*(uint *)(lVar12 + 0x148) * 0x18);
      plVar1[1] = lVar13;
      *plVar1 = lVar15;
      plVar1[2] = CONCAT44(uStack_10c,local_110);
      *(int *)(lVar12 + 0x148) = *(int *)(lVar12 + 0x148) + 1;
    }
  }
LAB_1801d3a50:
  uVar17 = (*(code *)puVar5)(0x180224000);
  cVar7 = (*extraout_x11_02)(uVar17,puVar11[0x12],*(undefined4 *)(puVar11 + 0x19),
                             *(undefined4 *)(puVar11 + 4),*(undefined4 *)((longlong)puVar11 + 0x1c),
                             *(undefined4 *)((longlong)puVar11 + 0xf4),
                             *(undefined4 *)(puVar11 + 0x1f));
  if (cVar7 != '\0') {
    uVar17 = (*(code *)puVar5)(0x180224000);
    (*extraout_x11_03)(uVar17,puVar11[0x12],*(undefined4 *)(puVar11 + 0x18),
                       *(undefined4 *)((longlong)puVar11 + 0xc4));
    uVar17 = puVar11[0x12];
    *(undefined4 *)(puVar11 + 3) = *(undefined4 *)(puVar11 + 0x1f);
    if (*(int *)(lVar12 + 0x138) == 0) {
      lVar15 = thunk_FUN_180223d9c();
      *(bool *)(lVar12 + 0xa0c) = lVar15 != 0;
    }
    lVar15 = FUN_180220598(lVar12,uVar17);
    if ((lVar15 != 0) && (*(longlong *)(lVar15 + 0x20) != 0)) {
      FUN_180220550();
    }
    local_120 = (ulonglong *)(lVar12 + 0x150);
    local_110 = 0;
    uStack_88 = 0;
    uStack_78 = 0;
    local_80 = 0;
    local_68 = 0;
    uStack_70 = 0;
    uStack_118 = ~*local_120;
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uVar18 = (uStack_118 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_118 & 0x5555555555555555) << 1;
    uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
    uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
    uVar18 = LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20);
    local_a0 = uVar17;
    uStack_98 = 0;
    uVar14 = (uint)uVar18;
    local_90 = puVar2;
    uVar10 = local_110;
    do {
      if ((1 - (uVar14 >> 6) & 0xff) != 0) {
        local_110 = uVar10;
        *(byte *)((longlong)&uStack_118 + (uVar18 >> 3)) =
             *(byte *)((longlong)&uStack_118 + (uVar18 >> 3)) & ((byte)(1 << (uVar18 & 7)) ^ 0xff);
        uVar18 = (ulonglong)(local_110 + (int)uVar18);
LAB_1801d3bbc:
        local_68 = CONCAT44(local_68._4_4_,(int)uVar18);
        lVar15 = lVar12 + ((uVar18 >> 6) + 0x2a) * 8;
        uVar16 = uVar18 >> 3 & 7;
        *(byte *)(lVar15 + uVar16) = *(byte *)(lVar15 + uVar16) | (byte)(1 << (uVar18 & 7));
        local_150 = *(undefined8 *)(lVar12 + 0x100);
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(*(longlong *)(lVar12 + 0x110) +
                            (ulonglong)(uint)((int)uVar18 * DAT_180246040),PTR_DAT_180246038);
      }
      local_110 = uVar10 + 0x40;
      if (0x3f < local_110) {
        uVar18 = 0xffffffff;
        goto LAB_1801d3bbc;
      }
      uVar18 = 0;
      if (-uVar10 < 0x40) {
        uVar18 = 0xffffffffffffffff;
      }
      uStack_118 = ~(local_120[local_110 >> 6] | uVar18);
      uVar18 = (uStack_118 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_118 & 0x5555555555555555) << 1;
      uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
      uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
      uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
      uVar18 = LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20);
      uVar14 = (uint)uVar18;
      uVar10 = local_110;
    } while( true );
  }
LAB_1801d3ffc:
  lVar12 = DAT_18024d928;
  iVar8 = *(int *)(DAT_18024d928 + 0x160) + -1;
  *(int *)(DAT_18024d928 + 0x160) = iVar8;
  if ((iVar8 == 0) && (*(char *)(lVar12 + 0x825) != '\0')) {
    thunk_FUN_180223a2c(*(undefined4 *)(lVar12 + 0x15c));
    *(undefined4 *)(lVar12 + 0x15c) = 0;
  }
  FUN_180118248(&uStack_160);
  if (puVar11[0x10] != 0) {
    FUN_1801df750();
    puVar11[0x10] = 0;
  }
  puVar2 = local_f0;
  lVar12 = 0;
  do {
    if (puVar2[lVar12 + 0xc] != 0) {
      FUN_1801df750();
      puVar2[lVar12 + 0xc] = 0;
    }
    lVar12 = lVar12 + 1;
  } while (lVar12 != 4);
  FUN_1801e0928(puVar11);
  FUN_1802229d8(puVar11,0x188);
  return local_144;
}

