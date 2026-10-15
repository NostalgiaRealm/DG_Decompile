/*
 * FUN_10014800 at 10014800
 * undefined FUN_10014800(void)
 * Address ranges: 10014800-10014bef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Inspection switch repair: indirect branch 10014b2c uses signed-byte displacements from table 10014bf0, multiplied by four and added to the table address. Explicit destinations from unchanged bytes: 0 -> 10014b30 (signed byte -48), 1 -> 10014b38 (signed byte -46), 2 -> 10014b44 (signed byte -43). This analysis-only jump-table override avoids a Ghidra ILP32 locked-varnode error; types remain inferred.
 */

/* Inspection switch repair: indirect branch 10014b2c uses signed-byte displacements from table
   10014bf0, multiplied by four and added to the table address. Explicit destinations from unchanged
   bytes: 0 -> 10014b30 (signed byte -48), 1 -> 10014b38 (signed byte -46), 2 -> 10014b44 (signed
   byte -43). This analysis-only jump-table override avoids a Ghidra ILP32 locked-varnode error;
   types remain inferred. */

ulonglong FUN_10014800(uint *param_1,ulonglong param_2,ushort param_3,char param_4,byte param_5,
                      byte param_6,char param_7,char param_8)

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
LAB_10014a24:
    local_48 = FUN_10014750(param_1,param_2,param_3);
    iVar15 = (int)(local_48 >> 0x20);
    uVar12 = local_48 & 0xffffffff;
  }
  else {
    uVar11 = 0;
    uVar10 = *(ushort *)(&DAT_10160abe + (uint)param_6 * 2);
    uVar8 = (uint)uVar10;
    do {
      if (param_1[uVar11 + 0x16] == (uint)uVar10) {
        uVar12 = (ulonglong)uVar11;
        goto LAB_100148b4;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < 0x10);
    uVar5 = (uint)param_6;
    uVar8 = (uint)uVar10;
    auVar16 = FUN_10014cc0(param_1,param_2,uVar10,0);
    param_2 = auVar16._8_8_;
    uVar12 = auVar16._0_8_ & 0xffffffff;
    *(undefined2 *)((int)param_1 + uVar5 * 2 + 0xa6) = 0xffff;
LAB_100148b4:
    puVar1 = (ushort *)((int)param_1 + uVar5 * 2 + 0xa6);
    uVar11 = (uint)uVar12;
    if (*puVar1 != param_3) {
      uVar10 = param_3;
      if (0x3ff < (ushort)(param_3 - 0x26)) {
        uVar10 = 0xfffe;
      }
      *puVar1 = uVar10;
      if (uVar8 == 1099) {
        FUN_10002470(uVar14,0x890200000210,uVar12,*param_1 | 0x80000000,0x44c0,0);
        iVar15 = 0x44ac;
        uVar5 = *param_1 | (uVar11 & 0xff | 0xffc00200) << 8;
LAB_10014944:
        FUN_10002470(uVar14,0x890200000210,uVar12,uVar5,iVar15,0);
      }
      else if ((uVar8 + 0xfbd7 & 0xffff) < 4) {
        iVar15 = (uVar5 + 0x10a3) * 4;
        uVar5 = *param_1 | 0x80000000;
        goto LAB_10014944;
      }
      if ((ushort)(param_3 - 0x26) < 0x400) {
        if (param_3 != 0x26) {
          FUN_10002470(uVar14,0x810200012010,uVar12,0xffffffff,0,param_3 - 0x26);
        }
        FUN_10002470(uVar14,0xf8810200012010,uVar12,0xffffffff,0,0x400);
      }
      FUN_10002470(uVar14,0x8d0200000000,uVar12,uVar11 | (uVar11 | 0xffc00000) << 8,0,0);
      param_2 = extraout_x1;
      if ((ushort)(param_3 - 0x26) < 0x400) {
        FUN_10002470(uVar14,0x470200100000,uVar12,param_1[1] | 0x80000000,0x1e0,0);
        param_2 = extraout_x1_00;
      }
    }
    if (uVar11 == 0xffffffff) goto LAB_10014a24;
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
    goto LAB_10014b78;
  }
  bVar2 = true;
  cVar4 = FUN_10014c78(param_1,uVar12);
  local_48 = FUN_10014618(param_1,uVar14,0xffff);
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
  FUN_10002470(uVar14,0x290200100100,uVar13,uVar12,iVar15,0);
  if (param_4 != -0x1c) {
    FUN_10002470(uVar14,0xc60200130700,uVar13,uVar13,0,param_4);
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
      goto LAB_10014b4c;
    case 3:
      uVar6 = 0x560200100700;
    }
    uVar7 = 0x110;
LAB_10014b4c:
    FUN_10002470(uVar14,uVar6,uVar13,param_1[1] | 0x80000000,uVar7,0);
  }
  local_48 = local_48 & 0xffffffff;
  iVar15 = 0;
LAB_10014b78:
  if ((param_7 != '\0') &&
     ((((int)(uint)uVar13 < 0 || ((!bVar2 && (param_8 == '\0')))) &&
      (uVar5 = FUN_10014618(param_1,uVar14,0xffff), (uint)uVar13 != uVar5)))) {
    FUN_10002470(uVar14,0x290200100100,uVar5,uVar13,iVar15,0);
    local_48 = (ulonglong)uVar5;
  }
  return local_48;
}

