/*
 * FUN_18004c798 at 18004c798
 * undefined __cdecl FUN_18004c798(longlong param_1, uint param_2, longlong param_3)
 * Address ranges: 18004c798-18004c79f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004c798(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = param_1 + (ulonglong)param_2 * 8;
  if (param_3 != *(longlong *)(lVar1 + 0x68)) {
    FUN_18004b680(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x150))
              (*(longlong **)(param_1 + 0x688),(ulonglong)param_2,param_3);
    *(longlong *)(lVar1 + 0x68) = param_3;
  }
  return;
}

