/*
 * FUN_180217ac0 at 180217ac0
 * undefined FUN_180217ac0(void)
 * Address ranges: 180217ac0-180217e2b;180217e3c-1802183af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180217ac0(longlong param_1,longlong param_2,longlong *param_3,undefined4 param_4,
             undefined8 param_5,longlong param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  uint *puVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  undefined8 in_stack_fffffffffffffdd8;
  undefined4 uVar18;
  undefined8 uVar17;
  uint local_210 [2];
  undefined4 local_208;
  undefined4 uStack_204;
  int local_200;
  int local_1fc;
  uint local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  uint local_1e8;
  uint local_1e4;
  char local_1e0;
  char local_1df;
  undefined8 local_1d8;
  undefined8 local_1d0;
  int local_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  int *local_198;
  undefined8 local_190;
  float local_188;
  undefined8 local_184;
  float local_178;
  longlong *local_170;
  ulonglong local_168;
  undefined8 local_160;
  undefined8 local_158;
  float local_150;
  float fStack_14c;
  undefined4 local_148;
  undefined4 local_144;
  longlong local_140;
  undefined8 local_138;
  longlong local_130;
  longlong local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 auStack_f0 [16];
  uint local_e0;
  undefined4 uStack_dc;
  uint local_d8;
  undefined4 local_d0;
  uint *local_b0;
  ulonglong uStack_a8;
  longlong local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 auStack_80 [16];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  
  uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffdd8 >> 0x20);
  lVar14 = param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
  puVar13 = *(uint **)(param_2 + (ulonglong)*(uint *)(param_2 + 0xd78) * 8 + 0xd88);
  local_160 = param_5;
  local_140 = param_6;
  FUN_18020d168(*(undefined8 *)(lVar14 + 0x2238),&local_170,*(undefined4 *)(param_2 + 0xd98));
  puVar5 = __hybrid_os_arm64x_dispatch_icall;
  uVar7 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar7,auStack_80);
  (*(code *)puVar5)(0x180224000);
  (*extraout_x11_00)(puVar13,auStack_f0);
  uVar17 = CONCAT44(uVar18,local_d0);
  uVar7 = FUN_1802014c0(param_1,local_210,param_2,local_160,CONCAT44(uStack_6c,local_70),local_68,
                        CONCAT44(uStack_dc,local_e0),local_d8,param_4,uVar17);
  uVar18 = (undefined4)((ulonglong)uVar17 >> 0x20);
  if (((local_210[0] == 0) && (local_1e0 == '\0')) && (local_1df == '\0')) {
    return 0;
  }
  local_168 = lVar14 + 0x900;
  *(int *)(*(longlong *)(lVar14 + 0x1e08) + 0x684) =
       *(int *)(*(longlong *)(lVar14 + 0x1e08) + 0x684) + 1;
  if (*param_3 != 0) {
    FUN_180217178(uVar7,local_168,param_3[1],*param_3,param_4);
  }
  if (local_1e0 != '\0') {
    FUN_180207cd0(*(undefined8 *)(lVar14 + 0x1e08),puVar13,0,0,4);
    bVar1 = local_1ec != 0;
    if (bVar1) {
      local_1c0 = (uint *)0x0;
      local_1b8 = (longlong *)CONCAT44(local_1ec,local_e0);
    }
    uVar9 = (ulonglong)bVar1;
    if (local_1f0 != 0) {
      *(undefined4 *)(&local_1c0 + uVar9 * 2) = 0;
      *(int *)((longlong)&local_1c0 + uVar9 * 0x10 + 4) = local_1ec;
      *(int *)(&local_1b8 + uVar9 * 2) = local_1f0;
      *(uint *)((longlong)&local_1b8 + uVar9 * 0x10 + 4) = local_1e4;
      uVar9 = (ulonglong)(bVar1 + 1);
    }
    if (local_1e8 != local_e0) {
      *(uint *)(&local_1c0 + uVar9 * 2) = local_1e8;
      *(int *)((longlong)&local_1c0 + uVar9 * 0x10 + 4) = local_1ec;
      *(uint *)(&local_1b8 + uVar9 * 2) = local_e0;
      *(uint *)((longlong)&local_1b8 + uVar9 * 0x10 + 4) = local_1e4;
      uVar9 = (ulonglong)((int)uVar9 + 1);
    }
    if (local_1e4 != local_d8) {
      *(undefined4 *)(&local_1c0 + uVar9 * 2) = 0;
      *(uint *)((longlong)&local_1c0 + uVar9 * 0x10 + 4) = local_1e4;
      *(uint *)(&local_1b8 + uVar9 * 2) = local_e0;
      *(uint *)((longlong)&local_1b8 + uVar9 * 0x10 + 4) = local_d8;
      uVar9 = (ulonglong)((int)uVar9 + 1);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    FUN_180209b80(*(undefined8 *)(lVar14 + 0x1e08),local_170,&local_1d8,uVar9,&local_1c0);
  }
  if (param_3[2] == 0) goto LAB_1802182a0;
  if (((local_210[0] != 0) || (local_1df != '\0')) ||
     ((local_1f8 - local_200 != local_1e8 - local_1f0 ||
      (bVar1 = true, local_1f4 - local_1fc != local_1e4 - local_1ec)))) {
    bVar1 = false;
  }
  if (!bVar1) {
    uVar2 = *(uint *)(param_2 + 0x20);
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x180217d38);
      (*pcVar6)();
    }
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = (local_1f8 - local_200) / uVar2;
    }
    if (uVar3 < (local_1e8 - local_1f0) * 2) {
      uVar2 = *(uint *)(param_2 + 0x24);
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x180217d5c);
        (*pcVar6)();
      }
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = (uint)(local_1f4 - local_1fc) / uVar2;
      }
      bVar4 = false;
      if ((local_1e4 - local_1ec) * 2 <= uVar3) goto LAB_180217d6c;
    }
    else {
LAB_180217d6c:
      bVar4 = true;
    }
    local_178 = 4.2039e-45;
    if (*(int *)(param_2 + 0x2c) != 7) {
      local_178 = 1.4013e-45;
    }
    iVar12 = 5;
    if (!bVar4) {
      iVar12 = 0;
    }
    uVar9 = FUN_1802116e0(*(undefined8 *)(lVar14 + 0x2250),iVar12 + (int)local_178,
                          *(undefined8 *)(*(longlong *)(lVar14 + 0x1e00) + 0x18),
                          *(undefined8 *)(*(longlong *)(lVar14 + 0x1e08) + 0xb78),&local_120);
    if ((uVar9 & 1) != 0) {
      plVar8 = (longlong *)
               FUN_180210af8(*(longlong *)(lVar14 + 0x910) + 0x40,&local_158,2,
                             *(undefined8 *)(*(longlong *)(lVar14 + 0x1e00) + 0x18),
                             *(undefined8 *)(lVar14 + 0x9d0));
      uStack_a8 = plVar8[1];
      local_b0 = (uint *)*plVar8;
      local_a0 = plVar8[2];
      if (uStack_a8 != 0) {
        local_1d8 = lVar14 + 0x9e0;
        FUN_180201840(param_1,param_2);
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(uStack_a8,local_1d8,0x1040);
      }
      FUN_180210af8(*(longlong *)(lVar14 + 0x908) + 0x40,&local_138,2,
                    *(undefined8 *)(*(longlong *)(lVar14 + 0x1e00) + 0x18),
                    *(undefined8 *)(lVar14 + 0x9d0));
      if (local_130 != 0) {
        *(longlong *)(*(longlong *)(lVar14 + 0x1e08) + 0xb88) = param_1;
        if ((*(int *)(param_2 + 0x2c) == 7) &&
           (uVar9 = FUN_18021ea30(param_1,*(undefined4 *)(param_2 + 0x10),&local_b0,&local_120,
                                  &local_138,1,param_3[1],param_3[3],local_70,
                                  CONCAT44(uVar18,local_68)), (uVar9 & 1) != 0)) {
          param_3[1] = *(longlong *)(lVar14 + 0x2378);
          plVar8 = (longlong *)
                   FUN_18020d168(*(undefined8 *)(lVar14 + 0x2230),&local_1d8,
                                 *(int *)(lVar14 + 0x2368) + 1,0);
          param_3[3] = *plVar8;
        }
        *(undefined4 *)(lVar14 + 0x980) = 1;
        *(undefined4 *)(lVar14 + 0x984) = local_d0;
        uVar7 = FUN_1801a4da0(lVar14 + 0x2278,&DAT_180239730);
        *(undefined8 *)(lVar14 + 0x950) = uVar7;
        uVar7 = FUN_180150ee0(lVar14 + 0x2260,&DAT_1802396c8);
        *(undefined8 *)(lVar14 + 0x968) = uVar7;
        uVar7 = FUN_180150c00(lVar14 + 0x22a8,&DAT_180239700);
        *(undefined8 *)(lVar14 + 0x960) = uVar7;
        if (*(int *)(*(longlong *)(lVar14 + 0x908) + 0x34) != 0) {
          *(undefined4 *)(*(longlong *)(lVar14 + 0x908) + 0x34) = 0;
        }
        FUN_180207a10(*(undefined8 *)(lVar14 + 0x1e08),*(undefined8 *)(lVar14 + 0x918));
        FUN_180208ae8(*(undefined8 *)(lVar14 + 0x1e08),*(undefined8 *)(lVar14 + 0x918));
        FUN_180208a18(*(undefined8 *)(lVar14 + 0x1e08),1,&local_110);
        FUN_180208c68(*(undefined8 *)(lVar14 + 0x1e08),5);
        local_1d8 = local_138;
        local_1d0 = 0x1000000200;
        FUN_180209250(*(undefined8 *)(lVar14 + 0x1e08),0,1,&local_1d8);
        FUN_180208e88(*(undefined8 *)(lVar14 + 0x1e08),0,local_b0);
        if (*(int *)(param_2 + 0x2c) != 7) {
          local_1c0 = local_210;
          local_1b8 = &local_120;
          local_184 = 0;
          local_1b0 = &local_138;
          local_1a8 = local_168;
          local_198 = (int *)param_3[1];
          local_188 = local_178;
          local_190 = param_3[3];
          local_1a0 = param_2;
          FUN_180201970(param_1,local_210,param_2,&local_1c0);
          param_3[1] = (longlong)local_198;
          param_3[3] = local_190;
        }
        if ((((local_210[0] != 0) || (local_1df != '\0')) ||
            (local_1f8 - local_200 != local_1e8 - local_1f0)) ||
           (bVar1 = true, local_1f4 - local_1fc != local_1e4 - local_1ec)) {
          bVar1 = false;
        }
        if (bVar1) goto LAB_180218200;
        uVar7 = *(undefined8 *)
                 (lVar14 + (ulonglong)(byte)(&DAT_180238828)[local_210[0]] * 8 + 0x1a40);
        *(undefined8 *)(lVar14 + 0x920) = *(undefined8 *)(lVar14 + 0x1b98);
        *(undefined8 *)(lVar14 + 0x928) = uVar7;
        *(undefined8 *)(lVar14 + 0x970) = *(undefined8 *)(lVar14 + 0x1ba8);
        local_168 = FUN_180205088(lVar14 + 0x22d8,lVar14 + 0x918);
        FUN_180207a10(*(undefined8 *)(lVar14 + 0x1e08),local_168);
        FUN_180208c00(*(undefined8 *)(lVar14 + 0x1e08),local_168);
        FUN_180207cd0(*(undefined8 *)(lVar14 + 0x1e08),puVar13,0,0,4);
        FUN_180207cd0(*(undefined8 *)(lVar14 + 0x1e08),param_3[1],0,0,0x80);
        uVar7 = (*(code *)puVar5)(0x180225000);
        (*extraout_x11_01)(uVar7,1,CONCAT44(uStack_114,local_118),param_3[3],0);
        FUN_180208f00(*(undefined8 *)(lVar14 + 0x1e08),1,local_120);
        FUN_1802094f8(*(undefined8 *)(lVar14 + 0x1e08),1,&local_170,0,0);
        local_158 = 0;
        local_148 = 0;
        local_1d8 = 0;
        local_150 = (float)local_e0;
        fStack_14c = (float)local_d8;
        local_1d0 = CONCAT44(local_d8,local_e0);
        local_144 = 0x3f800000;
        FUN_180209840(*(undefined8 *)(lVar14 + 0x1e08),1,&local_158);
        uVar7 = FUN_180209758(*(undefined8 *)(lVar14 + 0x1e08),1,&local_1d8);
        if ((&DAT_180238868)[local_210[0]] == '\0') {
          puVar10 = (undefined8 *)0x0;
          uVar9 = 0;
        }
        else {
          uVar7 = (*(code *)puVar5)(0x180224000);
          uVar7 = (*extraout_x11_02)(uVar7,&local_1c0);
          uVar9 = local_1a8 & 0xffffffff;
          puVar10 = local_1b0;
        }
        FUN_180201bd0(uVar7,param_2,local_210,local_130,puVar10,uVar9);
        FUN_180209ca8(*(undefined8 *)(lVar14 + 0x1e08),4,1,0,0);
        bVar1 = false;
      }
    }
    if (!bVar1) goto LAB_1802182a0;
  }
LAB_180218200:
  FUN_180207cd0(*(undefined8 *)(lVar14 + 0x1e08),puVar13,0,0,0x400);
  FUN_180207cd0(*(undefined8 *)(lVar14 + 0x1e08),param_3[1],0,0,0x800);
  local_120 = param_3[1];
  uStack_a8 = uStack_a8 & 0xffffffff00000000;
  uStack_90 = 0;
  uStack_98 = 0;
  local_88 = 0;
  local_a0 = 0;
  local_118 = 0;
  local_1d8 = CONCAT44(local_1fc,local_200);
  local_110 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  local_f8 = 0;
  local_1d0 = (ulonglong)local_1f8 << 0x20;
  local_1c8 = local_1f4;
  uStack_1c4 = 1;
  local_b0 = puVar13;
  FUN_180209ae0(*(undefined8 *)(lVar14 + 0x1e08),&local_b0,local_1f0,local_1ec,0,&local_120,
                &local_1d8);
LAB_1802182a0:
  if (local_140 != 0) {
    fVar16 = (float)((local_1e8 - local_1f0) * *(int *)(param_2 + 0x20)) /
             (float)(int)(local_1f8 - local_200);
    local_1b8 = local_170;
    local_1b0 = (undefined8 *)CONCAT44(local_208,local_d0);
    fVar15 = (float)((local_1e4 - local_1ec) * *(int *)(param_2 + 0x24)) /
             (float)(local_1f4 - local_1fc);
    local_1a8 = CONCAT44(local_e0,uStack_204);
    local_1a0 = CONCAT44(local_1a0._4_4_,local_d8);
    local_198 = &local_1f0;
    local_190 = CONCAT44(fVar15,fVar16);
    local_188 = (float)local_1f0 - (float)local_200 * fVar16;
    local_184 = CONCAT44(local_184._4_4_,(float)local_1ec - (float)local_1fc * fVar15);
    lVar11 = local_140;
    local_1c0 = puVar13;
    (*(code *)puVar5)(0x180224000);
    (*extraout_x11_03)(lVar11,&local_1c0);
  }
  lVar14 = *(longlong *)(lVar14 + 0x1e08);
  iVar12 = *(int *)(lVar14 + 0x684) + -1;
  *(int *)(lVar14 + 0x684) = iVar12;
  if ((iVar12 == 0) && (*(int *)(lVar14 + 0x680) <= *(int *)(lVar14 + 0x678))) {
    FUN_180207560(lVar14 + 8,0);
  }
  return 1;
}

