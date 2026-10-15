/*
 * FUN_18004a7e4 at 18004a7e4
 * undefined __fastcall FUN_18004a7e4(longlong param_1, uint param_2, longlong param_3)
 * Address ranges: 18004a7e4-18004a82a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004a7e4(longlong param_1,uint param_2,longlong param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (param_3 != *(longlong *)(param_1 + 0x68 + uVar1 * 8)) {
    FUN_180049954(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x100))
              (*(longlong **)(param_1 + 0x688),uVar1,param_3);
    *(undefined1 *)(param_1 + 0x674) = 1;
    *(longlong *)(param_1 + 0x68 + uVar1 * 8) = param_3;
  }
  return;
}

