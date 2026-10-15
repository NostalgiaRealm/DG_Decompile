/*
 * FUN_10054f5d at 10054f5d
 * bool __stdcall FUN_10054f5d(void * param_1, uint param_2)
 * Address ranges: 10054f5d-1005504c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10054f5d(void *param_1,uint param_2)

{
  int iVar1;
  LPVOID local_38 [4];
  undefined4 *local_28;
  int local_24;
  undefined4 *local_18;
  int local_14;
  void *local_8;
  
  FUN_1002d6f1(&local_18,0x200);
  iVar1 = FUN_10051a0f((int *)&local_18,param_2);
  if (iVar1 != 0) {
    FUN_1005504d((int *)&local_18,param_2);
    FUN_10051b29((int *)&local_18,param_2);
    FUN_1002d6f1(local_38,0x80);
    FUN_1002d6f1(&local_28,0x80);
    FUN_10051c44(local_8,(int *)local_38,&local_28,param_2);
    FUN_100a138c((int *)(param_2 + 0x18),(int *)local_38,0x3e);
    FUN_100a14c1(local_38,local_28,local_24 - (int)local_28);
    FUN_1005cd17((int *)&local_18,param_2);
    FUN_10051bc2((int *)&local_18,param_2);
    FUN_100a165c((int *)&local_18,(int *)local_38,iVar1);
    FUN_100a14c1(param_1,local_18,local_14 - (int)local_18);
    thunk_FUN_100ad48c(local_28);
    thunk_FUN_100ad48c(local_38[0]);
  }
  thunk_FUN_100ad48c(local_18);
  return iVar1 != 0;
}

