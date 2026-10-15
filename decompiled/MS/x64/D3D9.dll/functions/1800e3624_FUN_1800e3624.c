/*
 * FUN_1800e3624 at 1800e3624
 * undefined __fastcall FUN_1800e3624(longlong param_1, uint param_2, longlong param_3)
 * Address ranges: 1800e3624-1800e3663
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e3624(longlong param_1,uint param_2,longlong param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (param_3 != *(longlong *)(param_1 + 0x68 + uVar1 * 8)) {
    FUN_1800e2604(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x130))
              (*(longlong **)(param_1 + 0x688),uVar1,param_3);
    *(longlong *)(param_1 + 0x68 + uVar1 * 8) = param_3;
  }
  return;
}

