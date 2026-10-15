/*
 * FUN_1014c794 at 1014c794
 * undefined FUN_1014c794(void)
 * Address ranges: 1014c794-1014c7c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1014c794(void)

{
  char *pcVar1;
  int unaff_w28;
  
  pcVar1 = (char *)(*(int *)(unaff_w28 + 4) + 0x10);
  if (*pcVar1 != '\0') {
    *pcVar1 = '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x1014c7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

