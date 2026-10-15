/*
 * FUN_10081fe0 at 10081fe0
 * undefined FUN_10081fe0(void)
 * Address ranges: 10081fe0-1008203f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10081fe0(int *param_1,int *param_2)

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

