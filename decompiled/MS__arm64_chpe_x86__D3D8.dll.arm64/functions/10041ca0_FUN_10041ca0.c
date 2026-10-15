/*
 * FUN_10041ca0 at 10041ca0
 * undefined FUN_10041ca0(void)
 * Address ranges: 10041ca0-10041d07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10041ca0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  code *extraout_w11;
  
  if (*(int *)(param_1 + 0x1c) == 1) {
    puVar2 = (undefined4 *)(param_1 + 0xc);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,*puVar2,0);
  }
  return;
}

