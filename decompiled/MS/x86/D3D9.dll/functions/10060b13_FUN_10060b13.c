/*
 * FUN_10060b13 at 10060b13
 * undefined __thiscall FUN_10060b13(void * this, uint * param_1, uint * param_2, uint param_3, undefined4 param_4, uint param_5)
 * Address ranges: 10060b13-10060d7c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10060b13(void *this,uint *param_1,uint *param_2,uint param_3,undefined4 param_4,uint param_5)

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
    while ((int)((int)puVar4 - local_18) >> 2 != *(int *)(param_1[0x3d] + 0x121c + local_c * 4)) {
      uVar2 = *puVar4 & 0xffff;
      if (uVar2 == 0) {
LAB_10060d6c:
        puVar4 = puVar4 + 1;
      }
      else if (uVar2 == 0x51) {
        puVar4 = puVar4 + 6;
      }
      else {
        if (uVar2 == 0xfffd) goto LAB_10060d6c;
        if (uVar2 == 0xfffe) {
          puVar4 = puVar4 + (*puVar4 >> 0x10);
          goto LAB_10060d6c;
        }
        if (uVar2 == 0xffff) {
          return;
        }
        puVar4 = FUN_1005ef10(this,param_1,param_2,puVar4,0,param_4,param_5);
        local_38 = param_1[0xcd];
        local_3c = param_1[0xcc];
        FUN_100609d4(local_38,extraout_EDX,(int *)param_1,(int *)param_2,(int *)&local_3c,local_3c,
                     param_1[200],param_1[0xc9],'\0');
      }
    }
    bVar1 = *(byte *)(local_c + 0x125c + param_1[0x3d]);
    param_3 = 0;
    local_c = local_c + 1;
    uVar2 = bVar1 & 0xf0;
    if ((bVar1 & 0xf0) == 0) {
LAB_10060c91:
      puVar4 = FUN_1005ef10(this,param_1,param_2,puVar4,0,param_4,param_5);
LAB_10060cb0:
      local_14 = param_1[0xcc];
      puVar5 = param_1 + 0xcc;
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
        puVar4 = FUN_10060ae7(puVar4 + uVar3);
        puVar4 = FUN_1005ef10(local_10,param_1,param_2,puVar4,0,param_4,param_5);
        local_2c = param_1[0xcc];
        local_28 = param_1[0xcd];
        FUN_100609d4(local_2c,local_28,(int *)param_1,(int *)param_2,(int *)&local_2c,local_2c,
                     param_1[200],param_1[0xc9],'\0');
        FUN_1005ef10(local_10,param_1,param_2,local_5c,0,param_4,param_5);
        goto LAB_10060cb0;
      }
      if (uVar2 != 0x20) goto LAB_10060c91;
      uVar2 = puVar4[1];
      param_3 = FUN_100c2e34((int)param_1,4,'\x01');
      this_00 = local_10;
      puVar4 = FUN_1005ef10(local_10,param_1,param_2,puVar4,param_3,param_4,param_5);
      puVar4 = FUN_10060ae7(puVar4);
      puVar4 = FUN_1005ef10(this_00,param_1,param_2,puVar4,0,param_4,param_5);
      local_1c = param_1 + 0xcc;
      local_24 = *local_1c;
      local_20 = param_1[0xcd];
      FUN_100609d4(local_20,local_1c,(int *)param_1,(int *)param_2,(int *)&local_24,local_24,
                   param_1[200],param_1[0xc9],'\0');
      FUN_1005e3fa((int)param_1,uVar2,0);
      puVar5 = local_1c;
      local_14 = param_3;
      if (param_3 == 0) goto LAB_10060cb0;
    }
    local_34 = *puVar5;
    local_30 = puVar5[1];
    FUN_100609d4(local_30,param_3,(int *)param_1,(int *)param_2,(int *)&local_34,local_14,
                 param_1[200],param_1[0xc9],param_3 != 0);
    FUN_100c2ed2((int)param_1,param_3);
    this = local_10;
  } while( true );
}

