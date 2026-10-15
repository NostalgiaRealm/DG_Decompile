/*
 * FUN_1011ddfc at 1011ddfc
 * undefined FUN_1011ddfc(void)
 * Address ranges: 1011ddfc-1011de2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1011ddfc(void)

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
                    /* WARNING: Could not recover jumptable at 0x1011de28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

