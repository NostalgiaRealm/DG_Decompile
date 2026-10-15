/*
 * FUN_10067504 at 10067504
 * undefined4 __stdcall FUN_10067504(void * param_1, int * param_2)
 * Address ranges: 10067504-1006767d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10067504(void *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int local_7c [16];
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  int local_20;
  uint local_14;
  uint local_10;
  int local_c;
  byte local_5;
  
  uVar6 = 0;
  local_34 = 0x4e47534f;
  local_30 = 0;
  local_2c = 0;
  local_28 = 8;
  FUN_10036e19(&local_24,0x210);
  FUN_100c3d16(&local_24,&local_34,0x10);
  FUN_100cfed0(local_7c,0,0x40);
  uVar7 = 0;
  do {
    local_5 = *(byte *)(uVar7 + 0x10 + param_2[4]);
    if ((local_5 != 0) && (bVar1 = *(byte *)(uVar7 + param_2[4]), bVar1 != 0xff)) {
      uVar5 = 0;
      local_14 = bVar1 & 0xf;
      local_c = *param_2;
      local_10 = *(uint *)(local_c + 8);
      iVar2 = local_c;
      if (local_10 != 0) {
        do {
          if (*(byte *)(local_c + 0x19 + (uint)*(byte *)(iVar2 + 0x214 + uVar5) * 8) == bVar1) {
            local_2c = uVar6 & 0xff;
            local_34 = 0;
            local_30 = 3;
            local_28 = (uint)CONCAT11(~(local_5 & 0xf),0xf);
            local_38 = local_14;
            pbVar3 = (byte *)FUN_100733bc((uint)bVar1);
            local_3c = FUN_100c3da7(local_7c,pbVar3);
            uVar6 = uVar6 + 1;
            FUN_100c3d16(&local_24,&local_3c,0x18);
            break;
          }
          iVar2 = *param_2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_10);
      }
    }
    uVar7 = uVar7 + 1;
    if (0xf < uVar7) {
      if (*(char *)((int)param_2 + 0x52e) != '\0') {
        local_2c = uVar6 & 0xff;
        local_38 = 0;
        local_34 = 0;
        local_30 = 3;
        local_28 = 0xf80f;
        local_3c = FUN_100c3da7(local_7c,(byte *)"NFACT");
        uVar6 = uVar6 + 1;
        FUN_100c3d16(&local_24,&local_3c,0x18);
      }
      FUN_100c3ee5((int *)&local_24,uVar6,local_7c);
      FUN_100c3d16(param_1,local_24,local_20 - (int)local_24);
      uVar4 = thunk_FUN_100cfd6c(local_24);
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
  } while( true );
}

