/*
 * FUN_1014b61c at 1014b61c
 * undefined FUN_1014b61c(void)
 * Address ranges: 1014b61c-1014b68f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1014b61c(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int unaff_w28;
  
  uVar1 = *(uint *)(unaff_w28 + 0xc);
  puVar2 = *(undefined4 **)(unaff_w28 + 0x10);
  if (((*(uint *)(unaff_w28 + 8) < 0x10 && uVar1 != 0) && uVar1 < 0xe) &&
      puVar2 != (undefined4 *)0x0) {
    if ((&DAT_10170a20)[uVar1 * 8] == '\0') {
      *puVar2 = 0;
    }
    else {
      *puVar2 = *(undefined4 *)
                 (uVar1 * 4 + *(uint *)(unaff_w28 + 8) * 0x38 + *(int *)(unaff_w28 + 4) + 0x234);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x1014b68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0x14);
  return;
}

