/*
 * FUN_1004b171 at 1004b171
 * int * __cdecl FUN_1004b171(undefined4 param_1, int * param_2)
 * Address ranges: 1004b171-1004b1bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __cdecl FUN_1004b171(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *this;
  uint uVar2;
  void *this_00;
  
  iVar1 = FUN_10060bca(0x17344);
  this_00 = (void *)(iVar1 + 0x43U & 0xffffffc0);
  *(int *)((int)this_00 + -4) = iVar1;
  this = FUN_1004aea6(this_00,param_1);
  if (this != (int *)0x0) {
    uVar2 = FUN_1004b1c0(this,param_2);
    if ((char)uVar2 != '\0') {
      return this;
    }
    (**(code **)(*this + 0x40))(0);
    FUN_10060cbd((LPVOID)this[-1]);
  }
  return (int *)0x0;
}

