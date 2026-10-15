/*
 * FUN_10095e2c at 10095e2c
 * undefined FUN_10095e2c(void)
 * Address ranges: 10095e2c-10095e5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10095e2c(void)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  int unaff_w28;
  
  psVar1 = *(short **)(unaff_w28 + 4);
  psVar3 = *(short **)(unaff_w28 + 8);
  do {
    sVar2 = *psVar3;
    psVar3 = psVar3 + 1;
    *psVar1 = sVar2;
    psVar1 = psVar1 + 1;
  } while (sVar2 != 0);
                    /* WARNING: Could not recover jumptable at 0x10095e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

