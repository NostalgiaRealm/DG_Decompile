/*
 * FUN_18004d1e0 at 18004d1e0
 * undefined __fastcall FUN_18004d1e0(longlong param_1, ulonglong param_2, uint param_3, undefined8 param_4, longlong * param_5, int * param_6, int * param_7)
 * Address ranges: 18004d1e0-18004d28c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004d1e0(longlong param_1,ulonglong param_2,uint param_3,undefined8 param_4,
                  longlong *param_5,int *param_6,int *param_7)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = (param_2 & 0xffffffff) * 0x18c0 + param_1;
  uVar2 = (ulonglong)param_3;
  if (((*(longlong *)(lVar1 + 0xa70 + uVar2 * 8) != *param_5) ||
      (*(int *)(lVar1 + 0xaf0 + uVar2 * 4) != *param_6)) ||
     (*(int *)(lVar1 + 0xb30 + uVar2 * 4) != *param_7)) {
    *(longlong *)(lVar1 + 0xa70 + uVar2 * 8) = *param_5;
    *(int *)(lVar1 + 0xaf0 + uVar2 * 4) = *param_6;
    *(int *)(lVar1 + 0xb30 + uVar2 * 4) = *param_7;
    (**(code **)(**(longlong **)(lVar1 + 0x6b8) + 0x90))
              (*(longlong **)(lVar1 + 0x6b8),uVar2,1,lVar1 + uVar2 * 8 + 0xa70,
               lVar1 + (uVar2 + 700) * 4,lVar1 + (uVar2 + 0x2cc) * 4);
  }
  return;
}

