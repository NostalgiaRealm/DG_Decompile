/*
 * FUN_1800182f0 at 1800182f0
 * undefined __cdecl FUN_1800182f0(longlong param_1, int param_2, int param_3, int param_4, int param_5)
 * Address ranges: 1800182f0-1800183ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800182f0(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  longlong *plVar1;
  longlong lVar2;
  RECT local_50;
  RECT local_40;
  
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_1800608b0((uint *)(param_1 + 0x60));
    local_40.left = 0;
    local_40.top = 0;
    local_40.right = *(LONG *)(*(longlong *)(param_1 + 0x18) + 0xa8);
    local_40.bottom = *(LONG *)(*(longlong *)(param_1 + 0x18) + 0xac);
    local_50.left = param_2;
    local_50.top = param_3;
    local_50.right = param_4;
    local_50.bottom = param_5;
    IntersectRect(&local_50,&local_50,&local_40);
    plVar1 = *(longlong **)(param_1 + 0x18);
    if ((((local_50.left != *(int *)((longlong)plVar1 + 0x11a)) ||
         (local_50.top != *(int *)((longlong)plVar1 + 0x11e))) ||
        (local_50.right != *(int *)((longlong)plVar1 + 0x122))) ||
       (local_50.bottom != *(int *)((longlong)plVar1 + 0x126))) {
      (**(code **)(*plVar1 + 0x198))(plVar1,&local_50);
      lVar2 = *(longlong *)(param_1 + 0x18);
      *(ulonglong *)(lVar2 + 0x122) = CONCAT44(local_50.bottom,local_50.right);
      *(ulonglong *)(lVar2 + 0x11a) = CONCAT44(local_50.top,local_50.left);
    }
    FUN_1800608a0((uint *)(param_1 + 0x60));
  }
  return;
}

