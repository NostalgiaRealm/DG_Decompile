/*
 * FUN_10061e74 at 10061e74
 * undefined4 * __thiscall FUN_10061e74(void * this, int param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined4 param_5, int param_6, uint param_7, uint param_8)
 * Address ranges: 10061e74-10061f0e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_10061e74(void *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,int param_6,uint param_7,uint param_8)

{
  FUN_10065981(this,param_1,*(int *)(param_1 + 0x14),param_2,param_3,param_4,param_5,param_6,param_7
               ,param_8);
  *(undefined4 *)((int)this + 0x8c) = 1;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined ***)this = &PTR_FUN_100b29b0;
  *(undefined ***)((int)this + 0x88) = &PTR_LAB_100b295c;
  *(int *)((int)this + 0xa8) = param_1;
  FUN_10061738((void *)((int)this + 0xac),*(int *)(param_1 + 0x1cf00),*(int *)((int)this + 0x10));
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0x100;
  *(undefined4 *)((int)this + 0x8c) = 1;
  return this;
}

