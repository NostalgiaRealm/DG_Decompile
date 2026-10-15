/*
 * FUN_1003fe94 at 1003fe94
 * int * __cdecl FUN_1003fe94(undefined4 param_1)
 * Address ranges: 1003fe94-1003ff06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __cdecl FUN_1003fe94(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *this;
  int *piVar3;
  
  iVar1 = FUN_1004f99f(0x15654);
  this = (int *)(iVar1 + 0x43U & 0xffffffc0);
  this[-1] = iVar1;
  FUN_10043ac7(this,param_1,&PTR_s_DGD3D11ROOT_100593ac);
  *this = (int)&PTR_LAB_10054918;
  piVar3 = this + 0x144;
  iVar1 = 0x10;
  do {
    FUN_1003fcf2(piVar3);
    piVar3 = piVar3 + 0x544;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  uVar2 = FUN_100424d2((int)this);
  if ((char)uVar2 == '\0') {
    (**(code **)(*this + 0x40))(0);
    FUN_1004ff20((LPVOID)this[-1]);
    this = (int *)0x0;
  }
  return this;
}

