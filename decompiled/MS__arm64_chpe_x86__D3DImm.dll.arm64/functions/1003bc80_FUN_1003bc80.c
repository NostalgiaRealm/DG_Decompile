/*
 * FUN_1003bc80 at 1003bc80
 * undefined FUN_1003bc80(void)
 * Address ranges: 1003bc80-1003bcff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003bc80(int param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1,0);
  *(uint *)(param_1 + 0x99c) = (uint)param_2;
  *(undefined1 *)(param_1 + 0x1d41) = 1;
  uVar2 = *(uint *)(param_1 + 0x48c);
  uVar1 = uVar2 & 0xf7ffffff;
  if (param_2 != 0) {
    uVar1 = uVar2 | 0x8000000;
  }
  *(uint *)(param_1 + 0x48c) = uVar1;
  return;
}

