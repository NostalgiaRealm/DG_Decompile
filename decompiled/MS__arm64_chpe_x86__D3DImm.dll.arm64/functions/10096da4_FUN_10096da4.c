/*
 * FUN_10096da4 at 10096da4
 * undefined FUN_10096da4(void)
 * Address ranges: 10096da4-10096dcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10096da4(void)

{
  char *pcVar1;
  char cVar2;
  int unaff_w28;
  
  pcVar1 = *(char **)(unaff_w28 + 4);
  do {
    cVar2 = *pcVar1;
    pcVar1 = pcVar1 + 1;
  } while (cVar2 != '\0');
                    /* WARNING: Could not recover jumptable at 0x10096dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

