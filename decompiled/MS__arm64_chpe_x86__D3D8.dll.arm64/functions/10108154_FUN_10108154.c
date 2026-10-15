/*
 * FUN_10108154 at 10108154
 * undefined FUN_10108154(void)
 * Address ranges: 10108154-10108197
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10108154(void)

{
  undefined8 uVar1;
  int unaff_w28;
  
  if ((*(int *)(unaff_w28 + 0xc) != 0) && (*(int *)(unaff_w28 + 8) == 0)) {
                    /* WARNING: Does not return */
    uVar1 = SoftwareBreakpoint(0xf004,0x10108178);
    (*(code *)uVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x10108194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

