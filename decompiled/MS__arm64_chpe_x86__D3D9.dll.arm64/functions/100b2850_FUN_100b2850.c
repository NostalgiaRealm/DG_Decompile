/*
 * FUN_100b2850 at 100b2850
 * undefined FUN_100b2850(void)
 * Address ranges: 100b2850-100b2913
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b2850(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2);
    if (*(int *)(param_1 + 0x3c) != 0) {
      uVar2 = (*pcVar1)();
      (*extraout_w11_00)(uVar2);
      *(int *)(param_1 + 0x3c) = 0;
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    uVar2 = (*pcVar1)();
    (*extraout_w11_01)(uVar2);
    *(int *)(param_1 + 0x34) = 0;
  }
  return;
}

