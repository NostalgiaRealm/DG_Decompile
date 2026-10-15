/*
 * FUN_18000e864 at 18000e864
 * undefined __fastcall FUN_18000e864(longlong param_1)
 * Address ranges: 18000e864-18000e97a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000e864(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(char *)(param_1 + 0x2c83) != '\0') {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x33a0 + lVar1 * 0x10) + 0x10))();
      (**(code **)(**(longlong **)(param_1 + 0x33a8 + lVar1 * 0x10) + 0x10))();
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0x20);
    (**(code **)(**(longlong **)(param_1 + 0x3398) + 0x10))();
  }
  FUN_18004f158(*(longlong *)(param_1 + 0x3330),*(uint *)(param_1 + 0x3338),
                *(longlong **)(param_1 + 0x3378));
  FUN_18004f158(*(longlong *)(param_1 + 0x3330),*(uint *)(param_1 + 0x3338),
                *(longlong **)(param_1 + 0x3370));
  (**(code **)(**(longlong **)(param_1 + 0x3360) + 0x10))();
  (**(code **)(**(longlong **)(param_1 + 0x3358) + 0x10))();
  FUN_18004f158(*(longlong *)(param_1 + 0x3330),*(uint *)(param_1 + 0x3338),
                *(longlong **)(param_1 + 0x3380));
  (**(code **)(**(longlong **)(param_1 + 0x3368) + 0x10))();
  FUN_18004f158(*(longlong *)(param_1 + 0x3330),*(uint *)(param_1 + 0x3338),
                *(longlong **)(param_1 + 0x3390));
  (**(code **)(**(longlong **)(param_1 + 0x3388) + 0x10))();
  (**(code **)(**(longlong **)(param_1 + 0x3350) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00018000e977. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x3348) + 0x10))();
  return;
}

