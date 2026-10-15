/*
 * FUN_18010ecc8 at 18010ecc8
 * undefined FUN_18010ecc8(void)
 * Address ranges: 18010ecc8-18010f0b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18010ecc8(uint *param_1,undefined8 param_2,ushort param_3,char param_4,char param_5,
                       byte param_6,char param_7,char param_8)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  byte bVar9;
  ushort uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 local_50;
  
  uVar5 = (uint)param_3;
  if (param_6 == 0) {
LAB_18010eecc:
    local_50 = 0;
    do {
      if (param_1[local_50 + 6] == uVar5) goto LAB_18010ef08;
      uVar4 = (int)local_50 + 1;
      local_50 = (ulonglong)uVar4;
    } while (uVar4 < 0x10);
    local_50 = CONCAT44(uVar5 << 4,*param_1) | 0x80000000;
LAB_18010ef08:
    uVar13 = local_50 >> 0x20;
    uVar12 = local_50;
  }
  else {
    lVar1 = (ulonglong)param_6 - 1;
    uVar12 = 0;
    uVar10 = *(ushort *)(&DAT_180229d4e + (ulonglong)param_6 * 2);
    uVar4 = (uint)uVar10;
    do {
      if (param_1[uVar12 + 0x16] == (uint)uVar10) goto LAB_18010ed64;
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
    } while (uVar11 < 0x10);
    uVar4 = (uint)uVar10;
    uVar12 = FUN_18010f178(param_1,param_2,uVar10,0);
    *(undefined2 *)((longlong)param_1 + lVar1 * 2 + 0xa8) = 0xffff;
LAB_18010ed64:
    uVar11 = (uint)uVar12;
    if (*(ushort *)((longlong)param_1 + lVar1 * 2 + 0xa8) != param_3) {
      uVar10 = param_3;
      if (0x3ff < (ushort)(param_3 - 0x26)) {
        uVar10 = 0xfffe;
      }
      *(ushort *)((longlong)param_1 + lVar1 * 2 + 0xa8) = uVar10;
      if (uVar4 == 1099) {
        FUN_1801060c0(param_2,0x890200000210,uVar12 & 0xffffffff,*param_1 | 0x80000000,0x44c0,0);
        iVar7 = 0x44ac;
        uVar4 = *param_1 | (uVar11 & 0xff | 0xffc00200) << 8;
LAB_18010edf0:
        FUN_1801060c0(param_2,0x890200000210,uVar12 & 0xffffffff,uVar4,iVar7,0);
      }
      else if ((uVar4 - 0x429 & 0xffff) < 4) {
        iVar7 = (uint)param_6 * 4 + 0x428c;
        uVar4 = *param_1 | 0x80000000;
        goto LAB_18010edf0;
      }
      if ((ushort)(param_3 - 0x26) < 0x400) {
        if (uVar5 != 0x26) {
          FUN_1801060c0(param_2,0x810200012010,uVar12 & 0xffffffff,0xffffffff,0,param_3 - 0x26);
        }
        FUN_1801060c0(param_2,0xf8810200012010,uVar12 & 0xffffffff,0xffffffff,0,0x400);
      }
      FUN_1801060c0(param_2,0x8d0200000000,uVar12 & 0xffffffff,uVar11 | (uVar11 | 0xffc00000) << 8,0
                    ,0);
      if ((ushort)(param_3 - 0x26) < 0x400) {
        FUN_1801060c0(param_2,0x470200100000,uVar12 & 0xffffffff,param_1[1] | 0x80000000,0x1e0,0);
      }
    }
    if (uVar11 == 0xffffffff) goto LAB_18010eecc;
    uVar4 = *param_1 | (uVar11 & 0xff | 0xffc00300) << 8;
    uVar5 = 0x26;
    if (0x3ff < (ushort)(param_3 - 0x26)) {
      uVar5 = (uint)param_3;
    }
    uVar13 = (ulonglong)(uVar5 << 4);
    local_50 = CONCAT44(uVar5 << 4,uVar4);
    uVar12 = (ulonglong)uVar4;
  }
  uVar5 = (uint)uVar12;
  if (param_4 == -0x1c && param_5 == '\0') {
    bVar2 = false;
    uVar4 = uVar5;
    goto LAB_18010f03c;
  }
  bVar2 = true;
  cVar3 = FUN_18010f138(param_1,uVar12 & 0xffffffff);
  uVar4 = FUN_18010eb78(param_1,param_2,0xffff);
  if (-1 < (int)uVar5) {
    iVar7 = (int)uVar5 >> 3;
    if (cVar3 == '\0') {
      bVar9 = *(byte *)((longlong)param_1 + (longlong)iVar7 + 0x14) &
              ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
    }
    else {
      bVar9 = *(byte *)((longlong)param_1 + (longlong)iVar7 + 0x14) |
              (byte)(1 << (ulonglong)(uVar5 & 7));
    }
    *(byte *)((longlong)param_1 + (longlong)iVar7 + 0x14) = bVar9;
  }
  FUN_1801060c0(param_2,0x290200100100,uVar4,uVar12 & 0xffffffff,uVar13,0);
  if (param_4 != -0x1c) {
    FUN_1801060c0(param_2,0xc60200130700,uVar4,uVar4,0);
  }
  if (param_5 == '\x01') {
    uVar6 = 0x570200100700;
LAB_18010f010:
    uVar8 = 0x110;
LAB_18010f014:
    FUN_1801060c0(param_2,uVar6,uVar4,param_1[1] | 0x80000000,uVar8,0);
  }
  else {
    if (param_5 == '\x02') {
      uVar8 = 0x100;
      uVar6 = 0x540200100700;
      goto LAB_18010f014;
    }
    if (param_5 == '\x03') {
      uVar6 = 0x560200100700;
      goto LAB_18010f010;
    }
  }
  local_50 = (ulonglong)uVar4;
  uVar13 = 0;
LAB_18010f03c:
  if ((param_7 != '\0') &&
     ((((int)uVar4 < 0 || (!bVar2 && param_8 == '\0')) &&
      (uVar5 = FUN_18010eb78(param_1,param_2,0xffff), uVar4 != uVar5)))) {
    FUN_1801060c0(param_2,0x290200100100,uVar5,uVar4,uVar13,0);
    local_50 = (ulonglong)uVar5;
  }
  return local_50;
}

