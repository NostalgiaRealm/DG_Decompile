/*
 * FUN_1008bc44 at 1008bc44
 * undefined FUN_1008bc44(void)
 * Address ranges: 1008bc44-1008bc6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008bc44(void)

{
  char *pcVar1;
  char cVar2;
  int unaff_w28;
  
  pcVar1 = *(char **)(unaff_w28 + 4);
  do {
    cVar2 = *pcVar1;
    pcVar1 = pcVar1 + 1;
  } while (cVar2 != '\0');
                    /* WARNING: Could not recover jumptable at 0x1008bc6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

