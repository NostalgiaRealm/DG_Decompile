/*
 * FUN_1011dcdc at 1011dcdc
 * undefined FUN_1011dcdc(void)
 * Address ranges: 1011dcdc-1011dd07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1011dcdc(void)

{
  char *pcVar1;
  char cVar2;
  int unaff_w28;
  
  pcVar1 = *(char **)(unaff_w28 + 4);
  do {
    cVar2 = *pcVar1;
    pcVar1 = pcVar1 + 1;
  } while (cVar2 != '\0');
                    /* WARNING: Could not recover jumptable at 0x1011dd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

