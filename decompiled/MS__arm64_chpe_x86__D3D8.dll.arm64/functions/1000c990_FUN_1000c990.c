/*
 * FUN_1000c990 at 1000c990
 * undefined FUN_1000c990(void)
 * Address ranges: 1000c990-1000ca23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000c990(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  code *extraout_w11;
  
  if ((param_2 == *(int *)(param_1 + 0x18)) || (param_2 == *(int *)(param_1 + 0x28))) {
LAB_1000c9ec:
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
  }
  else if (*(int *)(param_2 + 0x1c) != 0) {
    uVar2 = 0;
    do {
      if (*(int *)(param_2 + 0x1c) == *(int *)(param_1 + 0xf94 + uVar2 * 4)) goto LAB_1000c9ec;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 8);
  }
  return;
}

