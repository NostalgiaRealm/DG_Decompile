/*
 * FUN_1011133c at 1011133c
 * undefined FUN_1011133c(void)
 * Address ranges: 1011133c-1011136f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1011133c(int param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(int *)(param_1 + 0xe4) + 0x1c) == 0) {
                    /* WARNING: Does not return */
    uVar1 = SoftwareBreakpoint(0xf004,0x1011135c);
    (*(code *)uVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x1011136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

