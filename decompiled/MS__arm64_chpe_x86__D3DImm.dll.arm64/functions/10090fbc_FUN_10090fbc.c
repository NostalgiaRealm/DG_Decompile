/*
 * FUN_10090fbc at 10090fbc
 * undefined FUN_10090fbc(void)
 * Address ranges: 10090fbc-10091013
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10090fbc(void)

{
  int iVar1;
  int unaff_w28;
  
  if (*(int *)(unaff_w28 + 8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(unaff_w28 + 8) + 4);
  }
  if ((*(undefined4 **)(unaff_w28 + 0xc) != (undefined4 *)0x0) && (iVar1 != 0)) {
    **(undefined4 **)(unaff_w28 + 0xc) =
         *(undefined4 *)(*(int *)(*(int *)(unaff_w28 + 4) + 4) + 0xd0);
  }
                    /* WARNING: Could not recover jumptable at 0x10091010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0x10);
  return;
}

