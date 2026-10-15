/*
 * FUN_18004c7f8 at 18004c7f8
 * undefined __cdecl FUN_18004c7f8(longlong param_1, uint param_2, longlong param_3)
 * Address ranges: 18004c7f8-18004c7ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004c7f8(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = param_1 + (ulonglong)param_2 * 8;
  if (param_3 != *(longlong *)(lVar1 + 0x168)) {
    FUN_18004b680(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x128))
              (*(longlong **)(param_1 + 0x688),(ulonglong)param_2,param_3);
    *(longlong *)(lVar1 + 0x168) = param_3;
  }
  return;
}

