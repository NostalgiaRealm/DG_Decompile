/*
 * FUN_10051710 at 10051710
 * undefined FUN_10051710(void)
 * Address ranges: 10051710-1005193b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10051710(undefined8 param_1,undefined4 param_2,int param_3,undefined8 *param_4,
            undefined8 param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  code *extraout_w11;
  code *pcVar5;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *pcVar6;
  undefined4 local_130 [4];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 auStack_a0 [14];
  
  uStack_118 = param_4[1];
  local_120 = *param_4;
  uStack_108 = param_4[3];
  uStack_110 = param_4[2];
  local_b0 = param_4[0xe];
  uStack_f8 = param_4[5];
  local_100 = param_4[4];
  uStack_e8 = param_4[7];
  uStack_f0 = param_4[6];
  local_a8 = *(undefined4 *)(param_4 + 0xf);
  uStack_d8 = param_4[9];
  local_e0 = param_4[8];
  uStack_c8 = param_4[0xb];
  uStack_d0 = param_4[10];
  uStack_b8 = param_4[0xd];
  local_c0 = param_4[0xc];
  FUN_1004caa0(&local_120,auStack_a0);
  iVar3 = FUN_10091750(param_2,&DAT_100b1820,0x10);
  if ((iVar3 == 0) || (iVar3 = FUN_10091750(param_2,&DAT_100b1830,0x10), iVar3 == 0)) {
    pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (param_3 != 0) {
      local_130[0] = 0;
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar3 = (*extraout_w11_03)(param_3,&DAT_100b1860,local_130,0);
      if (iVar3 < 0) {
        return 0x80004005;
      }
      (*pcVar6)();
      puVar2 = auStack_a0;
      uVar4 = local_130[0];
      pcVar6 = extraout_w11_04;
      goto LAB_10051914;
    }
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    puVar2 = auStack_a0;
    pcVar6 = extraout_w11_05;
LAB_10051910:
    uVar4 = 0;
  }
  else {
    iVar3 = FUN_10091750(param_2,&DAT_100b1840,0x10);
    pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (iVar3 == 0) {
      if (param_3 == 0) {
LAB_10051828:
        (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        puVar2 = &local_120;
        pcVar6 = extraout_w11_01;
        goto LAB_10051910;
      }
      local_130[0] = 0;
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      puVar1 = &DAT_100b1890;
      pcVar5 = extraout_w11;
    }
    else {
      iVar3 = FUN_10091750(param_2,&DAT_100b1850,0x10);
      pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      if (iVar3 != 0) {
        return 0x80004005;
      }
      if (param_3 == 0) goto LAB_10051828;
      local_130[0] = 0;
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      puVar1 = &DAT_100b18a0;
      pcVar5 = extraout_w11_02;
    }
    iVar3 = (*pcVar5)(param_3,puVar1,local_130,0);
    if (iVar3 < 0) {
      return 0x80004005;
    }
    (*pcVar6)();
    puVar2 = &local_120;
    uVar4 = local_130[0];
    pcVar6 = extraout_w11_00;
  }
LAB_10051914:
  uVar4 = (*pcVar6)(uVar4,puVar2,param_6);
  return uVar4;
}

