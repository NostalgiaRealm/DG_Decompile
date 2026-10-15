/*
 * FUN_18004320c at 18004320c
 * undefined4 __fastcall FUN_18004320c(undefined8 param_1, longlong * param_2, undefined8 param_3, longlong param_4, longlong param_5)
 * Address ranges: 18004320c-1800432ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_18004320c(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4,
             longlong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar2 = (**(code **)(**(longlong **)(*param_2 + 0x18) + 0x40))();
  if (uVar2 < (ulonglong)param_2[3]) {
    lVar1 = param_2[1];
    if (param_4 == *param_2) {
      if (param_5 == lVar1) {
        uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      }
      else if (lVar1 != -1) {
        FUN_18004782c(lVar1 + 8,'\0');
      }
    }
    else {
      if (lVar1 != -1) {
        FUN_18004782c(lVar1 + 8,'\0');
      }
      if (param_5 != -1) {
        FUN_18004782c(param_5 + 8,'\0');
      }
      (**(code **)(**(longlong **)(param_4 + 0x10) + 0x78))
                (*(longlong **)(param_4 + 0x10),*(undefined8 *)(*param_2 + 0x18),param_2[3]);
    }
  }
  return uVar3;
}

