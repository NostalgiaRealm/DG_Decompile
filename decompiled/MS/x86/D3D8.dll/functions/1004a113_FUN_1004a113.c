/*
 * FUN_1004a113 at 1004a113
 * undefined __stdcall FUN_1004a113(uint * param_1, int param_2, uint param_3, uint param_4, undefined4 param_5, uint param_6, uint param_7, int * param_8, int param_9, byte param_10)
 * Address ranges: 1004a113-1004a619
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004a113(uint *param_1,int param_2,uint param_3,uint param_4,undefined4 param_5,
                 uint param_6,uint param_7,int *param_8,int param_9,byte param_10)

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
    FUN_100a138c((int *)param_1,param_8,0x10);
    FUN_100a138c((int *)param_1,param_8,0x44);
    FUN_100a138c((int *)param_1,param_8,0x38);
  }
  if (param_2 == 5) {
    if (param_4 != uVar2) {
      FUN_100a183b(bVar1,0xf4);
      FUN_100a138c((int *)param_1,param_8,0x36);
    }
LAB_1004a248:
    FUN_100a138c((int *)param_1,param_8,0x38);
switchD_1004a29e_caseD_5:
    uVar2 = (uint)(param_2 == 6);
    iVar3 = 0;
    if (param_2 == 6) {
      iVar3 = 8;
    }
    if ((param_6 & 0x1000000) == 0) {
      bVar1 = 0;
    }
    else {
      bVar1 = 2;
    }
    bVar1 = (param_6 & 0x2000000) != 0 | bVar1;
    if (bVar1 == 0) {
LAB_1004a51f:
      FUN_100a05aa(param_1,param_3,1,param_3 + 8);
      FUN_100a0567(param_1,iVar3 + param_3,uVar2,iVar3 + param_3);
      FUN_100a138c((int *)param_1,param_8,0x46);
      bVar4 = bVar1 == 0;
    }
    else {
      if (bVar1 != 1) {
        if (bVar1 == 2) goto LAB_1004a51f;
        if (bVar1 != 3) goto switchD_1004a29e_default;
      }
      param_4 = 0;
      do {
        FUN_100a05aa(param_1,param_3,1,param_3 + 8);
        FUN_100a0567(param_1,iVar3 + param_3,uVar2,iVar3 + param_3);
        FUN_100a138c((int *)param_1,param_8,0x80000046);
        param_4 = param_4 + 1;
      } while (param_4 < 4);
      FUN_100a05aa(param_1,param_3,1,param_3 + 8);
      FUN_100a0567(param_1,iVar3 + param_3,uVar2,iVar3 + param_3);
      FUN_100a138c((int *)param_1,param_8,0x46);
      FUN_100a138c((int *)param_1,param_8,0x11);
      FUN_100a138c((int *)param_1,param_8,0x32);
      bVar4 = bVar1 == 1;
    }
    if (bVar4) {
      FUN_100a138c((int *)param_1,param_8,0x36);
    }
    goto switchD_1004a29e_default;
  }
  if (param_2 == 6) goto LAB_1004a248;
  switch(param_2) {
  case 0:
    FUN_100a138c((int *)param_1,param_8,0x36);
    return;
  case 1:
  case 4:
  case 7:
    FUN_100a05aa(param_1,param_3,0,param_3);
    FUN_100a0567(param_1,param_3,0,param_3);
    FUN_100a138c((int *)param_1,param_8,0x45);
    break;
  case 2:
    FUN_100a05aa(param_1,param_3,0,param_3);
    FUN_100a0567(param_1,param_3 + 8,1,param_3 + 8);
    goto LAB_1004a370;
  case 3:
    FUN_100a05aa(param_1,param_3,0,param_3);
    FUN_100a0567(param_1,param_3 + 0x10,2,param_3 + 0x10);
LAB_1004a370:
    FUN_100a138c((int *)param_1,param_8,0x45);
    goto LAB_1004a5b8;
  case 5:
  case 6:
    goto switchD_1004a29e_caseD_5;
  }
switchD_1004a29e_default:
  if ((((param_2 == 1) || (param_2 == 2)) || (param_2 == 3)) || ((param_2 == 4 || (param_2 == 7))))
  {
LAB_1004a5b8:
    if ((param_7 >> 4 & 1) != 0) {
      FUN_100a138c((int *)param_1,param_8,1);
      FUN_100a138c((int *)param_1,param_8,0x3c);
    }
  }
  return;
}

