/*
 * FUN_10090ea8 at 10090ea8
 * int * __cdecl FUN_10090ea8(undefined4 param_1)
 * Address ranges: 10090ea8-10090f1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __cdecl FUN_10090ea8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *this;
  int *piVar3;
  
  iVar1 = FUN_100ad475(0x15654);
  this = (int *)(iVar1 + 0x43U & 0xffffffc0);
  this[-1] = iVar1;
  FUN_10095ed1(this,param_1,&PTR_s_DGD3D11ROOT_100b8f90);
  *this = (int)&PTR_LAB_100b4d48;
  piVar3 = this + 0x144;
  iVar1 = 0x10;
  do {
    FUN_10090d06(piVar3);
    piVar3 = piVar3 + 0x544;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  uVar2 = FUN_100948ad((int)this);
  if ((char)uVar2 == '\0') {
    (**(code **)(*this + 0x40))(0);
    FUN_100ad4c5((LPVOID)this[-1]);
    this = (int *)0x0;
  }
  return this;
}

