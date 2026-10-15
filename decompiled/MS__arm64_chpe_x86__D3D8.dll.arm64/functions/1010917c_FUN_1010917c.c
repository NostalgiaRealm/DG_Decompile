/*
 * FUN_1010917c at 1010917c
 * undefined FUN_1010917c(void)
 * Address ranges: 1010917c-101091ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1010917c(int param_1)

{
  undefined1 uVar1;
  int unaff_w28;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0xda44) != 0xa000) {
    uVar1 = (char)*(undefined4 *)(unaff_w28 + 4);
  }
  *(undefined1 *)(param_1 + 0x80) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x101091a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

