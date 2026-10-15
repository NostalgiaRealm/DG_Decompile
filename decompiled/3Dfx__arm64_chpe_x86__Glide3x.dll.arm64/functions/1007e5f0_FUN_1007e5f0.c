/*
 * FUN_1007e5f0 at 1007e5f0
 * undefined FUN_1007e5f0(void)
 * Address ranges: 1007e5f0-1007e64f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007e5f0(int *param_1,int *param_2)

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

