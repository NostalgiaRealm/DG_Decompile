/*
 * FUN_10145eb4 at 10145eb4
 * undefined FUN_10145eb4(void)
 * Address ranges: 10145eb4-10145ee7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10145eb4(int param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(int *)(param_1 + 0xe4) + 0x18) == 0) {
                    /* WARNING: Does not return */
    uVar1 = SoftwareBreakpoint(0xf004,0x10145ed4);
    (*(code *)uVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x10145ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

