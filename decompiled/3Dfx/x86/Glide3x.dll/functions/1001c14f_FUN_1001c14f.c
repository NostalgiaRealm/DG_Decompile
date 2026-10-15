/*
 * FUN_1001c14f at 1001c14f
 * undefined __thiscall FUN_1001c14f(void * this, undefined4 param_1, uint param_2, int param_3)
 * Address ranges: 1001c14f-1001c1a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001c14f(void *this,undefined4 param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  FUN_1001f2d1((void *)((int)this + 0x3d10),0,0);
  FUN_1000c6f4((int)this);
  FUN_1001c0ec(this,param_1,param_2,param_3);
  uVar1 = 3;
  do {
    FUN_1002001c(this,uVar1,param_2,param_3 + param_2);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 7);
  FUN_1000c7aa((int)this);
  return;
}

