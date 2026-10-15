/*
 * FUN_100565eb at 100565eb
 * undefined4 __stdcall FUN_100565eb(void * param_1, int param_2)
 * Address ranges: 100565eb-100567c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100565eb(void *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  uint uVar4;
  byte *pbVar5;
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
  local_38 = 0x4e475349;
  local_34 = (byte *)0x0;
  local_30 = (byte *)0x0;
  local_2c = 8;
  FUN_1002d6f1(&local_28,0x210);
  FUN_100a14c1(&local_28,&local_38,0x10);
  FUN_100ada8e(local_80,0,0x40);
  pbVar5 = (byte *)0x0;
  if (*(char *)(iVar2 + 0x1af) == '\0') {
    local_c[0] = (byte *)0x0;
    pbVar5 = (byte *)0x0;
    uVar3 = extraout_ECX;
    if (*(int *)(iVar2 + 0x148) != 0) {
      do {
        bVar1 = local_c[0][iVar2 + 0x136];
        local_14 = (byte *)0x0;
        local_10 = 0;
        local_18 = (byte *)0x3;
        param_2 = CONCAT13(0xf,(undefined3)param_2);
        FUN_10056477(uVar3,(uint)bVar1,&local_14,&local_10,&local_18,
                     (undefined1 *)((int)&param_2 + 3));
        local_40 = FUN_100a1552(local_80,local_14);
        local_3c = local_10;
        local_30 = local_c[0];
        local_34 = local_18;
        local_2c = (uint)CONCAT11(*(undefined1 *)(iVar2 + 0x124 + (uint)bVar1),param_2._3_1_);
        local_38 = 0;
        FUN_100a14c1(&local_28,&local_40,0x18);
        pbVar5 = *(byte **)(iVar2 + 0x148);
        local_c[0] = local_c[0] + 1;
        uVar3 = extraout_ECX_02;
      } while (local_c[0] < pbVar5);
    }
  }
  else {
    uVar4 = 0;
    uVar3 = extraout_ECX;
    do {
      local_c[0] = (byte *)0x0;
      local_10 = 0;
      local_14 = (byte *)0x3;
      param_2 = CONCAT13(0xf,(undefined3)param_2);
      FUN_10056477(uVar3,uVar4,local_c,&local_10,&local_14,(undefined1 *)((int)&param_2 + 3));
      uVar3 = extraout_ECX_00;
      if (local_c[0] != (byte *)0x0) {
        local_40 = FUN_100a1552(local_80,local_c[0]);
        local_3c = local_10;
        local_30 = (byte *)(uint)*(byte *)(iVar2 + 0x136 + uVar4);
        local_34 = local_14;
        local_2c = (uint)CONCAT11(*(undefined1 *)(iVar2 + 0x124 + uVar4),param_2._3_1_);
        local_38 = 0;
        FUN_100a14c1(&local_28,&local_40,0x18);
        pbVar5 = pbVar5 + 1;
        uVar3 = extraout_ECX_01;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x11);
  }
  FUN_100a1690((int *)&local_28,(int)pbVar5,local_80);
  FUN_100a14c1(param_1,local_28,local_24 - (int)local_28);
  uVar3 = thunk_FUN_100ad48c(local_28);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

