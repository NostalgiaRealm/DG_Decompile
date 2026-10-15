/*
 * FUN_100a314c at 100a314c
 * undefined FUN_100a314c(void)
 * Address ranges: 100a314c-100a3197
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a314c(int param_1)

{
  byte *pbVar1;
  int unaff_w28;
  
  pbVar1 = (byte *)(((int)*(uint *)(unaff_w28 + 4) >> 3) + param_1 + 0x20);
  *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(*(uint *)(unaff_w28 + 4) & 7)) ^ 0xff);
                    /* WARNING: Could not recover jumptable at 0x100a3194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

