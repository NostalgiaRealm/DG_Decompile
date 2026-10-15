/*
 * FUN_101546a4 at 101546a4
 * undefined FUN_101546a4(void)
 * Address ranges: 101546a4-101546db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101546a4(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 uVar3;
  int unaff_w28;
  
  puVar1 = *(undefined1 **)(unaff_w28 + 4);
  uVar3 = *(undefined1 *)(unaff_w28 + 8);
  for (iVar2 = *(int *)(unaff_w28 + 0xc); iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = uVar3;
    puVar1 = puVar1 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x101546d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

