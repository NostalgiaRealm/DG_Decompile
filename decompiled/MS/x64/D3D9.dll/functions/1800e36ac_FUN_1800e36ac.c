/*
 * FUN_1800e36ac at 1800e36ac
 * undefined __fastcall FUN_1800e36ac(longlong param_1, uint param_2, longlong param_3)
 * Address ranges: 1800e36ac-1800e36eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e36ac(longlong param_1,uint param_2,longlong param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (param_3 != *(longlong *)(param_1 + 0x68 + uVar1 * 8)) {
    FUN_1800e2604(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x140))
              (*(longlong **)(param_1 + 0x688),uVar1,param_3);
    *(longlong *)(param_1 + 0x68 + uVar1 * 8) = param_3;
  }
  return;
}

