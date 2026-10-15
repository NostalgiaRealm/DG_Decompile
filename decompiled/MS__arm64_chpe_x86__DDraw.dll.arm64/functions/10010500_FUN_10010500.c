/*
 * FUN_10010500 at 10010500
 * undefined FUN_10010500(void)
 * Address ranges: 10010500-100105c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10010500(int *param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  code *extraout_w11;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  
  local_50[0] = 0;
  *(undefined8 *)(*param_1 + param_2 * 0x10) = param_3;
  *(undefined4 *)(*param_1 + param_2 * 0x10 + 8) = *param_4;
  local_48 = 0x40000000400;
  uStack_40 = 0x100000001;
  local_38 = *param_4;
  local_34 = 1;
  local_2c = 3;
  local_24 = 0x10000;
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1,&local_48,0,local_50);
  *(undefined4 *)(*param_1 + param_2 * 0x10 + 0xc) = local_50[0];
  return;
}

