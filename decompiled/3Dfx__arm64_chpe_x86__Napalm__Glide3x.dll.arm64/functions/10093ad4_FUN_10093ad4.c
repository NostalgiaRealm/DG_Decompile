/*
 * FUN_10093ad4 at 10093ad4
 * undefined FUN_10093ad4(void)
 * Address ranges: 10093ad4-10093b0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10093ad4(void)

{
  byte bVar1;
  int unaff_w28;
  
  bVar1 = 0;
  if (*(byte *)(unaff_w28 + 8) != 0) {
    do {
      bVar1 = bVar1 + 1;
    } while (bVar1 < *(byte *)(unaff_w28 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x10093b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

