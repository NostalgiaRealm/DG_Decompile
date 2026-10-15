/*
 * FUN_140010500 at 140010500
 * undefined __fastcall FUN_140010500(longlong param_1)
 * Address ranges: 140010500-14001052f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140010500(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    *(undefined1 *)(param_1 + 0x21) = uVar1;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014001052c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))();
  return;
}

