/*
 * FUN_1800486c8 at 1800486c8
 * undefined __fastcall FUN_1800486c8(longlong param_1, uint param_2, longlong param_3)
 * Address ranges: 1800486c8-180048707
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800486c8(longlong param_1,uint param_2,longlong param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (param_3 != *(longlong *)(param_1 + 0x68 + uVar1 * 8)) {
    FUN_1800477f0(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x140))
              (*(longlong **)(param_1 + 0x688),uVar1,param_3);
    *(longlong *)(param_1 + 0x68 + uVar1 * 8) = param_3;
  }
  return;
}

