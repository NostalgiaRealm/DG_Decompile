/*
 * FUN_10105524 at 10105524
 * undefined FUN_10105524(void)
 * Address ranges: 10105524-1010557b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10105524(int param_1)

{
  uint uVar1;
  int unaff_w28;
  
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x57bc + uVar1 * 4) == *(int *)(unaff_w28 + 4)) {
      *(uint *)(param_1 + 0x58ac) = 1 << (ulonglong)(uVar1 & 0x1f) | *(uint *)(param_1 + 0x58ac);
      break;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
                    /* WARNING: Could not recover jumptable at 0x10105578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

