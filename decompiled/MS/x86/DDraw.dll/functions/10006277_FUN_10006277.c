/*
 * FUN_10006277 at 10006277
 * int __thiscall FUN_10006277(void * this, uint param_1, uint param_2, int * param_3, int * param_4, char param_5)
 * Address ranges: 10006277-10006321
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_10006277(void *this,uint param_1,uint param_2,int *param_3,int *param_4,char param_5)

{
  char cVar1;
  int iVar2;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  iVar2 = 0;
  if ((*(uint *)((int)this + 0x34) >> 5 & 1) == 0) {
    cVar1 = (**(code **)(**(int **)((int)this + 0x50) + 0x14))
                      (*(undefined4 *)((int)this + 0x6c),*(undefined4 *)((int)this + 0x70));
    if (cVar1 != '\0') {
      local_14 = 0;
      local_10 = 0;
      local_c = FUN_10005029((int)this);
      local_8 = *(ushort *)((int)this + 0xe) - 1;
      cVar1 = (**(code **)(**(int **)((int)this + 0x50) + 0x38))
                        (*(undefined4 *)((int)this + 0x6c),*(undefined4 *)((int)this + 0x70),
                         *(undefined4 *)((int)this + 0xa4),*(undefined4 *)((int)this + 0xa8),
                         &local_14);
      *(char *)((int)this + 0xae) = cVar1;
      iVar2 = 2;
      if (cVar1 != '\0') {
        iVar2 = 0;
      }
      (**(code **)(**(int **)((int)this + 0x50) + 0x18))
                (*(undefined4 *)((int)this + 0x6c),*(undefined4 *)((int)this + 0x70),0);
    }
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    iVar2 = FUN_1000607a(this,param_1,param_2,param_3,param_4,param_5);
  }
  return iVar2;
}

