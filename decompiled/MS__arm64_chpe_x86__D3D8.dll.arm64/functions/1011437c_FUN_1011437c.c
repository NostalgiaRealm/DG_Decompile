/*
 * FUN_1011437c at 1011437c
 * undefined FUN_1011437c(void)
 * Address ranges: 1011437c-101143b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1011437c(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_w28;
  
  iVar1 = *(int *)(unaff_w28 + 4);
  puVar2 = *(undefined4 **)(unaff_w28 + 8);
  *(undefined4 *)(iVar1 + -0x56f0) = puVar2[1];
  *(undefined4 *)(iVar1 + -0x56f4) = *puVar2;
                    /* WARNING: Could not recover jumptable at 0x101143b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0xc);
  return;
}

