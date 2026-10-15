/*
 * FUN_10154844 at 10154844
 * undefined FUN_10154844(void)
 * Address ranges: 10154844-10154873
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10154844(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int unaff_w28;
  
  pcVar1 = *(char **)(unaff_w28 + 4);
  pcVar3 = *(char **)(unaff_w28 + 8);
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    *pcVar1 = cVar2;
    pcVar1 = pcVar1 + 1;
  } while (cVar2 != '\0');
                    /* WARNING: Could not recover jumptable at 0x10154870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

