/*
 * FUN_100835cc at 100835cc
 * undefined FUN_100835cc(void)
 * Address ranges: 100835cc-10083623
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100835cc(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int unaff_w28;
  
  puVar2 = *(undefined4 **)(unaff_w28 + 8);
  puVar1 = *(undefined4 **)(unaff_w28 + 0xc);
  puVar3 = *(undefined4 **)(unaff_w28 + 0x10);
  **(undefined4 **)(unaff_w28 + 4) = *(undefined4 *)(param_1 + 0x2bb8);
  *puVar2 = *(undefined4 *)(param_1 + 0x2bbc);
  *puVar1 = *(undefined4 *)(param_1 + 0x2bc0);
  *puVar3 = *(undefined4 *)(param_1 + 0x2bc4);
                    /* WARNING: Could not recover jumptable at 0x10083620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0x14);
  return;
}

