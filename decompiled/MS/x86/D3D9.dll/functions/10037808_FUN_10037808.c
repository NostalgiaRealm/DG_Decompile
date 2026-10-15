/*
 * FUN_10037808 at 10037808
 * undefined4 __thiscall FUN_10037808(void * this, int param_1, int param_2, undefined4 param_3, uint param_4, undefined4 param_5, undefined4 param_6, uint param_7)
 * Address ranges: 10037808-100378a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10037808(void *this,int param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,uint param_7)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  LPVOID local_18;
  int local_14;
  
  local_1c = 0;
  FUN_10036e19(&local_18,0x100);
  if (param_7 == 0x40) {
    param_4 = param_4 & 0xfffeffff;
  }
  uVar2 = FUN_1005d8db((void *)((int)this + 0x28),(uint *)((int)this + 0x38),
                       (short *)(uint)*(byte *)((int)this + 0x70),param_7,(int *)&local_18,
                       (undefined4 *)0x0,param_3,param_4);
  if ((char)uVar2 != '\0') {
    piVar1 = *(int **)(param_2 * 0x1510 + 0x510 + param_1);
    (**(code **)(*piVar1 + 0x3c))(piVar1,local_18,local_14 - (int)local_18,0,&local_1c);
  }
  uVar2 = local_1c;
  thunk_FUN_100cfd6c(local_18);
  return uVar2;
}

