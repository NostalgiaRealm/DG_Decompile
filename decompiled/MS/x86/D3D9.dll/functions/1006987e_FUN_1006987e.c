/*
 * FUN_1006987e at 1006987e
 * undefined __stdcall FUN_1006987e(int param_1, int * param_2, uint param_3, byte param_4, int param_5)
 * Address ranges: 1006987e-10069957
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006987e(int param_1,int *param_2,uint param_3,byte param_4,int param_5)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint local_70 [12];
  uint local_40;
  undefined1 local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int *local_14;
  
  bVar1 = param_4 & 0xf;
  uVar3 = param_3 >> 8 & 0x3f;
  if (uVar3 == 0) {
    bVar1 = 0xf;
  }
  local_14 = (int *)CONCAT31(local_14._1_3_,bVar1);
  if (bVar1 != 0) {
    FUN_10070652(param_1,*(uint *)(param_1 + 0x1ac + param_5 * 4),bVar1,local_70);
    local_14 = (int *)(param_1 + 0x18);
    if (uVar3 == 0) {
      local_40 = param_3;
      local_30 = 0xffffffff;
      local_2c = 0xffffffff;
      local_28 = 0xffffffff;
      local_24 = 0xffffffff;
    }
    else {
      puVar2 = FUN_10068cb2(param_5);
      local_24 = puVar2[3];
      local_28 = puVar2[2];
      local_2c = puVar2[1];
      local_30 = *puVar2;
      local_40 = *(uint *)(param_1 + 0xac);
    }
    local_3c = 0xe4;
    FUN_100c3cfd(local_14,param_2,0x36);
  }
  return;
}

