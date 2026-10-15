/*
 * FUN_10013c6f at 10013c6f
 * undefined4 __thiscall FUN_10013c6f(void * this, undefined4 * param_1, int * param_2, SIZE_T param_3, uint param_4)
 * Address ranges: 10013c6f-10013cc0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10013c6f(void *this,undefined4 *param_1,int *param_2,SIZE_T param_3,uint param_4)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 uStack_8;
  
  puVar2 = (uint *)(*(int *)((int)this + 0x14) + -0x58e4);
  if (*(int *)((int)this + 0x14) == 0) {
    puVar2 = (uint *)&DAT_00000dd0;
  }
  uStack_8 = this;
  FUN_10003e40((void *)((int)&uStack_8 + 3),(byte)(*puVar2 >> 2) & 1);
  uVar1 = FUN_10011763((void *)((int)this + 8),param_1,param_2,param_3,param_4);
  FUN_10003e89((char *)((int)&uStack_8 + 3));
  return uVar1;
}

