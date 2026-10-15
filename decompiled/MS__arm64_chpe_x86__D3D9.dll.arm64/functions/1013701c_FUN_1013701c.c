/*
 * FUN_1013701c at 1013701c
 * undefined FUN_1013701c(void)
 * Address ranges: 1013701c-1013706f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1013701c(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int unaff_w28;
  
  pcVar1 = *(char **)(unaff_w28 + 4);
  iVar3 = 0;
  cVar2 = *pcVar1;
  while ((cVar2 != -1 && ((uint)(byte)pcVar1[iVar3] != *(uint *)(unaff_w28 + 8)))) {
    iVar3 = iVar3 + 1;
    cVar2 = pcVar1[iVar3];
  }
                    /* WARNING: Could not recover jumptable at 0x10137064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

