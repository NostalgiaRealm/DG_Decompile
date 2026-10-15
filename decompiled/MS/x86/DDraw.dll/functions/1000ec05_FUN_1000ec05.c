/*
 * FUN_1000ec05 at 1000ec05
 * undefined4 * __thiscall FUN_1000ec05(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, int param_12, int param_13, int param_14)
 * Address ranges: 1000ec05-1000ecea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1000ec05(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,int param_12,int param_13,
            int param_14)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_EDX;
  
  if (param_12 < 4) {
    iVar1 = *(int *)(&DAT_100627f4 + param_12 * 4);
  }
  else {
    iVar1 = 0;
  }
  FUN_1000eb15(this,param_1,*(int *)(param_1 + 0x14),param_6,param_7,iVar1,0,0,0,0);
  *(undefined4 *)((int)this + 0x90) = param_2;
  *(undefined4 *)((int)this + 0x98) = param_3;
  *(undefined4 *)((int)this + 0x9c) = param_4;
  *(undefined4 *)((int)this + 0xa0) = param_8;
  *(undefined4 *)((int)this + 0xa4) = param_9;
  *(undefined4 *)((int)this + 0xa8) = param_5;
  *(int *)((int)this + 0x94) = param_1;
  *(undefined4 *)((int)this + 0xb4) = param_10;
  *(undefined4 *)((int)this + 0x8c) = 1;
  *(undefined ***)this = &PTR_LAB_10063b54;
  *(undefined ***)((int)this + 0x88) = &PTR_LAB_10063b18;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb8) = param_11;
  uVar2 = FUN_10021154(param_12);
  *(undefined4 *)((int)this + 0xbc) = uVar2;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(uint *)((int)this + 0xc0) = (uint)(param_14 == extraout_EDX);
  *(uint *)((int)this + 0xc4) = 3 - (uint)(param_13 != 1);
  return this;
}

