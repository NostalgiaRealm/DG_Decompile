/*
 * FUN_1000dd20 at 1000dd20
 * undefined FUN_1000dd20(void)
 * Address ranges: 1000dd20-1000dd8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000dd20(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  code *extraout_w11;
  
  uVar2 = 0;
  do {
    if (*(int *)(param_1 + 26000 + uVar2 * 4) == param_2) {
      uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar1);
      return;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  return;
}

