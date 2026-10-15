/*
 * FUN_1005c0c8 at 1005c0c8
 * undefined FUN_1005c0c8(void)
 * Address ranges: 1005c0c8-1005c207
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005c0c8(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(int *)(param_1 + 0xfa80) != 0) {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,*(undefined4 *)(param_1 + 0xfa94),*(undefined4 *)(param_1 + 0xfaa4),0);
  }
  if (*(int *)(param_1 + 0xfa84) != 0) {
    uVar2 = (*pcVar1)();
    (*extraout_w11_00)(uVar2,*(undefined4 *)(param_1 + 0xfa98),*(undefined4 *)(param_1 + 0xfaa8),0);
  }
  if (*(int *)(param_1 + 0xfa88) != 0) {
    uVar2 = (*pcVar1)();
    (*extraout_w11_01)(uVar2,*(undefined4 *)(param_1 + 0xfa9c),*(undefined4 *)(param_1 + 0xfaac),0);
  }
  if (*(int *)(param_1 + 0xfa8c) != 0) {
    uVar2 = (*pcVar1)();
    (*extraout_w11_02)(uVar2,*(undefined4 *)(param_1 + 0xfaa0),*(undefined4 *)(param_1 + 0xfab0),0);
  }
  if (*(int *)(param_1 + 0xfa90) != 0) {
    uVar2 = (*pcVar1)();
    (*extraout_w11_03)(uVar2,*(undefined4 *)(param_1 + 0xfab4),*(undefined4 *)(param_1 + 0xfab8),0);
  }
  return;
}

