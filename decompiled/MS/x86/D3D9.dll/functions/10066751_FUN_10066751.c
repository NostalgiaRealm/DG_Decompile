/*
 * FUN_10066751 at 10066751
 * undefined4 __stdcall FUN_10066751(void * param_1, int param_2, int param_3, int param_4, uint param_5)
 * Address ranges: 10066751-10066865
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10066751(void *param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_80 [17];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  int local_20;
  undefined4 local_14;
  undefined4 local_10;
  byte *local_c [2];
  
  iVar1 = param_3;
  uVar3 = 0;
  local_34 = 0x4e47534f;
  local_30 = 0;
  local_2c = 0;
  local_28 = 8;
  FUN_10036e19(&local_24,0x210);
  FUN_100c3d16(&local_24,&local_34,0x10);
  FUN_100cfed0(local_80,0,0x40);
  if (param_5 != 0) {
    do {
      local_c[0] = (byte *)0x0;
      local_10 = 0;
      local_14 = 3;
      param_3 = CONCAT13(0xf,(undefined3)param_3);
      FUN_1006bc3e(param_2,(uint)*(byte *)(uVar3 + iVar1),local_c,&local_10,&local_14,
                   (undefined1 *)((int)&param_3 + 3),'\x01');
      local_3c = FUN_100c3da7(local_80,local_c[0]);
      local_38 = local_10;
      local_30 = local_14;
      local_2c = uVar3 & 0xff;
      local_34 = 0;
      local_28 = (uint)CONCAT11(~*(byte *)(param_4 + (uint)*(byte *)(uVar3 + iVar1)),param_3._3_1_);
      FUN_100c3d16(&local_24,&local_3c,0x18);
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_5);
  }
  FUN_100c3ee5((int *)&local_24,param_5,local_80);
  FUN_100c3d16(param_1,local_24,local_20 - (int)local_24);
  uVar2 = thunk_FUN_100cfd6c(local_24);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}

