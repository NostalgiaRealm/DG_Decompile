/*
 * FUN_1009b545 at 1009b545
 * int * __cdecl FUN_1009b545(undefined4 param_1, int * param_2)
 * Address ranges: 1009b545-1009b593
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __cdecl FUN_1009b545(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *this;
  uint uVar2;
  void *this_00;
  
  iVar1 = FUN_100ad475(0x17344);
  this_00 = (void *)(iVar1 + 0x43U & 0xffffffc0);
  *(int *)((int)this_00 + -4) = iVar1;
  this = FUN_1009b27a(this_00,param_1);
  if (this != (int *)0x0) {
    uVar2 = FUN_1009b594(this,param_2);
    if ((char)uVar2 != '\0') {
      return this;
    }
    (**(code **)(*this + 0x40))(0);
    FUN_100ad4c5((LPVOID)this[-1]);
  }
  return (int *)0x0;
}

