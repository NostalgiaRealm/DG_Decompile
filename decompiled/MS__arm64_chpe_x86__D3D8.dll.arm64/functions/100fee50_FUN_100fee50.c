/*
 * FUN_100fee50 at 100fee50
 * undefined FUN_100fee50(void)
 * Address ranges: 100fee50-100feeaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100fee50(int *param_1,int *param_2)

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

