/*
 * FUN_10044830 at 10044830
 * undefined FUN_10044830(void)
 * Address ranges: 10044830-10044897
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10044830(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = 0x80070057;
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
    uVar1 = 0;
    *param_2 = *(undefined4 *)(param_1 + 0xf8);
  }
  return uVar1;
}

