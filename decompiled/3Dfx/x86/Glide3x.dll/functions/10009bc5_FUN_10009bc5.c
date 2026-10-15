/*
 * FUN_10009bc5 at 10009bc5
 * undefined8 __thiscall FUN_10009bc5(void * this, int param_1, undefined4 * param_2, uint param_3, byte param_4)
 * Address ranges: 10009bc5-10009c39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 __thiscall
FUN_10009bc5(void *this,int param_1,undefined4 *param_2,uint param_3,byte param_4)

{
  int iVar1;
  int local_14;
  undefined4 local_10;
  undefined4 *local_c;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x3308) + 0x1304);
  FUN_1003b733((void *)(param_1 + 0x38),&local_14,param_4 + 1,
               *(int *)(*(int *)(*(int *)((int)this + 0x3308) + 0x1300) + 0xc),
               *(undefined4 *)(iVar1 + 0x938),*(undefined4 *)(iVar1 + 0x93c));
  if (local_c == (undefined4 *)0x0) {
    local_14 = 0;
    local_10 = 0;
  }
  else {
    if (param_4 != 0) {
      FUN_10052930(local_c,param_2,param_3);
    }
    FUN_1003b77d(param_1 + 0x38);
  }
  return CONCAT44(local_10,local_14);
}

