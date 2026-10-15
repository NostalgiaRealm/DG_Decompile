/*
 * FUN_1001d1a0 at 1001d1a0
 * undefined8 __thiscall FUN_1001d1a0(void * this, void * param_1, undefined4 * param_2, uint param_3, byte param_4)
 * Address ranges: 1001d1a0-1001d226
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 __thiscall
FUN_1001d1a0(void *this,void *param_1,undefined4 *param_2,uint param_3,byte param_4)

{
  int iVar1;
  undefined8 local_18;
  undefined4 *local_10;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x1d54) + 0x1304);
  FUN_10055159(param_1,(int *)&local_18,param_4 + 1,
               *(int *)(*(int *)(*(int *)((int)this + 0x1d54) + 0x1300) + 0xc),
               *(undefined4 *)(iVar1 + 0x938),*(undefined4 *)(iVar1 + 0x93c));
  if (local_10 != (undefined4 *)0x0) {
    if (param_4 != 0) {
      FUN_1005ca00(local_10,param_2,param_3);
    }
    if (*(int *)((int)param_1 + 0x2c) != 0) {
      *(undefined4 *)((int)param_1 + 0x2c) = 0;
    }
    return local_18;
  }
  return 0;
}

