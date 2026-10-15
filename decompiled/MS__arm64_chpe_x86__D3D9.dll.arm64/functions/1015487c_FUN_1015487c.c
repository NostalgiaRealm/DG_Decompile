/*
 * FUN_1015487c at 1015487c
 * undefined FUN_1015487c(void)
 * Address ranges: 1015487c-101548a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1015487c(void)

{
  char *pcVar1;
  char cVar2;
  int unaff_w28;
  
  pcVar1 = *(char **)(unaff_w28 + 4);
  do {
    cVar2 = *pcVar1;
    pcVar1 = pcVar1 + 1;
  } while (cVar2 != '\0');
                    /* WARNING: Could not recover jumptable at 0x101548a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

