/*
 * FUN_100839bc at 100839bc
 * undefined FUN_100839bc(void)
 * Address ranges: 100839bc-10083a17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100839bc(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int unaff_w28;
  
  uVar1 = *(uint *)(unaff_w28 + 4);
  puVar2 = *(undefined4 **)(unaff_w28 + 8);
  if ((uVar1 < 0x99 && uVar1 != 0) && puVar2 != (undefined4 *)0x0) {
    if (*(char *)(*(int *)(param_1 + 4) + uVar1 * 8) == '\0') {
      *puVar2 = 0;
    }
    else {
      *puVar2 = *(undefined4 *)(param_1 + uVar1 * 4 + 0x290);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x10083a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0x10);
  return;
}

