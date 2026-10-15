/*
 * FUN_10047410 at 10047410
 * undefined FUN_10047410(void)
 * Address ranges: 10047410-100474f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10047410(int param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((param_2 != 0) && (*(char *)(param_2 + 8) == '\0')) {
    if (DAT_100c291c != 0) {
      puVar3 = (undefined4 *)(*(int *)(param_1 + 0xfc) + 0xc);
      uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar2,*puVar3,param_2);
    }
    FUN_1004c620(param_2);
  }
  if (DAT_100c291c != 0) {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0xfc) + 0xc);
    uVar2 = (*pcVar1)();
    (*extraout_w11_00)(uVar2,*puVar3,param_1);
  }
  FUN_10008050(*(int *)(param_1 + 4) + 0x4c);
  FUN_1004c620(param_1);
  return;
}

