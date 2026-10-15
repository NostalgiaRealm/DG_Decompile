/*
 * FUN_1003e0fc at 1003e0fc
 * undefined4 __thiscall FUN_1003e0fc(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 * Address ranges: 1003e0fc-1003e17d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_1003e0fc(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_10;
  int *local_c;
  int *local_8;
  
  local_10 = 0;
  local_c = (int *)0x0;
  local_8 = (int *)0x0;
  (**(code **)((int)this + 0x194))(param_3,param_2,&local_c,&local_8);
  if (param_4 == (undefined4 *)0x0) {
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
  }
  else {
    *param_4 = local_8;
  }
  piVar2 = local_c;
  if (local_c != (int *)0x0) {
    uVar3 = (**(code **)(*local_c + 0x10))(local_c);
    uVar4 = (**(code **)(*piVar2 + 0xc))(piVar2);
    piVar1 = *(int **)(param_1 * 0x18 + 0x14 + (int)this);
    (**(code **)(*piVar1 + 0x40))(piVar1,0,uVar4,uVar3,&DAT_10057540,&local_10);
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return local_10;
}

