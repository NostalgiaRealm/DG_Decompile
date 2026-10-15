/*
 * FUN_10098154 at 10098154
 * undefined FUN_10098154(void)
 * Address ranges: 10098154-10098187
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10098154(int param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(int *)(param_1 + 0xac) + 0x18) == 0) {
                    /* WARNING: Does not return */
    uVar1 = SoftwareBreakpoint(0xf004,0x10098174);
    (*(code *)uVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x10098184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

