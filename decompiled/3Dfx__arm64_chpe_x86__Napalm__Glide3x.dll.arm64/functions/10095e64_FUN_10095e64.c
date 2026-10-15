/*
 * FUN_10095e64 at 10095e64
 * undefined FUN_10095e64(void)
 * Address ranges: 10095e64-10095eb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10095e64(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int unaff_w28;
  
  pcVar2 = *(char **)(unaff_w28 + 4);
  pcVar1 = *(char **)(unaff_w28 + 8);
  iVar3 = *(int *)(unaff_w28 + 0xc);
  if (iVar3 != 0) {
    for (; (iVar3 = iVar3 + -1, iVar3 != 0 && (*pcVar2 == *pcVar1)); pcVar2 = pcVar2 + 1) {
      pcVar1 = pcVar1 + 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x10095eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

