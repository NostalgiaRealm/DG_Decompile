/*
 * FUN_1009a33c at 1009a33c
 * undefined FUN_1009a33c(void)
 * Address ranges: 1009a33c-1009a36f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009a33c(int param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(int *)(param_1 + 0xe4) + 0x18) == 0) {
                    /* WARNING: Does not return */
    uVar1 = SoftwareBreakpoint(0xf004,0x1009a35c);
    (*(code *)uVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x1009a36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

