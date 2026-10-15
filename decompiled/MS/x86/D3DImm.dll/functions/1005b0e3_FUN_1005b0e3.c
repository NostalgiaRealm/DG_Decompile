/*
 * FUN_1005b0e3 at 1005b0e3
 * uint * __thiscall FUN_1005b0e3(void * this, uint * param_1, uint * param_2)
 * Address ranges: 1005b0e3-1005b14f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * __thiscall FUN_1005b0e3(void *this,uint *param_1,uint *param_2)

{
  uint *puVar1;
  undefined4 extraout_ECX;
  int local_1c [5];
  int local_8;
  
  puVar1 = param_1;
  FUN_10051de1((void *)((int)this + 0x520),(int)param_1,local_1c,&local_8);
  param_1 = FUN_10059f29((void *)((int)puVar1 * 0x16c0 + 0x1c40 + (int)this),local_1c,local_8,
                         param_2);
  if (param_1 == (uint *)0x0) {
    FUN_10051db1((void *)((int)this + 0x520),(int)puVar1,local_1c,local_8,param_2,0,extraout_ECX,
                 extraout_ECX,&param_1);
  }
  return param_1;
}

