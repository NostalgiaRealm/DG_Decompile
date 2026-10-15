/*
 * FUN_1800e9e48 at 1800e9e48
 * undefined FUN_1800e9e48(void)
 * Address ranges: 1800e9e48-1800e9ecf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e9e48(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (((*(longlong *)(param_1 + 0x468) != *param_2) ||
      (*(int *)(param_1 + 0x474) != *(int *)((longlong)param_2 + 0xc))) ||
     (*(int *)(param_1 + 0x470) != (int)param_2[1])) {
    FUN_1800e80d8(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x158))(*(longlong **)(param_1 + 0x688),param_2)
    ;
    *(undefined1 *)(param_1 + 0x674) = 1;
    lVar1 = *param_2;
    *(longlong *)(param_1 + 0x470) = param_2[1];
    *(longlong *)(param_1 + 0x468) = lVar1;
  }
  return;
}

