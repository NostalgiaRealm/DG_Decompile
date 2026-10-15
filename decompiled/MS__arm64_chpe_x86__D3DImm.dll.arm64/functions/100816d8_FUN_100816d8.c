/*
 * FUN_100816d8 at 100816d8
 * undefined FUN_100816d8(void)
 * Address ranges: 100816d8-1008177b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100816d8(int param_1)

{
  code *pcVar1;
  code *extraout_w11;
  int local_60 [2];
  undefined1 auStack_58 [40];
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_60[0] = *(int *)(param_1 + 0x128);
  if (0 < local_60[0]) {
    do {
      (*(code *)PTR_FUN_100a108c)(auStack_58,0,0,0,0x400000);
      (*pcVar1)();
      (*extraout_w11)((int *)(param_1 + 0x128),local_60,4,5);
      local_60[0] = *(int *)(param_1 + 0x128);
    } while (0 < local_60[0]);
  }
  return;
}

