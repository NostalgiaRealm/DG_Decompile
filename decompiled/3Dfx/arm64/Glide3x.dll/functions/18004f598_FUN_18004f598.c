/*
 * FUN_18004f598 at 18004f598
 * undefined __cdecl FUN_18004f598(longlong param_1, uint param_2, longlong param_3)
 * Address ranges: 18004f598-18004f5f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004f598(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = param_1 + (ulonglong)param_2 * 8;
  if (param_3 != *(longlong *)(lVar1 + 0x168)) {
    FUN_18004e3c0(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xf8))
              (*(longlong **)(param_1 + 0x688),(ulonglong)param_2,param_3);
    *(longlong *)(lVar1 + 0x168) = param_3;
  }
  return;
}

