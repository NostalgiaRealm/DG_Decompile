/*
 * FUN_100083d9 at 100083d9
 * undefined4 __thiscall FUN_100083d9(void * this, int * param_1, int param_2, int param_3, int param_4, undefined4 param_5)
 * Address ranges: 100083d9-10008516
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_100083d9(void *this,int *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  bool bVar2;
  
  FUN_100055f6((int)this);
  iVar1 = *(int *)(&DAT_100af648 + param_2 * 4);
  if (param_1[2] == 0) {
    FUN_100081ce(this,param_1,iVar1,0,0,param_3,0,0,param_4,param_5);
  }
  else {
    (**(code **)(**(int **)((int)this + 0x14) + 0xa0))
              (iVar1,*param_1,param_1[2],param_4,param_5,
               *(int *)(&DAT_100af610 + iVar1 * 8) * param_3 + *(int *)(&DAT_100af614 + iVar1 * 8));
  }
  FUN_10005950(this,'\0');
  if ((*(char *)((int)this + 0xac9) == '\0') &&
     (*(char *)(*(int *)((int)this + 0xc) + 0x75e) == '\0')) {
    bVar2 = false;
    if (*(char *)((int)this + 0xfd) == '\0') goto LAB_100084b5;
  }
  else {
    bVar2 = true;
  }
  (**(code **)(**(int **)((int)this + 0x14) + 0x14))();
  (**(code **)(**(int **)((int)this + 0x18) + 0x14))
            (*(undefined4 *)((int)this + 0xf4),*(undefined4 *)((int)this + 0xf8));
  if ((bVar2) &&
     ((**(code **)(**(int **)((int)this + 0x18) + 0x14))
                (*(undefined4 *)((int)this + 0xf4),*(undefined4 *)((int)this + 0xf8)),
     *(char *)(*(int *)((int)this + 0xc) + 0x75f) != '\0')) {
    DebugBreak();
  }
LAB_100084b5:
  if (*(char *)((int)this + 0xfe) == '\0') {
    (**(code **)(**(int **)((int)this + 0x18) + 0xc))();
    if (*(int **)((int)this + 0x28) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x28) + 0xc))();
    }
    *(undefined1 *)((int)this + 0xfe) = 1;
  }
  if (*(char *)((int)this + 0xff) != '\0') {
    if (*(int *)((int)this + 0x2f4) != 0) {
      (**(code **)(**(int **)(*(int *)(*(int *)((int)this + 0x18) + 4) + 0x50) + 0x20))
                (*(undefined4 *)((int)this + 0xf4),*(undefined4 *)((int)this + 0xf8),1);
    }
    *(undefined1 *)((int)this + 0xff) = 0;
  }
  return 0;
}

