/*
 * FUN_10082084 at 10082084
 * undefined FUN_10082084(void)
 * Address ranges: 10082084-100820a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10082084(int param_1)

{
  *(undefined1 *)(param_1 + 0x2bc9) = 1;
                    /* WARNING: Could not recover jumptable at 0x100820a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

