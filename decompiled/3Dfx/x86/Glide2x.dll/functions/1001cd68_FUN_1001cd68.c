/*
 * FUN_1001cd68 at 1001cd68
 * char __thiscall FUN_1001cd68(void * this, uint param_1, int param_2, int param_3, int param_4, char param_5, int param_6, char param_7)
 * Address ranges: 1001cd68-1001ce04
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall
FUN_1001cd68(void *this,uint param_1,int param_2,int param_3,int param_4,char param_5,int param_6,
            char param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = '\0';
  if (((param_1 != 0) && (param_3 != 0xff)) &&
     (iVar2 = FUN_1001bcd0(param_3,param_2 == 2), iVar2 == 0)) {
    return '\0';
  }
  (**(code **)(*(int *)this + 0x15c))();
  iVar2 = FUN_1001c41a(param_2);
  if (iVar2 != -1) {
    iVar3 = (**(code **)(**(int **)((int)this + 0x315c) + 0x2c))(iVar2);
    if ((param_2 == *(int *)((int)this + 0x2964)) || (*(char *)(iVar3 + 0x48) != '\0')) {
      (**(code **)(*(int *)this + 0x150))();
    }
    cVar1 = FUN_1001c75d(this,param_1,iVar2,param_3,param_4,param_5,param_6,param_7);
  }
  (**(code **)(*(int *)this + 0x160))();
  return cVar1;
}

