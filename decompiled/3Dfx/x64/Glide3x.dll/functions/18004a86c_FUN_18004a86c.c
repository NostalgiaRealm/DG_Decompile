/*
 * FUN_18004a86c at 18004a86c
 * undefined __fastcall FUN_18004a86c(longlong param_1, uint param_2, longlong param_3)
 * Address ranges: 18004a86c-18004a8ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004a86c(longlong param_1,uint param_2,longlong param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (param_3 != *(longlong *)(param_1 + 0x68 + uVar1 * 8)) {
    FUN_180049954(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x150))
              (*(longlong **)(param_1 + 0x688),uVar1,param_3);
    *(longlong *)(param_1 + 0x68 + uVar1 * 8) = param_3;
  }
  return;
}

