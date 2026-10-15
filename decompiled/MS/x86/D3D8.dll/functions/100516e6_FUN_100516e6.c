/*
 * FUN_100516e6 at 100516e6
 * undefined __thiscall FUN_100516e6(void * this, uint * param_1, uint * param_2, uint param_3, uint param_4, uint param_5)
 * Address ranges: 100516e6-1005194f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100516e6(void *this,uint *param_1,uint *param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  void *this_00;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_EDX;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint local_5c [8];
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint *local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  int local_c;
  
  local_18 = param_3;
  puVar4 = (uint *)(param_3 + 4);
  local_c = 0;
  local_10 = this;
  do {
    while ((int)((int)puVar4 - local_18) >> 2 != *(int *)(param_1[0x39] + 0xd4 + local_c * 4)) {
      uVar2 = *puVar4 & 0xffff;
      if (uVar2 == 0) {
LAB_1005193f:
        puVar4 = puVar4 + 1;
      }
      else if (uVar2 == 0x51) {
        puVar4 = puVar4 + 6;
      }
      else {
        if (uVar2 == 0xfffd) goto LAB_1005193f;
        if (uVar2 == 0xfffe) {
          puVar4 = puVar4 + (*puVar4 >> 0x10);
          goto LAB_1005193f;
        }
        if (uVar2 == 0xffff) {
          return;
        }
        puVar4 = FUN_1004fae7(this,param_1,param_2,puVar4,0,param_4,param_5);
        local_38 = param_1[0x91];
        local_3c = param_1[0x90];
        FUN_100515a7(local_38,extraout_EDX,(int *)param_1,(int *)param_2,(int *)&local_3c,local_3c,
                     param_1[0x8c],param_1[0x8d],'\0');
      }
    }
    bVar1 = *(byte *)(local_c + 0x114 + param_1[0x39]);
    param_3 = 0;
    local_c = local_c + 1;
    uVar2 = bVar1 & 0xf0;
    if ((bVar1 & 0xf0) == 0) {
LAB_10051864:
      puVar4 = FUN_1004fae7(this,param_1,param_2,puVar4,0,param_4,param_5);
LAB_10051883:
      local_14 = param_1[0x90];
      puVar5 = param_1 + 0x90;
    }
    else {
      if (uVar2 == 0x10) {
        uVar3 = bVar1 & 0xf;
        puVar5 = puVar4;
        puVar6 = local_5c;
        for (uVar2 = uVar3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar4 = FUN_100516ba(puVar4 + uVar3);
        puVar4 = FUN_1004fae7(local_10,param_1,param_2,puVar4,0,param_4,param_5);
        local_2c = param_1[0x90];
        local_28 = param_1[0x91];
        FUN_100515a7(local_2c,local_28,(int *)param_1,(int *)param_2,(int *)&local_2c,local_2c,
                     param_1[0x8c],param_1[0x8d],'\0');
        FUN_1004fae7(local_10,param_1,param_2,local_5c,0,param_4,param_5);
        goto LAB_10051883;
      }
      if (uVar2 != 0x20) goto LAB_10051864;
      uVar2 = puVar4[1];
      param_3 = FUN_100a05ed((int)param_1,4,'\x01');
      this_00 = local_10;
      puVar4 = FUN_1004fae7(local_10,param_1,param_2,puVar4,param_3,param_4,param_5);
      puVar4 = FUN_100516ba(puVar4);
      puVar4 = FUN_1004fae7(this_00,param_1,param_2,puVar4,0,param_4,param_5);
      local_1c = param_1 + 0x90;
      local_24 = *local_1c;
      local_20 = param_1[0x91];
      FUN_100515a7(local_20,local_1c,(int *)param_1,(int *)param_2,(int *)&local_24,local_24,
                   param_1[0x8c],param_1[0x8d],'\0');
      FUN_1004f034((int)param_1,uVar2,0);
      puVar5 = local_1c;
      local_14 = param_3;
      if (param_3 == 0) goto LAB_10051883;
    }
    local_34 = *puVar5;
    local_30 = puVar5[1];
    FUN_100515a7(local_30,param_3,(int *)param_1,(int *)param_2,(int *)&local_34,local_14,
                 param_1[0x8c],param_1[0x8d],param_3 != 0);
    FUN_100a068b((int)param_1,param_3);
    this = local_10;
  } while( true );
}

