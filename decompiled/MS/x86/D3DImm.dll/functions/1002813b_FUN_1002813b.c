/*
 * FUN_1002813b at 1002813b
 * int * __thiscall FUN_1002813b(void * this, uint param_1, uint param_2, undefined4 param_3, undefined4 param_4, undefined4 * param_5)
 * Address ranges: 1002813b-100281ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall
FUN_1002813b(void *this,uint param_1,uint param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *local_18;
  int local_14;
  
  piVar2 = (int *)0x0;
  FUN_10019cac(&local_18,0x100);
  uVar1 = FUN_10035798((void *)((int)this + 0x2c),(int)this + 0x40,
                       CONCAT31((int3)(param_1 >> 8),*(undefined1 *)((int)this + 0x78)),0x51,
                       (int *)&local_18,param_5,param_1,param_2);
  if ((char)uVar1 != '\0') {
    piVar2 = FUN_10056dbd(local_14 - (int)local_18,local_18);
  }
  thunk_FUN_1005c76c(local_18);
  return piVar2;
}

