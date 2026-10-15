/*
 * FUN_180005fb8 at 180005fb8
 * undefined FUN_180005fb8(void)
 * Address ranges: 180005fb8-180006037
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180005fb8(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if ((((param_2 != *(longlong *)(param_1 + 0x30)) && (param_2 != *(longlong *)(param_1 + 0x38))) &&
      (param_2 != *(longlong *)(param_1 + 0x40))) &&
     ((param_2 != *(longlong *)(param_1 + 0x48) && (param_2 != *(longlong *)(param_1 + 0x50))))) {
    if (*(longlong *)(param_2 + 0x30) != 0) {
      uVar2 = 0;
      do {
        if (*(longlong *)(param_2 + 0x30) == *(longlong *)(param_1 + 0x1338 + uVar2 * 8))
        goto LAB_180006024;
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
      } while (uVar1 < 0x10);
    }
    return;
  }
LAB_180006024:
                    /* WARNING: Could not recover jumptable at 0x000180006030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))();
  return;
}

