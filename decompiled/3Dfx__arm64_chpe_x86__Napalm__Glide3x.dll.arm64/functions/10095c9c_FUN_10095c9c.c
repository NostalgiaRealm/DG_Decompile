/*
 * FUN_10095c9c at 10095c9c
 * undefined FUN_10095c9c(void)
 * Address ranges: 10095c9c-10095d07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10095c9c(void)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int unaff_w28;
  
  pbVar1 = *(byte **)(unaff_w28 + 4);
  pbVar2 = *(byte **)(unaff_w28 + 8);
  uVar4 = (uint)*pbVar2;
  iVar3 = *pbVar1 - uVar4;
  while ((iVar3 == 0 && ((char)uVar4 != '\0'))) {
    pbVar1 = pbVar1 + 1;
    pbVar2 = pbVar2 + 1;
    uVar4 = (uint)*pbVar2;
    iVar3 = *pbVar1 - uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x10095d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

