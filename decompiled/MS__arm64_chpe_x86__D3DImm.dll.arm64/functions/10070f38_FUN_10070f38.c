/*
 * FUN_10070f38 at 10070f38
 * undefined FUN_10070f38(void)
 * Address ranges: 10070f38-10070fd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10070f38(int param_1,int param_2,uint param_3)

{
  undefined8 uVar1;
  code *extraout_w11;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    if (*(uint *)(param_2 + 0x20) < param_3) {
      (*(code *)PTR_FUN_100a1014)(param_1 + 0x4a0);
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(param_1,param_2,param_3);
      (*(code *)PTR_FUN_100a1044)(param_1 + 0x4a0);
    }
    uVar1 = 1;
  }
  return uVar1;
}

