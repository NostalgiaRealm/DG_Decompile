/*
 * FUN_10004456 at 10004456
 * int __thiscall FUN_10004456(void * this, int * param_1, int * param_2, undefined4 param_3, int * param_4)
 * Address ranges: 10004456-10004489
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10004456(void *this,int *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_10002fa2(*(void **)((int)this + 0xd90),param_1,*(int *)((int)this + 0xdc8),
                       *(HWND *)((int)this + 0xdcc),param_2,param_4);
  iVar2 = 0;
  if (iVar1 < 0) {
    iVar2 = iVar1;
  }
  return iVar2;
}

