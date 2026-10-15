/*
 * FUN_180048260 at 180048260
 * undefined __fastcall FUN_180048260(longlong param_1, uint param_2, longlong param_3)
 * Address ranges: 180048260-18004829f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048260(longlong param_1,uint param_2,longlong param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (param_3 != *(longlong *)(param_1 + 0x68 + uVar1 * 8)) {
    FUN_180047348(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x150))
              (*(longlong **)(param_1 + 0x688),uVar1,param_3);
    *(longlong *)(param_1 + 0x68 + uVar1 * 8) = param_3;
  }
  return;
}

