/*
 * FUN_10089b54 at 10089b54
 * undefined FUN_10089b54(void)
 * Address ranges: 10089b54-10089b9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10089b54(int param_1)

{
  int unaff_w28;
  
  if (*(int *)(unaff_w28 + 4) == *(int *)(param_1 + 0x1530)) {
    *(int *)(param_1 + 0x1530) = 0;
    *(undefined4 *)(param_1 + 0x14b4) = 0;
    *(undefined1 *)(param_1 + 0x1755) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x10089b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

