/*
 * FUN_10012968 at 10012968
 * undefined FUN_10012968(void)
 * Address ranges: 10012968-10012d07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Inspection switch repair: indirect branch 10012c4c uses signed-byte displacements from table 10012d08, multiplied by four and added to the table address. Explicit destinations from unchanged bytes: 0 -> 10012c50 (signed byte -46), 1 -> 10012c58 (signed byte -44), 2 -> 10012c64 (signed byte -41). This analysis-only jump-table override avoids a Ghidra ILP32 locked-varnode error; types remain inferred.
 */

/* Inspection switch repair: indirect branch 10012c4c uses signed-byte displacements from table
   10012d08, multiplied by four and added to the table address. Explicit destinations from unchanged
   bytes: 0 -> 10012c50 (signed byte -46), 1 -> 10012c58 (signed byte -44), 2 -> 10012c64 (signed
   byte -41). This analysis-only jump-table override avoids a Ghidra ILP32 locked-varnode error;
   types remain inferred. */

ulonglong FUN_10012968(uint *param_1,ulonglong param_2,ushort param_3,char param_4,byte param_5,
                      byte param_6,char param_7)

{
  ushort *puVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  ulonglong extraout_x1;
  ulonglong extraout_x1_00;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  byte bVar9;
  ushort uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined8 local_48;
  
  uVar5 = (uint)param_6;
  uVar14 = param_2 & 0xffffffff;
  if (param_6 == 0) {
LAB_10012b44:
    local_48 = FUN_10012910(param_1,param_2,param_3);
    iVar15 = (int)(local_48 >> 0x20);
    uVar12 = local_48 & 0xffffffff;
  }
  else {
    uVar11 = 0;
    uVar10 = *(ushort *)(&DAT_1012b14e + (uint)param_6 * 2);
    uVar8 = (uint)uVar10;
    do {
      if (param_1[uVar11 + 0x16] == (uint)uVar10) {
        uVar12 = (ulonglong)uVar11;
        goto LAB_10012a18;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < 0x10);
    uVar5 = (uint)param_6;
    uVar8 = (uint)uVar10;
    auVar16 = FUN_10012dd8(param_1,param_2,uVar10,0);
    param_2 = auVar16._8_8_;
    uVar12 = auVar16._0_8_ & 0xffffffff;
    *(undefined2 *)((int)param_1 + uVar5 * 2 + 0xa6) = 0xffff;
LAB_10012a18:
    puVar1 = (ushort *)((int)param_1 + uVar5 * 2 + 0xa6);
    uVar11 = (uint)uVar12;
    if (*puVar1 != param_3) {
      uVar10 = param_3;
      if (0x3ff < (ushort)(param_3 - 0x26)) {
        uVar10 = 0xfffe;
      }
      *puVar1 = uVar10;
      if ((uVar8 + 0xfbd7 & 0xffff) < 4) {
        FUN_10002350(uVar14,0x890200000210,uVar12,*param_1 | 0x80000000,(uVar5 + 0x10a3) * 4,0);
      }
      if ((ushort)(param_3 - 0x26) < 0x400) {
        if (param_3 != 0x26) {
          FUN_10002350(uVar14,0x810200012010,uVar12,0xffffffff,0,param_3 - 0x26);
        }
        FUN_10002350(uVar14,0xf8810200012010,uVar12,0xffffffff,0,0x400);
      }
      FUN_10002350(uVar14,0x8d0200000000,uVar12,uVar11 | (uVar11 | 0xffc00000) << 8,0,0);
      param_2 = extraout_x1;
      if ((ushort)(param_3 - 0x26) < 0x400) {
        FUN_10002350(uVar14,0x470200100000,uVar12,param_1[1] | 0x80000000,0x1e0,0);
        param_2 = extraout_x1_00;
      }
    }
    if (uVar11 == 0xffffffff) goto LAB_10012b44;
    uVar11 = *param_1 | (uVar11 & 0xff | 0xffc00300) << 8;
    uVar12 = (ulonglong)uVar11;
    uVar5 = 0x26;
    if (0x3ff < (ushort)(param_3 - 0x26)) {
      uVar5 = (uint)param_3;
    }
    iVar15 = uVar5 << 4;
    local_48 = CONCAT44(iVar15,uVar11);
  }
  if (param_4 == -0x1c && param_5 == 0) {
    bVar2 = false;
    uVar13 = uVar12;
    goto LAB_10012c98;
  }
  bVar2 = true;
  cVar4 = FUN_10012d90(param_1,uVar12);
  local_48 = FUN_100127d8(param_1,uVar14,0xffff);
  uVar13 = local_48 & 0xffffffff;
  uVar5 = (uint)uVar12;
  if (-1 < (int)uVar5) {
    iVar3 = (int)uVar5 >> 3;
    if (cVar4 == '\0') {
      bVar9 = *(byte *)((int)param_1 + iVar3 + 0x14) & ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
    }
    else {
      bVar9 = *(byte *)((int)param_1 + iVar3 + 0x14) | (byte)(1 << (ulonglong)(uVar5 & 7));
    }
    *(byte *)((int)param_1 + iVar3 + 0x14) = bVar9;
  }
  FUN_10002350(uVar14,0x290200100100,uVar13,uVar12,iVar15,0);
  if (param_4 != -0x1c) {
    FUN_10002350(uVar14,0xc60200130700,uVar13,uVar13,0,param_4);
  }
  if (param_5 != 0 && param_5 < 3 || param_5 == 3) {
                    /* WARNING: Switch is manually overridden */
    switch(param_5) {
    case 1:
      uVar6 = 0x570200100700;
      break;
    case 2:
      uVar7 = 0x100;
      uVar6 = 0x540200100700;
      goto LAB_10012c6c;
    case 3:
      uVar6 = 0x560200100700;
    }
    uVar7 = 0x110;
LAB_10012c6c:
    FUN_10002350(uVar14,uVar6,uVar13,param_1[1] | 0x80000000,uVar7,0);
  }
  local_48 = local_48 & 0xffffffff;
  iVar15 = 0;
LAB_10012c98:
  if ((param_7 != '\0') &&
     ((((int)(uint)uVar13 < 0 || (!bVar2)) &&
      (uVar5 = FUN_100127d8(param_1,uVar14,0xffff), (uint)uVar13 != uVar5)))) {
    FUN_10002350(uVar14,0x290200100100,uVar5,uVar13,iVar15,0);
    local_48 = (ulonglong)uVar5;
  }
  return local_48;
}

