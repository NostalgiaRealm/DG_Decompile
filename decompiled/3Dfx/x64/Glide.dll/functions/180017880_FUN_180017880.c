/*
 * FUN_180017880 at 180017880
 * undefined __fastcall FUN_180017880(longlong param_1, int param_2, uint param_3, uint param_4)
 * Address ranges: 180017880-1800178fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180017880(longlong param_1,int param_2,uint param_3,uint param_4)

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
      if ((param_3 != *(byte *)(lVar2 + 0x161 + (longlong)plVar1)) ||
         (param_4 != *(byte *)(lVar2 + 0x162 + (longlong)plVar1))) {
        (**(code **)(*plVar1 + 0x260))();
        *(char *)(lVar2 + 0x161 + *(longlong *)(param_1 + 0x18)) = (char)param_3;
        *(char *)(lVar2 + 0x162 + *(longlong *)(param_1 + 0x18)) = (char)param_4;
      }
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

