/*
 * FUN_1008b21c at 1008b21c
 * undefined FUN_1008b21c(void)
 * Address ranges: 1008b21c-1008b243
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008b21c(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int unaff_w28;
  
  puVar1 = *(ulonglong **)(unaff_w28 + 8);
  uVar2 = (ulonglong)*(uint *)(*(int *)(unaff_w28 + 4) + 0x28);
  **(ulonglong **)(unaff_w28 + 0xc) = uVar2;
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x1008b240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0x10);
  return;
}

