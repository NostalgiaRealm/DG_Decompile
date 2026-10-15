/*
 * FUN_10089a0c at 10089a0c
 * undefined FUN_10089a0c(void)
 * Address ranges: 10089a0c-10089a47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10089a0c(void)

{
  byte bVar1;
  int unaff_w28;
  
  bVar1 = 0;
  if (*(byte *)(unaff_w28 + 8) != 0) {
    do {
      bVar1 = bVar1 + 1;
    } while (bVar1 < *(byte *)(unaff_w28 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x10089a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

