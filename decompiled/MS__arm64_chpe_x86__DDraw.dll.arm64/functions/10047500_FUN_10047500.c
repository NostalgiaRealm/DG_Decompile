/*
 * FUN_10047500 at 10047500
 * undefined FUN_10047500(void)
 * Address ranges: 10047500-100475c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10047500(int param_1,char param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (param_2 != '\0') {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 4) + 0x70);
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 0x6c);
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,*puVar4,*puVar3,1);
  }
  FUN_1004c470(param_1);
  if (DAT_100c291c != 0) {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0xfc) + 0xc);
    uVar2 = (*pcVar1)();
    (*extraout_w11_00)(uVar2,*puVar3,param_1);
  }
  return;
}

