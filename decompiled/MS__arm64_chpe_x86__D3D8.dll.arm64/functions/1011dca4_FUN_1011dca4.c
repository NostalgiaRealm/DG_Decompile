/*
 * FUN_1011dca4 at 1011dca4
 * undefined FUN_1011dca4(void)
 * Address ranges: 1011dca4-1011dcd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1011dca4(void)

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
                    /* WARNING: Could not recover jumptable at 0x1011dcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

