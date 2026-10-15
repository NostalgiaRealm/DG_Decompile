/*
 * FUN_10079c00 at 10079c00
 * undefined FUN_10079c00(void)
 * Address ranges: 10079c00-10079e57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10079c00(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,ulonglong param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *pcVar6;
  int local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  uint uStack_94;
  undefined4 local_90;
  uint local_8c;
  undefined4 uStack_88;
  uint local_84;
  uint local_80;
  undefined4 local_7c;
  uint local_78;
  undefined4 local_74;
  undefined4 local_70;
  uint local_50;
  
  if ((param_5 & 1) == 0) {
    return param_4;
  }
  puVar5 = (uint *)(param_3 + 0x198);
  uVar4 = 0x20004;
  iVar1 = param_3 + 0x18;
  uVar3 = param_4;
  if ((*puVar5 & 0x20004) != 0) {
    uVar4 = 0x20004;
    uVar3 = FUN_100ee580(iVar1,4,1);
  }
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar2 = *puVar5;
  local_a0 = iVar1;
  uStack_9c = param_2;
  uStack_94 = uVar3;
  local_78 = param_4;
  if ((uVar2 & uVar4) == 0x20004) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    local_84 = (*extraout_w11)(param_1,param_2,param_3,0x10,0xf);
    local_8c = param_4 | 0x80000000;
    local_7c = 0;
    local_98 = 0;
    uStack_88 = 0xe4;
    local_80 = 0xe4;
    local_90 = 0xf;
    local_50 = local_84;
    FUN_100ef510(&local_a0,0x28);
    local_84 = 0x5f8;
    local_8c = *(undefined4 *)(param_3 + 0xcc);
    local_74 = 0xe4;
    local_70 = 0;
    local_7c = 0xe4;
    uStack_88 = 0xe4;
    local_90 = 0xf;
    local_98 = 0x32;
    local_a0 = iVar1;
    uStack_9c = param_2;
    uStack_94 = uVar3;
    local_80 = uVar3;
    FUN_100ef510(&local_a0,0x34);
    (*pcVar6)();
    uVar4 = local_50;
    pcVar6 = extraout_w11_00;
  }
  else {
    if ((uVar2 >> 2 & 1) != 0) {
      local_80 = param_4 | 0x80000000;
      local_70 = 0;
      local_7c = 0xe4;
      local_84 = 0x5f8;
      local_8c = *(undefined4 *)(param_3 + 0xcc);
      local_74 = 0xe4;
      uStack_88 = 0xe4;
      local_90 = 0xf;
      local_98 = 0x32;
      FUN_100ef510(&local_a0,0x34);
      return uVar3;
    }
    if ((uVar2 >> 0x11 & 1) == 0) {
      return uVar3;
    }
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar4 = (*extraout_w11_01)(param_1,param_2,param_3,0x10,0xf);
    local_84 = 0x5f8;
    local_8c = *(undefined4 *)(param_3 + 0xcc);
    local_7c = 0xe4;
    local_78 = 0;
    uStack_88 = 0xe4;
    local_90 = 0xf;
    local_98 = 0x38;
    local_80 = uVar4;
    FUN_100ef510(&local_a0,0x2c);
    (*pcVar6)();
    pcVar6 = extraout_w11_02;
  }
  (*pcVar6)(param_1,param_3,uVar4);
  return uVar3;
}

