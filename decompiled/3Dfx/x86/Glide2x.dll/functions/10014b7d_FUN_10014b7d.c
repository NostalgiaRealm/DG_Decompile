/*
 * FUN_10014b7d at 10014b7d
 * undefined __thiscall FUN_10014b7d(void * this, int param_1, char param_2)
 * Address ranges: 10014b7d-10014bb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10014b7d(void *this,int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0xc);
  iVar2 = param_1 * 0x41;
  FUN_10014112(this,param_1,*(uint *)(iVar2 + 0x180 + iVar1),*(uint *)(iVar2 + 0x184 + iVar1),
               *(uint *)(iVar2 + 0x188 + iVar1),*(uint *)(iVar2 + 0x18c + iVar1),param_2);
  return;
}

