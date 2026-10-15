/*
 * FUN_1009ab18 at 1009ab18
 * undefined FUN_1009ab18(void)
 * Address ranges: 1009ab18-1009abb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009ab18(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  code *extraout_w11;
  
  FUN_1009a030(param_1,1,1);
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  *(undefined4 *)(param_1 + 0x34) = param_5;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_2);
  *(undefined2 *)(param_1 + 0x38) = 0x101;
  return;
}

