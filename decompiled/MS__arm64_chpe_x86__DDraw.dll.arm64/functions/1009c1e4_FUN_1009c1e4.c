/*
 * FUN_1009c1e4 at 1009c1e4
 * undefined FUN_1009c1e4(void)
 * Address ranges: 1009c1e4-1009c21b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009c1e4(int param_1)

{
  int iVar1;
  int unaff_w28;
  
  iVar1 = *(int *)(param_1 + 0x11c) * 0x228;
  *(ulonglong *)(&DAT_100be348 + iVar1) =
       *(longlong *)(&DAT_100be348 + iVar1) + (ulonglong)*(uint *)(unaff_w28 + 4);
                    /* WARNING: Could not recover jumptable at 0x1009c218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

