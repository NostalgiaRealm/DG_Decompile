/*
 * FUN_10012c1f at 10012c1f
 * uint __thiscall FUN_10012c1f(void * this, uint * param_1, RECT * param_2, uint param_3, undefined4 param_4)
 * Address ranges: 10012c1f-10012c65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10012c1f(void *this,uint *param_1,RECT *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uStack_8;
  
  uStack_8 = this;
  FUN_10003e40((void *)((int)&uStack_8 + 3),
               (byte)(*(uint *)(*(int *)((int)this + 0x18) + 0xdd0) >> 2) & 1);
  uVar1 = FUN_1001273f(this,param_1,param_2,param_3,1,param_4);
  FUN_10003e89((char *)((int)&uStack_8 + 3));
  return uVar1;
}

