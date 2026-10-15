/*
 * FUN_10096d6c at 10096d6c
 * undefined FUN_10096d6c(void)
 * Address ranges: 10096d6c-10096d9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10096d6c(void)

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
                    /* WARNING: Could not recover jumptable at 0x10096d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

