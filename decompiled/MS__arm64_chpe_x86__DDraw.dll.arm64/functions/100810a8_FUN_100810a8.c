/*
 * FUN_100810a8 at 100810a8
 * undefined FUN_100810a8(void)
 * Address ranges: 100810a8-100811f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100810a8(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  code *extraout_w11;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  
  uStack_68 = 0;
  local_70 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_50 = 0;
  if (*(int *)(param_1 + 0x8e0) != 0) {
    param_5 = param_5 - param_4;
    uVar4 = FUN_100891f8(param_3,param_5,&local_70);
    if ((uVar4 & 1) != 0) {
      FUN_100917a0(local_70 & 0xffffffff,param_6,param_5);
      goto LAB_10081124;
    }
  }
  param_5 = (int)local_58;
LAB_10081124:
  iVar2 = local_70._4_4_;
  bVar1 = local_70._4_4_ != 0;
  if (bVar1) {
    FUN_100899f8(param_3,param_5,uStack_68,uStack_60,
                 *(undefined4 *)(*(int *)(param_1 + 0x8e0) + 0xc),*(undefined8 *)(param_1 + 0x938));
    FUN_1007d820(param_1,param_2,0,1,0x400);
    FUN_1007c768(param_1);
    FUN_1007c918(param_1);
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar3,param_2,param_4,iVar2);
    FUN_1007c8b0(param_1);
  }
  return bVar1;
}

