/*
 * FUN_1000eb15 at 1000eb15
 * undefined4 * __thiscall FUN_1000eb15(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4, int param_5, undefined4 param_6, int param_7, uint param_8, uint param_9)
 * Address ranges: 1000eb15-1000eb88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1000eb15(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,int param_7,uint param_8,uint param_9)

{
  FUN_10021efc(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  *(undefined ***)this = &PTR_LAB_10063ab4;
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0xcf00);
  FUN_1000a8cc((void *)((int)this + 0x48),*(int *)(param_1 + 0xcf00),param_2);
  FUN_1000a8cc((void *)((int)this + 0x68),*(int *)(param_1 + 0xcf00),param_2);
  *(int *)((int)this + 0x44) = *(int *)((int)this + 0x40) + param_2 * 0x1510 + 0x510;
  return this;
}

