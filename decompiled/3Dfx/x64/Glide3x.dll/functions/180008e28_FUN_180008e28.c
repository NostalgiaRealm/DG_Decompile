/*
 * FUN_180008e28 at 180008e28
 * undefined __fastcall FUN_180008e28(WNDPROC param_1, uint param_2, undefined8 * param_3, int param_4, int param_5)
 * Address ranges: 180008e28-180008edd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180008e28(WNDPROC param_1,uint param_2,undefined8 *param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  
  if (param_1[100] != (WNDPROC)0x0) {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    if (((param_2 < 3) ||
        ((param_2 == 3 &&
         (uVar1 = FUN_1800079d4(param_1), (&DAT_18006d29d)[(ulonglong)uVar1 * 0x20] != '\0')))) &&
       (iVar2 = 0, 0 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833))) {
      do {
        FUN_18000aeb4(*(longlong *)(param_1 + 0x18),iVar2,param_2,param_3,param_4,param_5 + 1);
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x2b8))
                  (*(longlong **)(param_1 + 0x18),iVar2,param_2,param_3,param_4,param_5 + 1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833));
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
    return;
  }
  return;
}

