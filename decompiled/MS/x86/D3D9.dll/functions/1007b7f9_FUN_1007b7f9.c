/*
 * FUN_1007b7f9 at 1007b7f9
 * undefined4 * __thiscall FUN_1007b7f9(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4, int param_5, int param_6, int param_7, uint param_8, uint param_9)
 * Address ranges: 1007b7f9-1007b86c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1007b7f9(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int param_6,int param_7,uint param_8,uint param_9)

{
  FUN_1008f294(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  *(undefined ***)this = &PTR_D3DPERF_GetStatus_100d6294;
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x1cf00);
  FUN_100773d5((void *)((int)this + 0x48),*(int *)(param_1 + 0x1cf00),param_2);
  FUN_100773d5((void *)((int)this + 0x68),*(int *)(param_1 + 0x1cf00),param_2);
  *(int *)((int)this + 0x44) = *(int *)((int)this + 0x40) + param_2 * 0x1510 + 0x510;
  return this;
}

