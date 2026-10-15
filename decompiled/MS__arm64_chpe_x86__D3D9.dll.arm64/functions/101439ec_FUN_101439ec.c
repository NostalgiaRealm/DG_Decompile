/*
 * FUN_101439ec at 101439ec
 * undefined FUN_101439ec(void)
 * Address ranges: 101439ec-10143a1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101439ec(int param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(int *)(param_1 + 0xac) + 0x1c) == 0) {
                    /* WARNING: Does not return */
    uVar1 = SoftwareBreakpoint(0xf004,0x10143a0c);
    (*(code *)uVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x10143a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

