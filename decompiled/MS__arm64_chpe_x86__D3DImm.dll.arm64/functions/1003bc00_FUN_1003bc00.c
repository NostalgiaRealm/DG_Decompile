/*
 * FUN_1003bc00 at 1003bc00
 * undefined FUN_1003bc00(void)
 * Address ranges: 1003bc00-1003bc77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003bc00(int param_1,ulonglong param_2)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1,0);
  *(uint *)(param_1 + 0xfa4) = (uint)param_2 & 0xff;
  *(ulonglong *)(param_1 + 0x4a8) =
       *(ulonglong *)(param_1 + 0x4a8) & 0xfffdffffffffffff | (param_2 & 0xff) << 0x31;
  *(undefined1 *)(param_1 + 0x1d41) = 1;
  return;
}

