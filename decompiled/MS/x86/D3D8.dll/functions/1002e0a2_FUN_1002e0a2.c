/*
 * FUN_1002e0a2 at 1002e0a2
 * undefined4 __thiscall FUN_1002e0a2(void * this, int param_1, int param_2, uint param_3, uint param_4, undefined4 param_5, undefined4 param_6, uint param_7)
 * Address ranges: 1002e0a2-1002e12a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_1002e0a2(void *this,int param_1,int param_2,uint param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,uint param_7)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  LPVOID local_18;
  int local_14;
  
  local_1c = 0;
  FUN_1002d6f1(&local_18,0x100);
  uVar2 = FUN_1004e91d((void *)((int)this + 0x28),(uint *)((int)this + 0x38),
                       (short *)(uint)*(byte *)((int)this + 0x70),param_7,(int *)&local_18,
                       (undefined4 *)0x0,param_3,param_4);
  if ((char)uVar2 != '\0') {
    piVar1 = *(int **)(param_2 * 0x1510 + 0x510 + param_1);
    (**(code **)(*piVar1 + 0x3c))(piVar1,local_18,local_14 - (int)local_18,0,&local_1c);
  }
  uVar2 = local_1c;
  thunk_FUN_100ad48c(local_18);
  return uVar2;
}

