/*
 * FUN_1013e664 at 1013e664
 * undefined FUN_1013e664(void)
 * Address ranges: 1013e664-1013e69f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1013e664(int param_1)

{
  undefined1 *puVar1;
  int unaff_w28;
  
  puVar1 = *(undefined1 **)(unaff_w28 + 4);
  *puVar1 = *(undefined1 *)(*(int *)(param_1 + 0xf6bc) + 0x13);
  *(undefined2 *)(puVar1 + 1) = 0x101;
                    /* WARNING: Could not recover jumptable at 0x1013e69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

