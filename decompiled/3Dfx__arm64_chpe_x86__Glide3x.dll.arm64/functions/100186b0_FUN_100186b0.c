/*
 * FUN_100186b0 at 100186b0
 * undefined FUN_100186b0(void)
 * Address ranges: 100186b0-10018763
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100186b0(int param_1,int param_2)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(int *)(param_1 + 0x2c78) = param_2;
  if (*(int *)(param_1 + 0x29f8) != param_2) {
    *(int *)(param_1 + 0x29f8) = param_2;
    FUN_1000e470(param_1,*(undefined4 *)(param_1 + 0x2bb8),*(undefined4 *)(param_1 + 0x2bbc),
                 *(undefined4 *)(param_1 + 0x2bc0),*(undefined4 *)(param_1 + 0x2bc4));
  }
  *(undefined1 *)(param_1 + 0x32d0) = 1;
  return;
}

