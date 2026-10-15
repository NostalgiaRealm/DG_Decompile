/*
 * FUN_180118f88 at 180118f88
 * undefined FUN_180118f88(void)
 * Address ranges: 180118f88-18011959f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180118f88(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,int param_5,
             int param_6,undefined8 *param_7,undefined8 *param_8,undefined1 param_9,uint param_10,
             longlong param_11,undefined8 *param_12)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
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
  code *extraout_x11_12;
  code *extraout_x11_13;
  code *extraout_x11_14;
  code *extraout_x11_15;
  code *extraout_x11_16;
  code *extraout_x11_17;
  code *extraout_x11_18;
  undefined8 uVar15;
  uint uVar16;
  undefined8 local_d8;
  uint local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 *local_b8;
  longlong local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  uint3 local_78;
  undefined1 uStack_75;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 *local_50;
  undefined1 local_48;
  
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  if (param_11 == 0) {
    param_11 = *(longlong *)(param_1 + 0x88);
  }
  local_c8 = *(undefined4 *)(param_1 + 0xb0);
  local_cc = *(undefined4 *)(param_1 + 0xb4);
  local_d0 = *(uint *)(param_1 + 0xa8);
  local_c4 = *(undefined4 *)(param_1 + 0x14);
  local_c0 = *(undefined4 *)(param_1 + 0x18);
  local_bc = *(undefined4 *)(param_1 + 0xc0);
  uVar15 = *(undefined8 *)(param_1 + 0x80);
  local_b8 = (undefined8 *)CONCAT44(local_b8._4_4_,*(undefined4 *)(param_1 + 0xac));
  iVar11 = *(int *)(param_1 + 0x90);
  local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(param_1 + 0x94));
  local_d8 = param_7;
  if (param_5 == -1) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    param_5 = (*extraout_x11)();
    if (param_5 == 0) {
      param_5 = 1;
    }
  }
  if (param_6 == -1) {
    (*(code *)puVar3)(0x180224000);
    (*extraout_x11_00)();
  }
  local_60 = *(undefined8 *)(param_2 + 8);
  puStack_58 = local_d8;
  local_48 = param_9;
  local_50 = param_8;
  (*(code *)puVar3)(0x180225000);
  lVar12 = (*extraout_x11_01)(uVar15,param_11,param_5);
  if (lVar12 == 0) {
    return 0;
  }
  (*(code *)puVar3)(0x180224000);
  cVar6 = (*extraout_x11_02)();
  if (cVar6 == '\0') {
    local_80 = 0;
    _local_78 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    local_90 = 0;
    local_74 = 1;
    if (local_d8 == (undefined8 *)0x0) {
      iVar2 = *(int *)(param_2 + 0x24);
      iVar1 = *(int *)(param_2 + 0x28);
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      if (iVar2 == 0) {
        iVar2 = 1;
      }
      thunk_FUN_180223c20(&local_90,0,0,iVar2,iVar1);
    }
    else {
      uStack_88 = local_d8[1];
      local_90 = *local_d8;
    }
    local_78 = (uint3)(byte)local_78;
    if (param_8 == (undefined8 *)0x0) {
      (*(code *)puVar3)(0x180224000);
      uVar7 = (*extraout_x11_03)(lVar12);
      (*(code *)puVar3)(0x180224000);
      uVar8 = (*extraout_x11_04)(lVar12);
      thunk_FUN_180223c20(&local_a0,0,0,uVar8,uVar7);
    }
    else {
      uStack_98 = param_8[1];
      local_a0 = *param_8;
    }
    (*(code *)puVar3)(0x180224000);
    (*extraout_x11_05)(uVar15,0,0,0,0,lVar12,*(undefined8 *)(param_2 + 8),&local_a0);
  }
  thunk_FUN_180223cd4(&local_d8);
  uVar15 = thunk_FUN_180223f7c(0,param_11,&local_d8,1);
  if ((int)local_b0 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x18011920c);
    (*pcVar5)();
  }
  iVar1 = 0;
  if ((int)local_b0 != 0) {
    iVar1 = (local_d8._4_4_ * (int)local_b8) / (int)local_b0;
  }
  if (iVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x180119228);
    (*pcVar5)();
  }
  iVar2 = 0;
  if (iVar11 != 0) {
    iVar2 = (int)((int)local_d8 * local_d0) / iVar11;
  }
  (*(code *)puVar3)(0x180224000,uVar15,iVar2,iVar1);
  (*extraout_x11_06)(lVar12);
  (*(code *)puVar3)(0x180224000);
  lVar13 = (*extraout_x11_07)(param_1);
  lVar4 = DAT_18024d928;
  if (lVar13 != 0) {
    thunk_FUN_1802236f8(DAT_18024d928 + 0x388);
    if (*(char *)(lVar4 + 0x7e9) != '\0') {
      thunk_FUN_180223f90(lVar13,0x401,0x44454745,lVar12);
    }
    thunk_FUN_18022370c(lVar4 + 0x388);
  }
  (*(code *)puVar3)(0x180224000);
  local_b0 = (*extraout_x11_08)(param_1);
  local_b8 = &DAT_18024e840;
  if (local_b0 == 0) goto LAB_180119510;
  (*(code *)puVar3)(0x180224000);
  uVar14 = (*extraout_x11_09)(param_1);
  lVar4 = DAT_18024d928;
  local_d8 = (undefined8 *)(&DAT_18024e840)[(uVar14 & 0xffffffff) * 0x4b];
  if (param_10 == 0) {
    param_10 = (uint)(*(char *)(DAT_18024d928 + 0x886) != '\0');
  }
  uVar16 = *(uint *)(DAT_18024d928 + 0x9d3);
  iVar11 = *(int *)(DAT_18024d928 + 0x9cf);
  uVar7 = 0;
  if ((iVar11 == 3) || (iVar11 == 2 && *(int *)(param_2 + 0x40) == 0x10)) {
LAB_180119374:
    if (*(int *)(lVar4 + 0x9cb) == 1) {
      uVar7 = 2;
    }
    else {
      uVar7 = 0;
      if (*(int *)(lVar4 + 0x9cb) == 2) {
        uVar7 = 4;
      }
    }
    if (uVar16 == 0) {
      uVar10 = *(uint *)(param_2 + 0x24);
      uVar15 = *(undefined8 *)(param_2 + 8);
      local_d0 = *(uint *)(param_2 + 0x28);
      (*(code *)puVar3)(0x180224000);
      uVar9 = (*extraout_x11_11)(uVar15);
      if (uVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1801193d8);
        (*pcVar5)();
      }
      uVar16 = 0;
      if (uVar10 != 0) {
        uVar16 = uVar9 / uVar10;
      }
      (*(code *)puVar3)(0x180224000);
      uVar10 = (*extraout_x11_12)(uVar15);
      if (local_d0 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x180119408);
        (*pcVar5)();
      }
      uVar9 = 0;
      if (local_d0 != 0) {
        uVar9 = uVar10 / local_d0;
      }
      if (uVar16 == 0) {
        uVar16 = 1;
      }
      if (uVar9 == 0) {
        uVar9 = 1;
      }
      if (uVar9 <= uVar16) {
        uVar16 = uVar9;
      }
    }
  }
  else if (iVar11 == 1 && *(int *)(param_2 + 0x40) == 0x10) {
    uVar15 = (*(code *)puVar3)(0x180224000);
    cVar6 = (*extraout_x11_10)(uVar15,*(undefined4 *)(param_2 + 0x2c),
                               *(undefined4 *)(param_2 + 0x30));
    if (cVar6 != '\0') goto LAB_180119374;
  }
  uVar15 = (*(code *)puVar3)(0x180224000);
  (*extraout_x11_13)(uVar15,*(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x30),0);
  thunk_FUN_180223bf8(&local_70);
  if ((param_12 != (undefined8 *)0x0) && (iVar11 = thunk_FUN_180223d24(), iVar11 == 0)) {
    if ((*(uint *)(lVar4 + 0x8c2) >> 2 & 1) == 0) {
      (*(code *)puVar3)(0x180224000);
      cVar6 = (*extraout_x11_14)(lVar12);
      if (cVar6 == '\0') goto LAB_1801194a0;
    }
    uStack_68 = param_12[1];
    local_70 = *param_12;
  }
LAB_1801194a0:
  FUN_180130a00(param_2);
  uVar14 = FUN_180130a00(param_2);
  if ((uVar14 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(lVar4 + 0x89e);
  }
  local_a0 = *(undefined8 *)(param_2 + 8);
  uStack_88 = CONCAT44(uVar16,uVar7);
  local_80._0_5_ = CONCAT14(*(undefined1 *)(lVar4 + 0x883),uVar8);
  local_90 = uStack_68;
  uStack_98 = local_70;
  uVar15 = (*(code *)puVar3)(0x180225000);
  (*extraout_x11_15)(uVar15,local_b0,lVar12,param_10,&local_a0);
LAB_180119510:
  (*(code *)puVar3)(0x180224000);
  (*extraout_x11_16)(param_1);
  (*(code *)puVar3)(0x180224000);
  iVar11 = (*extraout_x11_17)();
  if (iVar11 != 1) {
    (*(code *)puVar3)(0x180224000);
    (*extraout_x11_18)(lVar12);
  }
  return 1;
}

