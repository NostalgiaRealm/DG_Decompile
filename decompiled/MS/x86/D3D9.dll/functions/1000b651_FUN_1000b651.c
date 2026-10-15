/*
 * FUN_1000b651 at 1000b651
 * ulonglong __fastcall FUN_1000b651(uint * param_1, int * param_2, ushort param_3, byte param_4, char param_5, byte param_6, char param_7, char param_8)
 * Address ranges: 1000b651-1000b9b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong __fastcall
FUN_1000b651(uint *param_1,int *param_2,ushort param_3,byte param_4,char param_5,byte param_6,
            char param_7,char param_8)

{
  ushort uVar1;
  byte *pbVar2;
  bool bVar3;
  uint uVar4;
  ushort uVar5;
  uint *extraout_ECX;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  int local_8;
  
  local_8._0_2_ = param_3 - 0x26;
  if (param_6 == 0) {
LAB_1000b851:
    uVar8 = FUN_1000b5ea(param_1,param_3);
  }
  else {
    uVar4 = (uint)param_6;
    uVar1 = *(ushort *)(&DAT_100d4c16 + uVar4 * 2);
    uVar6 = 0;
    do {
      if (param_1[uVar6 + 0x16] == (uint)uVar1) goto LAB_1000b6c0;
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x10);
    uVar7 = FUN_1000b9c3(param_1,uVar1,'\0');
    uVar6 = (uint)uVar7;
    *(undefined2 *)((int)param_1 + uVar4 * 2 + 0xa6) = 0xffff;
LAB_1000b6c0:
    if (*(ushort *)((int)param_1 + uVar4 * 2 + 0xa6) != param_3) {
      uVar5 = 0xfffe;
      if ((ushort)local_8 < 0x400) {
        uVar5 = param_3;
      }
      *(ushort *)((int)param_1 + uVar4 * 2 + 0xa6) = uVar5;
      if (uVar1 == 1099) {
        FUN_10001877(param_2,uVar6,0x210,0x8902,*param_1 | 0x80000000,0x44c0,0);
        uVar4 = (uVar6 & 0xff | 0xffc00200) << 8 | *param_1;
        iVar10 = 0x44ac;
LAB_1000b758:
        FUN_10001877(param_2,uVar6,0x210,0x8902,uVar4,iVar10,0);
      }
      else if ((ushort)(uVar1 - 0x429) < 4) {
        iVar10 = uVar4 * 4 + 0x428c;
        uVar4 = *param_1 | 0x80000000;
        goto LAB_1000b758;
      }
      if ((ushort)local_8 < 0x400) {
        if (param_3 != 0x26) {
          FUN_10001877(param_2,uVar6,0x12010,0x8102,0xffffffff,0,param_3 - 0x26);
        }
        FUN_10001877(param_2,uVar6,0x12010,0xf88102,0xffffffff,0,0x400);
      }
      FUN_10001877(param_2,uVar6,0,0x8d02,(uVar6 | 0xffc00000) << 8 | uVar6,0,0);
      if ((ushort)local_8 < 0x400) {
        FUN_10001877(param_2,uVar6,0x100000,0x4702,param_1[1] | 0x80000000,0x1e0,0);
      }
    }
    if (uVar6 == 0xffffffff) goto LAB_1000b851;
    uVar4 = (uint)param_3;
    if ((ushort)local_8 < 0x400) {
      uVar4 = 0x26;
    }
    uVar8 = CONCAT44(uVar4 << 4,(uVar6 & 0xff | 0xffc00300) << 8 | *param_1);
  }
  local_8 = (int)(uVar8 >> 0x20);
  uVar4 = (uint)uVar8;
  if ((param_4 == 0xe4) && (param_5 == '\0')) {
    bVar3 = false;
    goto LAB_1000b961;
  }
  bVar3 = FUN_1000b9b4((int)param_1,uVar4);
  uVar6 = FUN_1000b55c(extraout_ECX,param_2,0xffff);
  if (-1 < (int)uVar4) {
    if (bVar3) {
      pbVar2 = (byte *)((int)param_1 + ((int)uVar4 >> 3) + 0x14);
      *pbVar2 = *pbVar2 | '\x01' << (uVar4 & 7);
    }
    else {
      pbVar2 = (byte *)((int)param_1 + ((int)uVar4 >> 3) + 0x14);
      *pbVar2 = *pbVar2 & ~('\x01' << (uVar4 & 7));
    }
  }
  FUN_10001877(param_2,uVar6,0x100100,0x2902,uVar4,local_8,0);
  if (param_4 != 0xe4) {
    FUN_10001877(param_2,uVar6,0x130700,0xc602,uVar6,0,(uint)param_4);
  }
  if (param_5 == '\x01') {
    iVar10 = 0x110;
    uVar4 = param_1[1] | 0x80000000;
    uVar9 = 0x5702;
LAB_1000b946:
    FUN_10001877(param_2,uVar6,0x100700,uVar9,uVar4,iVar10,0);
  }
  else {
    if (param_5 == '\x02') {
      iVar10 = 0x100;
      uVar4 = param_1[1] | 0x80000000;
      uVar9 = 0x5402;
      goto LAB_1000b946;
    }
    if (param_5 == '\x03') {
      iVar10 = 0x110;
      uVar4 = param_1[1] | 0x80000000;
      uVar9 = 0x5602;
      goto LAB_1000b946;
    }
  }
  bVar3 = true;
  uVar8 = (ulonglong)uVar6;
LAB_1000b961:
  local_8 = (int)(uVar8 >> 0x20);
  uVar4 = (uint)uVar8;
  if ((param_7 != '\0') &&
     ((((int)uVar4 < 0 || (!bVar3 && param_8 == '\0')) &&
      (uVar6 = FUN_1000b55c(param_1,param_2,0xffff), uVar4 != uVar6)))) {
    FUN_10001877(param_2,uVar6,0x100100,0x2902,uVar4,local_8,0);
    uVar8 = (ulonglong)uVar6;
  }
  return uVar8;
}

