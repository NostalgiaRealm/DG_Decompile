/*
 * FUN_180010028 at 180010028
 * undefined __cdecl FUN_180010028(longlong param_1)
 * Address ranges: 180010028-180010153
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180010028(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x2c83) != '\0') {
    lVar1 = 0;
    do {
      (**(code **)(**(longlong **)(param_1 + 0x33a0 + lVar1 * 0x10) + 0x10))();
      (**(code **)(**(longlong **)(param_1 + 0x33a8 + lVar1 * 0x10) + 0x10))();
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0x20);
    (**(code **)(**(longlong **)(param_1 + 0x3398) + 0x10))();
  }
  FUN_1800535c8(*(longlong *)(param_1 + 0x3330),*(uint *)(param_1 + 0x3338),
                *(longlong **)(param_1 + 0x3378));
  FUN_1800535c8(*(longlong *)(param_1 + 0x3330),*(uint *)(param_1 + 0x3338),
                *(longlong **)(param_1 + 0x3370));
  (**(code **)(**(longlong **)(param_1 + 0x3360) + 0x10))();
  (**(code **)(**(longlong **)(param_1 + 0x3358) + 0x10))();
  FUN_1800535c8(*(longlong *)(param_1 + 0x3330),*(uint *)(param_1 + 0x3338),
                *(longlong **)(param_1 + 0x3380));
  (**(code **)(**(longlong **)(param_1 + 0x3368) + 0x10))();
  FUN_1800535c8(*(longlong *)(param_1 + 0x3330),*(uint *)(param_1 + 0x3338),
                *(longlong **)(param_1 + 0x3390));
  (**(code **)(**(longlong **)(param_1 + 0x3388) + 0x10))();
  (**(code **)(**(longlong **)(param_1 + 0x3350) + 0x10))();
  (**(code **)(**(longlong **)(param_1 + 0x3348) + 0x10))();
  return;
}

