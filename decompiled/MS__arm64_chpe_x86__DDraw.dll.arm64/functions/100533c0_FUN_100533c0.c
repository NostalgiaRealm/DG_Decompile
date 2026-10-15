/*
 * FUN_100533c0 at 100533c0
 * undefined FUN_100533c0(void)
 * Address ranges: 100533c0-1005359b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100533c0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *pcVar4;
  undefined4 local_130 [2];
  undefined4 local_128;
  undefined8 uStack_124;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  undefined8 uStack_10c;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined4 local_a8;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  
  uStack_11c = 0;
  uStack_124 = 0;
  uStack_10c = 0;
  uStack_114 = 0;
  uStack_fc = 0;
  uStack_104 = 0;
  uStack_ec = 0;
  uStack_f4 = 0;
  uStack_dc = 0;
  uStack_e4 = 0;
  uStack_cc = 0;
  uStack_d4 = 0;
  uStack_bc = 0;
  uStack_c4 = 0;
  uStack_b4 = 0;
  uStack_9c = 0;
  uStack_a4 = 0;
  uStack_8c = 0;
  uStack_94 = 0;
  uStack_7c = 0;
  uStack_84 = 0;
  uStack_6c = 0;
  uStack_74 = 0;
  uStack_5c = 0;
  uStack_64 = 0;
  uStack_4c = 0;
  uStack_54 = 0;
  uStack_44 = 0;
  local_128 = 0x7c;
  local_a8 = 0x6c;
  FUN_100442e0(param_3,&local_128);
  FUN_1004caa0(&local_128,&local_a8);
  iVar2 = FUN_10091750(param_2,&DAT_100b1860,0x10);
  if (((iVar2 == 0) || (iVar2 = FUN_10091750(param_2,&DAT_100b1870,0x10), iVar2 == 0)) ||
     (iVar2 = FUN_10091750(param_2,&DAT_100b1880,0x10), iVar2 == 0)) {
    pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    local_130[0] = 0;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar2 = (*extraout_w11_01)(param_3,param_2,local_130,0);
    if (iVar2 < 0) {
      return 0x80004005;
    }
    (*pcVar4)();
    puVar1 = &local_a8;
    pcVar4 = extraout_w11_02;
  }
  else {
    iVar2 = FUN_10091750(param_2,&DAT_100b1890,0x10);
    if ((iVar2 != 0) && (iVar2 = FUN_10091750(param_2,&DAT_100b18a0,0x10), iVar2 != 0)) {
      return 0x80004005;
    }
    pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    local_130[0] = 0;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar2 = (*extraout_w11)(param_3,param_2,local_130,0);
    if (iVar2 < 0) {
      return 0x80004005;
    }
    (*pcVar4)();
    puVar1 = &local_128;
    pcVar4 = extraout_w11_00;
  }
  uVar3 = (*pcVar4)(local_130[0],puVar1,param_5);
  return uVar3;
}

