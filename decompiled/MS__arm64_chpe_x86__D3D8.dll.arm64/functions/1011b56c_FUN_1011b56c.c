/*
 * FUN_1011b56c at 1011b56c
 * undefined FUN_1011b56c(void)
 * Address ranges: 1011b56c-1011b5b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1011b56c(int param_1)

{
  byte *pbVar1;
  int unaff_w28;
  
  pbVar1 = (byte *)(((int)*(uint *)(unaff_w28 + 4) >> 3) + param_1 + 0x20);
  *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(*(uint *)(unaff_w28 + 4) & 7)) ^ 0xff);
                    /* WARNING: Could not recover jumptable at 0x1011b5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

