/*
 * FUN_1008db74 at 1008db74
 * undefined FUN_1008db74(void)
 * Address ranges: 1008db74-1008dba3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008db74(int param_1)

{
  if (*(char *)(param_1 + 0xd1) == '\0') {
    *(char *)(param_1 + 0xd1) = '\x01';
  }
                    /* WARNING: Could not recover jumptable at 0x1008dba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

