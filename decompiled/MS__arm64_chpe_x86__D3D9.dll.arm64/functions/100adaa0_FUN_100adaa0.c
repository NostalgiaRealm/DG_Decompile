/*
 * FUN_100adaa0 at 100adaa0
 * undefined FUN_100adaa0(void)
 * Address ranges: 100adaa0-100adb7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100adaa0(int param_1,ulonglong param_2,int param_3)

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
  FUN_1010f6c0(*(int *)(param_1 + -0x48),param_2,iVar1);
  uVar2 = FUN_100ad138(iVar1,uVar4,param_3);
  local_40 = 0;
  local_38 = FUN_100ceef0(iVar1,*(undefined4 *)(param_1 + -0x74),uVar4);
  uVar3 = FUN_100cef48(iVar1,*(undefined4 *)(param_1 + -0x70),uVar4);
  local_34 = (undefined4)uVar3;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
            (uVar3,(int)param_2 + *(int *)(param_1 + -0x5c) * param_3);
  (*extraout_w11)(iVar1,extraout_x1,&local_40);
  (*(code *)PTR_FUN_1016c0c0)(*(int *)(param_1 + -0x48) + 0x4a0);
  return uVar2;
}

