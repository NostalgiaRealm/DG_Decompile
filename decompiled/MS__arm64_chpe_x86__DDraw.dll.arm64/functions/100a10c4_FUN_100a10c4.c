/*
 * FUN_100a10c4 at 100a10c4
 * undefined FUN_100a10c4(void)
 * Address ranges: 100a10c4-100a10ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a10c4(void)

{
  int unaff_w28;
  
  if ((*(undefined4 **)(unaff_w28 + 8) != (undefined4 *)0x0) &&
     ((*(uint *)(*(int *)(*(int *)(unaff_w28 + 4) + 4) + 0x1bc) >> 4 & 1) != 0)) {
    **(undefined4 **)(unaff_w28 + 8) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100a10fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0xc);
  return;
}

