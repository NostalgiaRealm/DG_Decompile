/*
 * FUN_18004a7a4 at 18004a7a4
 * undefined __fastcall FUN_18004a7a4(longlong param_1, uint param_2, longlong param_3)
 * Address ranges: 18004a7a4-18004a7e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004a7a4(longlong param_1,uint param_2,longlong param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (param_3 != *(longlong *)(param_1 + 0x68 + uVar1 * 8)) {
    FUN_180049954(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x130))
              (*(longlong **)(param_1 + 0x688),uVar1,param_3);
    *(longlong *)(param_1 + 0x68 + uVar1 * 8) = param_3;
  }
  return;
}

