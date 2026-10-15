/*
 * FUN_100e55a8 at 100e55a8
 * undefined FUN_100e55a8(void)
 * Address ranges: 100e55a8-100e5647
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e55a8(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (*(int *)(param_2 + 4) != 0) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,1);
  }
  FUN_101322d0(*(undefined4 *)(param_2 + 0x85c));
  FUN_10132260(*(undefined4 *)(param_2 + 0x860),0);
  FUN_10132260(*(undefined4 *)(param_2 + 8),0x4a70);
  if (*(int *)(param_2 + 0x864) != 0) {
    (*(code *)PTR_FUN_1016c12c)(*(int *)(param_2 + 0x864),0,0x8000);
  }
  return;
}

