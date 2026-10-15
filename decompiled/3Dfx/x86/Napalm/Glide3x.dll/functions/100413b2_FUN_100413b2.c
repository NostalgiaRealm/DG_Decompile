/*
 * FUN_100413b2 at 100413b2
 * int * __cdecl FUN_100413b2(undefined4 param_1, int * param_2)
 * Address ranges: 100413b2-10041400
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __cdecl FUN_100413b2(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *this;
  uint uVar2;
  void *this_00;
  
  iVar1 = FUN_1005566f(0x17344);
  this_00 = (void *)(iVar1 + 0x43U & 0xffffffc0);
  *(int *)((int)this_00 + -4) = iVar1;
  this = FUN_100410e7(this_00,param_1);
  if (this != (int *)0x0) {
    uVar2 = FUN_10041401(this,param_2);
    if ((char)uVar2 != '\0') {
      return this;
    }
    (**(code **)(*this + 0x40))(0);
    FUN_10055b78((LPVOID)this[-1]);
  }
  return (int *)0x0;
}

