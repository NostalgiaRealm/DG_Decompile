/*
 * FUN_101494fc at 101494fc
 * undefined FUN_101494fc(void)
 * Address ranges: 101494fc-10149537
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101494fc(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_w28;
  
  iVar1 = *(int *)(unaff_w28 + 4);
  puVar2 = *(undefined4 **)(unaff_w28 + 8);
  *(undefined4 *)(iVar1 + -0x6320) = puVar2[1];
  *(undefined4 *)(iVar1 + -0x6324) = *puVar2;
                    /* WARNING: Could not recover jumptable at 0x10149534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0xc);
  return;
}

