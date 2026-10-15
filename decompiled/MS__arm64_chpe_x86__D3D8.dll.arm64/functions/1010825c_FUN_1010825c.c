/*
 * FUN_1010825c at 1010825c
 * undefined FUN_1010825c(void)
 * Address ranges: 1010825c-101082eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1010825c(void)

{
  undefined8 uVar1;
  int unaff_w28;
  
  if (((*(int *)(unaff_w28 + 0x20) == 0) && (*(int *)(unaff_w28 + 0x14) != 0)) &&
     (*(int *)(unaff_w28 + 0x18) == 0)) {
                    /* WARNING: Does not return */
    uVar1 = SoftwareBreakpoint(0xf004,0x10108290);
    (*(code *)uVar1)();
  }
  if ((*(int *)(unaff_w28 + 0x14) != 0) && (*(int *)(unaff_w28 + 0x1c) == 0)) {
                    /* WARNING: Does not return */
    uVar1 = SoftwareBreakpoint(0xf004,0x101082c4);
    (*(code *)uVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x101082e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

