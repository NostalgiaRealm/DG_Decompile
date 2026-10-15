/*
 * FUN_1006ee86 at 1006ee86
 * undefined4 * __thiscall FUN_1006ee86(void * this, int param_1, int param_2, int param_3, int param_4, undefined4 param_5, int param_6, int param_7, undefined4 param_8, int param_9, uint param_10, uint param_11)
 * Address ranges: 1006ee86-1006efcc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1006ee86(void *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
            int param_6,int param_7,undefined4 param_8,int param_9,uint param_10,uint param_11)

{
  double dVar1;
  double dVar2;
  
  FUN_1006bf91(this,param_1,param_2,param_3,param_4,param_5,param_9,param_10,param_11);
  *(undefined ***)this = &PTR_FUN_100b2e10;
  *(undefined ***)((int)this + 0xc0) = &PTR_LAB_100b2eac;
  *(int *)((int)this + 0x130) = param_6;
  *(int *)((int)this + 0x134) = param_7;
  *(undefined4 *)((int)this + 0x138) = param_8;
  FUN_1006b13e((void *)((int)this + 0x13c),*(int *)((int)this + 0x40),*(int *)((int)this + 0x10));
  FUN_1006b13e((void *)((int)this + 0x178),*(int *)((int)this + 0x40),*(int *)((int)this + 0x10));
  *(undefined2 *)((int)this + 0x1bd) = 0;
  *(float *)((int)this + 0x1b4) =
       (float)((double)param_6 + (double)(&DAT_100b5ce0)[-(param_6 >> 0x1f)]) /
       (float)((double)param_2 + (double)(&DAT_100b5ce0)[-(param_2 >> 0x1f)]);
  dVar1 = (double)(&DAT_100b5ce0)[-(param_7 >> 0x1f)];
  dVar2 = (double)(&DAT_100b5ce0)[-(param_3 >> 0x1f)];
  *(bool *)((int)this + 0x1bc) = *(uint *)((int)this + 0x1c) < 0xe;
  *(float *)((int)this + 0x1b8) =
       (float)((double)param_7 + dVar1) / (float)((double)param_3 + dVar2);
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0xc4) = 2;
  return this;
}

