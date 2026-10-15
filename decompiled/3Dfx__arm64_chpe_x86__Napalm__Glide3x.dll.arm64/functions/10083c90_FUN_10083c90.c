/*
 * FUN_10083c90 at 10083c90
 * undefined FUN_10083c90(void)
 * Address ranges: 10083c90-10083cef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10083c90(int *param_1,int *param_2)

{
  code *pcVar1;
  code *extraout_w11;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if (*param_1 != 0) {
      (*pcVar1)();
      (*extraout_w11)();
    }
  }
  return;
}

