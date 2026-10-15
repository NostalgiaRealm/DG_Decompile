/*
 * FUN_1014c73c at 1014c73c
 * undefined FUN_1014c73c(void)
 * Address ranges: 1014c73c-1014c76f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1014c73c(void)

{
  char *pcVar1;
  int unaff_w28;
  
  pcVar1 = (char *)(*(int *)(unaff_w28 + 4) + 0x10);
  if (*pcVar1 == '\0') {
    *pcVar1 = '\x01';
  }
                    /* WARNING: Could not recover jumptable at 0x1014c76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0x14);
  return;
}

