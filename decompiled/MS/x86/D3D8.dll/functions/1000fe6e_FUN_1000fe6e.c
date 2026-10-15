/*
 * FUN_1000fe6e at 1000fe6e
 * undefined4 __thiscall FUN_1000fe6e(void * this, int param_1)
 * Address ranges: 1000fe6e-1000feb6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1000fe6e(void *this,int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 uStack_8;
  
  puVar2 = (uint *)(*(int *)((int)this + 0x14) + -0x4dd4);
  if (*(int *)((int)this + 0x14) == 0) {
    puVar2 = (uint *)&DAT_00000b0c;
  }
  uStack_8 = this;
  FUN_10003838((void *)((int)&uStack_8 + 3),(byte)(*puVar2 >> 2) & 1);
  uVar1 = FUN_1000da6a((void *)((int)this + 8),param_1);
  FUN_10003881((char *)((int)&uStack_8 + 3));
  return uVar1;
}

