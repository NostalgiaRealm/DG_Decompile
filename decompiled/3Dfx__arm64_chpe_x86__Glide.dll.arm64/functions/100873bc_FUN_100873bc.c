/*
 * FUN_100873bc at 100873bc
 * undefined FUN_100873bc(void)
 * Address ranges: 100873bc-10087407
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100873bc(int param_1)

{
  byte *pbVar1;
  int unaff_w28;
  
  pbVar1 = (byte *)(((int)*(uint *)(unaff_w28 + 4) >> 3) + param_1 + 0x20);
  *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(*(uint *)(unaff_w28 + 4) & 7)) ^ 0xff);
                    /* WARNING: Could not recover jumptable at 0x10087404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

