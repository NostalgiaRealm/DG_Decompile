/*
 * FUN_10082110 at 10082110
 * undefined4 * __thiscall FUN_10082110(void * this, int param_1, undefined4 param_2, undefined4 param_3, int param_4, int param_5, int param_6, uint param_7, uint param_8)
 * Address ranges: 10082110-100821a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_10082110(void *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            int param_6,uint param_7,uint param_8)

{
  FUN_10087b6c(this,param_1,*(int *)(param_1 + 0x14),param_2,param_3,param_4,param_5,param_6,param_7
               ,param_8);
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined ***)this = &PTR_FUN_100d64a8;
  *(undefined ***)((int)this + 0xc0) = &PTR_LAB_100d6548;
  *(int *)((int)this + 0xe0) = param_1;
  FUN_10081034((void *)((int)this + 0xf0),*(int *)((int)this + 0x40),*(int *)((int)this + 0x10));
  *(undefined2 *)((int)this + 300) = 0x100;
  *(undefined1 *)((int)this + 0x12e) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xc4) = 1;
  return this;
}

