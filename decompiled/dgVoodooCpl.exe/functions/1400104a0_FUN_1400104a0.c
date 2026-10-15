/*
 * FUN_1400104a0 at 1400104a0
 * undefined __fastcall FUN_1400104a0(longlong param_1)
 * Address ranges: 1400104a0-1400104cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1400104a0(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    *(undefined1 *)(param_1 + 0x21) = uVar1;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001400104cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))();
  return;
}

