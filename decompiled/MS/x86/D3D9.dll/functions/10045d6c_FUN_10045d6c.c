/*
 * FUN_10045d6c at 10045d6c
 * undefined __thiscall FUN_10045d6c(void * this, int param_1)
 * Address ranges: 10045d6c-10045dc0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10045d6c(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)((int)this + 0xf6b8) + 0x1304);
  uVar1 = *(uint *)(iVar2 + 0x93c);
  if ((uVar1 <= *(uint *)(param_1 + 0x14)) &&
     ((*(uint *)(param_1 + 0x14) != uVar1 || (*(uint *)(iVar2 + 0x938) <= *(uint *)(param_1 + 0x10))
      ))) {
    FUN_10042220(this,0,0,0);
    FUN_100bad40((void *)(*(int *)(*(int *)((int)this + 0xf6b8) + 0x1304) + 4),'\0');
  }
  return;
}

