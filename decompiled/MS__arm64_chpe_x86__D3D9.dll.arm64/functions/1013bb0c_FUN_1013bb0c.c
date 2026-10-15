/*
 * FUN_1013bb0c at 1013bb0c
 * undefined FUN_1013bb0c(void)
 * Address ranges: 1013bb0c-1013bb67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1013bb0c(void)

{
  undefined8 uVar1;
  int unaff_w28;
  
  if ((*(int *)(unaff_w28 + 0x10) != 0) && (*(int *)(unaff_w28 + 0xc) == 0)) {
                    /* WARNING: Does not return */
    uVar1 = SoftwareBreakpoint(0xf004,0x1013bb34);
    (*(code *)uVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x1013bb64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

