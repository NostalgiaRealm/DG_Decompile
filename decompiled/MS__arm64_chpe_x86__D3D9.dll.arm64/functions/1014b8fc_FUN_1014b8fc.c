/*
 * FUN_1014b8fc at 1014b8fc
 * undefined FUN_1014b8fc(void)
 * Address ranges: 1014b8fc-1014b93f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1014b8fc(void)

{
  int unaff_w28;
  
  if (*(uint *)(unaff_w28 + 8) < 0x10 && *(undefined4 **)(unaff_w28 + 0xc) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_w28 + 0xc) =
         *(undefined4 *)(*(int *)(unaff_w28 + 4) + *(uint *)(unaff_w28 + 8) * 4 + 0x5bdc);
  }
                    /* WARNING: Could not recover jumptable at 0x1014b93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0x10);
  return;
}

