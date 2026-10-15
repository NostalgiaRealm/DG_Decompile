/*
 * FUN_1006de68 at 1006de68
 * undefined FUN_1006de68(void)
 * Address ranges: 1006de68-1006def3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006de68(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int *in_w3;
  int *in_w4;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*in_w3 != 0) {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2);
    *in_w3 = 0;
    if (*in_w4 != 0) {
      uVar2 = (*pcVar1)();
      (*extraout_w11_00)(uVar2);
      *in_w4 = 0;
    }
  }
  return;
}

