/*
 * FUN_100106d0 at 100106d0
 * undefined FUN_100106d0(void)
 * Address ranges: 100106d0-10010747
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100106d0(int param_1,uint param_2)

{
  uint *puVar1;
  code *extraout_w11;
  
  puVar1 = (uint *)(*(int *)(param_1 + 0x3660) + 0xf0);
  if (*puVar1 != (param_2 & 0xff)) {
    *puVar1 = param_2 & 0xff;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
    *(undefined1 *)(param_1 + 0x2dac) = 1;
  }
  return;
}

