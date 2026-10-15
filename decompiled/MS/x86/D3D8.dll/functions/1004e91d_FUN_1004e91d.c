/*
 * FUN_1004e91d at 1004e91d
 * undefined4 __thiscall FUN_1004e91d(void * this, uint * param_1, short * param_2, uint param_3, int * param_4, undefined4 * param_5, uint param_6, uint param_7)
 * Address ranges: 1004e91d-1004ea9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_1004e91d(void *this,uint *param_1,short *param_2,uint param_3,int *param_4,undefined4 *param_5,
            uint param_6,uint param_7)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  uint local_320 [12];
  undefined1 *local_2f0;
  undefined2 local_2ec;
  undefined4 local_2e8;
  int local_2e4 [25];
  undefined1 local_280 [588];
  LPVOID local_34 [4];
  int local_24;
  undefined4 *local_20;
  int local_1c;
  
  FUN_100ada8e(local_2e4,0,0x2a4);
  local_2e8 = 0;
  FUN_100ada8e((int *)local_320,0,0x38);
  local_320[0] = param_3;
  local_2f0 = local_280;
  local_2ec = 0x40;
  FUN_10049286((int)local_320);
  FUN_1004ade9(param_1,(short *)local_320,param_2);
  FUN_1004b34f((int)local_320,param_6,param_7);
  uVar2 = FUN_1004982e(param_4,(int)local_320);
  if ((char)uVar2 != '\0') {
    FUN_1002d6f1(&local_20,0x200);
    local_24 = FUN_100a160b((int *)&local_20,param_3);
    FUN_1002d6f1(local_34,0x80);
    uVar3 = FUN_1004e649(this,(int)param_1,local_320,(int *)&local_20,(int *)local_34,param_6,
                         param_7);
    if ((char)uVar3 != '\0') {
      FUN_100a165c((int *)&local_20,(int *)local_34,local_24);
      FUN_100a14c1(param_4,local_20,local_1c - (int)local_20);
      if (*(int *)((int)this + 8) != 0) {
        pbVar1 = (byte *)(((uint)(param_4[1] - *param_4) >> 1) + *param_4);
        *pbVar1 = *pbVar1 ^ 0x2a;
      }
      FUN_100a15a6(param_4);
      FUN_1004a68b((int)local_320,param_5);
      thunk_FUN_100ad48c(local_34[0]);
      uVar3 = thunk_FUN_100ad48c(local_20);
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    thunk_FUN_100ad48c(local_34[0]);
    uVar2 = thunk_FUN_100ad48c(local_20);
  }
  return uVar2 & 0xffffff00;
}

