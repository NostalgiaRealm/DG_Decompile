/*
 * FUN_1005ece5 at 1005ece5
 * undefined __stdcall FUN_1005ece5(uint * param_1, int * param_2, uint param_3, uint param_4, int param_5, int param_6, int param_7, byte param_8, undefined4 param_9, uint param_10)
 * Address ranges: 1005ece5-1005ef0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005ece5(uint *param_1,int *param_2,uint param_3,uint param_4,int param_5,int param_6,
                 int param_7,byte param_8,undefined4 param_9,uint param_10)

{
  byte *pbVar1;
  byte bVar2;
  uint *puVar3;
  bool bVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  byte local_18;
  
  puVar3 = param_1;
  bVar4 = FUN_10059019(param_9,param_10,(char)param_3);
  if (bVar4 || param_5 != 0) {
    uVar6 = FUN_100c2e34((int)param_1,4,'\x01');
  }
  else {
    uVar6 = 0;
  }
  uVar7 = __aullshr((char)param_3 * '\x03',param_10 & 0xffff);
  bVar2 = 0xe4;
  local_18 = 0xe4;
  puVar5 = (uint *)0x0;
  param_1 = (uint *)0x0;
  if ((uVar7 & 7) != 0) {
    if (param_5 != 0) {
      FUN_100c3be1((int *)puVar3,param_2,0xf);
      FUN_100c3be1((int *)puVar3,param_2,0xf);
    }
    local_18 = bVar2;
    if ((param_10 >> 0x1e & 1) == 0) {
      local_18 = param_8;
      if (param_5 != 0) {
        FUN_100c3be1((int *)puVar3,param_2,0x32);
        param_7 = (int)param_1;
        local_18 = bVar2;
      }
    }
    else {
      FUN_100c3be1((int *)puVar3,param_2,0xe);
      FUN_100c3be1((int *)puVar3,param_2,0x37);
      param_7 = (int)param_1;
      if (param_5 != 0) {
        FUN_100c3be1((int *)puVar3,param_2,0);
      }
    }
    pbVar1 = (byte *)((int)puVar3 + ((int)param_3 >> 3) + 0xac);
    *pbVar1 = *pbVar1 | '\x01' << (param_3 & 7);
    puVar5 = (uint *)param_7;
  }
  FUN_10059057(puVar3,(uint)uVar7 & 7,param_3,param_4,uVar6,param_9,param_10,param_2,(int)puVar5,
               local_18);
  if (((uVar7 & 7) != 0) && (param_6 != 0)) {
    FUN_100c3be1((int *)puVar3,param_2,0x32);
    FUN_100c3be1((int *)puVar3,param_2,0x38);
  }
  FUN_100c2ed2((int)puVar3,uVar6);
  return;
}

