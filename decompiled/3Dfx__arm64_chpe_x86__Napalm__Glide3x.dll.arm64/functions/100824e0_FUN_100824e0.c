/*
 * FUN_100824e0 at 100824e0
 * undefined FUN_100824e0(void)
 * Address ranges: 100824e0-10082643
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_100824e0(int param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  int local_40 [2];
  undefined8 local_38;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (param_3 != 1) {
    if (*(int *)(param_1 + -0x28) != 0) {
      uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar5 = (*extraout_w11)(uVar3);
      if (*(ulonglong *)(param_1 + -0x20) <= uVar5) goto LAB_10082598;
    }
    local_40[0] = param_1 + -0x38;
    iVar1 = *(int *)(param_1 + 0xc);
    iVar4 = iVar1 + 0x1c;
    (*(code *)PTR_FUN_100a803c)(iVar4);
    uVar5 = FUN_10062fa0(iVar1 + 0xc,local_40);
    if ((int)uVar5 != 0) {
      FUN_10061f70(uVar5,uVar5 & 0xffffffff);
    }
    (*(code *)PTR_FUN_100a8090)(iVar4);
  }
LAB_10082598:
  uVar5 = ZEXT48(param_2 + 1);
  *param_2 = 0;
  param_2[1] = 0;
  local_38 = 0;
  uVar3 = (*pcVar2)();
  iVar4 = (*extraout_w11_00)(uVar3,0,&local_38,uVar5 & 0xffffffff);
  if (-1 < iVar4) {
    uVar3 = (*pcVar2)();
    uVar6 = (*extraout_w11_01)(uVar3);
    *param_2 = uVar6;
    *(undefined4 *)((int)param_2 + 0xc) = *(undefined4 *)(param_1 + 8);
    *(int *)(param_1 + -0xc) = *(int *)(param_1 + -0xc) + 1;
  }
  return param_2;
}

