/*
 * FUN_10138d74 at 10138d74
 * undefined FUN_10138d74(void)
 * Address ranges: 10138d74-10138dcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10138d74(int param_1)

{
  uint uVar1;
  int unaff_w28;
  
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + 26000 + uVar1 * 4) == *(int *)(unaff_w28 + 4)) {
      *(uint *)(param_1 + 0x668c) = 1 << (ulonglong)(uVar1 & 0x1f) | *(uint *)(param_1 + 0x668c);
      break;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
                    /* WARNING: Could not recover jumptable at 0x10138dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

