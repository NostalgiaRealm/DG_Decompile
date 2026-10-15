/*
 * FUN_10006d50 at 10006d50
 * undefined FUN_10006d50(void)
 * Address ranges: 10006d50-10007107
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_10006d50(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4,uint param_5,
            int param_6,undefined8 *param_7,undefined8 *param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *extraout_w8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  int *in_stack_00000020;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined8 *local_84;
  undefined8 *puStack_80;
  undefined1 local_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  uint3 local_48;
  undefined1 uStack_45;
  undefined1 local_44;
  
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar7 = param_2[1];
  if (uVar7 == 0xffffffff) {
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar7 = (*extraout_w11)(uVar6);
    uVar7 = uVar7 >> (ulonglong)(param_5 & 0x1f);
    if (uVar7 == 0) {
      uVar7 = 1;
    }
  }
  uVar8 = param_2[2];
  if (uVar8 == 0xffffffff) {
    uVar6 = (*pcVar4)();
    uVar8 = (*extraout_w11_00)(uVar6);
    uVar8 = uVar8 >> (ulonglong)(param_5 & 0x1f);
    if (uVar8 == 0) {
      uVar8 = 1;
    }
  }
  uVar12 = (ulonglong)uVar8;
  if ((param_5 == 0) && (param_6 == 0)) {
    local_88 = *(undefined4 *)(param_4 + 4);
  }
  else {
    local_88 = 0;
  }
  local_7c = 0;
  puVar13 = param_2 + 7;
  puVar16 = param_2 + 6;
  puVar14 = param_2 + 4;
  puVar15 = param_2 + 5;
  local_84 = param_7;
  puStack_80 = param_8;
  (*pcVar4)();
  iVar9 = (*extraout_w11_01)(param_3,*param_2,uVar7,uVar12 & 0xffffffff,*extraout_w8,*puVar14,
                             *puVar15,*puVar16,*puVar13);
  if (iVar9 == 0) {
    uVar11 = 0;
  }
  else {
    (*pcVar4)();
    cVar5 = (*extraout_w11_02)(iVar9);
    if (cVar5 == '\0') {
      local_50 = 0;
      _local_48 = 0;
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      local_60 = 0;
      local_44 = 1;
      if (param_7 == (undefined8 *)0x0) {
        uVar7 = *(uint *)(param_4 + 0x1c) >> (ulonglong)(param_5 & 0x1f);
        if (uVar7 == 0) {
          uVar7 = 1;
        }
        uVar8 = *(uint *)(param_4 + 0x18) >> (ulonglong)(param_5 & 0x1f);
        if (uVar8 == 0) {
          uVar8 = 1;
        }
        (*(code *)PTR_FUN_100ba2b8)(&local_60,0,0,uVar8,uVar7);
      }
      else {
        uStack_58 = param_7[1];
        local_60 = *param_7;
      }
      local_48 = (uint3)(byte)local_48;
      if (param_8 == (undefined8 *)0x0) {
        (*pcVar4)();
        uVar6 = (*extraout_w11_03)(iVar9);
        (*pcVar4)();
        uVar10 = (*extraout_w11_04)(iVar9);
        (*(code *)PTR_FUN_100ba2b8)(&local_70,0,0,uVar10,uVar6);
      }
      else {
        uStack_68 = param_8[1];
        local_70 = *param_8;
      }
      (*pcVar4)();
      (*extraout_w11_05)(param_3,0,0,param_5,param_6,iVar9,*(undefined4 *)(param_4 + 4),&local_70);
    }
    if (in_stack_00000020 != (int *)0x0) {
      (*(code *)PTR_FUN_100ba1f8)(&local_90);
      uVar11 = (*(code *)PTR_FUN_100ba260)(0,*param_2,&local_90,1);
      iVar1 = in_stack_00000020[3];
      if (iVar1 == 0) {
                    /* WARNING: Does not return */
        uVar11 = SoftwareBreakpoint(0xf004,0x10007088);
        (*(code *)uVar11)();
      }
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = (in_stack_00000020[2] * local_8c) / iVar1;
      }
      iVar1 = in_stack_00000020[1];
      if (iVar1 == 0) {
                    /* WARNING: Does not return */
        uVar11 = SoftwareBreakpoint(0xf004,0x100070a8);
        (*(code *)uVar11)();
      }
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = (*in_stack_00000020 * local_90) / iVar1;
      }
      (*pcVar4)(uVar11,iVar3,iVar2);
      (*extraout_w11_06)(iVar9);
    }
    FUN_10006960(param_1,iVar9,param_4,param_9,param_11);
    uVar11 = 1;
  }
  return uVar11;
}

