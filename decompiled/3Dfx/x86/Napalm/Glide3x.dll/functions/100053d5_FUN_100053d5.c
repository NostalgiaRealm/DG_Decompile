/*
 * FUN_100053d5 at 100053d5
 * undefined __thiscall FUN_100053d5(void * this, int param_1, char param_2)
 * Address ranges: 100053d5-10005410
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100053d5(void *this,int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0xc);
  iVar2 = param_1 * 0x9d;
  FUN_10006ec8(this,param_1,*(int *)(iVar2 + 0x27d + iVar1),*(int *)(iVar2 + 0x281 + iVar1),
               *(int *)(iVar2 + 0x285 + iVar1),*(uint *)(iVar2 + 0x289 + iVar1),param_2);
  return;
}

