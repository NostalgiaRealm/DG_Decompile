/*
 * FUN_100425ec at 100425ec
 * int * __cdecl FUN_100425ec(undefined4 param_1)
 * Address ranges: 100425ec-1004265e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __cdecl FUN_100425ec(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *this;
  int *piVar3;
  
  iVar1 = FUN_1005225f(0x15654);
  this = (int *)(iVar1 + 0x43U & 0xffffffc0);
  this[-1] = iVar1;
  FUN_1004621f(this,param_1,&PTR_s_DGD3D11ROOT_1005b464);
  *this = (int)&PTR_LAB_10057b70;
  piVar3 = this + 0x144;
  iVar1 = 0x10;
  do {
    FUN_1004244a(piVar3);
    piVar3 = piVar3 + 0x544;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  uVar2 = FUN_10044c2a((int)this);
  if ((char)uVar2 == '\0') {
    (**(code **)(*this + 0x40))(0);
    FUN_10052768((LPVOID)this[-1]);
    this = (int *)0x0;
  }
  return this;
}

