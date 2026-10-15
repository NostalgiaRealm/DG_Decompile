/*
 * FUN_10091bb4 at 10091bb4
 * undefined FUN_10091bb4(void)
 * Address ranges: 10091bb4-10091bef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10091bb4(void)

{
  char *pcVar1;
  int unaff_w28;
  
  pcVar1 = (char *)(*(int *)(*(int *)(unaff_w28 + 4) + 4) + 0xd1);
  if (*pcVar1 == '\0') {
    *pcVar1 = '\x01';
  }
                    /* WARNING: Could not recover jumptable at 0x10091bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0xc);
  return;
}

