/*
 * FUN_10081654 at 10081654
 * undefined4 __thiscall FUN_10081654(void * this, int param_1)
 * Address ranges: 10081654-10081693
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10081654(void *this,int param_1)

{
  byte extraout_var;
  int iVar1;
  byte bVar2;
  
  bVar2 = 1;
  iVar1 = *(int *)((int)this + 0x14);
  if (*(char *)(param_1 * 0x20 + 0xc + iVar1) == '\0') {
    (**(code **)(**(int **)((int)this + 0xc) + 0x20))(*(int **)((int)this + 0xc),param_1,0,0);
    iVar1 = 0;
    bVar2 = extraout_var >> 7 ^ 1;
    *(byte *)(param_1 * 0x20 + 0xc + *(int *)((int)this + 0x14)) = bVar2;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),bVar2);
}

