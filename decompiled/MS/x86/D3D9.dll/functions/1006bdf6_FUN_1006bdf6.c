/*
 * FUN_1006bdf6 at 1006bdf6
 * undefined4 __stdcall FUN_1006bdf6(void * param_1, int param_2, undefined4 param_3)
 * Address ranges: 1006bdf6-1006bfc4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1006bdf6(void *param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint uVar5;
  int local_80 [16];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  byte *local_34;
  byte *local_30;
  uint local_2c;
  undefined4 *local_28;
  int local_24;
  byte *local_18;
  byte *local_14;
  undefined4 local_10;
  byte *local_c [2];
  
  iVar2 = param_2;
  pbVar4 = (byte *)0x0;
  local_38 = 0x4e475349;
  local_34 = (byte *)0x0;
  local_30 = (byte *)0x0;
  local_2c = 8;
  FUN_10036e19(&local_28,0x210);
  FUN_100c3d16(&local_28,&local_38,0x10);
  FUN_100cfed0(local_80,0,0x40);
  if (*(char *)(iVar2 + 0x1b3) == '\0') {
    local_c[0] = (byte *)0x0;
    pbVar4 = (byte *)0x0;
    if (*(int *)(iVar2 + 0x148) != 0) {
      do {
        bVar1 = local_c[0][iVar2 + 0x136];
        local_14 = (byte *)0x0;
        local_10 = 0;
        local_18 = (byte *)0x3;
        param_2 = CONCAT13(0xf,(undefined3)param_2);
        FUN_1006bc3e(iVar2,(uint)bVar1,&local_14,&local_10,&local_18,
                     (undefined1 *)((int)&param_2 + 3),(char)param_3);
        local_40 = FUN_100c3da7(local_80,local_14);
        local_3c = local_10;
        local_30 = local_c[0];
        local_34 = local_18;
        local_2c = (uint)CONCAT11(*(undefined1 *)(iVar2 + 0x124 + (uint)bVar1),param_2._3_1_);
        local_38 = 0;
        FUN_100c3d16(&local_28,&local_40,0x18);
        pbVar4 = *(byte **)(iVar2 + 0x148);
        local_c[0] = local_c[0] + 1;
      } while (local_c[0] < pbVar4);
    }
  }
  else {
    uVar5 = 0;
    do {
      local_c[0] = (byte *)0x0;
      local_10 = 0;
      local_14 = (byte *)0x3;
      param_2 = CONCAT13(0xf,(undefined3)param_2);
      FUN_1006bc3e(iVar2,uVar5,local_c,&local_10,&local_14,(undefined1 *)((int)&param_2 + 3),
                   (char)param_3);
      if (local_c[0] != (byte *)0x0) {
        local_40 = FUN_100c3da7(local_80,local_c[0]);
        local_3c = local_10;
        local_30 = (byte *)(uint)*(byte *)(iVar2 + 0x136 + uVar5);
        local_34 = local_14;
        local_2c = (uint)CONCAT11(*(undefined1 *)(iVar2 + 0x124 + uVar5),param_2._3_1_);
        local_38 = 0;
        FUN_100c3d16(&local_28,&local_40,0x18);
        pbVar4 = pbVar4 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x11);
  }
  FUN_100c3ee5((int *)&local_28,(int)pbVar4,local_80);
  FUN_100c3d16(param_1,local_28,local_24 - (int)local_28);
  uVar3 = thunk_FUN_100cfd6c(local_28);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

