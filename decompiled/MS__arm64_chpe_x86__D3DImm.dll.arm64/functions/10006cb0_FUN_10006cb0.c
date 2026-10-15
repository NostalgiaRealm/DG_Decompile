/*
 * FUN_10006cb0 at 10006cb0
 * undefined FUN_10006cb0(void)
 * Address ranges: 10006cb0-10006d2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10006cb0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  undefined1 auStack_30 [16];
  
  if (*(char *)(param_1 + 0x931) != '\0') {
    FUN_10096840(auStack_30);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
    *(char *)(param_1 + 0x931) = '\0';
    param_2 = 0;
    FUN_10096790(auStack_30);
  }
  return param_2;
}

