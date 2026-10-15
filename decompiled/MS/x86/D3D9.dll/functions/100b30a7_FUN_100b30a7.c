/*
 * FUN_100b30a7 at 100b30a7
 * int * __cdecl FUN_100b30a7(undefined4 param_1)
 * Address ranges: 100b30a7-100b3119
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __cdecl FUN_100b30a7(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *this;
  int *piVar3;
  
  iVar1 = FUN_100cfd55(0x15654);
  this = (int *)(iVar1 + 0x43U & 0xffffffc0);
  this[-1] = iVar1;
  FUN_100b8524(this,param_1,&PTR_s_DGD3D11ROOT_100dd540);
  *this = (int)&PTR_LAB_100d8780;
  piVar3 = this + 0x144;
  iVar1 = 0x10;
  do {
    FUN_100b2f05(piVar3);
    piVar3 = piVar3 + 0x544;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  uVar2 = FUN_100b6f00((int)this);
  if ((char)uVar2 == '\0') {
    (**(code **)(*this + 0x40))(0);
    FUN_100cfe2d((LPVOID)this[-1]);
    this = (int *)0x0;
  }
  return this;
}

