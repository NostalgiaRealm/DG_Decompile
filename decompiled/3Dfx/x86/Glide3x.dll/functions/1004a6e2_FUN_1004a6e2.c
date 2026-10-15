/*
 * FUN_1004a6e2 at 1004a6e2
 * int __fastcall FUN_1004a6e2(int * param_1, uint * param_2, uint param_3, uint param_4, byte param_5, uint param_6, byte param_7)
 * Address ranges: 1004a6e2-1004a9d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall
FUN_1004a6e2(int *param_1,uint *param_2,uint param_3,uint param_4,byte param_5,uint param_6,
            byte param_7)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar2 = param_3 >> 0x14 & 7;
  uVar3 = param_3 >> 8 & 0x3f;
  uVar4 = 0;
  bVar1 = 0xe4;
  if (uVar2 == 1) {
    bVar1 = (&DAT_10058074)[param_4 >> 2 & 3];
  }
  else if (uVar2 == 2) {
    bVar1 = (&DAT_10058070)[param_4 >> 2 & 3];
  }
  else if (uVar2 == 3) {
    bVar1 = *(byte *)((int)&DAT_1005806c + (param_4 >> 2 & 3));
  }
  uVar2 = param_3 >> 0x10 & 3;
  uVar5 = uVar2 + 1;
  if ((1 < uVar5) && (((*param_1 == 0x51 || (*param_1 == 0x10051)) || (*param_1 == 0x20051)))) {
    uVar5 = uVar2 + 2;
  }
  if ((param_3 & 0x40000000) == 0) {
    uVar9 = 0;
    uVar4 = 0;
    uVar2 = 0;
    iVar8 = 4;
    if ((param_3 & 0x10000000) == 0) {
      uVar7 = uVar5;
      bVar1 = FUN_1004b542(bVar1,param_5);
      uVar2 = FUN_1004b48c(uVar3,bVar1,uVar7,iVar8,uVar2,uVar4,uVar9);
    }
    else {
      uVar2 = FUN_1004b4e4(uVar3,param_5,uVar5,4,0,0,0);
    }
    *param_2 = uVar2;
    bVar6 = (param_3 & 0x88000000) != 0;
    if (bVar6) {
      *param_2 = uVar2 | 0x80000000;
      param_2[1] = *(uint *)(&DAT_10058058 + ((param_3 & 0x8000000 | param_3 >> 5) >> 0x1a) * 4);
    }
    uVar2 = (uint)bVar6;
    iVar8 = uVar2 + 1;
    if (uVar5 == 2) {
      param_2[iVar8] = param_3 & 0xff;
      iVar8 = uVar2 + 2;
    }
    else if (uVar5 == 3) {
      param_2[iVar8] = param_3 & 0xff;
      param_2[uVar2 + 2] = param_3 & 0xff;
      iVar8 = uVar2 + 3;
    }
    param_2[iVar8] = param_4 >> 4;
    iVar8 = iVar8 + 1;
  }
  else {
    if (uVar5 == 1) {
      uVar9 = 0;
      uVar5 = 0;
      uVar4 = 3;
      iVar8 = 4;
      uVar2 = 1;
      if ((param_3 & 0x10000000) == 0) {
        bVar1 = FUN_1004b542(bVar1,param_5);
        uVar4 = FUN_1004b48c(uVar3,bVar1,uVar2,iVar8,uVar4,uVar5,uVar9);
        uVar2 = extraout_ECX_04;
      }
      else {
        uVar4 = FUN_1004b4e4(uVar3,param_5,1,4,3,0,0);
        uVar2 = extraout_ECX_03;
      }
      *param_2 = uVar4;
      bVar6 = (param_3 & 0x88000000) != 0;
      if (bVar6) {
        *param_2 = uVar4 | 0x80000000;
        uVar2 = (param_3 & 0x8000000 | param_3 >> 5) >> 0x1a;
        param_2[1] = *(uint *)(&DAT_10058058 + uVar2 * 4);
      }
      uVar4 = bVar6 + 1;
    }
    else if (uVar5 == 2) {
      uVar9 = 0;
      uVar5 = 3;
      uVar4 = 0;
      iVar8 = 4;
      uVar2 = 2;
      if ((param_3 & 0x10000000) == 0) {
        bVar1 = FUN_1004b542(bVar1,param_5);
        uVar4 = FUN_1004b48c(uVar3,bVar1,uVar2,iVar8,uVar4,uVar5,uVar9);
        uVar2 = extraout_ECX_02;
      }
      else {
        uVar4 = FUN_1004b4e4(uVar3,param_5,2,4,0,3,0);
        uVar2 = extraout_ECX_01;
      }
      *param_2 = uVar4;
      bVar6 = (param_3 & 0x88000000) != 0;
      if (bVar6) {
        *param_2 = uVar4 | 0x80000000;
        uVar2 = (param_3 & 0x8000000 | param_3 >> 5) >> 0x1a;
        param_2[1] = *(uint *)(&DAT_10058058 + uVar2 * 4);
      }
      uVar4 = (uint)bVar6;
      param_2[uVar4 + 1] = param_3 & 0xff;
      uVar4 = uVar4 | 2;
    }
    else {
      uVar5 = uVar5 - 3;
      uVar2 = uVar3;
      if (uVar5 == 0) {
        uVar4 = 3;
        iVar8 = 4;
        uVar2 = 3;
        if ((param_3 & 0x10000000) == 0) {
          uVar9 = uVar5;
          bVar1 = FUN_1004b542(bVar1,param_5);
          uVar4 = FUN_1004b48c(uVar3,bVar1,uVar2,iVar8,uVar5,uVar9,uVar4);
          uVar2 = extraout_ECX_00;
        }
        else {
          uVar4 = FUN_1004b4e4(uVar3,param_5,3,4,0,0,3);
          uVar2 = extraout_ECX;
        }
        *param_2 = uVar4;
        bVar6 = (param_3 & 0x88000000) != 0;
        if (bVar6) {
          *param_2 = uVar4 | 0x80000000;
          uVar2 = (param_3 & 0x8000000 | param_3 >> 5) >> 0x1a;
          param_2[1] = *(uint *)(&DAT_10058058 + uVar2 * 4);
        }
        uVar4 = (uint)bVar6;
        param_2[uVar4 + 1] = param_3 & 0xff;
        param_2[uVar4 + 2] = param_3 & 0xff;
        uVar4 = uVar4 + 3;
      }
    }
    param_2[uVar4] = param_4 >> 4;
    uVar2 = FUN_1004acb8(param_6,param_7,1,uVar2,0,0);
    param_2[uVar4 + 1] = uVar2;
    param_2[uVar4 + 2] = param_6 & 0xff;
    iVar8 = uVar4 + 3;
  }
  if ((uVar3 == 8) && (param_1[2] = param_1[2] | 1 << (param_3 & 0x1f), (param_3 & 0x40000000) != 0)
     ) {
    param_1[1] = param_1[1] | 1 << (param_3 & 0x1f);
  }
  return iVar8;
}

