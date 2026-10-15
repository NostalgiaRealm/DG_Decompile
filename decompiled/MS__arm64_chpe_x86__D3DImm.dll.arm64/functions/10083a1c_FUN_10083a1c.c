/*
 * FUN_10083a1c at 10083a1c
 * undefined FUN_10083a1c(void)
 * Address ranges: 10083a1c-10083a8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10083a1c(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_w28;
  
  uVar2 = *(uint *)(unaff_w28 + 8);
  puVar1 = *(undefined4 **)(unaff_w28 + 0xc);
  if (((*(uint *)(unaff_w28 + 4) < 8 && uVar2 != 0) && uVar2 < 0x19) && puVar1 != (undefined4 *)0x0)
  {
    if (*(char *)(*(int *)(param_1 + 8) + uVar2 * 0xc) == '\0') {
      *puVar1 = 0;
    }
    else {
      *puVar1 = *(undefined4 *)(*(uint *)(unaff_w28 + 4) * 100 + uVar2 * 4 + param_1 + 0x4f4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x10083a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0x14);
  return;
}

