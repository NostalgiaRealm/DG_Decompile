/*
 * FUN_1003ed72 at 1003ed72
 * char __thiscall FUN_1003ed72(void * this, int * param_1, int param_2, int param_3, undefined4 * param_4, char param_5)
 * Address ranges: 1003ed72-1003ee09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall
FUN_1003ed72(void *this,int *param_1,int param_2,int param_3,undefined4 *param_4,char param_5)

{
  char cVar1;
  int iVar2;
  int local_18;
  int local_14;
  void *local_10;
  int local_c [2];
  
  cVar1 = '\0';
  local_18 = 0;
  local_14 = 0;
  local_c[0] = 0;
  local_10 = this;
  iVar2 = (**(code **)(*param_1 + 0x20))(param_1,0,&local_18,local_c);
  if (-1 < iVar2) {
    cVar1 = FUN_10039ca0(*(void **)((int)this + 0x8e4));
    if (cVar1 != '\0') {
      FUN_100500b0((undefined4 *)(local_c[0] + param_2),param_4,param_3 - param_2);
    }
    local_14 = param_3;
    local_18 = param_2;
    (**(code **)(*param_1 + 0x24))(param_1,0,&local_18);
    if (param_5 != '\0') {
      (**(code **)(*param_1 + 0x24))(param_1,0,0);
    }
    FUN_1003d4be(local_10,(uint)param_1,0,1,0);
  }
  return cVar1;
}

