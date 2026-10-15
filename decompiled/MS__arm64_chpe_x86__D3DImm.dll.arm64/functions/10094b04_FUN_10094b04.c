/*
 * FUN_10094b04 at 10094b04
 * undefined FUN_10094b04(void)
 * Address ranges: 10094b04-10094b3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10094b04(void)

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
                    /* WARNING: Could not recover jumptable at 0x10094b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

