/*
 * FUN_10146f74 at 10146f74
 * undefined FUN_10146f74(void)
 * Address ranges: 10146f74-10146fb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10146f74(int param_1)

{
  undefined8 *puVar1;
  int unaff_w28;
  
  puVar1 = *(undefined8 **)(unaff_w28 + 4);
  param_1 = param_1 + *(int *)(unaff_w28 + 8) * 0xc18;
  *puVar1 = *(undefined8 *)(param_1 + 0x10ca8);
  puVar1[1] = *(undefined8 *)(param_1 + 0x10cb0);
                    /* WARNING: Could not recover jumptable at 0x10146fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0xc);
  return;
}

