/*
 * FUN_10091d64 at 10091d64
 * undefined FUN_10091d64(void)
 * Address ranges: 10091d64-10091dbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10091d64(void)

{
  int *piVar1;
  uint *puVar2;
  int unaff_w28;
  
  puVar2 = *(uint **)(unaff_w28 + 0xc);
  if ((*(undefined4 **)(unaff_w28 + 8) != (undefined4 *)0x0) && (puVar2 != (uint *)0x0)) {
    piVar1 = (int *)(*(int *)(*(int *)(unaff_w28 + 4) + 4) + 0x88);
    **(undefined4 **)(unaff_w28 + 8) = *(undefined4 *)(*piVar1 + 0xd0);
    *puVar2 = (uint)(*piVar1 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x10091db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0x10);
  return;
}

