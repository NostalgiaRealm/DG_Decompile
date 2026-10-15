/*
 * FUN_10054413 at 10054413
 * undefined1 __stdcall FUN_10054413(void * param_1, uint param_2)
 * Address ranges: 10054413-1005452f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10054413(void *param_1,uint param_2)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  LPVOID local_28 [4];
  undefined4 *local_18;
  int local_14;
  void *local_8;
  
  uVar2 = 0;
  FUN_1002d6f1(&local_18,0x200);
  iVar1 = FUN_10051a0f((int *)&local_18,param_2);
  if (iVar1 != 0) {
    uVar3 = 0;
    if (*(int *)(param_2 + 0x148) != 0) {
      do {
        FUN_100a1b35((int *)&local_18);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_2 + 0x148));
    }
    FUN_10051b29((int *)&local_18,param_2);
    FUN_1002d6f1(local_28,0x80);
    FUN_10051c44(local_8,(int *)local_28,0,param_2);
    uVar2 = 1;
    FUN_100a14fb((int *)local_28,1);
    FUN_10056414((int *)&local_18,param_2);
    if ((*(uint *)(param_2 + 0x20) >> 3 & 1) != 0) {
      FUN_100a1a54(*(uint *)(param_2 + 0x18),(int *)&local_18);
    }
    FUN_10051bc2((int *)&local_18,param_2);
    FUN_100a165c((int *)&local_18,(int *)local_28,iVar1);
    FUN_100a14c1(param_1,local_18,local_14 - (int)local_18);
    thunk_FUN_100ad48c(local_28[0]);
  }
  thunk_FUN_100ad48c(local_18);
  return uVar2;
}

