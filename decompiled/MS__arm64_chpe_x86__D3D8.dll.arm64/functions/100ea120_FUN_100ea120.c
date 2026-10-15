/*
 * FUN_100ea120 at 100ea120
 * undefined FUN_100ea120(void)
 * Address ranges: 100ea120-100ea247
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_100ea120(int param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined8 local_40 [2];
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (param_3 != 1) {
    if (*(int *)(param_1 + -0x28) != 0) {
      uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar4 = (*extraout_w11)(uVar2);
      if (*(ulonglong *)(param_1 + -0x20) <= uVar4) goto LAB_100ea19c;
    }
    FUN_100ec988(*(undefined4 *)(param_1 + 0xc),param_1 + -0x38);
  }
LAB_100ea19c:
  uVar4 = ZEXT48(param_2 + 1);
  *param_2 = 0;
  param_2[1] = 0;
  local_40[0] = 0;
  uVar2 = (*pcVar1)();
  iVar3 = (*extraout_w11_00)(uVar2,0,local_40,uVar4 & 0xffffffff);
  if (-1 < iVar3) {
    uVar2 = (*pcVar1)();
    uVar5 = (*extraout_w11_01)(uVar2);
    *param_2 = uVar5;
    *(undefined4 *)((int)param_2 + 0xc) = *(undefined4 *)(param_1 + 8);
    *(int *)(param_1 + -0xc) = *(int *)(param_1 + -0xc) + 1;
  }
  return param_2;
}

