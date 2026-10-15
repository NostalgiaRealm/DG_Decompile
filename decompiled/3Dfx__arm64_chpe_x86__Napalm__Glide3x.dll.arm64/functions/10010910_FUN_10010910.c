/*
 * FUN_10010910 at 10010910
 * undefined FUN_10010910(void)
 * Address ranges: 10010910-100109e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10010910(int param_1,uint param_2,uint param_3)

{
  code *extraout_w11;
  
  if (*(int *)(param_1 + 0x2b50) != 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
  }
  *(uint *)(param_1 + 0x3630) = param_2 >> 0x18;
  *(uint *)(param_1 + 0x3634) = param_2 >> 0x10 & 0xff;
  *(uint *)(param_1 + 0x3638) = param_2 >> 8 & 0xff;
  *(uint *)(param_1 + 0x3640) = param_3 >> 0x18;
  *(uint *)(param_1 + 0x3644) = param_3 >> 0x10 & 0xff;
  *(uint *)(param_1 + 0x3648) = param_3 >> 8 & 0xff;
  *(undefined1 *)(param_1 + 0x3650) = 1;
  return;
}

