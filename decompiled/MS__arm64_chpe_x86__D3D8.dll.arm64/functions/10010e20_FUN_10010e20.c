/*
 * FUN_10010e20 at 10010e20
 * undefined FUN_10010e20(void)
 * Address ranges: 10010e20-100116a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10010e20(int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7,undefined4 *param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  int extraout_w1;
  uint uVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  code *extraout_w11_10;
  code *extraout_w11_11;
  undefined1 auVar16 [16];
  uint in_stack_fffffd80;
  undefined4 *local_24c;
  int local_248;
  undefined4 local_244;
  uint local_240;
  int *local_23c;
  int local_238;
  int local_234;
  int local_230;
  undefined4 local_22c;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined1 auStack_150 [136];
  undefined1 auStack_c8 [136];
  
  local_234 = param_1 + 0x4000;
  local_22c = 0;
  local_24c = param_8;
  local_244 = param_7;
  local_23c = param_2;
  local_230 = param_5;
  FUN_1000a2d0(param_1);
  piVar13 = local_23c;
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar9 = *param_2;
  iVar2 = *(int *)(&DAT_1012b098 + param_4 * 4);
  local_238 = *(int *)(*(int *)(&DAT_000057b8 + param_1) + 0x38);
  bVar6 = local_238 == 0x66;
  local_248 = *(int *)(&DAT_1012b064 + iVar2 * 8) +
              *(int *)(&DAT_1012b060 + iVar2 * 8) * (int)local_24c;
  local_240 = *(uint *)(iVar9 + 0x10) & *(uint *)(param_1 + 0x5880);
  uVar12 = *(uint *)(param_1 + 0x588c) & local_240;
  if (uVar12 == local_240) {
    uVar10 = *(undefined4 *)(*(int *)(&DAT_000057b8 + param_1) + 4);
    uVar1 = *(uint *)(&DAT_00005890 + param_1) & local_240;
    uVar12 = *(uint *)(&DAT_00005898 + param_1) & 1;
    FUN_1000f270(param_1,uVar1,uVar12);
    piVar13 = param_2 + 2;
    uVar8 = (*pcVar4)();
    (*extraout_w11)(uVar8,iVar2,*param_2,*piVar13,uVar10,param_3,local_244,local_248,bVar6);
    FUN_1000f008(param_1,local_240,1);
LAB_10011498:
    FUN_1000f0c8(param_1,uVar1,uVar12);
  }
  else if (uVar12 == 0) {
    local_24c = (undefined4 *)local_23c[2];
    if (local_24c == (undefined4 *)0x0) {
      if ((((*(int *)(iVar9 + 4) == 0) || (*(int *)(param_1 + 0x4b0) == 0)) ||
          (*(uint *)(param_1 + 0x178) < 9)) || (*(char *)(param_1 + 0x58bf) == '\0')) {
        if ((local_240 == 1) && (*(int *)(iVar9 + 0xc) == *(int *)(local_234 + 0x17fc))) {
          auVar16 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          (*extraout_w11_03)(auVar16._0_8_ & 0xffffffff,iVar2,auVar16._8_8_ & 0xffffffff);
        }
        else {
          FUN_1000ee78(param_1,iVar9,local_240,0,auStack_c8);
          piVar13 = local_23c + 1;
          uVar10 = (*pcVar4)();
          (*extraout_w11_04)(uVar10,iVar2,*piVar13,auStack_c8,param_6);
        }
      }
      else {
        iVar3 = *(int *)(param_1 + 0x4ac);
        local_24c = (undefined4 *)FUN_10015ec8(param_1,iVar9);
        iVar9 = FUN_100116b0(param_1 + 0x168,&local_24c);
        local_24c = (undefined4 *)(iVar9 + 0xc);
        uVar11 = FUN_100244e8(param_1,local_230 + param_6,*local_24c);
        if ((uVar11 & 1) != 0) {
          uStack_218 = 0;
          local_220 = 0;
          uStack_208 = 0;
          uStack_210 = 0;
          uStack_1f8 = 0;
          local_200 = 0;
          uStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          local_1e0 = 0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          local_1c0 = 0;
          uStack_1a8 = 0;
          uStack_1b0 = 0;
          uStack_198 = 0;
          local_1a0 = 0;
          uStack_188 = 0;
          uStack_190 = 0;
          uStack_178 = 0;
          local_180 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
          local_160 = 0;
          local_158 = 0;
          FUN_1000ef20(param_1,*piVar13,&local_220);
          FUN_10120e20(&local_23c);
          uVar10 = 7;
          if (iVar3 == 0) {
            uVar10 = 5;
          }
          FUN_10024980(param_1,&local_220,*(undefined4 *)(param_1 + 0xaa8),iVar9,uVar10,local_230,
                       param_6,param_3 + local_230,in_stack_fffffd80 & 0xffffff00);
          uVar10 = (*pcVar4)();
          (*extraout_w11_02)(uVar10,iVar2,iVar9,*(undefined4 *)(param_1 + 0xaa8),*local_24c,param_6)
          ;
          FUN_10120ed0(&local_23c);
        }
      }
    }
    else {
      uVar12 = local_240;
      FUN_1000ee78(param_1,iVar9,local_240,0,auStack_150);
      if ((uVar12 == 1) && (*(int *)(extraout_w1 + 0xc) == *(int *)(local_234 + 0x17fc))) {
        auVar16 = (*pcVar4)();
        (*extraout_w11_00)(auVar16._0_8_ & 0xffffffff,iVar2,auVar16._8_8_ & 0xffffffff,local_24c);
      }
      else {
        piVar13 = local_23c + 1;
        uVar10 = (*pcVar4)();
        (*extraout_w11_01)(uVar10,iVar2,*piVar13,local_24c,auStack_150,param_6);
      }
    }
  }
  else {
    uVar11 = FUN_1000f400(param_1,local_240 & (*(uint *)(param_1 + 0x588c) ^ 0xffffffff),
                          param_3 + local_230,param_6);
    iVar9 = local_234;
    if ((uVar11 & 1) != 0) {
      uVar1 = *(uint *)(local_234 + 0x1890) & local_240;
      uVar12 = *(uint *)(local_234 + 0x1898) & 1;
      FUN_1000f270(param_1,uVar1,uVar12);
      piVar5 = local_23c;
      puVar14 = (undefined4 *)(*(int *)(iVar9 + 0x17b8) + 4);
      piVar13 = local_23c + 2;
      uVar7 = *(int *)(*(int *)(iVar9 + 0x17b8) + 0x38) == 0x66;
      uVar10 = (*pcVar4)();
      (*extraout_w11_05)(uVar10,iVar2,*piVar5,*piVar13,*puVar14,param_3,local_244,local_248,uVar7);
      FUN_1000f008(param_1,local_240,1);
      goto LAB_10011498;
    }
    local_22c = 0x88760827;
  }
  if ((*(char *)(param_1 + 0xac9) == '\0') && (*(char *)(*(int *)(param_1 + 0xc) + 0x75e) == '\0'))
  {
    if (*(char *)(param_1 + 0xfd) == '\0') goto LAB_100115a4;
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  uVar10 = (*pcVar4)();
  (*extraout_w11_06)(uVar10);
  uVar10 = (*pcVar4)();
  (*extraout_w11_07)(uVar10,*(undefined4 *)(param_1 + 0xf4),*(undefined4 *)(param_1 + 0xf8));
  if (bVar6) {
    uVar10 = (*pcVar4)();
    (*extraout_w11_08)(uVar10,*(undefined4 *)(param_1 + 0xf4),*(undefined4 *)(param_1 + 0xf8));
    if (*(char *)(*(int *)(param_1 + 0xc) + 0x75f) != '\0') {
      (*(code *)PTR_FUN_10134064)();
    }
  }
LAB_100115a4:
  if (*(char *)(param_1 + 0xfe) == '\0') {
    uVar10 = (*pcVar4)();
    (*extraout_w11_09)(uVar10);
    if (*(int *)(param_1 + 0x28) != 0) {
      uVar10 = (*pcVar4)();
      (*extraout_w11_10)(uVar10);
    }
    *(char *)(param_1 + 0xfe) = '\x01';
  }
  if (*(char *)(param_1 + 0xff) != '\0') {
    if (*(int *)(param_1 + 0x2f4) != 0) {
      puVar14 = (undefined4 *)(param_1 + 0xf8);
      puVar15 = (undefined4 *)(param_1 + 0xf4);
      uVar10 = (*pcVar4)();
      (*extraout_w11_11)(uVar10,*puVar15,*puVar14,1);
    }
    *(char *)(param_1 + 0xff) = '\0';
  }
  return local_22c;
}

