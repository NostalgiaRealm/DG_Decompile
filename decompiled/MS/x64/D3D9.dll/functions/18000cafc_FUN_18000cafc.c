/*
 * FUN_18000cafc at 18000cafc
 * ulonglong __fastcall FUN_18000cafc(uint * param_1, longlong * param_2, ushort param_3, byte param_4, char param_5, byte param_6, char param_7, char param_8)
 * Address ranges: 18000cafc-18000cef0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000cafc(uint *param_1,longlong *param_2,ushort param_3,byte param_4,char param_5,
                       byte param_6,char param_7,char param_8)

{
  ushort uVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint *puVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  uint uVar12;
  bool bVar13;
  int iVar14;
  undefined8 local_58;
  
  uVar6 = (ulonglong)param_6;
  uVar12 = (uint)param_3;
  plVar8 = param_2;
  if (param_6 == 0) {
LAB_18000cd34:
    uVar6 = FUN_18000cac0(param_1,plVar8,param_3);
    uVar9 = (uint)uVar6;
    local_58._4_4_ = (int)(uVar6 >> 0x20);
    iVar14 = local_58._4_4_;
    local_58 = uVar6;
  }
  else {
    uVar5 = 0;
    uVar1 = *(ushort *)(&DAT_180100f76 + uVar6 * 2);
    uVar11 = param_3 - 0x26;
    do {
      puVar7 = param_1;
      if (param_1[uVar5 + 0x16] == (uint)uVar1) goto LAB_18000cb68;
      uVar9 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar9;
    } while (uVar9 < 0x10);
    uVar5 = FUN_18000cef4((longlong)param_1,param_2,uVar1,'\0');
    *(undefined2 *)((longlong)puVar7 + uVar6 * 2 + 0xa6) = 0xffff;
LAB_18000cb68:
    uVar9 = (uint)uVar5;
    if (*(ushort *)((longlong)puVar7 + uVar6 * 2 + 0xa6) != param_3) {
      uVar4 = 0xfffe;
      if (uVar11 < 0x400) {
        uVar4 = param_3;
      }
      *(ushort *)((longlong)puVar7 + uVar6 * 2 + 0xa6) = uVar4;
      if (uVar1 == 1099) {
        FUN_1800019cc(param_2,0x890200000210,uVar9,*puVar7 | 0x80000000,0x44c0,0);
        uVar10 = (uVar9 & 0xff | 0xffc00200) << 8 | *param_1;
        iVar14 = 0x44ac;
LAB_18000cc2a:
        FUN_1800019cc(param_2,0x890200000210,uVar9,uVar10,iVar14,0);
      }
      else if ((ushort)(uVar1 - 0x429) < 4) {
        iVar14 = (uint)param_6 * 4 + 0x428c;
        uVar10 = *puVar7 | 0x80000000;
        goto LAB_18000cc2a;
      }
      if (uVar11 < 0x400) {
        if (param_3 != 0x26) {
          FUN_1800019cc(param_2,0x810200012010,uVar9,-1,0,uVar12 - 0x26);
        }
        FUN_1800019cc(param_2,0xf8810200012010,uVar9,-1,0,0x400);
      }
      plVar8 = (longlong *)0x8d0200000000;
      FUN_1800019cc(param_2,0x8d0200000000,uVar9,(uVar9 | 0xffc00000) << 8 | uVar9,0,0);
      if (uVar11 < 0x400) {
        plVar8 = (longlong *)0x470200100000;
        FUN_1800019cc(param_2,0x470200100000,uVar9,param_1[1] | 0x80000000,0x1e0,0);
      }
    }
    if (uVar9 == 0xffffffff) goto LAB_18000cd34;
    uVar9 = (uVar9 & 0xff | 0xffc00300) << 8 | *param_1;
    if (uVar11 < 0x400) {
      uVar12 = 0x26;
    }
    local_58 = CONCAT44(uVar12 << 4,uVar9);
    iVar14 = uVar12 << 4;
  }
  if ((param_4 == 0xe4) && (param_5 == '\0')) {
    bVar13 = false;
    uVar12 = uVar9;
    goto LAB_18000ce84;
  }
  if ((uVar9 & 0x80000000) == 0) {
    pbVar2 = (byte *)((longlong)param_1 + ((longlong)(int)uVar9 >> 3) + 0x14);
    bVar3 = *pbVar2;
    *pbVar2 = *pbVar2 | '\x01' << (uVar9 & 7);
    bVar13 = (bVar3 >> (uVar9 & 7) & 1) != 0;
  }
  else {
    bVar13 = false;
  }
  local_58 = FUN_18000ca0c(param_1,param_2,0xffff);
  if ((uVar9 & 0x80000000) == 0) {
    if (bVar13) {
      pbVar2 = (byte *)((longlong)param_1 + ((longlong)(int)uVar9 >> 3) + 0x14);
      *pbVar2 = *pbVar2 | '\x01' << (uVar9 & 7);
    }
    else {
      pbVar2 = (byte *)((longlong)param_1 + ((longlong)(int)uVar9 >> 3) + 0x14);
      *pbVar2 = *pbVar2 & ~('\x01' << (uVar9 & 7));
    }
  }
  uVar12 = (uint)local_58;
  FUN_1800019cc(param_2,0x290200100100,uVar12,uVar9,iVar14,0);
  if (param_4 != 0xe4) {
    FUN_1800019cc(param_2,0xc60200130700,uVar12,uVar12,0,(uint)param_4);
  }
  if (param_5 == '\x01') {
    uVar6 = 0x570200100700;
LAB_18000ce49:
    iVar14 = 0x110;
LAB_18000ce56:
    FUN_1800019cc(param_2,uVar6,uVar12,param_1[1] | 0x80000000,iVar14,0);
  }
  else {
    if (param_5 == '\x02') {
      uVar6 = 0x540200100700;
      iVar14 = 0x100;
      goto LAB_18000ce56;
    }
    if (param_5 == '\x03') {
      uVar6 = 0x560200100700;
      goto LAB_18000ce49;
    }
  }
  iVar14 = 0;
  local_58 = local_58 & 0xffffffff;
  bVar13 = true;
LAB_18000ce84:
  if ((param_7 != '\0') && (((int)uVar12 < 0 || (!bVar13 && param_8 == '\0')))) {
    uVar6 = FUN_18000ca0c(param_1,param_2,0xffff);
    if (uVar12 != (uint)uVar6) {
      FUN_1800019cc(param_2,0x290200100100,(uint)uVar6,uVar12,iVar14,0);
      local_58 = uVar6 & 0xffffffff;
    }
  }
  return local_58;
}

