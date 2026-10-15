/*
 * FUN_10012180 at 10012180
 * undefined FUN_10012180(void)
 * Address ranges: 10012180-10012a03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10012180(int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
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
  uint in_stack_fffffcf0;
  undefined4 *local_2dc;
  int local_2d8;
  undefined4 local_2d4;
  uint local_2d0;
  int *local_2cc;
  int local_2c8;
  int local_2c4;
  int local_2c0;
  undefined4 local_2bc;
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
  
  local_2c4 = param_1 + 0x4000;
  local_2bc = 0;
  local_2dc = param_8;
  local_2d4 = param_7;
  local_2cc = param_2;
  local_2c0 = param_5;
  FUN_1000b140(param_1);
  piVar13 = local_2cc;
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar9 = *param_2;
  iVar2 = *(int *)(&DAT_10160958 + param_4 * 4);
  local_2c8 = *(int *)(*(int *)(&DAT_0000658c + param_1) + 0x38);
  bVar6 = local_2c8 == 0x66;
  local_2d8 = *(int *)(&DAT_10160924 + iVar2 * 8) +
              *(int *)(&DAT_10160920 + iVar2 * 8) * (int)local_2dc;
  local_2d0 = *(uint *)(iVar9 + 0x10) & *(uint *)(param_1 + 0x6654);
  uVar12 = *(uint *)(param_1 + 0x6660) & local_2d0;
  if (uVar12 == local_2d0) {
    uVar10 = *(undefined4 *)(*(int *)(&DAT_0000658c + param_1) + 4);
    uVar1 = *(uint *)(&DAT_00006664 + param_1) & local_2d0;
    uVar12 = *(uint *)(&DAT_0000666c + param_1) & 1;
    FUN_100105b0(param_1,uVar1,uVar12);
    piVar13 = param_2 + 2;
    uVar8 = (*pcVar4)();
    (*extraout_w11)(uVar8,iVar2,*param_2,*piVar13,uVar10,param_3,local_2d4,local_2d8,bVar6);
    FUN_10010348(param_1,local_2d0,1);
LAB_100127f8:
    FUN_10010408(param_1,uVar1,uVar12);
  }
  else if (uVar12 == 0) {
    local_2dc = (undefined4 *)local_2cc[2];
    if (local_2dc == (undefined4 *)0x0) {
      if ((((*(int *)(iVar9 + 4) == 0) || (*(int *)(param_1 + 0x654) == 0)) ||
          (*(uint *)(param_1 + 0x31c) < 9)) || (*(char *)(param_1 + 0x669f) == '\0')) {
        if ((local_2d0 == 1) && (*(int *)(iVar9 + 0xc) == *(int *)(local_2c4 + 0x25d0))) {
          auVar16 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          (*extraout_w11_03)(auVar16._0_8_ & 0xffffffff,iVar2,auVar16._8_8_ & 0xffffffff);
        }
        else {
          FUN_100101a8(param_1,iVar9,local_2d0,0,auStack_110);
          piVar13 = local_2cc + 1;
          uVar10 = (*pcVar4)();
          (*extraout_w11_04)(uVar10,iVar2,*piVar13,auStack_110,param_6);
        }
      }
      else {
        iVar3 = *(int *)(param_1 + 0x650);
        local_2dc = (undefined4 *)FUN_1001ac00(param_1,iVar9);
        iVar9 = FUN_10012a10(param_1 + 0x30c,&local_2dc);
        local_2dc = (undefined4 *)(iVar9 + 0xc);
        uVar11 = FUN_10029f80(param_1,local_2c0 + param_6,*local_2dc);
        if ((uVar11 & 1) != 0) {
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
          FUN_10010260(param_1,*piVar13,&local_2b0);
          FUN_10157940(&local_2cc);
          uVar10 = 7;
          if (iVar3 == 0) {
            uVar10 = 5;
          }
          FUN_1002a410(param_1,&local_2b0,*(undefined4 *)(param_1 + 0xd6c),iVar9,uVar10,local_2c0,
                       param_6,param_3 + local_2c0,in_stack_fffffcf0 & 0xffffff00);
          uVar10 = (*pcVar4)();
          (*extraout_w11_02)(uVar10,iVar2,iVar9,*(undefined4 *)(param_1 + 0xd6c),*local_2dc,param_6)
          ;
          FUN_101579f0(&local_2cc);
        }
      }
    }
    else {
      uVar12 = local_2d0;
      FUN_100101a8(param_1,iVar9,local_2d0,0,auStack_1e0);
      if ((uVar12 == 1) && (*(int *)(extraout_w1 + 0xc) == *(int *)(local_2c4 + 0x25d0))) {
        auVar16 = (*pcVar4)();
        (*extraout_w11_00)(auVar16._0_8_ & 0xffffffff,iVar2,auVar16._8_8_ & 0xffffffff,local_2dc);
      }
      else {
        piVar13 = local_2cc + 1;
        uVar10 = (*pcVar4)();
        (*extraout_w11_01)(uVar10,iVar2,*piVar13,local_2dc,auStack_1e0,param_6);
      }
    }
  }
  else {
    uVar11 = FUN_10010740(param_1,local_2d0 & (*(uint *)(param_1 + 0x6660) ^ 0xffffffff),
                          param_3 + local_2c0,param_6);
    iVar9 = local_2c4;
    if ((uVar11 & 1) != 0) {
      uVar1 = *(uint *)(local_2c4 + 0x2664) & local_2d0;
      uVar12 = *(uint *)(local_2c4 + 0x266c) & 1;
      FUN_100105b0(param_1,uVar1,uVar12);
      piVar5 = local_2cc;
      puVar14 = (undefined4 *)(*(int *)(iVar9 + 0x258c) + 4);
      piVar13 = local_2cc + 2;
      uVar7 = *(int *)(*(int *)(iVar9 + 0x258c) + 0x38) == 0x66;
      uVar10 = (*pcVar4)();
      (*extraout_w11_05)(uVar10,iVar2,*piVar5,*piVar13,*puVar14,param_3,local_2d4,local_2d8,uVar7);
      FUN_10010348(param_1,local_2d0,1);
      goto LAB_100127f8;
    }
    local_2bc = 0x88760827;
  }
  if ((*(char *)(param_1 + 0xd8d) == '\0') && (*(char *)(*(int *)(param_1 + 0xc) + 0x75e) == '\0'))
  {
    if (*(char *)(param_1 + 0x2a1) == '\0') goto LAB_10012904;
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  uVar10 = (*pcVar4)();
  (*extraout_w11_06)(uVar10);
  uVar10 = (*pcVar4)();
  (*extraout_w11_07)(uVar10,*(undefined4 *)(param_1 + 0x298),*(undefined4 *)(param_1 + 0x29c));
  if (bVar6) {
    uVar10 = (*pcVar4)();
    (*extraout_w11_08)(uVar10,*(undefined4 *)(param_1 + 0x298),*(undefined4 *)(param_1 + 0x29c));
    if (*(char *)(*(int *)(param_1 + 0xc) + 0x75f) != '\0') {
      (*(code *)PTR_FUN_1016c068)();
    }
  }
LAB_10012904:
  if (*(char *)(param_1 + 0x2a2) == '\0') {
    uVar10 = (*pcVar4)();
    (*extraout_w11_09)(uVar10);
    if (*(int *)(param_1 + 0x28) != 0) {
      uVar10 = (*pcVar4)();
      (*extraout_w11_10)(uVar10);
    }
    *(char *)(param_1 + 0x2a2) = '\x01';
  }
  if (*(char *)(param_1 + 0x2a3) != '\0') {
    if (*(int *)(param_1 + 0x498) != 0) {
      puVar14 = (undefined4 *)(param_1 + 0x29c);
      puVar15 = (undefined4 *)(param_1 + 0x298);
      uVar10 = (*pcVar4)();
      (*extraout_w11_11)(uVar10,*puVar15,*puVar14,1);
    }
    *(char *)(param_1 + 0x2a3) = '\0';
  }
  return local_2bc;
}

