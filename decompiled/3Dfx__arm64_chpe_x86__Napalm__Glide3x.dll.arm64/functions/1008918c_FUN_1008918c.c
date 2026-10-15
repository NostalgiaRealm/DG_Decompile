/*
 * FUN_1008918c at 1008918c
 * undefined FUN_1008918c(void)
 * Address ranges: 1008918c-100891e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008918c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int unaff_w28;
  
  puVar2 = *(undefined4 **)(unaff_w28 + 8);
  puVar1 = *(undefined4 **)(unaff_w28 + 0xc);
  puVar3 = *(undefined4 **)(unaff_w28 + 0x10);
  **(undefined4 **)(unaff_w28 + 4) = *(undefined4 *)(param_1 + 0x2cf8);
  *puVar2 = *(undefined4 *)(param_1 + 0x2cfc);
  *puVar1 = *(undefined4 *)(param_1 + 0x2d00);
  *puVar3 = *(undefined4 *)(param_1 + 0x2d04);
                    /* WARNING: Could not recover jumptable at 0x100891e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0x14);
  return;
}

