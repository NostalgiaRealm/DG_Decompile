/*
 * FUN_18004a068 at 18004a068
 * undefined __fastcall FUN_18004a068(longlong param_1, ulonglong param_2, ulonglong param_3, uint param_4, uint param_5)
 * Address ranges: 18004a068-18004a113
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004a068(longlong param_1,ulonglong param_2,ulonglong param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  
  if ((((*(longlong *)(param_1 + 0xb10) != 0) && (param_2 != 0)) &&
      (uVar1 = FUN_180045a8c(*(longlong **)(param_1 + 0xb18),param_2,param_3,param_4,
                             *(longlong *)(param_1 + 0xb10),param_1,param_5,
                             *(longlong *)(param_1 + 0xb78)),
      *(int *)(*(longlong *)(param_1 + 0xb10) + 0x30) != 3)) && (uVar1 != param_5)) {
    if (uVar1 == 0) {
      uVar2 = param_5;
      if (((-(uint)((param_4 & 5) != 0) & 0x330f) + 0xcc0 & param_5) == param_5) {
        uVar2 = 0;
      }
      if (uVar2 == 0) {
        return;
      }
    }
    FUN_18004973c(param_1,param_2,(int)param_3,uVar1,param_5);
  }
  return;
}

