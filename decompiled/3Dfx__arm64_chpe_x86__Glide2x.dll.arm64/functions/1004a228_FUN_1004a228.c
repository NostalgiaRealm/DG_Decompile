/*
 * FUN_1004a228 at 1004a228
 * undefined FUN_1004a228(void)
 * Address ranges: 1004a228-1004a2df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004a228(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  
  FUN_10034bc0(param_1,*(undefined4 *)(param_1 + 0x54));
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar2);
  *(undefined4 *)(param_1 + 0x100) = 0;
  uVar2 = (*pcVar1)();
  (*extraout_w11_00)(uVar2);
  *(undefined4 *)(param_1 + 0xfc) = 0;
  FUN_100498d8(param_1);
  FUN_100491e0(param_1);
  FUN_100490c0(param_1);
  FUN_10049660(param_1);
  return;
}

