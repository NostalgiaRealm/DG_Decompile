/*
 * FUN_10090e64 at 10090e64
 * undefined FUN_10090e64(void)
 * Address ranges: 10090e64-10090eaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10090e64(int param_1)

{
  byte *pbVar1;
  int unaff_w28;
  
  pbVar1 = (byte *)(((int)*(uint *)(unaff_w28 + 4) >> 3) + param_1 + 0x20);
  *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(*(uint *)(unaff_w28 + 4) & 7)) ^ 0xff);
                    /* WARNING: Could not recover jumptable at 0x10090eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

