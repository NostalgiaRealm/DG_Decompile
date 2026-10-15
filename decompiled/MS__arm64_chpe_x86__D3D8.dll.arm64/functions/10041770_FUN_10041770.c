/*
 * FUN_10041770 at 10041770
 * undefined FUN_10041770(void)
 * Address ranges: 10041770-100417d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10041770(int param_1)

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

