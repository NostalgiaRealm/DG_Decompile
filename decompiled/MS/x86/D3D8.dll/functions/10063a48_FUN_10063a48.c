/*
 * FUN_10063a48 at 10063a48
 * undefined4 * __thiscall FUN_10063a48(void * this, int param_1, int param_2, int param_3, int param_4, undefined4 param_5, int param_6, int param_7, undefined4 param_8, int param_9, uint param_10, uint param_11)
 * Address ranges: 10063a48-10063ba2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_10063a48(void *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
            int param_6,int param_7,undefined4 param_8,int param_9,uint param_10,uint param_11)

{
  double dVar1;
  double dVar2;
  
  FUN_10061e74(this,param_1,param_2,param_3,param_4,param_5,param_9,param_10,param_11);
  *(undefined ***)this = &PTR_FUN_100b2a40;
  *(undefined ***)((int)this + 0x88) = &PTR_LAB_100b2ac8;
  *(int *)((int)this + 0xdc) = param_6;
  *(int *)((int)this + 0xe0) = param_7;
  *(undefined4 *)((int)this + 0xe4) = param_8;
  FUN_10061738((void *)((int)this + 0xe8),*(int *)((int)this + 0x40),*(int *)((int)this + 0x10));
  FUN_10061738((void *)((int)this + 0x108),*(int *)((int)this + 0x40),*(int *)((int)this + 0x10));
  FUN_10061738((void *)((int)this + 0x128),*(int *)((int)this + 0x40),*(int *)((int)this + 0x10));
  *(undefined2 *)((int)this + 0x151) = 0;
  *(float *)((int)this + 0x148) =
       (float)((double)param_6 + (double)(&DAT_100b5ce0)[-(param_6 >> 0x1f)]) /
       (float)((double)param_2 + (double)(&DAT_100b5ce0)[-(param_2 >> 0x1f)]);
  dVar1 = (double)(&DAT_100b5ce0)[-(param_7 >> 0x1f)];
  dVar2 = (double)(&DAT_100b5ce0)[-(param_3 >> 0x1f)];
  *(bool *)((int)this + 0x150) = *(uint *)((int)this + 0x1c) < 0xe;
  *(float *)((int)this + 0x14c) =
       (float)((double)param_7 + dVar1) / (float)((double)param_3 + dVar2);
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x8c) = 2;
  return this;
}

