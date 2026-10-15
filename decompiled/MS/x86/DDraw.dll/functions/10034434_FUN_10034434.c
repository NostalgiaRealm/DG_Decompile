/*
 * FUN_10034434 at 10034434
 * undefined __fastcall FUN_10034434(int param_1, int param_2, uint param_3, uint param_4, int param_5, uint * param_6, char param_7, int param_8, int param_9)
 * Address ranges: 10034434-10034617
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_10034434(int param_1,int param_2,uint param_3,uint param_4,int param_5,uint *param_6,
            char param_7,int param_8,int param_9)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_150 [256];
  int local_50;
  undefined4 *local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 *local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  uint *local_1c;
  int local_18;
  uint local_14;
  
  local_38 = 0;
  if (param_4 != 0) {
    local_3c = 4;
    local_50 = param_1;
    local_2c = param_2;
    do {
      local_28 = 0;
      local_18 = local_38 * local_2c + param_1;
      local_4c = (undefined4 *)((local_38 * param_9 >> 2) + param_8);
      uVar6 = param_4 - local_38;
      if (4 < param_4 - local_38) {
        uVar6 = local_3c;
      }
      local_40 = uVar6;
      if (param_3 != 0) {
        do {
          local_14 = param_3 - local_28;
          if (4 < param_3 - local_28) {
            local_14 = 4;
          }
          if (param_7 == '\0' && param_6 == (uint *)0x0) {
            if (uVar6 != 0) {
              puVar4 = local_4c;
              for (uVar1 = uVar6 >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
                *puVar4 = 0xffffffff;
                puVar4 = puVar4 + 1;
              }
              for (uVar1 = (uint)((uVar6 & 1) != 0); uVar1 != 0; uVar1 = uVar1 - 1) {
                *(undefined2 *)puVar4 = 0xffff;
                puVar4 = (undefined4 *)((int)puVar4 + 2);
              }
            }
          }
          else {
            local_20 = local_18;
            iVar2 = local_18;
            local_30 = local_4c;
            if (uVar6 != 0) {
              do {
                local_20 = 0;
                uVar1 = 0;
                uVar3 = 0;
                local_24 = 0;
                if (local_14 != 0) {
                  do {
                    uVar5 = *(uint *)(iVar2 + local_24 * 4);
                    if ((param_6 == (uint *)0x0) || ((uVar5 & param_6[1]) != *param_6)) {
                      if ((param_5 == 0) || (param_5 == 1)) {
                        uVar5 = uVar5 >> 0x18;
                      }
                      uVar1 = uVar1 | (uVar5 >> 4) << ((byte)(local_24 << 2) & 0x1f);
                    }
                    uVar3 = (undefined2)uVar1;
                    local_24 = local_24 + 1;
                  } while (local_24 < local_14);
                }
                *(undefined2 *)local_30 = uVar3;
                local_30 = (undefined4 *)((int)local_30 + 2);
                uVar6 = uVar6 - 1;
                iVar2 = iVar2 + local_2c;
              } while (uVar6 != 0);
              local_34 = 0;
              uVar6 = local_40;
            }
          }
          local_1c = local_4c + 2;
          FUN_100339fd(local_18,local_2c,local_14,uVar6,param_5,(int)local_150);
          uVar1 = local_14;
          FUN_10033ea8((int)local_150,local_14,uVar6,4,&local_48,&local_44,0);
          FUN_10033f36((int)local_150,uVar1,uVar6,4,local_48,local_44,local_1c,0);
          local_28 = local_28 + 4;
          local_18 = local_18 + 0x10;
          local_4c = local_4c + 4;
          param_1 = local_50;
        } while (local_28 < param_3);
      }
      local_38 = local_38 + 4;
    } while (local_38 < param_4);
  }
  return;
}

