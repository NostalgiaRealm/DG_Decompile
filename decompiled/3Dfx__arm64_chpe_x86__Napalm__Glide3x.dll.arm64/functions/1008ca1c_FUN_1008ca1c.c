/*
 * FUN_1008ca1c at 1008ca1c
 * undefined FUN_1008ca1c(void)
 * Address ranges: 1008ca1c-1008ca57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008ca1c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int unaff_w28;
  
  puVar2 = *(undefined4 **)(unaff_w28 + 8);
  puVar1 = *(undefined4 **)(unaff_w28 + 0xc);
  puVar3 = *(undefined4 **)(unaff_w28 + 0x10);
  **(undefined4 **)(unaff_w28 + 4) = *(undefined4 *)(param_1 + 0xd6e0);
  *puVar2 = *(undefined4 *)(param_1 + 0xd6e4);
  *puVar1 = *(undefined4 *)(param_1 + 0xd6e8);
  *puVar3 = *(undefined4 *)(param_1 + 0xd6ec);
                    /* WARNING: Could not recover jumptable at 0x1008ca54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0x14);
  return;
}

