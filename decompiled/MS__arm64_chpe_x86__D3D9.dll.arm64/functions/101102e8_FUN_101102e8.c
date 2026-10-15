/*
 * FUN_101102e8 at 101102e8
 * undefined FUN_101102e8(void)
 * Address ranges: 101102e8-10110387
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_101102e8(int param_1,int param_2,uint param_3)

{
  undefined8 uVar1;
  code *extraout_w11;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    if (*(uint *)(param_2 + 0x20) < param_3) {
      (*(code *)PTR_FUN_1016c074)(param_1 + 0x4a0);
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(param_1,param_2,param_3);
      (*(code *)PTR_FUN_1016c0c0)(param_1 + 0x4a0);
    }
    uVar1 = 1;
  }
  return uVar1;
}

