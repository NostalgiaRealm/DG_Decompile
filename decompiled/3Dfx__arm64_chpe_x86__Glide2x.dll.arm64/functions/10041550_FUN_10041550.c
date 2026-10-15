/*
 * FUN_10041550 at 10041550
 * undefined FUN_10041550(void)
 * Address ranges: 10041550-1004160f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10041550(int *param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  code *extraout_w11;
  undefined1 auVar2 [16];
  undefined4 local_30 [2];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_18 = 0;
  local_30[0] = 0;
  uVar1 = *param_4;
  *(undefined8 *)(*param_1 + param_2 * 0x10) = param_3;
  *(undefined4 *)(*param_1 + param_2 * 0x10 + 8) = uVar1;
  local_28 = 0x40000003d;
  uStack_20 = 0xffffffff00000000;
  auVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(auVar2._0_8_ & 0xffffffff,auVar2._8_8_ & 0xffffffff,&local_28,local_30);
  *(undefined4 *)(*param_1 + param_2 * 0x10 + 0xc) = local_30[0];
  return;
}

