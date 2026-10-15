/*
 * FUN_10087b6c at 10087b6c
 * undefined4 * __thiscall FUN_10087b6c(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4, int param_5, int param_6, int param_7, uint param_8, uint param_9)
 * Address ranges: 10087b6c-10087be2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_10087b6c(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int param_6,int param_7,uint param_8,uint param_9)

{
  FUN_1008f294(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  *(undefined ***)this = &PTR_D3DPERF_GetStatus_100d6690;
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x1cf00);
  FUN_10081034((void *)((int)this + 0x48),*(int *)(param_1 + 0x1cf00),param_2);
  FUN_10081034((void *)((int)this + 0x84),*(int *)(param_1 + 0x1cf00),param_2);
  *(int *)((int)this + 0x44) = *(int *)((int)this + 0x40) + param_2 * 0x16c0 + 0x6c0;
  return this;
}

