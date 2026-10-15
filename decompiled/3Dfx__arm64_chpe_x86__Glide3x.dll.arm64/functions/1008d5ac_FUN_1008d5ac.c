/*
 * FUN_1008d5ac at 1008d5ac
 * undefined FUN_1008d5ac(void)
 * Address ranges: 1008d5ac-1008d5e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008d5ac(void)

{
  byte bVar1;
  int unaff_w28;
  
  bVar1 = 0;
  if (*(byte *)(unaff_w28 + 8) != 0) {
    do {
      bVar1 = bVar1 + 1;
    } while (bVar1 < *(byte *)(unaff_w28 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x1008d5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

