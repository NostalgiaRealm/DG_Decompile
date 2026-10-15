/*
 * FUN_1006f4f8 at 1006f4f8
 * undefined FUN_1006f4f8(void)
 * Address ranges: 1006f4f8-1006f597
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1006f4f8(int param_1,int param_2,uint param_3)

{
  undefined8 uVar1;
  code *extraout_w11;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    if (*(uint *)(param_2 + 0x20) < param_3) {
      (*(code *)PTR_FUN_100ba0a0)(param_1 + 0x4a0);
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(param_1,param_2,param_3);
      (*(code *)PTR_FUN_100ba0f0)(param_1 + 0x4a0);
    }
    uVar1 = 1;
  }
  return uVar1;
}

