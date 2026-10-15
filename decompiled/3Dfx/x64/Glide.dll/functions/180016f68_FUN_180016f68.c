/*
 * FUN_180016f68 at 180016f68
 * undefined __fastcall FUN_180016f68(longlong param_1, int param_2, int param_3, int param_4, int param_5)
 * Address ranges: 180016f68-18001701f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180016f68(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  longlong *plVar1;
  longlong lVar2;
  RECT local_28;
  RECT local_18;
  
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    local_18.left = 0;
    local_18.top = 0;
    local_28.bottom = param_5;
    local_18.right = *(LONG *)(*(longlong *)(param_1 + 0x18) + 0xa8);
    local_18.bottom = *(LONG *)(*(longlong *)(param_1 + 0x18) + 0xac);
    local_28.left = param_2;
    local_28.top = param_3;
    local_28.right = param_4;
    IntersectRect(&local_28,&local_28,&local_18);
    plVar1 = *(longlong **)(param_1 + 0x18);
    if ((((local_28.left != *(int *)((longlong)plVar1 + 0x11a)) ||
         (local_28.top != *(int *)((longlong)plVar1 + 0x11e))) ||
        (local_28.right != *(int *)((longlong)plVar1 + 0x122))) ||
       (local_28.bottom != *(int *)((longlong)plVar1 + 0x126))) {
      (**(code **)(*plVar1 + 0x198))(plVar1,&local_28);
      lVar2 = *(longlong *)(param_1 + 0x18);
      *(ulonglong *)(lVar2 + 0x11a) = CONCAT44(local_28.top,local_28.left);
      *(ulonglong *)(lVar2 + 0x122) = CONCAT44(local_28.bottom,local_28.right);
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

