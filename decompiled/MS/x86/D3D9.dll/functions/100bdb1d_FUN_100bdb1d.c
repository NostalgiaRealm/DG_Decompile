/*
 * FUN_100bdb1d at 100bdb1d
 * int * __cdecl FUN_100bdb1d(undefined4 param_1, int * param_2)
 * Address ranges: 100bdb1d-100bdb6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __cdecl FUN_100bdb1d(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *this;
  uint uVar2;
  void *this_00;
  
  iVar1 = FUN_100cfd55(0x17344);
  this_00 = (void *)(iVar1 + 0x43U & 0xffffffc0);
  *(int *)((int)this_00 + -4) = iVar1;
  this = FUN_100bd852(this_00,param_1);
  if (this != (int *)0x0) {
    uVar2 = FUN_100bdb6c(this,param_2);
    if ((char)uVar2 != '\0') {
      return this;
    }
    (**(code **)(*this + 0x40))(0);
    FUN_100cfe2d((LPVOID)this[-1]);
  }
  return (int *)0x0;
}

