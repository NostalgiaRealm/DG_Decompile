/*
 * FUN_180017810 at 180017810
 * undefined __fastcall FUN_180017810(longlong param_1, int param_2, uint param_3, int param_4)
 * Address ranges: 180017810-180017886
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180017810(longlong param_1,int param_2,uint param_3,int param_4)

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
      if ((*(byte *)(lVar2 + 0x171 + (longlong)plVar1) != param_3) ||
         (*(int *)(lVar2 + 0x172 + (longlong)plVar1) != param_4)) {
        (**(code **)(*plVar1 + 0x298))();
        *(char *)(lVar2 + 0x171 + *(longlong *)(param_1 + 0x18)) = (char)param_3;
        *(int *)(lVar2 + 0x172 + *(longlong *)(param_1 + 0x18)) = param_4;
      }
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

