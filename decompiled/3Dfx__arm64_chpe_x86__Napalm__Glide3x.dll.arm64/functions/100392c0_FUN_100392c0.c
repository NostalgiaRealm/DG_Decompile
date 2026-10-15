/*
 * FUN_100392c0 at 100392c0
 * undefined FUN_100392c0(void)
 * Address ranges: 100392c0-10039377
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100392c0(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  
  FUN_100246f8(param_1,*(undefined4 *)(param_1 + 0x54));
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar2);
  *(undefined4 *)(param_1 + 0x100) = 0;
  uVar2 = (*pcVar1)();
  (*extraout_w11_00)(uVar2);
  *(undefined4 *)(param_1 + 0xfc) = 0;
  FUN_10038970(param_1);
  FUN_10038270(param_1);
  FUN_10038150(param_1);
  FUN_100386f0(param_1);
  return;
}

