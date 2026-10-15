/*
 * _grClipWindow@16 at 180002918
 * undefined __cdecl _grClipWindow@16(int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 180002918-180002a1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grClipWindow_16(int param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  RECT local_50;
  RECT local_40;
  
                    /* 0x2918  21  _grClipWindow@16
                       0x2918  178  grClipWindow */
  lVar1 = FUN_180016878();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar1 + 0x60));
    local_40.left = 0;
    local_40.top = 0;
    local_40.right = *(LONG *)(*(longlong *)(lVar1 + 0x18) + 0xa8);
    local_40.bottom = *(LONG *)(*(longlong *)(lVar1 + 0x18) + 0xac);
    local_50.left = param_1;
    local_50.top = param_2;
    local_50.right = param_3;
    local_50.bottom = param_4;
    IntersectRect(&local_50,&local_50,&local_40);
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if ((((local_50.left != *(int *)((longlong)plVar2 + 0x11a)) ||
         (local_50.top != *(int *)((longlong)plVar2 + 0x11e))) ||
        (local_50.right != *(int *)((longlong)plVar2 + 0x122))) ||
       (local_50.bottom != *(int *)((longlong)plVar2 + 0x126))) {
      (**(code **)(*plVar2 + 0x198))(plVar2,&local_50);
      lVar3 = *(longlong *)(lVar1 + 0x18);
      *(ulonglong *)(lVar3 + 0x122) = CONCAT44(local_50.bottom,local_50.right);
      *(ulonglong *)(lVar3 + 0x11a) = CONCAT44(local_50.top,local_50.left);
    }
    FUN_1800608a0((uint *)(lVar1 + 0x60));
  }
  return;
}

