/*
 * FUN_10053f00 at 10053f00
 * undefined FUN_10053f00(void)
 * Address ranges: 10053f00-10053fd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10053f00(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  
  if ((param_2 == *(int *)(param_1 + 0x18)) || (param_2 == *(int *)(param_1 + 0x28))) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_00)(uVar1);
    *(undefined1 *)(param_1 + 0xfe) = 0;
  }
  else {
    uVar2 = 0;
    do {
      if (param_2 == *(int *)(param_1 + 0x14d4 + uVar2 * 4)) {
        uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar1);
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 8);
  }
  return;
}

