/*
 * FUN_1005cfde at 1005cfde
 * undefined1 __thiscall FUN_1005cfde(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined4 param_5, int param_6, undefined4 param_7, uint param_8, int * param_9, undefined4 * param_10, undefined4 param_11, undefined1 param_12, undefined1 param_13)
 * Address ranges: 1005cfde-1005d185
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall
FUN_1005cfde(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,int param_6,undefined4 param_7,uint param_8,int *param_9,
            undefined4 *param_10,undefined4 param_11,undefined1 param_12,undefined1 param_13)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_440 [6];
  uint local_428 [12];
  undefined1 *local_3f8;
  undefined2 local_3f4;
  int local_3f0 [5];
  undefined1 local_3dc;
  undefined1 local_3db;
  undefined1 local_3da [90];
  int local_380;
  undefined4 local_37c;
  undefined1 local_378;
  undefined1 local_377;
  int local_354 [195];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38 [8];
  void *local_18;
  undefined1 local_11;
  
  local_38[0] = param_6;
  local_18 = this;
  local_38[2] = param_2;
  local_38[4] = param_5;
  local_38[3] = param_3;
  local_38[5] = 0;
  piVar4 = local_38;
  piVar5 = local_440;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  FUN_100ada8e(local_3f0,0,0x3a0);
  FUN_100ada8e(local_354,0,0x15c);
  local_380 = param_4 + 4;
  local_37c = param_1;
  local_378 = 0;
  local_377 = param_12;
  uVar1 = FUN_100a15c6(param_8);
  local_3db = uVar1 < 0x50;
  local_3dc = param_13;
  FUN_100ada8e((int *)local_428,0,0x38);
  local_428[0] = param_8;
  local_3f8 = local_3da;
  local_3f4 = 0x40;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38[0] = 0;
  local_38[2] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_48 = 0x43425844;
  local_38[1] = 1;
  local_38[3] = 3;
  FUN_100a14c1(param_9,&local_48,0x2c);
  local_11 = 0;
  *(int *)(*param_9 + 0x20) = param_9[1] - *param_9;
  uVar2 = FUN_1005aa2c(param_9,local_440);
  if ((char)uVar2 != '\0') {
    *(int *)(*param_9 + 0x24) = param_9[1] - *param_9;
    iVar3 = FUN_10055981(param_9,(int)local_440);
    if (iVar3 != 0) {
      *(int *)(*param_9 + 0x28) = param_9[1] - *param_9;
      uVar2 = FUN_1005cd75(local_18,param_9,(int)local_440);
      if ((char)uVar2 != '\0') {
        FUN_100a15a6(param_9);
        FUN_1005ce91((int)local_440,param_10);
        local_11 = 1;
      }
    }
  }
  return local_11;
}

