/*
 * FUN_100356a0 at 100356a0
 * undefined FUN_100356a0(void)
 * Address ranges: 100356a0-100356fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100356a0(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  code *extraout_w11;
  
  if (DAT_100c291c != 0) {
    puVar2 = (undefined4 *)(param_1 + -4);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                      (DAT_100c291c,param_2,DAT_100be0c0 + 0x54c);
    (*extraout_w11)(uVar1,*puVar2);
  }
  return;
}

