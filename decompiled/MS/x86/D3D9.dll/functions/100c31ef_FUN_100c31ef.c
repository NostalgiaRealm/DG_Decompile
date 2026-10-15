/*
 * FUN_100c31ef at 100c31ef
 * int __fastcall FUN_100c31ef(int * param_1, uint * param_2, uint param_3, byte param_4, uint param_5, byte param_6)
 * Address ranges: 100c31ef-100c3438
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall
FUN_100c31ef(int *param_1,uint *param_2,uint param_3,byte param_4,uint param_5,byte param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  uVar1 = param_3 >> 8 & 0x3f;
  uVar9 = param_3 >> 0x10 & 3;
  uVar3 = param_3 & 0xff;
  uVar4 = uVar3;
  if (1 < uVar9) {
    uVar4 = param_3 >> 0xe & 3;
  }
  if ((((uVar1 == 6) || (uVar1 == 7)) &&
      ((*param_1 == 0x51 || ((*param_1 == 0x10051 || (*param_1 == 0x20051)))))) && (uVar9 == 1)) {
    uVar9 = 2;
  }
  uVar2 = ~(param_3 >> 0x1b) & 4;
  uVar5 = param_3 & 0x10000000;
  if ((param_3 & 0x88000000) == 0) {
    if ((param_3 & 0x40000000) == 0) {
      if (uVar5 == 0) {
        uVar2 = FUN_100c3439(param_3,param_4,uVar9,uVar2,0,0);
      }
      else {
        uVar2 = FUN_100c34d4(param_3,param_4,uVar9,uVar5,0,0);
      }
      *param_2 = uVar2;
      iVar10 = uVar9 + 1;
      param_2[1] = uVar4;
      param_2[2] = uVar3;
    }
    else {
      uVar7 = (-(uint)(1 < uVar9) & 0xfffffffd) + 3;
      uVar8 = -(uint)(1 < uVar9) & 3;
      if (uVar5 == 0) {
        uVar2 = FUN_100c3439(param_3,param_4,uVar9,uVar2,uVar7,uVar8);
        uVar6 = extraout_ECX_02;
      }
      else {
        uVar2 = FUN_100c34d4(param_3,param_4,uVar9,uVar5,uVar7,uVar8);
        uVar6 = extraout_ECX_01;
      }
      *param_2 = uVar2;
      param_2[1] = uVar4;
      param_2[2] = uVar3;
      uVar4 = FUN_100c34d4(param_5,param_6,1,uVar6,0,0);
      param_2[uVar9 + 1] = uVar4;
      param_2[uVar9 + 2] = param_5 & 0xff;
      iVar10 = uVar9 + 3;
    }
  }
  else {
    if ((param_3 & 0x40000000) == 0) {
      if (uVar5 == 0) {
        uVar2 = FUN_100c3439(param_3,param_4,uVar9,uVar2,0,0);
      }
      else {
        uVar2 = FUN_100c34d4(param_3,param_4,uVar9,uVar5,0,0);
      }
      *param_2 = uVar2 | 0x80000000;
      param_2[1] = *(uint *)(&DAT_100d8d74 + ((param_3 & 0x8000000 | param_3 >> 5) >> 0x1a) * 4);
      param_2[2] = uVar4;
      param_2[3] = uVar3;
    }
    else {
      uVar7 = (-(uint)(1 < uVar9) & 0xfffffffd) + 3;
      uVar8 = -(uint)(1 < uVar9) & 3;
      if (uVar5 == 0) {
        uVar2 = FUN_100c3439(param_3,param_4,uVar9,uVar2,uVar7,uVar8);
        uVar6 = extraout_ECX_00;
      }
      else {
        uVar2 = FUN_100c34d4(param_3,param_4,uVar9,uVar5,uVar7,uVar8);
        uVar6 = extraout_ECX;
      }
      *param_2 = uVar2 | 0x80000000;
      param_2[1] = *(uint *)(&DAT_100d8d74 + ((param_3 & 0x8000000 | param_3 >> 5) >> 0x1a) * 4);
      param_2[2] = uVar4;
      param_2[3] = uVar3;
      uVar4 = FUN_100c34d4(param_5,param_6,1,uVar6,0,0);
      param_2[uVar9 + 2] = uVar4;
      param_2[uVar9 + 3] = param_5 & 0xff;
      uVar9 = uVar9 + 2;
    }
    iVar10 = uVar9 + 2;
  }
  if (uVar1 == 6) {
    param_1[4] = param_1[4] | 1 << (param_3 & 0x1f);
  }
  else if (uVar1 == 7) {
    param_1[3] = param_1[3] | 1 << (param_3 & 0x1f);
  }
  return iVar10;
}

