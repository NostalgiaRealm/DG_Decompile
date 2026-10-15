/*
 * FUN_10049697 at 10049697
 * undefined4 __stdcall FUN_10049697(void * param_1, int param_2)
 * Address ranges: 10049697-100497df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10049697(void *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  int local_10;
  
  local_24 = 0x4e47534f;
  local_20 = 0;
  local_1c = 0;
  local_18 = 8;
  iVar3 = (uint)(*(char *)(param_2 + 0x4e) != -1) + (uint)(*(char *)(param_2 + 0x4d) != -1) +
          (uint)(*(char *)(param_2 + 0x4c) != -1) + (uint)(*(char *)(param_2 + 0x4b) != -1) +
          (uint)(*(char *)(param_2 + 0x4a) != -1);
  iVar4 = iVar3 * 0x18;
  FUN_1002d6f1(&local_14,0x210);
  FUN_100a14c1(&local_14,&local_24,0x10);
  uVar5 = 0;
  local_24 = 0;
  local_20 = 3;
  local_18 = 0xf;
  local_2c = iVar4 + 8;
  do {
    cVar1 = *(char *)(param_2 + 0x4a + uVar5);
    if (cVar1 != -1) {
      local_1c = (int)cVar1;
      local_28 = uVar5;
      FUN_100a14c1(&local_14,&local_2c,0x18);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  local_2c = iVar4 + 0x12;
  local_1c = 0xffffffff;
  local_28 = 0;
  local_24 = 0;
  local_20 = 3;
  local_18 = 0xe01;
  if (*(char *)(param_2 + 0x4e) == -1) {
    uVar5 = 10;
  }
  else {
    FUN_100a14c1(&local_14,&local_2c,0x18);
    uVar5 = 0x13;
  }
  FUN_100a14c1(&local_14,(undefined4 *)s_SV_TARGET_100b9f80,uVar5);
  FUN_100a14c1(&local_14,(undefined4 *)&DAT_100b2680,-(local_10 - (int)local_14) & 3);
  local_14[2] = iVar3;
  local_14[1] = (local_10 - (int)local_14) - 8;
  FUN_100a14c1(param_1,local_14,local_10 - (int)local_14);
  uVar2 = thunk_FUN_100ad48c(local_14);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}

