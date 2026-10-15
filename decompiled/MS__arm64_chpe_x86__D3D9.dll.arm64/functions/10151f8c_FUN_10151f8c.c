/*
 * FUN_10151f8c at 10151f8c
 * undefined FUN_10151f8c(void)
 * Address ranges: 10151f8c-10151fd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10151f8c(int param_1)

{
  byte *pbVar1;
  int unaff_w28;
  
  pbVar1 = (byte *)(((int)*(uint *)(unaff_w28 + 4) >> 3) + param_1 + 0x20);
  *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(*(uint *)(unaff_w28 + 4) & 7)) ^ 0xff);
                    /* WARNING: Could not recover jumptable at 0x10151fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

