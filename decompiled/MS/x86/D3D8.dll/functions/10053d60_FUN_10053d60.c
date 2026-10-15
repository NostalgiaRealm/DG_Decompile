/*
 * FUN_10053d60 at 10053d60
 * undefined4 __stdcall FUN_10053d60(void * param_1, uint param_2, int param_3, int param_4, uint param_5)
 * Address ranges: 10053d60-10053f5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10053d60(void *param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  LPVOID local_34 [4];
  undefined4 *local_24;
  int local_20;
  int local_14;
  uint local_10;
  byte local_c;
  undefined3 uStack_b;
  
  uVar1 = param_2;
  FUN_1002d6f1(&local_24,0x200);
  local_14 = FUN_100a160b((int *)&local_24,*(uint *)(param_2 + 0x18));
  FUN_1002d6f1(local_34,0x80);
  FUN_100a19d8(*(uint *)(param_2 + 0x18),(int *)&local_24);
  uVar3 = 0;
  if (param_5 != 0) {
    do {
      if (*(char *)(uVar3 + param_3) != '\x11') {
        FUN_100a1b12((int *)&local_24);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_5);
    uVar3 = 0;
    do {
      FUN_100a1bb8((int *)&local_24);
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_5);
    uVar3 = 0;
    do {
      local_10 = (uint)*(byte *)(uVar3 + param_3);
      if (local_10 == 0x11) {
        param_2 = FUN_100a05ed((int)(uVar1 + 0x18),1,'\x01');
        FUN_100563a4(uVar1,3,7);
        FUN_100a138c((int *)(uVar1 + 0x18),(int *)local_34,0x10);
        FUN_100a138c((int *)(uVar1 + 0x18),(int *)local_34,0x44);
        FUN_100a138c((int *)(uVar1 + 0x18),(int *)local_34,0x38);
      }
      else {
        _local_c = CONCAT31(uStack_b,*(byte *)(local_10 + param_4));
        param_2 = FUN_100563a4(uVar1,local_10,*(byte *)(local_10 + param_4));
        FUN_100a138c((int *)(uVar1 + 0x18),(int *)local_34,0x36);
      }
      FUN_100a068b(uVar1 + 0x18,param_2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_5);
  }
  FUN_100a14fb((int *)local_34,1);
  if (*(char *)(uVar1 + 0x4d) != '\0') {
    FUN_100a14fb((int *)&local_24,2);
  }
  FUN_100a165c((int *)&local_24,(int *)local_34,local_14);
  FUN_100a14c1(param_1,local_24,local_20 - (int)local_24);
  thunk_FUN_100ad48c(local_34[0]);
  uVar2 = thunk_FUN_100ad48c(local_24);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}

