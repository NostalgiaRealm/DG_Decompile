/*
 * FUN_1009818c at 1009818c
 * undefined FUN_1009818c(void)
 * Address ranges: 1009818c-100981bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009818c(int param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(int *)(param_1 + 0xac) + 0x1c) == 0) {
                    /* WARNING: Does not return */
    uVar1 = SoftwareBreakpoint(0xf004,0x100981ac);
    (*(code *)uVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x100981bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

