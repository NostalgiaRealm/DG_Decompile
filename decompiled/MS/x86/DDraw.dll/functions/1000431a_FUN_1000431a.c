/*
 * FUN_1000431a at 1000431a
 * undefined __thiscall FUN_1000431a(void * this, char param_1, char param_2)
 * Address ranges: 1000431a-10004361
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000431a(void *this,char param_1,char param_2)

{
  void *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  RECT local_34 [3];
  
  iVar2 = (**(code **)(*(int *)this + 0x14))();
  cVar1 = (**(code **)(*(int *)this + 0x50))(local_34);
  this_00 = DAT_1006c210;
  if (cVar1 != '\0') {
    iVar3 = (**(code **)(*(int *)this + 0x10))();
    FUN_1005eea1(this_00,iVar2,local_34,iVar3,param_2,param_1);
  }
  return;
}

