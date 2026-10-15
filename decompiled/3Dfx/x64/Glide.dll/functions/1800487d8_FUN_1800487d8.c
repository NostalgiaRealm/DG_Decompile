/*
 * FUN_1800487d8 at 1800487d8
 * undefined __fastcall FUN_1800487d8(longlong param_1, uint param_2, longlong param_3)
 * Address ranges: 1800487d8-18004881d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800487d8(longlong param_1,uint param_2,longlong param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (param_3 != *(longlong *)(param_1 + 0x168 + uVar1 * 8)) {
    FUN_1800477f0(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x138))
              (*(longlong **)(param_1 + 0x688),uVar1,param_3);
    *(longlong *)(param_1 + 0x168 + uVar1 * 8) = param_3;
  }
  return;
}

