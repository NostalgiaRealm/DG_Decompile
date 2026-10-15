/*
 * FUN_1010810c at 1010810c
 * undefined FUN_1010810c(void)
 * Address ranges: 1010810c-1010814b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1010810c(void)

{
  uint uVar1;
  uint uVar2;
  int unaff_w28;
  
  uVar1 = *(uint *)(unaff_w28 + 4);
  if (*(uint *)(unaff_w28 + 4) < *(uint *)(unaff_w28 + 8)) {
    uVar1 = *(uint *)(unaff_w28 + 8);
  }
  uVar2 = *(uint *)(unaff_w28 + 0xc);
  if (*(uint *)(unaff_w28 + 0xc) <= uVar1) {
    uVar2 = uVar1;
  }
  for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
  }
                    /* WARNING: Could not recover jumptable at 0x10108148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

