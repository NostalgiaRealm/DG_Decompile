/*
 * FUN_1006b7a1 at 1006b7a1
 * int __thiscall FUN_1006b7a1(void * this, int param_1)
 * Address ranges: 1006b7a1-1006b7ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1006b7a1(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  iVar2 = param_1 * 0x20;
  local_8 = 0;
  iVar1 = *(int *)((int)this + 0x14);
  local_10 = *(undefined4 *)(iVar2 + iVar1);
  local_c = *(int *)(iVar2 + 4 + iVar1) + *(int *)(iVar2 + iVar1);
  (**(code **)(**(int **)((int)this + 0xc) + 0x20))(*(int **)((int)this + 0xc),0,&local_10,&local_8)
  ;
  return *(int *)(iVar2 + *(int *)((int)this + 0x14)) + local_8;
}

