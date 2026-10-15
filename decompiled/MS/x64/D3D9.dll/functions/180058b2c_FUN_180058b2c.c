/*
 * FUN_180058b2c at 180058b2c
 * undefined __fastcall FUN_180058b2c(longlong param_1, longlong param_2, uint param_3)
 * Address ranges: 180058b2c-180058bc8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180058b2c(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = 0;
    lVar4 = (ulonglong)param_3 * 0x1ac0 + param_2;
    if (*(int *)(param_1 + 0x10) == 0) {
      plVar3 = (longlong *)&DAT_00000008;
      plVar2 = (longlong *)&DAT_00000038;
      goto LAB_180058b79;
    }
    do {
      plVar3 = (longlong *)(*(longlong *)(param_1 + 8) + 0x10 + (ulonglong)uVar1 * 0x70);
      plVar2 = (longlong *)(*(longlong *)(param_1 + 8) + 0x40 + (ulonglong)uVar1 * 0x70);
LAB_180058b79:
      if (*plVar3 != 0) {
        FUN_1800e7600((longlong *)(lVar4 + 0x22d8),*plVar3);
        (**(code **)(*(longlong *)*plVar3 + 0x10))();
      }
      if (*plVar2 != 0) {
        FUN_1800e7600((longlong *)(lVar4 + 0x22d8),*plVar2);
        (**(code **)(*(longlong *)*plVar2 + 0x10))();
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x10));
  }
  return;
}

