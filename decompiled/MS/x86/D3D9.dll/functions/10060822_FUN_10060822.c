/*
 * FUN_10060822 at 10060822
 * undefined __thiscall FUN_10060822(void * this, undefined4 param_1, undefined4 param_2, int param_3, int param_4)
 * Address ranges: 10060822-1006093c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10060822(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 4);
  FUN_100c4090(*(byte *)(piVar1 + 0xd5),0xa4);
  FUN_100c3cfd(piVar1,*(int **)((int)this + 8),0x10);
  if (param_3 != -1) {
    FUN_100c3cfd(*(int **)((int)this + 4),*(int **)((int)this + 8),0x10);
  }
  if (param_4 != -1) {
    FUN_100c3cfd(*(int **)((int)this + 4),*(int **)((int)this + 8),0x10);
  }
  return;
}

