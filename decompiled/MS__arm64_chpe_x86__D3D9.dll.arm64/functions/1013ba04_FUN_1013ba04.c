/*
 * FUN_1013ba04 at 1013ba04
 * undefined FUN_1013ba04(void)
 * Address ranges: 1013ba04-1013ba47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1013ba04(void)

{
  undefined8 uVar1;
  int unaff_w28;
  
  if ((*(int *)(unaff_w28 + 0xc) != 0) && (*(int *)(unaff_w28 + 8) == 0)) {
                    /* WARNING: Does not return */
    uVar1 = SoftwareBreakpoint(0xf004,0x1013ba28);
    (*(code *)uVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x1013ba44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

