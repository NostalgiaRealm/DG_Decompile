/*
 * FUN_100065cb at 100065cb
 * bool __thiscall FUN_100065cb(void * this, int param_1)
 * Address ranges: 100065cb-10006661
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_100065cb(void *this,int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  
  FUN_100064b8((int)this);
  iVar1 = *(int *)((int)this + 0x90);
  bVar3 = FUN_10005876((void *)((int)this + 0x4c),*(HANDLE *)((int)this + 0xc4),
                       *(int *)((int)this + 0x10) * 0x40 + 0xfffU & 0xfffff000,param_1,
                       *(char *)((int)this + 0xaf));
  *(undefined1 *)((int)this + 0xaf) = 0;
  bVar5 = 1;
  if ((*(int *)((int)this + 0xc4) == 0) && ((*(uint *)((int)this + 0x34) >> 5 & 1) != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((iVar1 == 0) && (bVar3)) && (bVar2)) {
    cVar4 = (**(code **)(**(int **)((int)this + 0x50) + 0x14))
                      (*(undefined4 *)((int)this + 0x6c),*(undefined4 *)((int)this + 0x70));
    if (cVar4 == '\0') goto LAB_10006652;
  }
  bVar5 = 0;
LAB_10006652:
  *(byte *)((int)this + 0xae) = *(byte *)((int)this + 0xae) | bVar5;
  return bVar3;
}

