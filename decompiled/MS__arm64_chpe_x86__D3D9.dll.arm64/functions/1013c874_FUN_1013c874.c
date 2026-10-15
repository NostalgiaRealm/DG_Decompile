/*
 * FUN_1013c874 at 1013c874
 * undefined FUN_1013c874(void)
 * Address ranges: 1013c874-1013c8b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1013c874(int param_1)

{
  undefined2 *puVar1;
  int unaff_w28;
  
  puVar1 = *(undefined2 **)(unaff_w28 + 4);
  *puVar1 = 0x100;
  *(bool *)(puVar1 + 1) = 0xa0ff < *(int *)(param_1 + 0xf748);
                    /* WARNING: Could not recover jumptable at 0x1013c8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

