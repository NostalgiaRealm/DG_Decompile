/*
 * FUN_10006771 at 10006771
 * undefined __thiscall FUN_10006771(void * this, int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 10006771-1000682a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10006771(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  RECT local_24;
  tagRECT local_14;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    local_14.left = param_1;
    local_14.top = param_2;
    local_14.right = param_3;
    local_14.bottom = param_4;
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = *(LONG *)(*(int *)((int)this + 0xc) + 0x98);
    local_24.bottom = *(LONG *)(*(int *)((int)this + 0xc) + 0x9c);
    IntersectRect(&local_14,&local_14,&local_24);
    piVar2 = *(int **)((int)this + 0xc);
    if ((((local_14.left != *(int *)((int)piVar2 + 0x10a)) ||
         (local_14.top != *(int *)((int)piVar2 + 0x10e))) ||
        (local_14.right != *(int *)((int)piVar2 + 0x112))) ||
       (local_14.bottom != *(int *)((int)piVar2 + 0x116))) {
      (**(code **)(*piVar2 + 0xdc))(&local_14);
      iVar3 = *(int *)((int)this + 0xc);
      *(LONG *)(iVar3 + 0x10a) = local_14.left;
      *(LONG *)(iVar3 + 0x10e) = local_14.top;
      *(LONG *)(iVar3 + 0x112) = local_14.right;
      *(LONG *)(iVar3 + 0x116) = local_14.bottom;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

