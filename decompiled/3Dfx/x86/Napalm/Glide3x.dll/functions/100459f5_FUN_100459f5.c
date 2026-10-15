/*
 * FUN_100459f5 at 100459f5
 * int * __cdecl FUN_100459f5(undefined4 param_1)
 * Address ranges: 100459f5-10045a67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __cdecl FUN_100459f5(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *this;
  int *piVar3;
  
  iVar1 = FUN_1005566f(0x15654);
  this = (int *)(iVar1 + 0x43U & 0xffffffc0);
  this[-1] = iVar1;
  FUN_10049628(this,param_1,&PTR_s_DGD3D11ROOT_1005f638);
  *this = (int)&PTR_LAB_1005b020;
  piVar3 = this + 0x144;
  iVar1 = 0x10;
  do {
    FUN_10045853(piVar3);
    piVar3 = piVar3 + 0x544;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  uVar2 = FUN_10048033((int)this);
  if ((char)uVar2 == '\0') {
    (**(code **)(*this + 0x40))(0);
    FUN_10055b78((LPVOID)this[-1]);
    this = (int *)0x0;
  }
  return this;
}

