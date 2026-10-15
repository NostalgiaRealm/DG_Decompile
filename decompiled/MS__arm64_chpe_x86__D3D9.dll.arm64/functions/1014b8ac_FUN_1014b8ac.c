/*
 * FUN_1014b8ac at 1014b8ac
 * undefined FUN_1014b8ac(void)
 * Address ranges: 1014b8ac-1014b8f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1014b8ac(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_w28;
  
  if (*(undefined4 **)(unaff_w28 + 8) != (undefined4 *)0x0) {
    iVar1 = *(int *)(*(int *)(unaff_w28 + 4) + 0x5bd8);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 0x274);
    }
    **(undefined4 **)(unaff_w28 + 8) = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x1014b8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0xc);
  return;
}

