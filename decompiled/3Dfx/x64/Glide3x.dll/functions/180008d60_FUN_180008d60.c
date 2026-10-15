/*
 * FUN_180008d60 at 180008d60
 * undefined __fastcall FUN_180008d60(WNDPROC param_1, int param_2, uint param_3, undefined8 * param_4)
 * Address ranges: 180008d60-180008e24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180008d60(WNDPROC param_1,int param_2,uint param_3,undefined8 *param_4)

{
  uint uVar1;
  
  if (param_1[100] != (WNDPROC)0x0) {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    uVar1 = FUN_1800079d4(param_1);
    if ((((&DAT_18006d299)[(ulonglong)uVar1 * 0x20] == '\0') &&
        (*(char *)(*(longlong *)(param_1 + 0x30) + 0x851) != '\0')) && (param_2 != 0)) {
      if ((param_2 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833)) && (param_3 < 3)) {
        FUN_18000aeb4(*(longlong *)(param_1 + 0x18),param_2,param_3,param_4,0,0x100);
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x2b8))
                  (*(longlong **)(param_1 + 0x18),param_2,param_3,param_4,0,0x100);
      }
    }
    else {
      FUN_180008e28(param_1,param_3,param_4,0,0xff);
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

