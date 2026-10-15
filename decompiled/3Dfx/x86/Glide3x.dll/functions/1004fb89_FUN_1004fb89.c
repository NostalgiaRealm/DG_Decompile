/*
 * FUN_1004fb89 at 1004fb89
 * uint * __thiscall FUN_1004fb89(void * this, uint * param_1, uint * param_2)
 * Address ranges: 1004fb89-1004fbf5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * __thiscall FUN_1004fb89(void *this,uint *param_1,uint *param_2)

{
  uint *puVar1;
  undefined4 extraout_ECX;
  int local_1c [5];
  int local_8;
  
  puVar1 = param_1;
  FUN_1003e44e((void *)((int)this + 0x520),(int)param_1,local_1c,&local_8);
  param_1 = FUN_1004df40((void *)((int)puVar1 * 0x16c0 + 0x1c40 + (int)this),local_1c,local_8,
                         param_2);
  if (param_1 == (uint *)0x0) {
    FUN_1003e401((void *)((int)this + 0x520),(int)puVar1,local_1c,local_8,param_2,0,extraout_ECX,
                 extraout_ECX,&param_1);
  }
  return param_1;
}

