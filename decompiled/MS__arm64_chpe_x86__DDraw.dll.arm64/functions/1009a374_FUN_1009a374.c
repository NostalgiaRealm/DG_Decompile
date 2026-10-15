/*
 * FUN_1009a374 at 1009a374
 * undefined FUN_1009a374(void)
 * Address ranges: 1009a374-1009a3a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009a374(int param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(int *)(param_1 + 0xe4) + 0x1c) == 0) {
                    /* WARNING: Does not return */
    uVar1 = SoftwareBreakpoint(0xf004,0x1009a394);
    (*(code *)uVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x1009a3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

