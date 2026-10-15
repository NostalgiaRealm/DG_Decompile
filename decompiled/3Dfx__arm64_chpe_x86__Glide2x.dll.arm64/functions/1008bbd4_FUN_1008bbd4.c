/*
 * FUN_1008bbd4 at 1008bbd4
 * undefined FUN_1008bbd4(void)
 * Address ranges: 1008bbd4-1008bc3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008bbd4(void)

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
                    /* WARNING: Could not recover jumptable at 0x1008bc3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

