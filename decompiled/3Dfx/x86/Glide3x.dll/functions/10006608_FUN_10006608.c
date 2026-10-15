/*
 * FUN_10006608 at 10006608
 * undefined __thiscall FUN_10006608(void * this, uint param_1, uint param_2, uint param_3, uint param_4, int param_5)
 * Address ranges: 10006608-100066c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10006608(void *this,uint param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    piVar2 = *(int **)((int)this + 0xc);
    if ((((param_1 != *(byte *)((int)piVar2 + 0x14e)) || (param_2 != *(byte *)((int)piVar2 + 0x14f))
         ) || (param_3 != *(byte *)(piVar2 + 0x54))) ||
       ((param_4 != *(byte *)((int)piVar2 + 0x151) || (param_5 != *(int *)((int)piVar2 + 0x152)))))
    {
      (**(code **)(*piVar2 + 0xcc))(param_1,param_2,param_3,param_4,param_5);
      *(char *)(*(int *)((int)this + 0xc) + 0x14e) = (char)param_1;
      *(char *)(*(int *)((int)this + 0xc) + 0x14f) = (char)param_2;
      *(char *)(*(int *)((int)this + 0xc) + 0x150) = (char)param_3;
      *(char *)(*(int *)((int)this + 0xc) + 0x151) = (char)param_4;
      *(int *)(*(int *)((int)this + 0xc) + 0x152) = param_5;
      FUN_10005d7a((int)this);
      *(undefined4 *)(*(int *)((int)this + 0xc) + 0x294) = 0;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

