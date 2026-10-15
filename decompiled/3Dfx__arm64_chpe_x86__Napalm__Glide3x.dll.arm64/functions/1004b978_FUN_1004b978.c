/*
 * FUN_1004b978 at 1004b978
 * undefined FUN_1004b978(void)
 * Address ranges: 1004b978-1004ba1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004b978(int param_1)

{
  code *pcVar1;
  code *extraout_w11;
  int local_60 [2];
  undefined1 auStack_58 [40];
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_60[0] = *(int *)(param_1 + 0x128);
  if (0 < local_60[0]) {
    do {
      (*(code *)PTR_FUN_100a81c0)(auStack_58,0,0,0,0x400000);
      (*pcVar1)();
      (*extraout_w11)((int *)(param_1 + 0x128),local_60,4,5);
      local_60[0] = *(int *)(param_1 + 0x128);
    } while (0 < local_60[0]);
  }
  return;
}

