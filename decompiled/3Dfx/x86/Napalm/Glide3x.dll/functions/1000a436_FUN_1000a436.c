/*
 * FUN_1000a436 at 1000a436
 * undefined8 __thiscall FUN_1000a436(void * this, int param_1, undefined4 * param_2, uint param_3, byte param_4)
 * Address ranges: 1000a436-1000a4aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 __thiscall
FUN_1000a436(void *this,int param_1,undefined4 *param_2,uint param_3,byte param_4)

{
  int iVar1;
  int local_14;
  undefined4 local_10;
  undefined4 *local_c;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x3688) + 0x1304);
  FUN_1003eb41((void *)(param_1 + 0x38),&local_14,param_4 + 1,
               *(int *)(*(int *)(*(int *)((int)this + 0x3688) + 0x1300) + 0xc),
               *(undefined4 *)(iVar1 + 0x938),*(undefined4 *)(iVar1 + 0x93c));
  if (local_c == (undefined4 *)0x0) {
    local_14 = 0;
    local_10 = 0;
  }
  else {
    if (param_4 != 0) {
      FUN_10055d40(local_c,param_2,param_3);
    }
    FUN_1003eb8b(param_1 + 0x38);
  }
  return CONCAT44(local_10,local_14);
}

