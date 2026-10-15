/*
 * FUN_1800484a0 at 1800484a0
 * undefined __fastcall FUN_1800484a0(longlong param_1, longlong * param_2)
 * Address ranges: 1800484a0-180048506
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800484a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (((*(longlong *)(param_1 + 0x468) != *param_2) ||
      (*(int *)(param_1 + 0x474) != *(int *)((longlong)param_2 + 0xc))) ||
     (*(int *)(param_1 + 0x470) != (int)param_2[1])) {
    FUN_180047348(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x158))(*(longlong **)(param_1 + 0x688),param_2)
    ;
    *(undefined1 *)(param_1 + 0x674) = 1;
    lVar1 = param_2[1];
    *(longlong *)(param_1 + 0x468) = *param_2;
    *(longlong *)(param_1 + 0x470) = lVar1;
  }
  return;
}

