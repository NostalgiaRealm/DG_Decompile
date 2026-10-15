/*
 * FUN_18004a8f4 at 18004a8f4
 * undefined __fastcall FUN_18004a8f4(longlong param_1, uint param_2, longlong param_3)
 * Address ranges: 18004a8f4-18004a939
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004a8f4(longlong param_1,uint param_2,longlong param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (param_3 != *(longlong *)(param_1 + 0x168 + uVar1 * 8)) {
    FUN_180049954(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xf8))
              (*(longlong **)(param_1 + 0x688),uVar1,param_3);
    *(longlong *)(param_1 + 0x168 + uVar1 * 8) = param_3;
  }
  return;
}

