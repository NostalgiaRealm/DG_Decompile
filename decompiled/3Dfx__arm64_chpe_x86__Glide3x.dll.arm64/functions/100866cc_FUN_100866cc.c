/*
 * FUN_100866cc at 100866cc
 * undefined FUN_100866cc(void)
 * Address ranges: 100866cc-10086707
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100866cc(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int unaff_w28;
  
  puVar2 = *(undefined4 **)(unaff_w28 + 8);
  puVar1 = *(undefined4 **)(unaff_w28 + 0xc);
  puVar3 = *(undefined4 **)(unaff_w28 + 0x10);
  **(undefined4 **)(unaff_w28 + 4) = *(undefined4 *)(param_1 + 0xd348);
  *puVar2 = *(undefined4 *)(param_1 + 0xd34c);
  *puVar1 = *(undefined4 *)(param_1 + 0xd350);
  *puVar3 = *(undefined4 *)(param_1 + 0xd354);
                    /* WARNING: Could not recover jumptable at 0x10086704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0x14);
  return;
}

