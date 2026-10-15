/*
 * FUN_10034288 at 10034288
 * undefined __fastcall FUN_10034288(int param_1, int param_2, uint param_3, uint param_4, int param_5, uint * param_6, char param_7, int param_8, int param_9)
 * Address ranges: 10034288-10034433
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_10034288(int param_1,int param_2,uint param_3,uint param_4,int param_5,uint *param_6,
            char param_7,int param_8,int param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_150 [268];
  int local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  int local_28;
  uint *local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_34 = 0;
  local_44 = param_1;
  local_28 = param_2;
  if (param_4 != 0) {
    do {
      local_20 = local_34 * local_28 + local_44;
      local_24 = (uint *)((local_34 * param_9 >> 2) + param_8);
      local_1c = param_4 - local_34;
      if (4 < param_4 - local_34) {
        local_1c = 4;
      }
      local_30 = 0;
      if (param_3 != 0) {
        do {
          uVar5 = param_3 - local_30;
          if (4 < param_3 - local_30) {
            uVar5 = 4;
          }
          local_18 = 0;
          if ((param_7 != '\0') || (param_6 != (uint *)0x0)) {
            uVar2 = 1;
            local_14 = 1;
            uVar1 = local_1c;
            iVar3 = local_20;
            local_38 = local_20;
            if (local_1c != 0) {
              do {
                uVar4 = 0;
                if (uVar5 != 0) {
                  do {
                    if (((param_7 != '\0') &&
                        (uVar2 = local_14,
                        (*(uint *)(iVar3 + uVar4 * 4) & *(uint *)(&DAT_10062d44 + param_5 * 4)) >>
                        ((&DAT_10062d40)[param_5] & 0x1f) < 0x80)) ||
                       ((param_6 != (uint *)0x0 &&
                        (uVar2 = local_14, (*(uint *)(iVar3 + uVar4 * 4) & param_6[1]) == *param_6))
                       )) {
                      local_18 = local_18 | local_14;
                      uVar2 = local_14;
                    }
                    uVar2 = uVar2 * 2;
                    uVar4 = uVar4 + 1;
                    local_14 = uVar2;
                  } while (uVar4 < uVar5);
                }
                uVar1 = uVar1 - 1;
                iVar3 = iVar3 + local_28;
              } while (uVar1 != 0);
              local_2c = 0;
            }
          }
          FUN_100339fd(local_20,local_28,uVar5,local_1c,param_5,(int)local_150);
          uVar2 = 4 - (local_18 != 0);
          FUN_10033ea8((int)local_150,uVar5,local_1c,uVar2,&local_40,&local_3c,local_18);
          FUN_10033f36((int)local_150,uVar5,local_1c,uVar2,local_40,local_3c,local_24,local_18);
          local_24 = local_24 + 2;
          local_20 = local_20 + 0x10;
          local_30 = local_30 + 4;
        } while (local_30 < param_3);
      }
      local_34 = local_34 + 4;
    } while (local_34 < param_4);
  }
  return;
}

