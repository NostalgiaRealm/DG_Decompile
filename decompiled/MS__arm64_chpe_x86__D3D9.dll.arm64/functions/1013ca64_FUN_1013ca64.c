/*
 * FUN_1013ca64 at 1013ca64
 * undefined FUN_1013ca64(void)
 * Address ranges: 1013ca64-1013ca93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1013ca64(int param_1)

{
  undefined1 uVar1;
  int unaff_w28;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0xf748) != 0xa000) {
    uVar1 = (char)*(undefined4 *)(unaff_w28 + 4);
  }
  *(undefined1 *)(param_1 + 0x80) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x1013ca90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

