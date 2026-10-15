/*
 * FUN_10145eec at 10145eec
 * undefined FUN_10145eec(void)
 * Address ranges: 10145eec-10145f1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10145eec(int param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(int *)(param_1 + 0xe4) + 0x1c) == 0) {
                    /* WARNING: Does not return */
    uVar1 = SoftwareBreakpoint(0xf004,0x10145f0c);
    (*(code *)uVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x10145f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

