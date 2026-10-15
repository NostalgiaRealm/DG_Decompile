/*
 * FUN_101439b4 at 101439b4
 * undefined FUN_101439b4(void)
 * Address ranges: 101439b4-101439e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101439b4(int param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(int *)(param_1 + 0xac) + 0x18) == 0) {
                    /* WARNING: Does not return */
    uVar1 = SoftwareBreakpoint(0xf004,0x101439d4);
    (*(code *)uVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x101439e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

