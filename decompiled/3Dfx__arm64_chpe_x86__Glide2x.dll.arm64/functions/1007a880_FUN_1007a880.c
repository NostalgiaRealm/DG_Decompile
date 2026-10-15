/*
 * FUN_1007a880 at 1007a880
 * undefined FUN_1007a880(void)
 * Address ranges: 1007a880-1007a8df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007a880(int *param_1,int *param_2)

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

