/*
 * FUN_10115aac at 10115aac
 * undefined FUN_10115aac(void)
 * Address ranges: 10115aac-10115ae7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10115aac(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_w28;
  
  iVar1 = *(int *)(unaff_w28 + 4);
  puVar2 = *(undefined4 **)(unaff_w28 + 8);
  puVar2[1] = *(undefined4 *)(iVar1 + -0x56f0);
  *puVar2 = *(undefined4 *)(iVar1 + -0x56f4);
                    /* WARNING: Could not recover jumptable at 0x10115ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0xc);
  return;
}

