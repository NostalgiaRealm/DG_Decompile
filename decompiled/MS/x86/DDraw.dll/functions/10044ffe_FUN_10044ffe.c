/*
 * FUN_10044ffe at 10044ffe
 * int * __cdecl FUN_10044ffe(undefined4 param_1)
 * Address ranges: 10044ffe-10045070
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __cdecl FUN_10044ffe(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *this;
  int *piVar3;
  
  iVar1 = FUN_10060bca(0x15654);
  this = (int *)(iVar1 + 0x43U & 0xffffffc0);
  this[-1] = iVar1;
  FUN_10048c3f(this,param_1,&PTR_s_DGD3D11ROOT_1006ada8);
  *this = (int)&PTR_LAB_10066180;
  piVar3 = this + 0x144;
  iVar1 = 0x10;
  do {
    FUN_10044e5c(piVar3);
    piVar3 = piVar3 + 0x544;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  uVar2 = FUN_1004761b((int)this);
  if ((char)uVar2 == '\0') {
    (**(code **)(*this + 0x40))(0);
    FUN_10060cbd((LPVOID)this[-1]);
    this = (int *)0x0;
  }
  return this;
}

