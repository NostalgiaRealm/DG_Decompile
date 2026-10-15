/*
 * FUN_1005a627 at 1005a627
 * undefined1 __thiscall FUN_1005a627(void * this, int param_1, undefined4 param_2, undefined4 param_3, uint param_4, int * param_5, undefined4 param_6, undefined4 * param_7)
 * Address ranges: 1005a627-1005a818
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall
FUN_1005a627(void *this,int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int *param_5,
            undefined4 param_6,undefined4 *param_7)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  undefined4 **ppuVar4;
  undefined4 *puVar5;
  undefined4 local_4f0 [44];
  undefined4 local_440 [6];
  uint local_428 [2];
  undefined4 local_420 [10];
  undefined1 *local_3f8;
  undefined2 local_3f4;
  int local_3f0 [5];
  undefined1 local_3dc;
  undefined1 local_3db;
  undefined1 local_3da [90];
  int local_380 [54];
  uint local_2a8;
  int local_2a4;
  undefined1 local_291;
  void *local_4c;
  undefined4 local_48 [4];
  undefined4 *local_38 [4];
  int local_28;
  undefined4 local_24;
  undefined1 local_11;
  
  local_4c = this;
  local_38[0] = local_4f0;
  local_28 = 0;
  local_24 = 0;
  local_38[3] = (undefined4 *)param_3;
  local_38[2] = (undefined4 *)param_2;
  ppuVar4 = local_38;
  puVar5 = local_440;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *ppuVar4;
    ppuVar4 = ppuVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_100ada8e(local_3f0,0,0x3a0);
  FUN_100ada8e(local_380,0,0xf4);
  local_2a4 = param_1;
  local_2a8 = *(uint *)(param_1 + 0x44) & 0xfffff;
  if ((param_4 == 0x10051) || (local_291 = 1, param_4 == 0x20051)) {
    local_291 = 0;
  }
  uVar1 = FUN_100a15c6(param_4);
  local_3db = uVar1 < 0x50;
  local_3dc = 0;
  FUN_100ada8e((int *)local_428,0,0x38);
  local_428[0] = param_4;
  local_3f8 = local_3da;
  local_3f4 = 0x40;
  FUN_100562fd((int)local_440);
  local_48[0] = 0x43425844;
  local_38[1] = (undefined4 *)0x1;
  local_38[3] = (undefined4 *)0x3;
  local_28 = extraout_ECX;
  FUN_100a14c1(param_5,local_48,0x2c);
  local_11 = 0;
  *(int *)(*param_5 + 0x20) = param_5[1] - *param_5;
  FUN_1002d6f1(local_38 + 3,0x800);
  uVar2 = FUN_1005a4f1(local_4c,local_38 + 3,(uint)local_440);
  if ((char)uVar2 != '\0') {
    uVar2 = FUN_100565eb(param_5,(int)local_440);
    if ((char)uVar2 != '\0') {
      *(int *)(*param_5 + 0x24) = param_5[1] - *param_5;
      iVar3 = FUN_10055981(param_5,(int)local_440);
      if (iVar3 != 0) {
        *(int *)(*param_5 + 0x28) = param_5[1] - *param_5;
        FUN_100a14c1(param_5,local_38[3],local_28 - (int)local_38[3]);
        FUN_100a15a6(param_5);
        if (param_7 != (undefined4 *)0x0) {
          puVar5 = local_420;
          for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
            *param_7 = *puVar5;
            puVar5 = puVar5 + 1;
            param_7 = param_7 + 1;
          }
        }
        local_11 = 1;
      }
    }
  }
  thunk_FUN_100ad48c(local_38[3]);
  return local_11;
}

