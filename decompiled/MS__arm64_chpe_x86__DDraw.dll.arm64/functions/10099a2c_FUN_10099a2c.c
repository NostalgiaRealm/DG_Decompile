/*
 * FUN_10099a2c at 10099a2c
 * undefined FUN_10099a2c(void)
 * Address ranges: 10099a2c-10099a53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10099a2c(int param_1)

{
  if (*(char *)(param_1 + 0x3d) == '\x01') {
    *(char *)(param_1 + 0x3d) = '\x02';
  }
                    /* WARNING: Could not recover jumptable at 0x10099a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0xc);
  return;
}

