/*
 * FUN_100090cd at 100090cd
 * undefined4 __thiscall FUN_100090cd(void * this, int * param_1, int param_2, int param_3, uint param_4, int param_5, int param_6, int param_7, int param_8, undefined4 param_9)
 * Address ranges: 100090cd-10009224
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_100090cd(void *this,int *param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
            int param_7,int param_8,undefined4 param_9)

{
  int iVar1;
  bool bVar2;
  
  FUN_10005e41((int)this);
  iVar1 = *(int *)(&DAT_100d1728 + param_2 * 4);
  if (param_1[2] == 0) {
    FUN_10008d84(this,param_1,iVar1,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  else {
    (**(code **)(**(int **)((int)this + 0x14) + 0xa4))
              (iVar1,*param_1,param_1[2],param_8,param_9,param_4,param_6,
               *(int *)(&DAT_100d16f0 + iVar1 * 8) * param_5 + *(int *)(&DAT_100d16f4 + iVar1 * 8),0
               ,param_7 == 0x66);
  }
  if ((*(char *)((int)this + 0xd8d) == '\0') &&
     (*(char *)(*(int *)((int)this + 0xc) + 0x75e) == '\0')) {
    bVar2 = false;
    if (*(char *)((int)this + 0x2a1) == '\0') goto LAB_100091ba;
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
LAB_100091ba:
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
  FUN_1000623b(this,'\x01');
  return 0;
}

