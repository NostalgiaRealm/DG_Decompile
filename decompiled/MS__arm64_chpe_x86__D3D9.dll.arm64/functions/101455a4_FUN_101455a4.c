/*
 * FUN_101455a4 at 101455a4
 * undefined FUN_101455a4(void)
 * Address ranges: 101455a4-101455cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101455a4(int param_1)

{
  if (*(char *)(param_1 + 0x3d) == '\x01') {
    *(char *)(param_1 + 0x3d) = '\x02';
  }
                    /* WARNING: Could not recover jumptable at 0x101455c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0xc);
  return;
}

