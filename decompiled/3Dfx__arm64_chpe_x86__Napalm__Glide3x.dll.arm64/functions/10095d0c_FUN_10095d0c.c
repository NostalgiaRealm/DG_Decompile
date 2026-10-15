/*
 * FUN_10095d0c at 10095d0c
 * undefined FUN_10095d0c(void)
 * Address ranges: 10095d0c-10095d37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10095d0c(void)

{
  char *pcVar1;
  char cVar2;
  int unaff_w28;
  
  pcVar1 = *(char **)(unaff_w28 + 4);
  do {
    cVar2 = *pcVar1;
    pcVar1 = pcVar1 + 1;
  } while (cVar2 != '\0');
                    /* WARNING: Could not recover jumptable at 0x10095d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

