/*
 * FUN_1000ee58 at 1000ee58
 * uint __thiscall FUN_1000ee58(void * this, int * param_1, RECT * param_2, uint param_3)
 * Address ranges: 1000ee58-1000ee9c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1000ee58(void *this,int *param_1,RECT *param_2,uint param_3)

{
  uint uVar1;
  undefined4 uStack_8;
  
  uStack_8 = this;
  FUN_10003838((void *)((int)&uStack_8 + 3),
               (byte)(*(uint *)(*(int *)((int)this + 0x18) + 0xb0c) >> 2) & 1);
  uVar1 = FUN_1000e995(this,param_1,param_2,param_3,1);
  FUN_10003881((char *)((int)&uStack_8 + 3));
  return uVar1;
}

