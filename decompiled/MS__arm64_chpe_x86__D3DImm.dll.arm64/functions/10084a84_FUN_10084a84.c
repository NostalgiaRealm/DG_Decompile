/*
 * FUN_10084a84 at 10084a84
 * undefined FUN_10084a84(void)
 * Address ranges: 10084a84-10084ad3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10084a84(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int unaff_w28;
  
  uVar2 = *(uint *)(unaff_w28 + 8);
  if (*(uint *)(unaff_w28 + 4) < *(uint *)(param_1 + 0x14)) {
    *(uint *)(param_1 + 0x14) = *(uint *)(unaff_w28 + 4);
  }
  puVar1 = (uint *)(param_1 + 0x18);
  if (*puVar1 < uVar2) {
    *puVar1 = uVar2;
    if (*(uint *)(param_1 + 0x10) < uVar2) {
      *puVar1 = *(uint *)(param_1 + 0x10);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x10084ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0xc);
  return;
}

