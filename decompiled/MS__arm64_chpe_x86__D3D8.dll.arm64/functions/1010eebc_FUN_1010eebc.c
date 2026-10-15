/*
 * FUN_1010eebc at 1010eebc
 * undefined FUN_1010eebc(void)
 * Address ranges: 1010eebc-1010eeef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1010eebc(int param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(int *)(param_1 + 0xac) + 0x1c) == 0) {
                    /* WARNING: Does not return */
    uVar1 = SoftwareBreakpoint(0xf004,0x1010eedc);
    (*(code *)uVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x1010eeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

