/*
 * FUN_1800176e0 at 1800176e0
 * undefined __fastcall FUN_1800176e0(longlong param_1, int param_2, uint param_3, uint param_4, uint param_5, uint param_6, int param_7, int param_8)
 * Address ranges: 1800176e0-18001780c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800176e0(longlong param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  int param_7,int param_8)

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
      if ((((param_3 != *(byte *)(lVar2 + 0x165 + (longlong)plVar1)) ||
           (param_4 != *(byte *)(lVar2 + 0x166 + (longlong)plVar1))) ||
          (param_5 != *(byte *)(lVar2 + 0x167 + (longlong)plVar1))) ||
         (((param_6 != *(byte *)(lVar2 + 0x168 + (longlong)plVar1) ||
           (param_7 != *(int *)(lVar2 + 0x169 + (longlong)plVar1))) ||
          (param_8 != *(int *)(lVar2 + 0x16d + (longlong)plVar1))))) {
        (**(code **)(*plVar1 + 0x288))();
        *(char *)(lVar2 + 0x165 + *(longlong *)(param_1 + 0x18)) = (char)param_3;
        *(char *)(lVar2 + 0x166 + *(longlong *)(param_1 + 0x18)) = (char)param_4;
        *(char *)(lVar2 + 0x167 + *(longlong *)(param_1 + 0x18)) = (char)param_5;
        *(char *)(lVar2 + 0x168 + *(longlong *)(param_1 + 0x18)) = (char)param_6;
        *(int *)(lVar2 + 0x169 + *(longlong *)(param_1 + 0x18)) = param_7;
        *(int *)(lVar2 + 0x16d + *(longlong *)(param_1 + 0x18)) = param_8;
      }
      FUN_180015fec(param_1);
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

