/*
 * FUN_10034618 at 10034618
 * undefined __fastcall FUN_10034618(int param_1, int param_2, uint param_3, uint param_4, int param_5, uint * param_6, char param_7, int param_8, int param_9)
 * Address ranges: 10034618-100348d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_10034618(int param_1,int param_2,uint param_3,uint param_4,int param_5,uint *param_6,
            char param_7,int param_8,int param_9)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_270 [256];
  undefined1 local_170 [256];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float fStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  int local_50;
  undefined4 *local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  undefined4 *local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  
  local_38 = 0;
  if (param_4 != 0) {
    local_3c = 4;
    local_50 = param_1;
    local_20 = param_2;
    do {
      local_30 = 0;
      local_1c = local_38 * local_20 + param_1;
      puVar5 = (undefined4 *)((local_38 * param_9 >> 2) + param_8);
      uVar3 = param_4 - local_38;
      if (4 < param_4 - local_38) {
        uVar3 = local_3c;
      }
      local_40 = uVar3;
      if (param_3 != 0) {
        do {
          local_14 = param_3 - local_30;
          if (4 < param_3 - local_30) {
            local_14 = 4;
          }
          uVar7 = uVar3;
          local_4c = puVar5;
          local_34 = puVar5;
          if (param_7 == '\0' && param_6 == (uint *)0x0) {
            puVar5[1] = 0xffffffff;
            *puVar5 = 0xffffffff;
          }
          else {
            local_18 = 0;
            local_2c = local_1c;
            if (uVar3 != 0) {
              uVar6 = 1;
              do {
                uVar7 = 0;
                if (local_14 != 0) {
                  do {
                    uVar4 = *(uint *)(local_2c + uVar7 * 4);
                    uVar2 = uVar4 & *(uint *)(&DAT_10062d44 + param_5 * 4);
                    if (((param_7 != '\0') &&
                        ((uVar2 == *(uint *)(&DAT_10062d44 + param_5 * 4) || (uVar2 == 0)))) ||
                       ((param_6 != (uint *)0x0 && ((uVar4 & param_6[1]) == *param_6)))) {
                      local_18 = local_18 | uVar6;
                    }
                    uVar6 = uVar6 * 2;
                    uVar7 = uVar7 + 1;
                  } while (uVar7 < local_14);
                }
                local_2c = local_2c + local_20;
                uVar3 = uVar3 - 1;
                uVar7 = local_40;
              } while (uVar3 != 0);
            }
            local_28 = 6;
            local_24 = 8;
            if (local_18 != 0) {
              local_24 = 6;
            }
            FUN_100339fd(local_1c,local_20,local_14,uVar7,param_5,(int)local_270);
            local_60 = 0;
            uStack_5c = 0;
            uStack_58 = 0;
            fStack_54 = 0.0;
            local_70 = 0;
            uStack_6c = 0;
            uStack_68 = 0;
            fStack_64 = 0.0;
            FUN_10033c0c((int)local_270,local_14,uVar7,local_24,(undefined1 (*) [16])&local_60,
                         (undefined1 (*) [16])&local_70,local_18);
            local_28 = (int)fStack_54 << ((&DAT_10062d40)[param_5] & 0x1f);
            uVar3 = (int)fStack_64 << ((&DAT_10062d40)[param_5] & 0x1f);
            if (local_28 == uVar3) {
              uVar3 = *(uint *)(&DAT_10062d44 + param_5 * 4) ^ local_28;
            }
            if (local_18 == 0) {
              if (local_28 <= uVar3) goto LAB_100348d3;
LAB_100347eb:
              bVar1 = false;
            }
            else {
              if (local_28 <= uVar3) goto LAB_100347eb;
LAB_100348d3:
              bVar1 = true;
            }
            uVar4 = uVar3;
            uVar6 = local_28;
            if (!bVar1) {
              uVar4 = local_28;
              uVar6 = uVar3;
            }
            FUN_1003407f(local_1c,local_20,local_14,uVar7,param_5,param_7,param_6,local_24,uVar4,
                         uVar6,(undefined1 *)puVar5);
          }
          FUN_100339fd(local_1c,local_20,local_14,uVar7,param_5,(int)local_170);
          FUN_10033ea8((int)local_170,local_14,uVar7,4,&local_48,&local_44,0);
          FUN_10033f36((int)local_170,local_14,uVar7,4,local_48,local_44,puVar5 + 2,0);
          local_30 = local_30 + 4;
          local_1c = local_1c + 0x10;
          puVar5 = local_4c + 4;
          param_1 = local_50;
          uVar3 = uVar7;
        } while (local_30 < param_3);
      }
      local_38 = local_38 + 4;
    } while (local_38 < param_4);
  }
  return;
}

