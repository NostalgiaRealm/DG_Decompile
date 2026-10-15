/*
 * FUN_1002fa45 at 1002fa45
 * undefined __fastcall FUN_1002fa45(int param_1, int param_2, int * param_3, int * param_4, char param_5, char param_6, byte param_7)
 * Address ranges: 1002fa45-1002ff4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_1002fa45(int param_1,int param_2,int *param_3,int *param_4,char param_5,char param_6,
            byte param_7)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte bStack0000000f;
  byte local_14;
  
  uVar3 = FUN_10047ec0((int)param_3,(uint)param_7 * 2 + 2,'\x01');
  param_3[0x18] = uVar3;
  FUN_10048a6f(param_3,param_4,0xe);
  if (param_5 != '\0') {
    FUN_1002ec6e(param_2,param_3,param_4);
  }
  iVar5 = param_2 * 0x180;
  iVar1 = *(int *)(iVar5 + 0x144 + param_1);
  if ((*(int *)(iVar5 + 0x13c + param_1) == *(int *)(iVar5 + 0x140 + param_1)) || (param_7 == 0)) {
    bStack0000000f = 0;
  }
  else {
    bStack0000000f = 1;
  }
  if ((*(float *)(iVar5 + 0x124 + param_1) == *(float *)(iVar5 + 0x120 + param_1)) || (param_7 == 0)
     ) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((iVar1 == 0) || ((param_6 == '\0' && bStack0000000f == 0 && (!bVar2)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (param_7 != 0 || bVar2) {
    uVar3 = FUN_10047ec0((int)param_3,1,'\x01');
  }
  else {
    uVar3 = 0;
  }
  param_3[0x1a] = uVar3;
  if (iVar1 == 0) {
    if (param_7 == 0) goto LAB_1002ff25;
    uVar3 = 0x36;
LAB_1002fb8c:
    FUN_10048a6f(param_3,param_4,uVar3);
LAB_1002fed2:
    FUN_1002ed87(param_1,param_2,param_3,param_4);
  }
  else {
    if (bVar2) {
      if (bStack0000000f == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_10047ec0((int)param_3,1,'\x01');
      }
      param_3[0x17] = uVar3;
      if (*param_3 == 0x40) {
        uVar3 = FUN_10047ec0((int)param_3,1,'\x01');
        param_3[0x19] = uVar3;
        if (bStack0000000f != 0) {
          FUN_10048a6f(param_3,param_4,0x1d);
        }
        FUN_10048a6f(param_3,param_4,0x34);
      }
      else {
        FUN_1002ebc3(param_2,param_3,param_4);
        FUN_10048a6f(param_3,param_4,0);
        if (bStack0000000f != 0) {
          FUN_10048a6f(param_3,param_4,0x1d);
        }
        FUN_10048a6f(param_3,param_4,0x34);
      }
      FUN_10048a6f(param_3,param_4,0x33);
      if ((param_7 != 0) && (param_3[0x17] != 0)) {
        FUN_10048a6f(param_3,param_4,0x37);
      }
      FUN_10048a6f(param_3,param_4,0x1c);
      bStack0000000f = *(byte *)(iVar5 + 0x148 + param_1) & 1;
      local_14 = (byte)(*(uint *)(iVar5 + 0x148 + param_1) >> 1) & 1;
      if (param_6 == '\0') {
        FUN_10047f5e((int)param_3,param_3[0x19]);
      }
      else {
        param_3[param_2 + 0x1b] = param_3[0x19];
        FUN_10048a6f(param_3,param_4,0x1a);
        if (bStack0000000f != 0) {
          uVar3 = FUN_10047ec0((int)param_3,1,'\x01');
          uVar4 = FUN_10047ec0((int)param_3,1,'\x01');
          FUN_10048a6f(param_3,param_4,0);
          FUN_10048a6f(param_3,param_4,1);
          FUN_10048a6f(param_3,param_4,0x37);
          FUN_10047f5e((int)param_3,uVar3);
          FUN_10047f5e((int)param_3,uVar4);
        }
      }
      param_3[0x19] = 0;
      if (param_7 != 0) {
        bStack0000000f = bStack0000000f * '\x02' | local_14;
        if ((bStack0000000f == 1) || (bStack0000000f == 2)) {
          FUN_10048a6f(param_3,param_4,0x1e);
          if (bStack0000000f != 2) goto LAB_1002fea4;
          FUN_10048a6f(param_3,param_4,1);
        }
        else {
          if (bStack0000000f == 3) {
            FUN_10048a6f(param_3,param_4,0x3c);
          }
LAB_1002fea4:
          if (bStack0000000f == 0) goto LAB_1002fed2;
        }
        FUN_10048a6f(param_3,param_4,0x54);
        goto LAB_1002fed2;
      }
    }
    else if (param_7 != 0) {
      uVar3 = 0x1c;
      goto LAB_1002fb8c;
    }
LAB_1002ff25:
    FUN_10047f5e((int)param_3,param_3[0x18]);
    FUN_10047f5e((int)param_3,param_3[0x1a]);
    param_3[0x18] = 0;
    param_3[0x1a] = 0;
  }
  return;
}

