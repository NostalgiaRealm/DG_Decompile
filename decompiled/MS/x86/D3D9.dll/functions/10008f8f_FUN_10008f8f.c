/*
 * FUN_10008f8f at 10008f8f
 * undefined4 __thiscall FUN_10008f8f(void * this, int * param_1, int param_2, int param_3, int param_4, undefined4 param_5)
 * Address ranges: 10008f8f-100090cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10008f8f(void *this,int *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  bool bVar2;
  
  FUN_10005e41((int)this);
  iVar1 = *(int *)(&DAT_100d1728 + param_2 * 4);
  if (param_1[2] == 0) {
    FUN_10008d84(this,param_1,iVar1,0,0,param_3,0,0,param_4,param_5);
  }
  else {
    (**(code **)(**(int **)((int)this + 0x14) + 0xa0))
              (iVar1,*param_1,param_1[2],param_4,param_5,
               *(int *)(&DAT_100d16f0 + iVar1 * 8) * param_3 + *(int *)(&DAT_100d16f4 + iVar1 * 8));
  }
  FUN_1000623b(this,'\0');
  if ((*(char *)((int)this + 0xd8d) == '\0') &&
     (*(char *)(*(int *)((int)this + 0xc) + 0x75e) == '\0')) {
    bVar2 = false;
    if (*(char *)((int)this + 0x2a1) == '\0') goto LAB_1000906b;
  }
  else {
    bVar2 = true;
  }
  (**(code **)(**(int **)((int)this + 0x14) + 0x14))();
  (**(code **)(**(int **)((int)this + 0x18) + 0x14))
            (*(undefined4 *)((int)this + 0x298),*(undefined4 *)((int)this + 0x29c));
  if ((bVar2) &&
     ((**(code **)(**(int **)((int)this + 0x18) + 0x14))
                (*(undefined4 *)((int)this + 0x298),*(undefined4 *)((int)this + 0x29c)),
     *(char *)(*(int *)((int)this + 0xc) + 0x75f) != '\0')) {
    DebugBreak();
  }
LAB_1000906b:
  if (*(char *)((int)this + 0x2a2) == '\0') {
    (**(code **)(**(int **)((int)this + 0x18) + 0xc))();
    if (*(int **)((int)this + 0x28) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x28) + 0xc))();
    }
    *(undefined1 *)((int)this + 0x2a2) = 1;
  }
  if (*(char *)((int)this + 0x2a3) != '\0') {
    if (*(int *)((int)this + 0x498) != 0) {
      (**(code **)(**(int **)(*(int *)(*(int *)((int)this + 0x18) + 4) + 0x50) + 0x20))
                (*(undefined4 *)((int)this + 0x298),*(undefined4 *)((int)this + 0x29c),1);
    }
    *(undefined1 *)((int)this + 0x2a3) = 0;
  }
  return 0;
}

