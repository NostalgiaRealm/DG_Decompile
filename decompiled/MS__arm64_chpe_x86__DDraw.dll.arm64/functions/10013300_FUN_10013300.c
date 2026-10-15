/*
 * FUN_10013300 at 10013300
 * undefined FUN_10013300(void)
 * Address ranges: 10013300-100133df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10013300(int param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  code *extraout_w11;
  ulonglong uVar4;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  iVar1 = param_1 + -0x88;
  uVar4 = param_2 & 0xffffffff;
  FUN_1006e8d0(*(int *)(param_1 + -0x48),param_2,iVar1);
  uVar2 = FUN_10012998(iVar1,uVar4,param_3);
  local_40 = 0;
  local_38 = FUN_10034090(iVar1,*(undefined4 *)(param_1 + -0x74),uVar4);
  uVar3 = FUN_100340e8(iVar1,*(undefined4 *)(param_1 + -0x70),uVar4);
  local_34 = (undefined4)uVar3;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
            (uVar3,(int)param_2 + *(int *)(param_1 + -0x5c) * param_3);
  (*extraout_w11)(iVar1,extraout_x1,&local_40);
  (*(code *)PTR_FUN_100ba0f0)(*(int *)(param_1 + -0x48) + 0x4a0);
  return uVar2;
}

