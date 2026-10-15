/*
 * FUN_18004bc08 at 18004bc08
 * undefined __cdecl FUN_18004bc08(longlong param_1, longlong * param_2)
 * Address ranges: 18004bc08-18004bc8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004bc08(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (((*(longlong *)(param_1 + 0x468) != *param_2) ||
      (*(int *)(param_1 + 0x474) != *(int *)((longlong)param_2 + 0xc))) ||
     (*(int *)(param_1 + 0x470) != (int)param_2[1])) {
    FUN_18004a830(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x158))(*(longlong **)(param_1 + 0x688),param_2)
    ;
    *(undefined1 *)(param_1 + 0x674) = 1;
    lVar1 = *param_2;
    *(longlong *)(param_1 + 0x470) = param_2[1];
    *(longlong *)(param_1 + 0x468) = lVar1;
  }
  return;
}

