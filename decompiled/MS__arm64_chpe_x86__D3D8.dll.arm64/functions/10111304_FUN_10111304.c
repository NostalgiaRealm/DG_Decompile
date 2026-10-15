/*
 * FUN_10111304 at 10111304
 * undefined FUN_10111304(void)
 * Address ranges: 10111304-10111337
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10111304(int param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(int *)(param_1 + 0xe4) + 0x18) == 0) {
                    /* WARNING: Does not return */
    uVar1 = SoftwareBreakpoint(0xf004,0x10111324);
    (*(code *)uVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x10111334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

