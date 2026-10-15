/*
 * FUN_180017a10 at 180017a10
 * undefined __fastcall FUN_180017a10(longlong param_1, int param_2, uint param_3, undefined8 * param_4, int param_5, int param_6)
 * Address ranges: 180017a10-180017ae5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180017a10(longlong param_1,int param_2,uint param_3,undefined8 *param_4,int param_5,
                  int param_6)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    uVar1 = FUN_18001638c(param_1);
    if ((((&DAT_18006b169)[(ulonglong)uVar1 * 0x20] == '\0') &&
        (*(char *)(*(longlong *)(param_1 + 0x30) + 0x851) != '\0')) && (param_2 != 0)) {
      if ((param_2 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833)) && (param_3 < 3)) {
        FUN_18001e810(*(longlong *)(param_1 + 0x18),param_2,param_3,param_4,param_5,param_6 + 1);
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x278))
                  (*(longlong **)(param_1 + 0x18),param_2,param_3,param_4,param_5,param_6 + 1);
      }
    }
    else {
      FUN_180017ae8(param_1,param_3,param_4,param_5,param_6);
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

