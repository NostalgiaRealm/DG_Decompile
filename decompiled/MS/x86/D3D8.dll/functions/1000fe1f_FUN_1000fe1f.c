/*
 * FUN_1000fe1f at 1000fe1f
 * undefined4 __thiscall FUN_1000fe1f(void * this, int param_1, undefined4 * param_2, uint * param_3)
 * Address ranges: 1000fe1f-1000fe6d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1000fe1f(void *this,int param_1,undefined4 *param_2,uint *param_3)

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
  uVar1 = FUN_1000de63((void *)((int)this + 8),param_1,param_2,param_3);
  FUN_10003881((char *)((int)&uStack_8 + 3));
  return uVar1;
}

