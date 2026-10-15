/*
 * FUN_10014f0b at 10014f0b
 * undefined __thiscall FUN_10014f0b(void * this, int param_1, char param_2)
 * Address ranges: 10014f0b-10014f41
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10014f0b(void *this,int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0xc);
  iVar2 = param_1 * 0x41;
  FUN_100144a0(this,param_1,*(uint *)(iVar2 + 0x180 + iVar1),*(uint *)(iVar2 + 0x184 + iVar1),
               *(uint *)(iVar2 + 0x188 + iVar1),*(uint *)(iVar2 + 0x18c + iVar1),param_2);
  return;
}

