/*
 * FUN_10010710 at 10010710
 * undefined FUN_10010710(void)
 * Address ranges: 10010710-10010e0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10010710(int param_1,int *param_2,int param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *extraout_w8;
  undefined4 *extraout_w8_00;
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
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined4 *local_228;
  uint local_224;
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
  
  uVar13 = 0;
  FUN_1000a2d0(param_1);
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar9 = *param_2;
  iVar3 = *(int *)(&DAT_1012b098 + param_3 * 4);
  iVar5 = *(int *)(&DAT_1012b064 + iVar3 * 8) + *(int *)(&DAT_1012b060 + iVar3 * 8) * param_5;
  bVar7 = *(int *)(param_1 + 0x4b0) != 0;
  uVar1 = *(uint *)(param_1 + 0x5880) & *(uint *)(iVar9 + 0x10);
  uVar2 = uVar1 & *(uint *)(param_1 + 0x588c);
  if (uVar2 == uVar1) {
    uVar2 = *(uint *)(&DAT_00005890 + param_1);
    FUN_1000f270(param_1,uVar2 & uVar1,0);
    uVar8 = (*pcVar6)();
    (*extraout_w11)(uVar8,iVar3,*param_2,*extraout_w8,param_4,iVar5,bVar7);
    FUN_1000f0c8(param_1,uVar2 & uVar1,0);
    FUN_1000f008(param_1,uVar1,0);
  }
  else if (uVar2 == 0) {
    local_228 = (undefined4 *)param_2[2];
    uVar10 = ZEXT48(local_228);
    if (local_228 == (undefined4 *)0x0) {
      if ((((*(int *)(iVar9 + 4) == 0) || (*(int *)(param_1 + 0x4b0) == 0)) ||
          (*(uint *)(param_1 + 0x178) < 9)) || (*(char *)(param_1 + 0x58bf) == '\0')) {
        if ((uVar1 == 1) && (*(int *)(iVar9 + 0xc) == *(int *)(param_1 + 0x57fc))) {
          auVar14 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          (*extraout_w11_03)(auVar14._0_8_ & 0xffffffff,iVar3,auVar14._8_8_ & 0xffffffff);
        }
        else {
          FUN_1000ee78(param_1,iVar9,uVar1,param_4,auStack_c8);
          param_2 = param_2 + 1;
          uVar8 = (*pcVar6)();
          (*extraout_w11_04)(uVar8,iVar3,*param_2,auStack_c8,iVar5,bVar7);
        }
      }
      else {
        iVar4 = *(int *)(param_1 + 0x4ac);
        local_228 = (undefined4 *)FUN_10015ec8(param_1,iVar9);
        iVar9 = FUN_100116b0(param_1 + 0x168,&local_228);
        local_228 = (undefined4 *)(iVar9 + 0xc);
        uVar10 = FUN_100244e8(param_1,iVar5,*local_228);
        if ((uVar10 & 1) != 0) {
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
          FUN_1000ef20(param_1,*param_2,&local_220);
          FUN_10120e20(&local_224);
          uVar8 = 7;
          if (iVar4 == 0) {
            uVar8 = 5;
          }
          FUN_10024980(param_1,&local_220,*(undefined4 *)(param_1 + 0xaa8),iVar9,uVar8,0,iVar5,
                       param_4,0);
          uVar8 = (*pcVar6)();
          (*extraout_w11_02)(uVar8,iVar3,iVar9,*(undefined4 *)(param_1 + 0xaa8),*local_228,iVar5,0);
          FUN_10120ed0(&local_224);
        }
      }
    }
    else if ((uVar1 == 1) && (*(int *)(iVar9 + 0xc) == *(int *)(param_1 + 0x57fc))) {
      auVar14 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11_00)(auVar14._0_8_ & 0xffffffff,iVar3,auVar14._8_8_ & 0xffffffff,
                         uVar10 & 0xffffffff);
    }
    else {
      FUN_1000ee78(param_1,iVar9,uVar1,param_4,auStack_150);
      param_2 = param_2 + 1;
      uVar8 = (*pcVar6)();
      (*extraout_w11_01)(uVar8,iVar3,*param_2,local_228,auStack_150,iVar5);
    }
  }
  else {
    uVar10 = FUN_1000f400(param_1,uVar1 & (*(uint *)(param_1 + 0x588c) ^ 0xffffffff),param_4,iVar5);
    if ((uVar10 & 1) == 0) {
      uVar13 = 0x8876086d;
    }
    else {
      local_224 = *(uint *)(&DAT_00005890 + param_1) & uVar1;
      FUN_1000f270(param_1,local_224,0);
      uVar8 = (*pcVar6)();
      (*extraout_w11_05)(uVar8,iVar3,*param_2,*extraout_w8_00,param_4,iVar5,bVar7);
      uVar10 = 0;
      FUN_1000f008(param_1,uVar1,0);
      FUN_1000f0c8(param_1,local_224,uVar10 & 0xffffffff);
    }
  }
  if ((*(char *)(param_1 + 0xac9) == '\0') && (*(char *)(*(int *)(param_1 + 0xc) + 0x75e) == '\0'))
  {
    if (*(char *)(param_1 + 0xfd) == '\0') goto LAB_10010d0c;
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  uVar8 = (*pcVar6)();
  (*extraout_w11_06)(uVar8);
  uVar8 = (*pcVar6)();
  (*extraout_w11_07)(uVar8,*(undefined4 *)(param_1 + 0xf4),*(undefined4 *)(param_1 + 0xf8));
  if (bVar7) {
    uVar8 = (*pcVar6)();
    (*extraout_w11_08)(uVar8,*(undefined4 *)(param_1 + 0xf4),*(undefined4 *)(param_1 + 0xf8));
    if (*(char *)(*(int *)(param_1 + 0xc) + 0x75f) != '\0') {
      (*(code *)PTR_FUN_10134064)();
    }
  }
LAB_10010d0c:
  if (*(char *)(param_1 + 0xfe) == '\0') {
    uVar8 = (*pcVar6)();
    (*extraout_w11_09)(uVar8);
    if (*(int *)(param_1 + 0x28) != 0) {
      uVar8 = (*pcVar6)();
      (*extraout_w11_10)(uVar8);
    }
    *(char *)(param_1 + 0xfe) = '\x01';
  }
  if (*(char *)(param_1 + 0xff) != '\0') {
    if (*(int *)(param_1 + 0x2f4) != 0) {
      puVar11 = (undefined4 *)(param_1 + 0xf8);
      puVar12 = (undefined4 *)(param_1 + 0xf4);
      uVar8 = (*pcVar6)();
      (*extraout_w11_11)(uVar8,*puVar12,*puVar11,1);
    }
    *(char *)(param_1 + 0xff) = '\0';
  }
  return uVar13;
}

