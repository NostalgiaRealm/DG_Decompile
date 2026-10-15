/*
 * FUN_10059057 at 10059057
 * undefined __stdcall FUN_10059057(uint * param_1, int param_2, uint param_3, uint param_4, undefined4 param_5, undefined4 param_6, uint param_7, int * param_8, int param_9, byte param_10)
 * Address ranges: 10059057-1005955c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10059057(uint *param_1,int param_2,uint param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,uint param_7,int *param_8,int param_9,byte param_10)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  uVar2 = param_4;
  bVar1 = 0xe4;
  if (param_9 != 0) {
    uVar2 = param_9;
    bVar1 = param_10;
  }
  if ((param_2 == 2) || (param_2 == 6)) {
    FUN_100c3be1((int *)param_1,param_8,0x10);
    FUN_100c3be1((int *)param_1,param_8,0x44);
    FUN_100c3be1((int *)param_1,param_8,0x38);
  }
  if (param_2 == 5) {
    if (param_4 != uVar2) {
      FUN_100c4090(bVar1,0xf4);
      FUN_100c3be1((int *)param_1,param_8,0x36);
    }
LAB_10059188:
    FUN_100c3be1((int *)param_1,param_8,0x38);
switchD_100591dc_caseD_5:
    uVar2 = (uint)(param_2 == 6);
    iVar3 = 0;
    if (param_2 == 6) {
      iVar3 = 0x10;
    }
    if ((param_7 >> 0x11 & 1) == 0) {
      bVar1 = 0;
    }
    else {
      bVar1 = 2;
    }
    bVar1 = (param_7 >> 0x12 & 1) != 0 | bVar1;
    if (bVar1 == 0) {
LAB_10059462:
      FUN_100c2df1(param_1,param_3,1,param_3 + 0x10);
      FUN_100c2dae(param_1,iVar3 + param_3,uVar2,iVar3 + param_3);
      FUN_100c3be1((int *)param_1,param_8,0x46);
      bVar4 = bVar1 == 0;
    }
    else {
      if (bVar1 != 1) {
        if (bVar1 == 2) goto LAB_10059462;
        if (bVar1 != 3) goto switchD_100591dc_default;
      }
      param_4 = 0;
      do {
        FUN_100c2df1(param_1,param_3,1,param_3 + 0x10);
        FUN_100c2dae(param_1,iVar3 + param_3,uVar2,iVar3 + param_3);
        FUN_100c3be1((int *)param_1,param_8,0x80000046);
        param_4 = param_4 + 1;
      } while (param_4 < 4);
      FUN_100c2df1(param_1,param_3,1,param_3 + 0x10);
      FUN_100c2dae(param_1,iVar3 + param_3,uVar2,iVar3 + param_3);
      FUN_100c3be1((int *)param_1,param_8,0x46);
      FUN_100c3be1((int *)param_1,param_8,0x11);
      FUN_100c3be1((int *)param_1,param_8,0x32);
      bVar4 = bVar1 == 1;
    }
    if (bVar4) {
      FUN_100c3be1((int *)param_1,param_8,0x36);
    }
    goto switchD_100591dc_default;
  }
  if (param_2 == 6) goto LAB_10059188;
  switch(param_2) {
  case 0:
    FUN_100c3be1((int *)param_1,param_8,0x36);
    return;
  case 1:
  case 4:
  case 7:
    FUN_100c2df1(param_1,param_3,0,param_3);
    FUN_100c2dae(param_1,param_3,0,param_3);
    FUN_100c3be1((int *)param_1,param_8,0x45);
    break;
  case 2:
    FUN_100c2df1(param_1,param_3,0,param_3);
    FUN_100c2dae(param_1,param_3 + 0x10,1,param_3 + 0x10);
    goto LAB_100592ae;
  case 3:
    FUN_100c2df1(param_1,param_3,0,param_3);
    FUN_100c2dae(param_1,param_3 + 0x20,2,param_3 + 0x20);
LAB_100592ae:
    FUN_100c3be1((int *)param_1,param_8,0x45);
    goto LAB_100594fb;
  case 5:
  case 6:
    goto switchD_100591dc_caseD_5;
  }
switchD_100591dc_default:
  if ((((param_2 == 1) || (param_2 == 2)) || (param_2 == 3)) || ((param_2 == 4 || (param_2 == 7))))
  {
LAB_100594fb:
    if ((param_7 >> 0x1d & 1) != 0) {
      FUN_100c3be1((int *)param_1,param_8,1);
      FUN_100c3be1((int *)param_1,param_8,0x3c);
    }
  }
  return;
}

