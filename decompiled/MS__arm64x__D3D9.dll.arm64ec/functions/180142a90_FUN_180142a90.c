/*
 * FUN_180142a90 at 180142a90
 * undefined FUN_180142a90(void)
 * Address ranges: 180142a90-180143063
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180142a90(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  code *extraout_x11;
  code *extraout_x11_00;
  uint uVar8;
  uint uVar9;
  code *pcVar10;
  uint uVar11;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined *local_2f0;
  undefined4 local_2e8;
  uint uStack_2e4;
  undefined8 local_2e0;
  undefined8 *local_2d8;
  ulonglong local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  code *local_2b0;
  longlong local_2a8;
  undefined4 local_2a0 [2];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined2 local_284;
  undefined2 local_282;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined4 local_270;
  undefined1 auStack_268 [8];
  undefined8 local_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  longlong lStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  longlong lStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  longlong lStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  longlong lStack_1e8;
  longlong local_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  longlong lStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  longlong local_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  longlong local_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  longlong local_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  longlong local_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  longlong local_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  longlong lStack_a8;
  longlong local_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  longlong lStack_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  longlong lStack_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  longlong lStack_48;
  
  lVar3 = FUN_180206858(DAT_180258908,0);
  *(longlong *)(param_1 + 0x188) = lVar3;
  if (lVar3 == 0) {
    return 0;
  }
  lVar3 = lVar3 + (ulonglong)*(uint *)(param_1 + 400) * 0x1ac0;
  *(longlong *)(param_1 + 0x198) = lVar3 + 0x900;
  FUN_180221ec0(lVar3 + 0x1bc0);
  uVar8 = 0;
  iVar2 = FUN_18020c7c8(*(undefined8 *)(*(longlong *)(param_1 + 0x198) + 0x1930),3);
  pcVar10 = (code *)__hybrid_os_arm64x_dispatch_icall;
  *(int *)(param_1 + 0x180) = iVar2;
  if (iVar2 != -1) {
    lVar3 = param_1 + 0x168;
    local_2b0 = pcVar10;
    do {
      local_2e0 = 0x40000001c;
      local_2d8 = (undefined8 *)CONCAT44(local_2d8._4_4_,0x1688);
      local_2a0[0] = 3;
      local_2d0 = 0xffffffff00000000;
      uVar11 = 1;
      local_2c0 = 0;
      uVar1 = 3;
      if (uVar8 == 0) {
LAB_180142b70:
        local_2a0[0] = uVar1;
        local_284 = 1;
      }
      else {
        if (uVar8 != 1) {
          if (uVar8 == 2) {
            local_2e0 = 0x80000001c;
            uVar1 = 4;
          }
          goto LAB_180142b70;
        }
        local_2e0 = 0x90000001c;
        uVar11 = 6;
        local_284 = 6;
      }
      uStack_2c8 = 0;
      local_280 = 0x10000001c;
      uStack_278 = 0;
      local_298 = 0;
      uStack_290 = 1;
      local_288 = 1;
      local_282 = 1;
      local_270 = 0;
      lVar4 = FUN_18020d528(*(longlong *)(param_1 + 0x188) + 0x6d0,*(undefined4 *)(param_1 + 400),
                            local_2a0);
      pcVar10 = local_2b0;
      *(longlong *)(lVar3 + (ulonglong)uVar8 * 8) = lVar4;
      if (lVar4 == 0) goto joined_r0x000180142c78;
      local_300 = 0;
      uStack_2f8 = 0x100000000;
      uVar9 = 0;
      local_2f0 = (undefined *)0x100000001;
      local_2a8 = lVar3;
      do {
        FUN_18020b680(*(undefined8 *)(*(longlong *)(param_1 + 0x198) + 0x1518),
                      *(undefined8 *)(param_1 + (ulonglong)uVar8 * 8 + 0x168),uVar9,
                      *(longlong *)(param_1 + 0x198) + 0x16d0,&local_300,&DAT_180247584,0,0);
        lVar3 = local_2a8;
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar11);
      puVar5 = (undefined8 *)
               FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x198) + 0x1930),auStack_268,
                             *(undefined4 *)(param_1 + 0x180),uVar8);
      FUN_18020d3a0(*(longlong *)(param_1 + 0x188) + 0x6d0,*(undefined4 *)(param_1 + 400),
                    *(undefined8 *)(lVar3 + (ulonglong)uVar8 * 8),&local_2e0,*puVar5);
      uVar8 = uVar8 + 1;
    } while (uVar8 < 3);
    uVar8 = 1;
    pcVar10 = local_2b0;
  }
LAB_180142ce0:
  uVar6 = FUN_180207560(*(longlong *)(*(longlong *)(param_1 + 0x198) + 0x1518) + 8,0);
  if (uVar8 != 0) {
    uVar7 = FUN_180206a78(uVar6,DAT_180258908,0x12,&DAT_1802474e0,param_1 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = FUN_180206a78(uVar7,DAT_180258908,6,&DAT_180247498,param_1 + 0x120);
      if ((((uVar7 & 1) != 0) &&
          (uVar7 = FUN_180206a78(uVar7,DAT_180258908,0x11,&DAT_1802474b0,param_1 + 0x98),
          (uVar7 & 1) != 0)) &&
         (uVar7 = FUN_180206a78(uVar7,DAT_180258908,1,&DAT_180247490,param_1 + 0x160),
         (uVar7 & 1) != 0)) {
        puVar5 = (undefined8 *)FUN_1802229a8(0x10);
        *(undefined8 **)(param_1 + 0x158) = puVar5;
        if (puVar5 != (undefined8 *)0x0) {
          local_300 = CONCAT44(local_300._4_4_,2);
          local_260 = local_300;
          lStack_248 = (ulonglong)uStack_2e4 << 0x20;
          local_300 = CONCAT44(local_300._4_4_,2);
          local_240 = local_300;
          uStack_258 = 0;
          puStack_250 = local_2f0;
          lStack_228 = (ulonglong)uStack_2e4 << 0x20;
          *puVar5 = &PTR_s_POSITION_180247450;
          local_300 = CONCAT44(local_300._4_4_,2);
          uStack_238 = 1;
          puStack_230 = local_2f0;
          lStack_208 = (ulonglong)uStack_2e4 << 0x20;
          *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 8) = 2;
          uStack_218 = 2;
          local_220 = local_300;
          puStack_210 = local_2f0;
          local_300 = CONCAT44(local_300._4_4_,2);
          lStack_1e8 = (ulonglong)uStack_2e4 << 0x20;
          uStack_1f8 = 0x200000003;
          local_200 = local_300;
          puStack_1f0 = local_2f0;
          if (*(char *)(param_1 + 0x1c8) == '\0') {
            local_300 = CONCAT44(local_300._4_4_,2);
            uStack_2f8 = 0x200000004;
          }
          else {
            local_2f0 = &DAT_18022b1d8;
            local_300 = (ulonglong)local_300._4_4_ << 0x20;
            uStack_2f8 = 0x200000001;
          }
          local_1e0 = local_300;
          lStack_1c8 = (ulonglong)uStack_2e4 << 0x20;
          uVar8 = local_300._4_4_;
          local_300 = CONCAT44(local_300._4_4_,2);
          local_1c0 = local_300;
          uStack_1d8 = uStack_2f8;
          puStack_1d0 = local_2f0;
          uStack_1a8 = CONCAT44(uStack_2e4,5);
          local_300 = CONCAT44(local_300._4_4_,2);
          local_1a0 = local_300;
          uStack_1b8 = 0x100000003;
          puStack_1b0 = local_2f0;
          uStack_188 = CONCAT44(uStack_2e4,5);
          local_300 = CONCAT44(local_300._4_4_,2);
          local_180 = local_300;
          uStack_198 = 0x100000004;
          puStack_190 = local_2f0;
          uStack_168 = CONCAT44(uStack_2e4,5);
          local_300 = (ulonglong)local_300._4_4_ << 0x20;
          local_160 = local_300;
          uStack_178 = 0x100000005;
          puStack_170 = local_2f0;
          uStack_148 = CONCAT44(uStack_2e4,5);
          local_300 = (ulonglong)uVar8 << 0x20;
          local_140 = local_300;
          uStack_158 = 0x100000001;
          puStack_150 = &DAT_18022b1c0;
          uStack_128 = CONCAT44(uStack_2e4,5);
          local_300 = (ulonglong)uVar8 << 0x20;
          local_120 = local_300;
          uStack_138 = 0x100000001;
          puStack_130 = &DAT_18022b1a8;
          uStack_108 = CONCAT44(uStack_2e4,5);
          local_300 = (ulonglong)uVar8 << 0x20;
          local_100 = local_300;
          uStack_118 = 0x100000001;
          puStack_110 = &DAT_18022b190;
          uStack_e8 = CONCAT44(uStack_2e4,5);
          local_300 = (ulonglong)uVar8 << 0x20;
          local_e0 = local_300;
          uStack_f8 = 0x100000001;
          puStack_f0 = &DAT_18022b178;
          uStack_c8 = CONCAT44(uStack_2e4,5);
          local_300 = (ulonglong)uVar8 << 0x20;
          local_c0 = local_300;
          uStack_d8 = 0x100000001;
          puStack_d0 = &DAT_18022b160;
          lStack_a8 = (ulonglong)uStack_2e4 << 0x20;
          local_300 = (ulonglong)uVar8 << 0x20;
          local_a0 = local_300;
          uStack_b8 = 0x100000001;
          puStack_b0 = &DAT_18022b148;
          lStack_88 = (ulonglong)uStack_2e4 << 0x20;
          local_300 = (ulonglong)uVar8 << 0x20;
          local_80 = local_300;
          uStack_98 = 0x100000001;
          puStack_90 = &DAT_18022b130;
          lStack_68 = (ulonglong)uStack_2e4 << 0x20;
          local_2f0 = &DAT_18022b100;
          lVar3 = *(longlong *)(param_1 + 0x188);
          local_2e0 = CONCAT44(local_2e0._4_4_,0x11);
          local_2d8 = &local_260;
          local_300 = (ulonglong)uVar8 << 0x20;
          uStack_78 = 0x100000001;
          puStack_70 = &DAT_18022b118;
          uStack_2f8 = 0x100000001;
          local_2e8 = 0;
          lStack_48 = (ulonglong)uStack_2e4 << 0x20;
          local_2c0 = CONCAT44(local_2c0._4_4_,0xd);
          local_2d0 = local_2d0 & 0xffffffff00000000;
          uStack_58 = 0x100000001;
          local_60 = local_300;
          puStack_50 = &DAT_18022b100;
          uStack_2c8 = 0;
          (*pcVar10)(0x180224000);
          lVar3 = (*extraout_x11_00)(lVar3 + 0x6b0,*(undefined4 *)(param_1 + 400),1,&local_2e0,0);
          *(longlong *)(param_1 + 0x1a0) = lVar3;
          if (lVar3 != 0) {
            return 1;
          }
          lVar3 = *(longlong *)(param_1 + 0x188) + (ulonglong)*(uint *)(param_1 + 400) * 0x1ac0;
          *(longlong *)(param_1 + 0x198) = lVar3 + 0x900;
          FUN_180205b78(lVar3 + 0x22d8,*(undefined8 *)(param_1 + 0x158));
          FUN_1802229d8(*(undefined8 *)(param_1 + 0x158),0x10);
          *(undefined8 *)(param_1 + 0x158) = 0;
        }
      }
      FUN_180142a40(param_1);
    }
    FUN_1801429c0(param_1);
  }
  FUN_1801fe510(*(undefined8 *)(param_1 + 0x188));
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  return 0;
joined_r0x000180142c78:
  for (; uVar8 != 0; uVar8 = uVar8 - 1) {
    (*pcVar10)();
    (*extraout_x11)();
  }
  iVar2 = *(int *)(param_1 + 0x180);
  if (iVar2 != -1) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x198) + 0x1930);
    thunk_FUN_1802236f8(lVar3 + 0x28);
    FUN_18020c678(lVar3,iVar2,3);
    thunk_FUN_18022370c(lVar3 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
  uVar8 = 0;
  goto LAB_180142ce0;
}

