/*
 * FUN_180017994 at 180017994
 * undefined __fastcall FUN_180017994(longlong param_1, int param_2, uint param_3, uint param_4)
 * Address ranges: 180017994-180017a0e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180017994(longlong param_1,int param_2,uint param_3,uint param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    if (param_2 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833)) {
      plVar1 = *(longlong **)(param_1 + 0x18);
      lVar2 = (longlong)param_2 * 0x41;
      if ((param_3 != *(byte *)(lVar2 + 0x163 + (longlong)plVar1)) ||
         (param_4 != *(byte *)(lVar2 + 0x164 + (longlong)plVar1))) {
        (**(code **)(*plVar1 + 0x270))();
        *(char *)(lVar2 + 0x163 + *(longlong *)(param_1 + 0x18)) = (char)param_3;
        *(char *)(lVar2 + 0x164 + *(longlong *)(param_1 + 0x18)) = (char)param_4;
      }
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

