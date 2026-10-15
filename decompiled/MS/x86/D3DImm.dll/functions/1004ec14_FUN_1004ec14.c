/*
 * FUN_1004ec14 at 1004ec14
 * int * __cdecl FUN_1004ec14(undefined4 param_1)
 * Address ranges: 1004ec14-1004ec86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __cdecl FUN_1004ec14(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *this;
  int *piVar3;
  
  iVar1 = FUN_1005c755(0x15654);
  this = (int *)(iVar1 + 0x43U & 0xffffffc0);
  this[-1] = iVar1;
  FUN_10051188(this,param_1,&PTR_s_DGD3D11ROOT_10061c50);
  *this = (int)&PTR_LAB_1005fb20;
  piVar3 = this + 0x144;
  iVar1 = 0x10;
  do {
    FUN_1004ea72(piVar3);
    piVar3 = piVar3 + 0x544;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  uVar2 = FUN_10050ee6((int)this);
  if ((char)uVar2 == '\0') {
    (**(code **)(*this + 0x40))(0);
    FUN_1005c797((LPVOID)this[-1]);
    this = (int *)0x0;
  }
  return this;
}

