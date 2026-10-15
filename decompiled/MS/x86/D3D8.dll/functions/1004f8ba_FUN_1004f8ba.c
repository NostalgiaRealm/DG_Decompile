/*
 * FUN_1004f8ba at 1004f8ba
 * undefined __stdcall FUN_1004f8ba(uint * param_1, int * param_2, uint param_3, uint param_4, int param_5, int param_6, int param_7, byte param_8, uint param_9, uint param_10)
 * Address ranges: 1004f8ba-1004fae5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004f8ba(uint *param_1,int *param_2,uint param_3,uint param_4,int param_5,int param_6,
                 int param_7,byte param_8,uint param_9,uint param_10)

{
  byte *pbVar1;
  byte bVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  ulonglong uVar6;
  byte local_18;
  
  puVar3 = param_1;
  uVar4 = FUN_1004a0d6(param_9,param_10,(char)param_3);
  if ((uVar4 & 0xff) == 0 && param_5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_100a05ed((int)param_1,4,'\x01');
  }
  uVar6 = __aullshr((char)param_3 * '\x03',0);
  bVar2 = 0xe4;
  local_18 = 0xe4;
  puVar5 = (uint *)0x0;
  param_1 = (uint *)0x0;
  if ((uVar6 & 7) != 0) {
    if (param_5 != 0) {
      FUN_100a138c((int *)puVar3,param_2,0xf);
      FUN_100a138c((int *)puVar3,param_2,0xf);
    }
    local_18 = bVar2;
    if ((param_10 >> 5 & 1) == 0) {
      local_18 = param_8;
      if (param_5 != 0) {
        FUN_100a138c((int *)puVar3,param_2,0x32);
        param_7 = (int)param_1;
        local_18 = bVar2;
      }
    }
    else {
      FUN_100a138c((int *)puVar3,param_2,0xe);
      FUN_100a138c((int *)puVar3,param_2,0x37);
      param_7 = (int)param_1;
      if (param_5 != 0) {
        FUN_100a138c((int *)puVar3,param_2,0);
      }
    }
    pbVar1 = (byte *)((int)puVar3 + ((int)param_3 >> 3) + 0x9c);
    *pbVar1 = *pbVar1 | '\x01' << (param_3 & 7);
    puVar5 = (uint *)param_7;
  }
  FUN_1004a113(puVar3,(uint)uVar6 & 7,param_3,param_4,uVar4,param_9,param_10,param_2,(int)puVar5,
               local_18);
  if (((uVar6 & 7) != 0) && (param_6 != 0)) {
    FUN_100a138c((int *)puVar3,param_2,0x32);
    FUN_100a138c((int *)puVar3,param_2,0x38);
  }
  FUN_100a068b((int)puVar3,uVar4);
  return;
}

