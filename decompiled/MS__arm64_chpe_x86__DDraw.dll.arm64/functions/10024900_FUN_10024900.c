/*
 * FUN_10024900 at 10024900
 * undefined FUN_10024900(void)
 * Address ranges: 10024900-100249d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10024900(int param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  code *extraout_w11;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  iVar1 = param_1 + -0xc0;
  uVar2 = FUN_10024198(iVar1,param_2,param_3);
  local_40 = 0;
  local_38 = FUN_10034090(iVar1,*(undefined4 *)(param_1 + -0xac),param_2);
  uVar3 = FUN_100340e8(iVar1,*(undefined4 *)(param_1 + -0xa8),param_2);
  local_34 = (undefined4)uVar3;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
            (uVar3,param_2 + *(int *)(param_1 + -0x94) * param_3);
  (*extraout_w11)(iVar1,extraout_x1,&local_40);
  FUN_10021df0(iVar1,param_1 + -0x78,param_1 + -0x3c,param_4,param_5,param_2,param_3,&local_40);
  return uVar2;
}

