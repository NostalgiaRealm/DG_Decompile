/*
 * FUN_1004f240 at 1004f240
 * undefined FUN_1004f240(void)
 * Address ranges: 1004f240-1004f2c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004f240(int param_1)

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
    FUN_10109978(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x14),*piVar1);
    *piVar1 = 0;
  }
  return;
}

