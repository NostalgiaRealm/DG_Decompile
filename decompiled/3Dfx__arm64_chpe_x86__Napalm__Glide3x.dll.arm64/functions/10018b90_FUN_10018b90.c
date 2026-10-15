/*
 * FUN_10018b90 at 10018b90
 * undefined FUN_10018b90(void)
 * Address ranges: 10018b90-10018c43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10018b90(int param_1,int param_2)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(int *)(param_1 + 0x2dc8) = param_2;
  if (*(int *)(param_1 + 0x2b34) != param_2) {
    *(int *)(param_1 + 0x2b34) = param_2;
    FUN_10010310(param_1,*(undefined4 *)(param_1 + 0x2cf8),*(undefined4 *)(param_1 + 0x2cfc),
                 *(undefined4 *)(param_1 + 0x2d00),*(undefined4 *)(param_1 + 0x2d04));
  }
  *(undefined1 *)(param_1 + 0x3650) = 1;
  return;
}

