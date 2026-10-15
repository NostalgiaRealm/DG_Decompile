/*
 * FUN_100d4070 at 100d4070
 * undefined FUN_100d4070(void)
 * Address ranges: 100d4070-100d411f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_100d4070(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  if (*(char *)(param_1 + 0xc2f0) == '\0') {
    uVar1 = *(undefined1 *)(param_1 + 0xc2eb);
  }
  else {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      if (*(int *)(param_1 + 0x6e8) != 0) {
        (*(code *)PTR_FUN_1016c210)(param_1 + 0x6d80);
      }
      uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar2,param_1 + 0x6d80);
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 0xc2eb) = uVar1;
    *(undefined1 *)(param_1 + 0xc2f0) = 0;
  }
  return uVar1;
}

