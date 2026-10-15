/*
 * FUN_10013cc1 at 10013cc1
 * undefined4 __thiscall FUN_10013cc1(void * this, int param_1, undefined4 * param_2, uint * param_3)
 * Address ranges: 10013cc1-10013d0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10013cc1(void *this,int param_1,undefined4 *param_2,uint *param_3)

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
  uVar1 = FUN_10011b87((void *)((int)this + 8),param_1,param_2,param_3);
  FUN_10003e89((char *)((int)&uStack_8 + 3));
  return uVar1;
}

