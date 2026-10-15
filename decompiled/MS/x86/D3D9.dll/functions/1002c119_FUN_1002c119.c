/*
 * FUN_1002c119 at 1002c119
 * undefined __thiscall FUN_1002c119(void * this, char param_1, char param_2)
 * Address ranges: 1002c119-1002c160
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002c119(void *this,char param_1,char param_2)

{
  void *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  RECT local_34 [3];
  
  iVar2 = (**(code **)(*(int *)this + 0x14))();
  cVar1 = (**(code **)(*(int *)this + 0x50))(local_34);
  this_00 = DAT_100dea74;
  if (cVar1 != '\0') {
    iVar3 = (**(code **)(*(int *)this + 0x10))();
    FUN_100cd938(this_00,iVar2,local_34,iVar3,param_2,param_1);
  }
  return;
}

