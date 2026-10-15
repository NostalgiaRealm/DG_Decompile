/*
 * FUN_1800419e0 at 1800419e0
 * undefined8 __cdecl FUN_1800419e0(longlong param_1, undefined8 param_2, int param_3, longlong param_4, undefined8 param_5, longlong * param_6, ulonglong param_7, undefined8 param_8)
 * Address ranges: 1800419e0-180042387
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800419e0(longlong param_1,undefined8 param_2,int param_3,longlong param_4,undefined8 param_5,
             longlong *param_6,ulonglong param_7,undefined8 param_8)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  LPCSTR lpOutputString;
  ulonglong uVar10;
  ulonglong extraout_x1;
  ulonglong extraout_x1_00;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  byte bVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  uint extraout_w10;
  int extraout_w15;
  int extraout_w15_00;
  longlong *local_2f0;
  undefined4 uStack_2e4;
  undefined8 *local_2e0;
  undefined8 *puStack_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  longlong lStack_2a8;
  undefined8 *local_2a0;
  undefined8 *puStack_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  ulonglong uStack_268;
  ulonglong local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  longlong local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [5];
  char local_b3;
  undefined2 local_b2;
  undefined1 uStack_b1;
  undefined8 local_b0;
  uint local_a0 [2];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *local_88 [4];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  uint local_4c;
  
  local_240 = (longlong)&uStack_148 + 2;
  uStack_248 = 0;
  local_250 = 0;
  local_238 = 0x10;
  iVar7 = (int)param_5;
  uStack_268 = 0;
  uStack_258 = 0;
  local_260 = 0;
  local_230 = 0;
  uStack_208 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  _auStack_b8 = 0;
  uStack_c0 = 0;
  local_b0 = 0;
  local_270 = 0x40;
  if (iVar7 == 0xa100 || iVar7 == 0xb000) {
    uVar15 = 0x41;
LAB_180041a88:
    local_270 = (ulonglong)uVar15;
  }
  else if (iVar7 == 0xc000) {
    uVar15 = 0x51;
    goto LAB_180041a88;
  }
  local_218 = 0x41040000110400;
  local_210 = 0x20000d00;
  lVar16 = 0;
  uStack_220 = 0x41080100410800;
  uStack_228 = 0x21080000110800;
  do {
    *(undefined1 *)((longlong)&uStack_1c8 + lVar16 + 5) = 0xff;
    *(undefined1 *)((longlong)&local_1c0 + lVar16 + 3) = 0xff;
    *(undefined1 *)((longlong)&local_1c0 + lVar16) = 0xff;
    lVar16 = lVar16 + 1;
    lVar11 = param_4;
    plVar13 = param_6;
  } while (lVar16 != 3);
  while (param_3 != 0) {
    FUN_18003b348(param_1,param_3 - 1,(longlong)&local_270,1);
    lVar11 = 0;
    FUN_18003b348(param_1,extraout_w15 - 1,(longlong)&local_270,0);
    param_3 = extraout_w15_00 + -1;
  }
  FUN_18003b488(param_1,(longlong)&local_270,1);
  FUN_18003b488(param_1,(longlong)&local_270,0);
  if (local_b3 != '\0') {
    local_1b0._0_4_ = (uint)(ushort)local_1b0;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    if ((local_1b0._4_2_ & 0xf0) == 0xf0) {
      uStack_148 = CONCAT71(uStack_148._1_7_,
                            (byte)(1 << (ulonglong)(local_1b0._4_2_ & 0xf)) | (byte)uStack_148);
    }
  }
  FUN_18003b978((longlong)&local_270,0);
  FUN_18003b978((longlong)&local_270,1);
  uVar15 = *(uint *)(param_1 + 0x8c) & 0xff;
  bVar14 = local_230._4_1_;
  if (uVar15 == 1) {
    local_230 = local_230 | 0x8000000;
LAB_180041bc8:
    auStack_b8 = (undefined1  [5])CONCAT14(1,auStack_b8._0_4_);
  }
  else {
    if (uVar15 == 2) {
      bVar14 = local_230._4_1_ | 1;
LAB_180041ba4:
      local_230._0_5_ = CONCAT14(bVar14,(undefined4)local_230);
      goto LAB_180041bc8;
    }
    if (uVar15 == 3) {
      bVar14 = local_230._4_1_ | 4;
      goto LAB_180041ba4;
    }
  }
  uVar9 = _auStack_b8;
  uVar1 = uStack_b1;
  _auStack_b8 = CONCAT17(uStack_b1,0x1000000000000);
  uVar6 = _auStack_b8;
  local_b3 = SUB81(uVar9,5);
  if ((*(uint *)(param_1 + 0x8c) & 0x300) == 0x100) {
    local_b3 = 1;
  }
  local_b2 = SUB82(uVar6,6);
  auStack_b8 = SUB85(uVar9,0);
  if ((*(uint *)(param_1 + 0x78) < 8) &&
     ((0x81U >> (ulonglong)(*(uint *)(param_1 + 0x78) & 0x1f) & 1) != 0)) {
    _auStack_b8 = (uint7)_auStack_b8;
    _auStack_b8 = CONCAT17(uVar1,_auStack_b8);
  }
  iVar7 = *(int *)(param_1 + 0x74);
  lVar16 = 4;
  if (iVar7 == 0) {
    lVar16 = 0;
  }
  if ((&DAT_18006aeb0)[lVar16] == 0xff) {
    lVar16 = 5;
    if (iVar7 == 0) {
      lVar16 = 1;
    }
    if ((&DAT_18006aeb0)[lVar16] != 0xff) goto LAB_180041c64;
    lVar16 = 6;
    if (iVar7 == 0) {
      lVar16 = 2;
    }
    if ((&DAT_18006aeb0)[lVar16] != 0xff) goto LAB_180041c64;
  }
  else {
LAB_180041c64:
    _auStack_b8 = CONCAT17(1,_auStack_b8);
  }
  uVar15 = *(uint *)(param_1 + 0x28) & *(uint *)(param_1 + 0x24);
  if ((uVar15 - 1 & 0xfffffffd) == 0) {
    local_230 = local_230 | 0x40000000000;
LAB_180041ca0:
    local_b0 = CONCAT71(local_b0._1_7_,1);
  }
  else if ((uVar15 - 2 & 0xfffffffd) == 0) {
    local_230 = CONCAT35(local_230._5_3_,CONCAT14(bVar14,(undefined4)local_230)) | 0x100000000;
    goto LAB_180041ca0;
  }
  local_280 = 0;
  local_278 = 0;
  uVar1 = local_b0._1_1_;
  if ((*(int *)(param_1 + 0x1c) - 0x400U & 0xfffffffb) == 0) {
    uVar1 = 1;
  }
  local_b0._0_2_ = CONCAT11(uVar1,(undefined1)local_b0);
  local_2a0 = (undefined8 *)0x43425844;
  puStack_298 = (undefined8 *)0x0;
  local_290 = 0x100000000;
  local_288 = 0x300000000;
  FUN_180056cf8(param_6,&local_2a0,0x2c);
  *(int *)(*param_6 + 0x20) = (int)param_6[1] - (int)*param_6;
  uVar8 = FUN_18003add0(param_6,(longlong)&local_270);
  if ((uVar8 & 1) == 0) {
    return 1;
  }
  *(int *)(*param_6 + 0x24) = (int)param_6[1] - (int)*param_6;
  uVar8 = FUN_18003af90(param_6);
  if ((uVar8 & 1) == 0) {
    return 1;
  }
  local_2c8 = CONCAT71(local_2c8._1_7_,1);
  *(int *)(*param_6 + 0x28) = (int)param_6[1] - (int)*param_6;
  local_2d0 = 0x200;
  local_2e0 = (undefined8 *)thunk_FUN_18005fb88(0x200);
  puStack_2d8 = local_2e0;
  uVar9 = FUN_180056fa8((int)local_270);
  uStack_2e4 = 0;
  uVar15 = 0x58454853;
  if ((int)uVar9 - 0x40U < 2) {
    uVar15 = 0x52444853;
  }
  local_2f0 = (longlong *)(ulonglong)uVar15;
  FUN_180056cf8((longlong *)&local_2e0,&local_2f0,0x10);
  local_2a0 = (undefined8 *)0x0;
  puStack_298 = (undefined8 *)0x0;
  local_288 = CONCAT71(local_288._1_7_,1);
  iVar7 = (int)local_2e0;
  iVar17 = (int)puStack_2d8;
  local_290 = 0x80;
  local_2a0 = (undefined8 *)thunk_FUN_18005fb88(0x80);
  puStack_298 = local_2a0;
  FUN_180041158(param_1,(int *)&local_270,(longlong *)&local_2a0);
  FUN_180056d68((longlong *)&local_2a0,1,0x100003e,lVar11,param_5,plVar13,param_7,param_8);
  uVar8 = local_270 & 0xffffffff;
  if (((int)local_270 - 0x40U < 0x11) &&
     ((0x10003U >> (ulonglong)((int)local_270 - 0x40U & 0x1f) & 1) != 0)) {
LAB_180041e2c:
    uVar9 = FUN_180056fa8((int)local_270);
    uVar15 = extraout_w10;
    if (0x4f < (uint)uVar9) {
      uVar15 = 0;
    }
    uVar15 = uVar15 | 0x100086a;
  }
  else {
    if ((int)local_270 == 0x30051 || ((int)local_270 - 0x51U & 0xfffcffff) != 0) {
      if ((int)local_270 == 0x20040 || ((int)local_270 - 0x10040U & 0xfffeffef) != 0)
      goto LAB_180041e54;
      goto LAB_180041e2c;
    }
    uVar15 = 0x108086a;
  }
  FUN_180056d68((longlong *)&local_2e0,1,(ulonglong)uVar15,uVar8,param_5,plVar13,param_7,param_8);
  uVar8 = local_270 & 0xffffffff;
LAB_180041e54:
  if ((uStack_268 & 1) != 0) {
    plVar13 = (longlong *)(ulonglong)(local_270._4_4_ & 1);
    FUN_180057018((int)uVar8,(longlong *)&local_2e0,0,uVar8,0x580,(byte)(local_270._4_4_ & 1),
                  param_7,param_8);
    uVar8 = local_270 & 0xffffffff;
  }
  if (((uint)uStack_268 >> 1 & 1) != 0) {
    uVar15 = local_270._4_4_ >> 1 & 1;
    plVar13 = (longlong *)(ulonglong)uVar15;
    FUN_180057018((int)uVar8,(longlong *)&local_2e0,1,uVar8,0xd40,(byte)uVar15,param_7,param_8);
    uVar8 = local_270 & 0xffffffff;
  }
  uVar10 = local_260 & 0xffffffff;
  uVar15 = 0;
  do {
    if ((1 << (ulonglong)(uVar15 & 0x1f) & (uint)uVar10) != 0) {
      uVar9 = FUN_180056fa8((int)uVar8);
      uVar2 = (int)uVar9 - 0x40;
      if ((uVar2 < 0x11) && ((0x10003U >> (ulonglong)(uVar2 & 0x1f) & 1) != 0)) {
        FUN_180056d68((longlong *)&local_2e0,3,0x300005a,0x106000,(ulonglong)uVar15,plVar13,param_7,
                      param_8);
      }
      else {
        uVar10 = extraout_x1;
        if ((int)uVar9 != 0x51) goto LAB_180041f24;
        param_8 = 0;
        param_7 = (ulonglong)uVar15;
        plVar13 = (longlong *)(ulonglong)uVar15;
        FUN_180056d68((longlong *)&local_2e0,6,0x600005a,0x306000,(ulonglong)uVar15,plVar13,param_7,
                      0);
      }
      uVar8 = local_270 & 0xffffffff;
      uVar10 = local_260 & 0xffffffff;
    }
LAB_180041f24:
    uVar15 = uVar15 + 1;
  } while (uVar15 < 3);
  uVar10 = uStack_268 >> 0x20;
  uVar15 = 0;
  do {
    uVar12 = (ulonglong)(uVar15 + 0x10);
    if ((1 << (ulonglong)(uVar15 + 0x10 & 0x1f) & (uint)uVar10) != 0) {
      uVar9 = FUN_180056fa8((int)uVar8);
      uVar2 = (int)uVar9 - 0x40;
      if ((uVar2 < 0x11) && ((0x10003U >> (ulonglong)(uVar2 & 0x1f) & 1) != 0)) {
        plVar13 = (longlong *)0x5555;
        FUN_180056d68((longlong *)&local_2e0,4,0x4001858,0x107000,uVar12,0x5555,param_7,param_8);
      }
      else {
        uVar10 = extraout_x1_00;
        if ((int)uVar9 != 0x51) goto LAB_180041fb4;
        param_8 = 0x5555;
        param_7 = uVar12 & 0xffffffff;
        plVar13 = (longlong *)(uVar12 & 0xffffffff);
        FUN_180056d68((longlong *)&local_2e0,7,0x7001858,0x307000,uVar12,plVar13,param_7,0x5555);
      }
      uVar8 = local_270 & 0xffffffff;
      uVar10 = uStack_268 >> 0x20;
    }
LAB_180041fb4:
    uVar15 = uVar15 + 1;
    if (2 < uVar15) {
      if (((uint)uVar10 >> 8 & 1) != 0) {
        param_7 = 4;
        FUN_180056610((int *)&local_270,&local_2e0,8,8,8,plVar13,4,param_8);
        uVar10 = uStack_268 >> 0x20;
      }
      if (((uint)uVar10 >> 9 & 1) != 0) {
        param_7 = 4;
        FUN_180056610((int *)&local_270,&local_2e0,9,9,9,plVar13,4,param_8);
        uVar10 = uStack_268 >> 0x20;
      }
      if (((uint)uVar10 >> 10 & 1) != 0) {
        param_7 = 4;
        FUN_180056610((int *)&local_270,&local_2e0,10,10,10,plVar13,4,param_8);
        uVar10 = uStack_268 >> 0x20;
      }
      if (((uint)uVar10 >> 0xc & 1) != 0) {
        param_7 = 4;
        FUN_180056610((int *)&local_270,&local_2e0,0xc,0xc,0xc,plVar13,4,param_8);
        uVar10 = uStack_268 >> 0x20;
      }
      uVar15 = 0;
      do {
        uVar2 = uVar15 + 0x14;
        if ((1 << (ulonglong)(uVar2 & 0x1f) & (uint)uVar10) != 0) {
          param_7 = 0x10;
          FUN_180056610((int *)&local_270,&local_2e0,(ulonglong)uVar2,(ulonglong)uVar2,
                        (ulonglong)uVar2,plVar13,0x10,param_8);
          uVar10 = uStack_268 >> 0x20;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < 3);
      uVar15 = 0;
      do {
        uVar2 = uVar15 + 0x18;
        if ((1 << (ulonglong)(uVar2 & 0x1f) & (uint)uVar10) != 0) {
          param_7 = 0x10;
          FUN_180056610((int *)&local_270,&local_2e0,(ulonglong)uVar2,(ulonglong)uVar2,
                        (ulonglong)uVar2,plVar13,0x10,param_8);
          uVar10 = uStack_268 >> 0x20;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < 3);
      if (local_230._5_1_ != 0) {
        plVar13 = (longlong *)0x1;
        FUN_180056d68((longlong *)&local_2e0,4,0x4002064,
                      (ulonglong)((uint)local_230._5_1_ << 4 | 0x101002),0,1,param_7,param_8);
      }
      if (local_230._4_1_ != 0) {
        FUN_180056d68((longlong *)&local_2e0,3,0x3002062,
                      (ulonglong)((uint)local_230._4_1_ << 4 | 0x101002),1,plVar13,param_7,param_8);
      }
      uVar8 = 0;
      do {
        if (*(byte *)((longlong)&local_230 + uVar8) != 0) {
          FUN_180056d68((longlong *)&local_2e0,3,0x3002062,
                        (ulonglong)((uint)*(byte *)((longlong)&local_230 + uVar8) << 4 | 0x101002),
                        (ulonglong)((int)uVar8 + 3),plVar13,param_7,param_8);
        }
        uVar15 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar15;
      } while (uVar15 < 3);
      if (local_230._3_1_ != 0) {
        FUN_180056d68((longlong *)&local_2e0,3,0x3002062,
                      (ulonglong)((uint)local_230._3_1_ << 4 | 0x101002),2,plVar13,param_7,param_8);
      }
      FUN_180056d68((longlong *)&local_2e0,3,0x3000065,0x1020f2,0,plVar13,param_7,param_8);
      uVar9 = 1;
      FUN_180056d68((longlong *)&local_2e0,3,0x3000065,0x102012,1,plVar13,param_7,param_8);
      if (local_238._1_1_ != 0) {
        FUN_180056d68((longlong *)&local_2e0,2,0x2000068,(ulonglong)local_238._1_1_,uVar9,plVar13,
                      param_7,param_8);
      }
      FUN_180056cf8((longlong *)&local_2e0,local_2a0,(longlong)puStack_298 - (longlong)local_2a0);
      puVar5 = local_2e0;
      iVar4 = (int)puStack_2d8 - (int)local_2e0;
      *(int *)((longlong)local_2e0 + 4) = iVar4 + -8;
      *(uint *)((longlong)local_2e0 + 0xc) = ((uint)(iVar4 - (iVar17 - iVar7)) >> 2) + 2;
      FUN_180056cf8(param_6,local_2e0,(longlong)puStack_2d8 - (longlong)local_2e0);
      local_a0[0] = 0;
      local_a0[1] = 0;
      uStack_90 = 0x1032547698badcfe;
      uStack_98 = 0xefcdab8967452301;
      *(int *)(*param_6 + 0x18) = (int)param_6[1] - (int)*param_6;
      lVar16 = *param_6;
      iVar7 = (int)param_6[1] - (int)lVar16;
      uVar2 = iVar7 - 0x14;
      uVar15 = uVar2 & 0xffffffc0;
      uVar3 = iVar7 * 8 - 0xa0;
      local_2f0 = (longlong *)CONCAT44(local_2f0._4_4_,uVar3);
      FUN_18005f0e8(local_a0,(undefined1 *)(lVar16 + 0x14),uVar15);
      uVar2 = uVar2 & 0x3f;
      uVar8 = (ulonglong)uVar15 | 0x14;
      if (uVar2 < 0x38) {
        FUN_18005f0e8(local_a0,(undefined1 *)&local_2f0,4);
        if (uVar2 != 0) {
          FUN_18005f0e8(local_a0,(undefined1 *)(uVar8 + lVar16),uVar2);
        }
        thunk_FUN_180001218((undefined8 *)((longlong)local_88 + (ulonglong)(uVar2 + 4)),
                            (undefined8 *)&DAT_18006b6e0,(ulonglong)(0x3c - uVar2));
        local_4c = (uVar3 | 4) >> 2;
        puStack_2d8 = local_88[1];
        local_2e0 = local_88[0];
        local_2c8 = local_88[3];
        local_2d0 = local_88[2];
        lStack_2a8 = CONCAT44(local_4c,uStack_50);
        uStack_2b8 = uStack_60;
        local_2c0 = local_68;
        uStack_2b0 = uStack_58;
      }
      else {
        FUN_18005f0e8(local_a0,(undefined1 *)(uVar8 + lVar16),uVar2);
        FUN_18005f0e8(local_a0,&DAT_18006b6e0,0x40 - uVar2);
        puStack_2d8 = (undefined8 *)0x0;
        local_2c8 = 0;
        local_2d0 = 0;
        uStack_2b8 = 0;
        local_2c0 = 0;
        uStack_2b0 = 0;
        local_2e0 = (undefined8 *)(ulonglong)uVar3;
        lStack_2a8 = (ulonglong)((uVar3 | 4) >> 2) << 0x20;
      }
      FUN_18005e6f8((int *)&uStack_98,(int *)&local_2e0);
      *(undefined8 *)(lVar16 + 0xc) = uStack_90;
      *(undefined8 *)(lVar16 + 4) = uStack_98;
      if (*(code **)(param_4 + 0x2d0) != (code *)0x0) {
        local_2f0 = (longlong *)0x0;
        iVar7 = (**(code **)(param_4 + 0x2d0))(*param_6,param_6[1] - *param_6,2,0,&local_2f0);
        if (-1 < iVar7) {
          lpOutputString = (LPCSTR)(**(code **)(*local_2f0 + 0x18))();
          OutputDebugStringA(lpOutputString);
          (**(code **)(*local_2f0 + 0x10))();
        }
      }
      thunk_FUN_18005fbc8(local_2a0);
      thunk_FUN_18005fbc8(puVar5);
      return 1;
    }
  } while( true );
}

