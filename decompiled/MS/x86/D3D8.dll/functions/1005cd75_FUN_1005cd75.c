/*
 * FUN_1005cd75 at 1005cd75
 * undefined4 __thiscall FUN_1005cd75(void * this, void * param_1, int param_2)
 * Address ranges: 1005cd75-1005ce90
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1005cd75(void *this,void *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  uint uVar4;
  LPVOID local_24 [4];
  undefined4 *local_14;
  int local_10;
  
  FUN_1002d6f1(&local_14,0x200);
  puVar1 = (uint *)(param_2 + 0x18);
  iVar2 = FUN_100a160b((int *)&local_14,*puVar1);
  FUN_100a19d8(*puVar1,(int *)&local_14);
  FUN_1002d6f1(local_24,0x80);
  FUN_1005a966(param_2,extraout_ECX,(int *)local_24);
  FUN_1005b07a(this,*(uint **)(param_2 + 0xc0),param_2,(int *)local_24);
  FUN_1005cc66(param_2,(int *)local_24);
  FUN_100a138c((int *)puVar1,(int *)local_24,0x3e);
  FUN_1005cd17((int *)&local_14,param_2);
  FUN_1005ccda((int *)&local_14,param_2);
  FUN_10055d96((int *)&local_14,param_2);
  if (*(char *)(param_2 + 0x4d) != '\0') {
    FUN_100a14fb((int *)&local_14,2);
  }
  uVar4 = 0;
  if (*(int *)(param_2 + 0x60) != 0) {
    do {
      FUN_100a14fb((int *)&local_14,4);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_2 + 0x60));
  }
  FUN_100a165c((int *)&local_14,(int *)local_24,iVar2);
  FUN_100a14c1(param_1,local_14,local_10 - (int)local_14);
  thunk_FUN_100ad48c(local_24[0]);
  uVar3 = thunk_FUN_100ad48c(local_14);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

