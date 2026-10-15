/*
 * FUN_10005015 at 10005015
 * undefined __thiscall FUN_10005015(void * this, int param_1, char param_2)
 * Address ranges: 10005015-1000504b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10005015(void *this,int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0xc);
  iVar2 = param_1 * 0x55;
  FUN_10006a60(this,param_1,*(int *)(iVar2 + 0x1d2 + iVar1),*(int *)(iVar2 + 0x1d6 + iVar1),
               *(int *)(iVar2 + 0x1da + iVar1),*(uint *)(iVar2 + 0x1de + iVar1),param_2);
  return;
}

