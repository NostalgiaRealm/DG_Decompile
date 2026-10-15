/*
 * FUN_18012f790 at 18012f790
 * undefined FUN_18012f790(void)
 * Address ranges: 18012f790-18012fa3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18012f790(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 param_9,undefined4 param_10,undefined8 param_11,undefined1 param_12,
             int *param_13)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  int local_a0;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 *local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  uint3 local_48;
  undefined1 uStack_45;
  undefined1 local_44;
  
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  iVar6 = *(int *)(param_2 + 1);
  local_98 = param_1;
  if (iVar6 == -1) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    iVar6 = (*extraout_x11)();
    if (iVar6 == 0) {
      iVar6 = 1;
    }
  }
  if (*(int *)((longlong)param_2 + 0xc) == -1) {
    (*(code *)puVar3)(0x180224000);
    (*extraout_x11_00)();
  }
  local_90 = *(undefined8 *)(param_4 + 8);
  local_78 = param_12;
  puStack_88 = param_7;
  local_80 = param_8;
  (*(code *)puVar3)(0x180225000);
  lVar9 = (*extraout_x11_01)(param_3,*param_2,iVar6);
  if (lVar9 == 0) {
    uVar10 = 0;
  }
  else {
    (*(code *)puVar3)(0x180224000);
    cVar5 = (*extraout_x11_02)();
    if (cVar5 == '\0') {
      local_50 = 0;
      _local_48 = 0;
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      local_60 = 0;
      local_44 = 1;
      if (param_7 == (undefined8 *)0x0) {
        iVar1 = *(int *)(param_4 + 0x24);
        iVar6 = *(int *)(param_4 + 0x28);
        if (iVar6 == 0) {
          iVar6 = 1;
        }
        if (iVar1 == 0) {
          iVar1 = 1;
        }
        thunk_FUN_180223c20(&local_60,0,0,iVar1,iVar6);
      }
      else {
        uStack_58 = param_7[1];
        local_60 = *param_7;
      }
      local_48 = (uint3)(byte)local_48;
      if (param_8 == (undefined8 *)0x0) {
        (*(code *)puVar3)(0x180224000);
        uVar7 = (*extraout_x11_03)(lVar9);
        (*(code *)puVar3)(0x180224000);
        uVar8 = (*extraout_x11_04)(lVar9);
        thunk_FUN_180223c20(&local_70,0,0,uVar8,uVar7);
      }
      else {
        uStack_68 = param_8[1];
        local_70 = *param_8;
      }
      (*(code *)puVar3)(0x180224000);
      (*extraout_x11_05)(param_3,0,0,0,0,lVar9,*(undefined8 *)(param_4 + 8),&local_70);
    }
    if (param_13 != (int *)0x0) {
      thunk_FUN_180223cd4(&local_a0);
      uVar10 = thunk_FUN_180223f7c(0,*param_2,&local_a0,1);
      iVar6 = param_13[3];
      if (iVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18012f9c8);
        (*pcVar4)();
      }
      iVar1 = 0;
      if (iVar6 != 0) {
        iVar1 = (param_13[2] * local_9c) / iVar6;
      }
      iVar6 = param_13[1];
      if (iVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18012f9e0);
        (*pcVar4)();
      }
      iVar2 = 0;
      if (iVar6 != 0) {
        iVar2 = (*param_13 * local_a0) / iVar6;
      }
      (*(code *)puVar3)(0x180224000,uVar10,iVar2,iVar1);
      (*extraout_x11_06)(lVar9);
    }
    FUN_18012f410(local_98,lVar9,param_4,param_9,param_10);
    uVar10 = 1;
  }
  return uVar10;
}

