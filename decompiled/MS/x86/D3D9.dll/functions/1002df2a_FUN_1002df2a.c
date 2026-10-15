/*
 * FUN_1002df2a at 1002df2a
 * int __thiscall FUN_1002df2a(void * this, uint param_1, uint param_2, int * param_3, int * param_4, char param_5)
 * Address ranges: 1002df2a-1002dfa0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_1002df2a(void *this,uint param_1,uint param_2,int *param_3,int *param_4,char param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((*(uint *)((int)this + 0x34) >> 5 & 1) == 0) {
    cVar1 = (**(code **)(**(int **)((int)this + 0x50) + 0x14))
                      (*(undefined4 *)((int)this + 0x6c),*(undefined4 *)((int)this + 0x70));
    if (cVar1 != '\0') {
      bVar2 = FUN_1002e1ae((int)this);
      iVar3 = (uint)(bVar2 ^ 1) * 2;
      (**(code **)(**(int **)((int)this + 0x50) + 0x18))
                (*(undefined4 *)((int)this + 0x6c),*(undefined4 *)((int)this + 0x70),0);
    }
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    iVar3 = FUN_1002dd2d(this,param_1,param_2,param_3,param_4,param_5);
  }
  return iVar3;
}

