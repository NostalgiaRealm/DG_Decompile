/*
 * FUN_10041a20 at 10041a20
 * undefined FUN_10041a20(void)
 * Address ranges: 10041a20-10041aa3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10041a20(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  piVar1 = (int *)(param_1 + 0xc);
  if (*piVar1 != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar2);
      *(int *)(param_1 + 0x10) = 0;
    }
    FUN_100d7778(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x14),*piVar1);
    *piVar1 = 0;
  }
  return;
}

