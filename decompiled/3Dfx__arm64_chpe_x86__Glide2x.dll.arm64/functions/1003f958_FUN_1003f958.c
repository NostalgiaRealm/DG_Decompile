/*
 * FUN_1003f958 at 1003f958
 * undefined FUN_1003f958(void)
 * Address ranges: 1003f958-1003fcf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1003f958(undefined4 *param_1,ulonglong param_2,undefined4 param_3,int param_4,int *param_5,
            int *param_6,int *param_7,int *param_8)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  undefined4 local_dc;
  undefined4 local_d8;
  int local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8 [2];
  undefined4 local_c0;
  undefined8 local_bc;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_90 [2];
  undefined8 local_88;
  ulonglong uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  int local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_68 = 0;
  piVar1 = param_1 + 0x29;
  local_d8 = 0x39;
  local_dc = local_d8;
  if (*(char *)(param_1 + 0x12) == '\0') {
    local_dc = 0x1e;
    local_d8 = 0x1c;
  }
  param_1[0x32] = local_d8;
  local_90[0] = 3;
  uStack_80 = param_2 & 0xffffffff;
  local_88 = 0;
  uStack_74 = 0x10001;
  local_70 = 0x35;
  if (*(char *)(param_1 + 0x12) == '\0') {
    local_70 = 0x1b;
  }
  local_60 = 1;
  local_78 = param_3;
  local_6c = param_4;
  iVar5 = FUN_1005d850(*piVar1 + 0x520,*param_1,local_90);
  *param_5 = iVar5;
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (iVar5 == 0) {
    return 0;
  }
  if (param_4 == 1) {
    *param_6 = iVar5;
    uVar6 = (*pcVar4)();
    (*extraout_w11)(uVar6);
  }
  else {
    local_6c = 1;
    iVar5 = FUN_1005d850(*piVar1 + 0x520,*param_1,local_90);
    *param_6 = iVar5;
    if (iVar5 == 0) goto LAB_1003fc84;
  }
  piVar2 = param_1 + 0x2a;
  iVar5 = FUN_1005e420(*(undefined4 *)(*piVar2 + 0x15d8),2);
  *param_7 = iVar5;
  if (iVar5 != -1) {
    iVar5 = FUN_1005e420(*(undefined4 *)(*piVar2 + 0x15dc),2);
    *param_8 = iVar5;
    local_d4 = *param_7;
    if (iVar5 != -1) {
      local_c0 = local_dc;
      local_bc = 0x168800000004;
      local_b0 = 0xffffffff00000000;
      uStack_a8 = 0;
      local_a0 = 0;
      FUN_1005ef00(*(undefined4 *)(*piVar2 + 0x15d8),&local_dc,local_d4,0);
      FUN_1005d698(*piVar1 + 0x520,*param_1,*param_6,&local_c0,local_dc);
      local_c0 = local_d8;
      FUN_1005ef00(*(undefined4 *)(*piVar2 + 0x15d8),&local_d0,*param_7,1);
      FUN_1005d698(*piVar1 + 0x520,*param_1,*param_6,&local_c0,local_d0);
      local_58 = local_d8;
      uStack_54 = 6;
      uStack_48 = 0;
      local_50 = 0;
      FUN_1005ef00(*(undefined4 *)(*piVar2 + 0x15dc),&local_cc,*param_8,0);
      FUN_1005d6f0(*piVar1 + 0x520,*param_1,*param_5,&local_58,local_cc);
      FUN_1005ef00(*(undefined4 *)(*piVar2 + 0x15dc),local_c8,*param_8,1);
      FUN_1005d6f0(*piVar1 + 0x520,*param_1,0,&local_58,local_c8[0]);
      uVar6 = (*pcVar4)();
      (*extraout_w11_00)(uVar6);
      return 1;
    }
    if (local_d4 != -1) {
      iVar3 = *(int *)(*piVar2 + 0x15d8);
      iVar5 = iVar3 + 0x1c;
      (*(code *)PTR_FUN_1009d03c)(iVar5);
      FUN_1005e298(iVar3,local_d4,1);
      (*(code *)PTR_FUN_1009d090)(iVar5);
    }
  }
LAB_1003fc84:
  uVar6 = (*pcVar4)();
  (*extraout_w11_01)(uVar6);
  uVar6 = (*pcVar4)();
  (*extraout_w11_02)(uVar6);
  return 0;
}

