/*
 * FUN_18004d0ec at 18004d0ec
 * undefined __fastcall FUN_18004d0ec(longlong param_1, ulonglong param_2, uint param_3, undefined8 param_4, longlong * param_5)
 * Address ranges: 18004d0ec-18004d13e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004d0ec(longlong param_1,ulonglong param_2,uint param_3,undefined8 param_4,
                  longlong *param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = (param_2 & 0xffffffff) * 0x18c0 + param_1;
  uVar2 = (ulonglong)param_3;
  if (*(longlong *)(lVar1 + 0x790 + uVar2 * 8) != *param_5) {
    *(longlong *)(lVar1 + 0x790 + uVar2 * 8) = *param_5;
    (**(code **)(**(longlong **)(lVar1 + 0x6b8) + 0x50))
              (*(longlong **)(lVar1 + 0x6b8),uVar2,1,lVar1 + uVar2 * 8 + 0x790);
  }
  return;
}

