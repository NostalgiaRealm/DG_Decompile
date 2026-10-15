/*
 * FUN_10025fc8 at 10025fc8
 * undefined FUN_10025fc8(void)
 * Address ranges: 10025fc8-100260bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10025fc8(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar2);
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = (*pcVar1)();
    (*extraout_w11_00)(uVar2);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar2 = (*pcVar1)();
    (*extraout_w11_01)(uVar2);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    uVar2 = (*pcVar1)();
    (*extraout_w11_02)(uVar2);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar2 = (*pcVar1)();
    (*extraout_w11_03)(uVar2);
  }
  return;
}

