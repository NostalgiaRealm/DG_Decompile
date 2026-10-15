/*
 * FUN_1800e2d18 at 1800e2d18
 * undefined __fastcall FUN_1800e2d18(longlong param_1, ulonglong param_2, ulonglong param_3, uint param_4, uint param_5)
 * Address ranges: 1800e2d18-1800e2dc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e2d18(longlong param_1,ulonglong param_2,ulonglong param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  
  if ((((*(longlong *)(param_1 + 0xb10) != 0) && (param_2 != 0)) &&
      (uVar1 = FUN_1800ea5c8(*(longlong **)(param_1 + 0xb18),param_2,param_3,param_4,
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
    FUN_1800e23ec(param_1,param_2,(int)param_3,uVar1,param_5);
  }
  return;
}

