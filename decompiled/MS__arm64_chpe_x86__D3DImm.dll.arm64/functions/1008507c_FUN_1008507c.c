/*
 * FUN_1008507c at 1008507c
 * undefined FUN_1008507c(void)
 * Address ranges: 1008507c-100850ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008507c(int param_1)

{
  undefined1 uVar1;
  int unaff_w28;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x1dd0) != 0xa000) {
    uVar1 = (char)*(undefined4 *)(unaff_w28 + 4);
  }
  *(undefined1 *)(param_1 + 0x78) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x100850a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

