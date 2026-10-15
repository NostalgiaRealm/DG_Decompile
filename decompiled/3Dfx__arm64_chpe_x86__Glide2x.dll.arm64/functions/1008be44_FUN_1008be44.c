/*
 * FUN_1008be44 at 1008be44
 * undefined FUN_1008be44(void)
 * Address ranges: 1008be44-1008be7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008be44(void)

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
                    /* WARNING: Could not recover jumptable at 0x1008be78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

