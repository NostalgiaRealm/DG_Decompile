/*
 * FUN_101082f4 at 101082f4
 * undefined FUN_101082f4(void)
 * Address ranges: 101082f4-1010834f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101082f4(void)

{
  undefined8 uVar1;
  int unaff_w28;
  
  if ((*(int *)(unaff_w28 + 0x10) != 0) && (*(int *)(unaff_w28 + 0xc) == 0)) {
                    /* WARNING: Does not return */
    uVar1 = SoftwareBreakpoint(0xf004,0x1010831c);
    (*(code *)uVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x1010834c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

