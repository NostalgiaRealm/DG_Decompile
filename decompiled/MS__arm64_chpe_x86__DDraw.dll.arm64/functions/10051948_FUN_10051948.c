/*
 * FUN_10051948 at 10051948
 * undefined FUN_10051948(void)
 * Address ranges: 10051948-10051a7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10051948(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  code *pcVar3;
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
  undefined8 uStack_a0;
  
  uStack_118 = param_3[1];
  local_120 = *param_3;
  uStack_108 = param_3[3];
  uStack_110 = param_3[2];
  local_b0 = param_3[0xe];
  uStack_f8 = param_3[5];
  local_100 = param_3[4];
  uStack_e8 = param_3[7];
  uStack_f0 = param_3[6];
  local_a8 = *(undefined4 *)(param_3 + 0xf);
  uStack_d8 = param_3[9];
  local_e0 = param_3[8];
  uStack_c8 = param_3[0xb];
  uStack_d0 = param_3[10];
  uStack_b8 = param_3[0xd];
  local_c0 = param_3[0xc];
  FUN_1004caa0(&local_120,&uStack_a0);
  uStack_a0._4_4_ = uStack_a0._4_4_ & 0x4100e;
  iVar1 = FUN_10091750(param_2,&DAT_100b1820,0x10);
  if ((iVar1 == 0) || (iVar1 = FUN_10091750(param_2,&DAT_100b1830,0x10), iVar1 == 0)) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    param_3 = &uStack_a0;
    pcVar3 = extraout_w11_00;
  }
  else {
    iVar1 = FUN_10091750(param_2,&DAT_100b1840,0x10);
    if ((iVar1 != 0) && (iVar1 = FUN_10091750(param_2,&DAT_100b1850,0x10), iVar1 != 0)) {
      return 0x80004005;
    }
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    pcVar3 = extraout_w11;
  }
  uVar2 = (*pcVar3)(param_3,param_5);
  return uVar2;
}

