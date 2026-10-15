/*
 * FUN_1800481d8 at 1800481d8
 * undefined __fastcall FUN_1800481d8(longlong param_1, uint param_2, longlong param_3)
 * Address ranges: 1800481d8-18004821e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800481d8(longlong param_1,uint param_2,longlong param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (param_3 != *(longlong *)(param_1 + 0x68 + uVar1 * 8)) {
    FUN_180047348(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x100))
              (*(longlong **)(param_1 + 0x688),uVar1,param_3);
    *(undefined1 *)(param_1 + 0x674) = 1;
    *(longlong *)(param_1 + 0x68 + uVar1 * 8) = param_3;
  }
  return;
}

