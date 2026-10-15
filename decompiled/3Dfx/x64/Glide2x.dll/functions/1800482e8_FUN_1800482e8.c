/*
 * FUN_1800482e8 at 1800482e8
 * undefined __fastcall FUN_1800482e8(longlong param_1, uint param_2, longlong param_3)
 * Address ranges: 1800482e8-18004832d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800482e8(longlong param_1,uint param_2,longlong param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (param_3 != *(longlong *)(param_1 + 0x168 + uVar1 * 8)) {
    FUN_180047348(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xf8))
              (*(longlong **)(param_1 + 0x688),uVar1,param_3);
    *(longlong *)(param_1 + 0x168 + uVar1 * 8) = param_3;
  }
  return;
}

