/*
 * FUN_1004c812 at 1004c812
 * int * __thiscall FUN_1004c812(void * this, undefined4 param_1, uint param_2, undefined4 param_3, undefined4 param_4, undefined4 * param_5)
 * Address ranges: 1004c812-1004c884
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall
FUN_1004c812(void *this,undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *local_18;
  int local_14;
  
  piVar2 = (int *)0x0;
  FUN_10036e19(&local_18,0x100);
  uVar1 = FUN_1005d8db((void *)((int)this + 0x2c),(uint *)((int)this + 0x40),
                       (short *)CONCAT31((int3)((uint)param_1 >> 8),
                                         *(undefined1 *)((int)this + 0x78)),0x51,(int *)&local_18,
                       param_5,param_1,param_2);
  if ((char)uVar1 != '\0') {
    piVar2 = FUN_100c630f(local_14 - (int)local_18,local_18);
  }
  thunk_FUN_100cfd6c(local_18);
  return piVar2;
}

