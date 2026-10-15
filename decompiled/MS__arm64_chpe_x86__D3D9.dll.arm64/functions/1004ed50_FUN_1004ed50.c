/*
 * FUN_1004ed50 at 1004ed50
 * undefined FUN_1004ed50(void)
 * Address ranges: 1004ed50-1004edb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004ed50(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  code *extraout_w11;
  
  if (*(int *)(param_1 + 0x1c) == 1) {
    puVar2 = (undefined4 *)(param_1 + 0x10);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,*puVar2,0);
  }
  return;
}

