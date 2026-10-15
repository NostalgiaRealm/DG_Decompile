/*
 * FUN_10068570 at 10068570
 * undefined FUN_10068570(void)
 * Address ranges: 10068570-100686f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10068570(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  
  uVar3 = 0x80070057;
  if (param_3 == (undefined4 *)0x0) {
    return 0x80070057;
  }
  *param_3 = 0;
  switch(param_4) {
  case 1:
    uVar2 = *(uint *)(param_1 + 0x90);
    if (uVar2 == 0) {
      return 0x80070057;
    }
    uVar4 = 0;
    while (uVar1 = uVar4 + 1, *(int *)(*(int *)(param_1 + 0x8c) + uVar4 * 8) != param_2) {
      uVar4 = uVar1;
      if (uVar2 <= uVar1) {
        return 0x80070057;
      }
    }
    if (uVar2 <= uVar1) {
      return 0x80070057;
    }
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_00)(uVar3);
    puVar5 = (undefined4 *)(*(int *)(param_1 + 0x8c) + uVar1 * 8);
    break;
  case 2:
    if (*(int *)(param_1 + 0x90) == 0) {
      return 0;
    }
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar3);
    puVar5 = *(undefined4 **)(param_1 + 0x8c);
    break;
  default:
    goto switchD_100685ac_caseD_3;
  case 4:
    if (*(int *)(param_1 + 0x90) == 0) {
      return 0;
    }
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_01)(uVar3);
    puVar5 = (undefined4 *)(*(int *)(param_1 + 0x8c) + *(int *)(param_1 + 0x90) * 8 + -8);
  }
  uVar3 = 0;
  *param_3 = *puVar5;
switchD_100685ac_caseD_3:
  return uVar3;
}

