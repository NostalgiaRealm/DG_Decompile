/*
 * FUN_1004d431 at 1004d431
 * uint * __thiscall FUN_1004d431(void * this, uint * param_1, uint * param_2)
 * Address ranges: 1004d431-1004d49d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * __thiscall FUN_1004d431(void *this,uint *param_1,uint *param_2)

{
  uint *puVar1;
  undefined4 extraout_ECX;
  int local_1c [5];
  int local_8;
  
  puVar1 = param_1;
  FUN_1003bcf9((void *)((int)this + 0x520),(int)param_1,local_1c,&local_8);
  param_1 = FUN_1004b7e8((void *)((int)puVar1 * 0x16c0 + 0x1c40 + (int)this),local_1c,local_8,
                         param_2);
  if (param_1 == (uint *)0x0) {
    FUN_1003bcac((void *)((int)this + 0x520),(int)puVar1,local_1c,local_8,param_2,0,extraout_ECX,
                 extraout_ECX,&param_1);
  }
  return param_1;
}

