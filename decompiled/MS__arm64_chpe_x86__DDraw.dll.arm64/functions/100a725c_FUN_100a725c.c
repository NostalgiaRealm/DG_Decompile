/*
 * FUN_100a725c at 100a725c
 * undefined FUN_100a725c(void)
 * Address ranges: 100a725c-100a7287
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a725c(void)

{
  char *pcVar1;
  char cVar2;
  int unaff_w28;
  
  pcVar1 = *(char **)(unaff_w28 + 4);
  do {
    cVar2 = *pcVar1;
    pcVar1 = pcVar1 + 1;
  } while (cVar2 != '\0');
                    /* WARNING: Could not recover jumptable at 0x100a7284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

