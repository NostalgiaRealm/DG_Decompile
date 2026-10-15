/*
 * FUN_1014b53c at 1014b53c
 * undefined FUN_1014b53c(void)
 * Address ranges: 1014b53c-1014b577
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1014b53c(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_w28;
  
  iVar1 = *(int *)(unaff_w28 + 4);
  puVar2 = *(undefined4 **)(unaff_w28 + 8);
  puVar2[1] = *(undefined4 *)(iVar1 + -0x6320);
  *puVar2 = *(undefined4 *)(iVar1 + -0x6324);
                    /* WARNING: Could not recover jumptable at 0x1014b574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0xc);
  return;
}

