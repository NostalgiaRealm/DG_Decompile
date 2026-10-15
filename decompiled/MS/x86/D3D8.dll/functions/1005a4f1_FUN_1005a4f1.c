/*
 * FUN_1005a4f1 at 1005a4f1
 * undefined4 __thiscall FUN_1005a4f1(void * this, void * param_1, uint param_2)
 * Address ranges: 1005a4f1-1005a626
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1005a4f1(void *this,void *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  LPVOID local_28 [4];
  undefined4 *local_18;
  int local_14;
  
  FUN_10056357(param_2);
  FUN_1002d6f1(&local_18,0x200);
  puVar1 = (uint *)(param_2 + 0x18);
  iVar2 = FUN_100a160b((int *)&local_18,*puVar1);
  FUN_100a19d8(*puVar1,(int *)&local_18);
  FUN_1002d6f1(local_28,0x80);
  FUN_1005a329(this,(int *)local_28,param_2);
  FUN_100a138c((int *)puVar1,(int *)local_28,0x3e);
  FUN_10056414((int *)&local_18,param_2);
  uVar4 = 0;
  if (*(char *)(param_2 + 0x1af) == '\0') {
    if (*(int *)(param_2 + 0x148) != 0) {
      do {
        FUN_100a1b12((int *)&local_18);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_2 + 0x148));
    }
  }
  else {
    do {
      if (*(char *)(param_2 + 0x124 + uVar4) != '\0') {
        FUN_100a1b12((int *)&local_18);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x11);
  }
  FUN_10055d96((int *)&local_18,param_2);
  if (*(char *)(param_2 + 0x4d) != '\0') {
    FUN_100a14fb((int *)&local_18,2);
  }
  FUN_100a165c((int *)&local_18,(int *)local_28,iVar2);
  FUN_100a14c1(param_1,local_18,local_14 - (int)local_18);
  thunk_FUN_100ad48c(local_28[0]);
  uVar3 = thunk_FUN_100ad48c(local_18);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

