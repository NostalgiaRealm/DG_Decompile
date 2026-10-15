/*
 * FUN_10011a80 at 10011a80
 * undefined FUN_10011a80(void)
 * Address ranges: 10011a80-10012177
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10011a80(int param_1,int *param_2,int param_3,undefined4 param_4,int param_5)

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
  undefined4 *local_2b8;
  uint local_2b4;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined1 auStack_1e0 [208];
  undefined1 auStack_110 [208];
  
  uVar13 = 0;
  FUN_1000b140(param_1);
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar9 = *param_2;
  iVar3 = *(int *)(&DAT_10160958 + param_3 * 4);
  iVar5 = *(int *)(&DAT_10160924 + iVar3 * 8) + *(int *)(&DAT_10160920 + iVar3 * 8) * param_5;
  bVar7 = *(int *)(param_1 + 0x654) != 0;
  uVar1 = *(uint *)(param_1 + 0x6654) & *(uint *)(iVar9 + 0x10);
  uVar2 = uVar1 & *(uint *)(param_1 + 0x6660);
  if (uVar2 == uVar1) {
    uVar2 = *(uint *)(&DAT_00006664 + param_1);
    FUN_100105b0(param_1,uVar2 & uVar1,0);
    uVar8 = (*pcVar6)();
    (*extraout_w11)(uVar8,iVar3,*param_2,*extraout_w8,param_4,iVar5,bVar7);
    FUN_10010408(param_1,uVar2 & uVar1,0);
    FUN_10010348(param_1,uVar1,0);
  }
  else if (uVar2 == 0) {
    local_2b8 = (undefined4 *)param_2[2];
    uVar10 = ZEXT48(local_2b8);
    if (local_2b8 == (undefined4 *)0x0) {
      if ((((*(int *)(iVar9 + 4) == 0) || (*(int *)(param_1 + 0x654) == 0)) ||
          (*(uint *)(param_1 + 0x31c) < 9)) || (*(char *)(param_1 + 0x669f) == '\0')) {
        if ((uVar1 == 1) && (*(int *)(iVar9 + 0xc) == *(int *)(param_1 + 0x65d0))) {
          auVar14 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          (*extraout_w11_03)(auVar14._0_8_ & 0xffffffff,iVar3,auVar14._8_8_ & 0xffffffff);
        }
        else {
          FUN_100101a8(param_1,iVar9,uVar1,param_4,auStack_110);
          param_2 = param_2 + 1;
          uVar8 = (*pcVar6)();
          (*extraout_w11_04)(uVar8,iVar3,*param_2,auStack_110,iVar5,bVar7);
        }
      }
      else {
        iVar4 = *(int *)(param_1 + 0x650);
        local_2b8 = (undefined4 *)FUN_1001ac00(param_1,iVar9);
        iVar9 = FUN_10012a10(param_1 + 0x30c,&local_2b8);
        local_2b8 = (undefined4 *)(iVar9 + 0xc);
        uVar10 = FUN_10029f80(param_1,iVar5,*local_2b8);
        if ((uVar10 & 1) != 0) {
          uStack_2a8 = 0;
          local_2b0 = 0;
          uStack_298 = 0;
          uStack_2a0 = 0;
          uStack_288 = 0;
          local_290 = 0;
          uStack_278 = 0;
          uStack_280 = 0;
          uStack_268 = 0;
          local_270 = 0;
          uStack_258 = 0;
          uStack_260 = 0;
          uStack_248 = 0;
          local_250 = 0;
          uStack_238 = 0;
          uStack_240 = 0;
          uStack_228 = 0;
          local_230 = 0;
          uStack_218 = 0;
          uStack_220 = 0;
          uStack_208 = 0;
          local_210 = 0;
          uStack_1f8 = 0;
          uStack_200 = 0;
          local_1f0 = 0;
          local_1e8 = 0;
          FUN_10010260(param_1,*param_2,&local_2b0);
          FUN_10157940(&local_2b4);
          uVar8 = 7;
          if (iVar4 == 0) {
            uVar8 = 5;
          }
          FUN_1002a410(param_1,&local_2b0,*(undefined4 *)(param_1 + 0xd6c),iVar9,uVar8,0,iVar5,
                       param_4,0);
          uVar8 = (*pcVar6)();
          (*extraout_w11_02)(uVar8,iVar3,iVar9,*(undefined4 *)(param_1 + 0xd6c),*local_2b8,iVar5,0);
          FUN_101579f0(&local_2b4);
        }
      }
    }
    else if ((uVar1 == 1) && (*(int *)(iVar9 + 0xc) == *(int *)(param_1 + 0x65d0))) {
      auVar14 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11_00)(auVar14._0_8_ & 0xffffffff,iVar3,auVar14._8_8_ & 0xffffffff,
                         uVar10 & 0xffffffff);
    }
    else {
      FUN_100101a8(param_1,iVar9,uVar1,param_4,auStack_1e0);
      param_2 = param_2 + 1;
      uVar8 = (*pcVar6)();
      (*extraout_w11_01)(uVar8,iVar3,*param_2,local_2b8,auStack_1e0,iVar5);
    }
  }
  else {
    uVar10 = FUN_10010740(param_1,uVar1 & (*(uint *)(param_1 + 0x6660) ^ 0xffffffff),param_4,iVar5);
    if ((uVar10 & 1) == 0) {
      uVar13 = 0x8876086d;
    }
    else {
      local_2b4 = *(uint *)(&DAT_00006664 + param_1) & uVar1;
      FUN_100105b0(param_1,local_2b4,0);
      uVar8 = (*pcVar6)();
      (*extraout_w11_05)(uVar8,iVar3,*param_2,*extraout_w8_00,param_4,iVar5,bVar7);
      uVar10 = 0;
      FUN_10010348(param_1,uVar1,0);
      FUN_10010408(param_1,local_2b4,uVar10 & 0xffffffff);
    }
  }
  if ((*(char *)(param_1 + 0xd8d) == '\0') && (*(char *)(*(int *)(param_1 + 0xc) + 0x75e) == '\0'))
  {
    if (*(char *)(param_1 + 0x2a1) == '\0') goto LAB_10012078;
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  uVar8 = (*pcVar6)();
  (*extraout_w11_06)(uVar8);
  uVar8 = (*pcVar6)();
  (*extraout_w11_07)(uVar8,*(undefined4 *)(param_1 + 0x298),*(undefined4 *)(param_1 + 0x29c));
  if (bVar7) {
    uVar8 = (*pcVar6)();
    (*extraout_w11_08)(uVar8,*(undefined4 *)(param_1 + 0x298),*(undefined4 *)(param_1 + 0x29c));
    if (*(char *)(*(int *)(param_1 + 0xc) + 0x75f) != '\0') {
      (*(code *)PTR_FUN_1016c068)();
    }
  }
LAB_10012078:
  if (*(char *)(param_1 + 0x2a2) == '\0') {
    uVar8 = (*pcVar6)();
    (*extraout_w11_09)(uVar8);
    if (*(int *)(param_1 + 0x28) != 0) {
      uVar8 = (*pcVar6)();
      (*extraout_w11_10)(uVar8);
    }
    *(char *)(param_1 + 0x2a2) = '\x01';
  }
  if (*(char *)(param_1 + 0x2a3) != '\0') {
    if (*(int *)(param_1 + 0x498) != 0) {
      puVar11 = (undefined4 *)(param_1 + 0x29c);
      puVar12 = (undefined4 *)(param_1 + 0x298);
      uVar8 = (*pcVar6)();
      (*extraout_w11_11)(uVar8,*puVar12,*puVar11,1);
    }
    *(char *)(param_1 + 0x2a3) = '\0';
  }
  return uVar13;
}

