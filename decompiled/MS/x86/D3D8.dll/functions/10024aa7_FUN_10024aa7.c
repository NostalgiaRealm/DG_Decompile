/*
 * FUN_10024aa7 at 10024aa7
 * undefined __thiscall FUN_10024aa7(void * this, char param_1, char param_2)
 * Address ranges: 10024aa7-10024aee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10024aa7(void *this,char param_1,char param_2)

{
  void *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  RECT local_34 [3];
  
  iVar2 = (**(code **)(*(int *)this + 0x14))();
  cVar1 = (**(code **)(*(int *)this + 0x50))(local_34);
  this_00 = DAT_100ba2b4;
  if (cVar1 != '\0') {
    iVar3 = (**(code **)(*(int *)this + 0x10))();
    FUN_100ab069(this_00,iVar2,local_34,iVar3,param_2,param_1);
  }
  return;
}

