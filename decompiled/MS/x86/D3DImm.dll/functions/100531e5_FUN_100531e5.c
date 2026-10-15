/*
 * FUN_100531e5 at 100531e5
 * int * __cdecl FUN_100531e5(undefined4 param_1, int * param_2)
 * Address ranges: 100531e5-10053233
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __cdecl FUN_100531e5(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *this;
  uint uVar2;
  void *this_00;
  
  iVar1 = FUN_1005c755(0x17344);
  this_00 = (void *)(iVar1 + 0x43U & 0xffffffc0);
  *(int *)((int)this_00 + -4) = iVar1;
  this = FUN_10052f08(this_00,param_1);
  if (this != (int *)0x0) {
    uVar2 = FUN_10053234(this,param_2);
    if ((char)uVar2 != '\0') {
      return this;
    }
    (**(code **)(*this + 0x40))(0);
    FUN_1005c797((LPVOID)this[-1]);
  }
  return (int *)0x0;
}

