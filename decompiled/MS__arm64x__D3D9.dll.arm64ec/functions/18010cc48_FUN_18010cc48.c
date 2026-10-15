/*
 * FUN_18010cc48 at 18010cc48
 * undefined FUN_18010cc48(void)
 * Address ranges: 18010cc48-18010d353
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_18010cc48(longlong param_1,longlong *param_2,uint param_3,int param_4,uint param_5,int param_6,
             int param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong extraout_x1;
  uint uVar11;
  longlong lVar12;
  undefined4 uVar13;
  ulonglong uVar14;
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
  ulonglong uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  uint in_stack_fffffffffffffe30;
  uint in_stack_fffffffffffffe38;
  uint local_198;
  uint local_194;
  uint local_190;
  uint local_18c;
  int local_188;
  int local_184;
  undefined4 local_180;
  longlong local_178;
  longlong *local_170;
  longlong local_168;
  longlong local_160;
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
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_160 = param_1 + 0x4000;
  local_180 = 0;
  local_198 = param_3;
  local_194 = param_5;
  local_184 = param_6;
  local_170 = param_2;
  FUN_18010a028();
  plVar6 = local_170;
  puVar4 = __hybrid_os_arm64x_dispatch_icall;
  local_178 = *(longlong *)(&DAT_000066c0 + param_1);
  uVar15 = (ulonglong)*(uint *)(&DAT_180229be8 + (longlong)param_4 * 4);
  local_188 = *(int *)(local_178 + 0x54);
  lVar10 = *param_2;
  uVar14 = -(ulonglong)(*(uint *)(&DAT_180229be8 + (longlong)param_4 * 4) >> 0x1f) &
           0xfffffff800000000 | uVar15 << 3;
  local_18c = (uint)(*(int *)(param_1 + 0x69c) != 0);
  local_190 = (uint)(local_188 == 0x66);
  iVar2 = *(int *)(&DAT_180229bb4 + uVar14) + *(int *)(&DAT_180229bb0 + uVar14) * param_8;
  uVar11 = *(uint *)(local_160 + 0x27cc) & *(uint *)(lVar10 + 0x10);
  uVar1 = *(uint *)(local_160 + 0x27d8) & uVar11;
  if (uVar1 == uVar11) {
    uVar16 = *(undefined8 *)(local_178 + 8);
    local_194 = *(uint *)(local_160 + 0x27e4);
    local_198 = *(uint *)(local_160 + 0x27dc) & uVar11;
    FUN_18010c350(param_1,local_198,local_194 & 1);
    uVar9 = (*(code *)puVar4)(0x180225000);
    (*extraout_x11)(uVar9,uVar15,*local_170,local_170[2],uVar16,param_3,param_7,iVar2,
                    local_190 & 0xff,local_18c & 0xff);
    FUN_18010c158(param_1,uVar11,1);
    uVar1 = local_194;
    uVar11 = local_198;
LAB_18010d1e4:
    FUN_18010c1f8(param_1,uVar11,uVar1 & 1);
  }
  else if (uVar1 == 0) {
    local_168 = local_170[2];
    if (local_168 == 0) {
      if ((((*(int *)(lVar10 + 4) == 0) || (*(int *)(param_1 + 0x69c) == 0)) ||
          (*(uint *)(param_1 + 0x360) < 9)) || (*(char *)(param_1 + 0x681b) == '\0')) {
        if ((uVar11 == 1) && (*(int *)(lVar10 + 0xc) == *(int *)(local_160 + 0x2748))) {
          uVar14 = (ulonglong)*(uint *)(local_160 + 0x2788);
          lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x66c8) + 8);
          auVar17 = (*(code *)__hybrid_os_arm64x_dispatch_icall)
                              (0x180225000,*(undefined8 *)(param_1 + 0x28),lVar10,uVar14,lVar12,
                               *(int *)(local_160 + 0x2748),*(undefined8 *)(local_178 + 8));
          (*extraout_x11_03)(auVar17._0_8_,uVar15,auVar17._8_8_,lVar12 + (uVar14 & 0xffffffff));
        }
        else {
          FUN_18010bfc8(param_1,lVar10,uVar11,0,&local_150);
          uVar11 = param_7 << 2;
          if (local_188 != 0x66) {
            uVar11 = param_7 << 1;
          }
          uVar14 = (ulonglong)uVar11;
          lVar10 = *(longlong *)(local_178 + 8);
          uVar9 = (*(code *)puVar4)(0x180225000);
          (*extraout_x11_04)(uVar9,uVar15,local_170[1],&local_150,local_184,
                             lVar10 + (uVar14 & 0xffffffff),iVar2,local_198,local_190 & 0xff,
                             local_18c & 0xff);
        }
      }
      else {
        local_18c = *(uint *)(param_1 + 0x698);
        local_198 = FUN_180114aa8(param_1);
        local_168 = FUN_18010d360(param_1 + 0x348,&local_198);
        iVar5 = local_184;
        uVar14 = FUN_18011e1f8(param_1,local_194 + local_184,*(undefined4 *)(local_168 + 0xc));
        if ((uVar14 & 1) != 0) {
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
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_a8 = 0;
          local_b0 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_88 = 0;
          local_90 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_68 = 0;
          local_70 = 0;
          uStack_58 = 0;
          uStack_60 = 0;
          uStack_48 = 0;
          local_50 = 0;
          FUN_18010c078(param_1,*plVar6,&local_150);
          uVar8 = FUN_180224358();
          FUN_1802243a0(0x3fc0);
          uVar13 = 7;
          if (local_18c == 0) {
            uVar13 = 5;
          }
          FUN_18011e588(param_1,&local_150,*(undefined8 *)(param_1 + 0xde8),local_168,uVar13,
                        local_194,iVar5,param_3 + local_194,in_stack_fffffffffffffe30 & 0xffffff00,
                        in_stack_fffffffffffffe38 & 0xffffff00);
          uVar11 = param_7 << 2;
          if (local_188 != 0x66) {
            uVar11 = param_7 << 1;
          }
          uVar14 = (ulonglong)uVar11;
          lVar10 = *(longlong *)(*(longlong *)(&DAT_000066c0 + param_1) + 8);
          uVar9 = (*(code *)puVar4)(0x180225000);
          (*extraout_x11_02)(uVar9,uVar15,local_168,*(undefined8 *)(param_1 + 0xde8),
                             *(undefined4 *)(local_168 + 0xc),iVar5,lVar10 + (uVar14 & 0xffffffff),
                             iVar2,0,local_190 & 0xff,0);
          FUN_1802243a0(uVar8);
        }
      }
    }
    else {
      FUN_18010bfc8(param_1,lVar10,uVar11,0,&local_150);
      if ((uVar11 == 1) && (*(int *)(extraout_x1 + 0xc) == *(int *)(local_160 + 0x2748))) {
        uVar14 = (ulonglong)*(uint *)(local_160 + 0x2788);
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x66c8) + 8);
        auVar17 = (*(code *)puVar4)(0x180225000,*(undefined8 *)(param_1 + 0x28),extraout_x1,
                                    *(undefined8 *)(local_178 + 8),uVar14,lVar10);
        (*extraout_x11_00)(auVar17._0_8_,uVar15,auVar17._8_8_,local_168,
                           lVar10 + (uVar14 & 0xffffffff));
      }
      else {
        uVar11 = param_7 << 2;
        if (local_188 != 0x66) {
          uVar11 = param_7 << 1;
        }
        uVar14 = (ulonglong)uVar11;
        lVar10 = *(longlong *)(local_178 + 8);
        uVar9 = (*(code *)puVar4)(0x180225000);
        (*extraout_x11_01)(uVar9,uVar15,local_170[1],local_168,&local_150,local_184,
                           lVar10 + (uVar14 & 0xffffffff),iVar2,local_198,local_190 & 0xff);
      }
    }
  }
  else {
    uVar14 = FUN_18010c490(param_1,uVar11 & (*(uint *)(local_160 + 0x27d8) ^ 0xffffffff),
                           param_3 + local_194,param_6);
    if ((uVar14 & 1) != 0) {
      uVar1 = *(uint *)(local_160 + 0x27e4);
      local_194 = *(uint *)(local_160 + 0x27dc) & uVar11;
      FUN_18010c350(param_1,local_194,uVar1 & 1);
      lVar10 = *(longlong *)(&DAT_000066c0 + param_1);
      uVar7 = *(int *)(lVar10 + 0x54) == 0x66;
      uVar9 = (*(code *)puVar4)(0x180225000);
      (*extraout_x11_05)(uVar9,uVar15,*local_170,local_170[2],*(undefined8 *)(lVar10 + 8),param_3,
                         param_7,iVar2,uVar7,local_18c & 0xff);
      FUN_18010c158(param_1,uVar11,1);
      uVar11 = local_194;
      goto LAB_18010d1e4;
    }
    local_180 = 0x88760827;
  }
  if ((*(char *)(param_1 + 0xe21) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x18) + 0x7f2) == '\0')) {
    if (*(char *)(param_1 + 0x2cd) == '\0') goto LAB_18010d2a4;
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  (*(code *)puVar4)(0x180224000);
  (*extraout_x11_06)();
  uVar9 = (*(code *)puVar4)(0x180224000);
  (*extraout_x11_07)(uVar9,*(undefined4 *)(param_1 + 0x2c4),*(undefined4 *)(param_1 + 0x2c8));
  if (bVar3) {
    uVar9 = (*(code *)puVar4)(0x180224000);
    (*extraout_x11_08)(uVar9,*(undefined4 *)(param_1 + 0x2c4),*(undefined4 *)(param_1 + 0x2c8));
    if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x7f3) != '\0') {
      thunk_FUN_180223720();
    }
  }
LAB_18010d2a4:
  if (*(char *)(param_1 + 0x2ce) == '\0') {
    (*(code *)puVar4)(0x180224000);
    (*extraout_x11_09)();
    if (*(longlong *)(param_1 + 0x50) != 0) {
      (*(code *)puVar4)(0x180224000);
      (*extraout_x11_10)();
    }
    *(undefined1 *)(param_1 + 0x2ce) = 1;
  }
  if (*(char *)(param_1 + 0x2cf) != '\0') {
    if (*(int *)(param_1 + 0x4e0) != 0) {
      uVar9 = (*(code *)puVar4)(0x180224000);
      (*extraout_x11_11)(uVar9,*(undefined4 *)(param_1 + 0x2c4),*(undefined4 *)(param_1 + 0x2c8),1);
    }
    *(undefined1 *)(param_1 + 0x2cf) = 0;
  }
  return local_180;
}

