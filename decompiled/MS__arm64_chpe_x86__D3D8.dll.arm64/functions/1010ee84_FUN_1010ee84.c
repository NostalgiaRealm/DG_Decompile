/*
 * FUN_1010ee84 at 1010ee84
 * undefined FUN_1010ee84(void)
 * Address ranges: 1010ee84-1010eeb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1010ee84(int param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(int *)(param_1 + 0xac) + 0x18) == 0) {
                    /* WARNING: Does not return */
    uVar1 = SoftwareBreakpoint(0xf004,0x1010eea4);
    (*(code *)uVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x1010eeb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

