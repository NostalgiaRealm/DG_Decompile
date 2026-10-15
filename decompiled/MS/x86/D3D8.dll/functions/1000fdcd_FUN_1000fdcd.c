/*
 * FUN_1000fdcd at 1000fdcd
 * undefined4 __thiscall FUN_1000fdcd(void * this, undefined4 * param_1, int * param_2, SIZE_T param_3, uint param_4)
 * Address ranges: 1000fdcd-1000fe1e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_1000fdcd(void *this,undefined4 *param_1,int *param_2,SIZE_T param_3,uint param_4)

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
  uVar1 = FUN_1000da3f((void *)((int)this + 8),param_1,param_2,param_3,param_4);
  FUN_10003881((char *)((int)&uStack_8 + 3));
  return uVar1;
}

