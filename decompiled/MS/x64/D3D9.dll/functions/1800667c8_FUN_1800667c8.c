/*
 * FUN_1800667c8 at 1800667c8
 * undefined __fastcall FUN_1800667c8(undefined8 param_1, uint * param_2, longlong param_3, undefined1 param_4)
 * Address ranges: 1800667c8-180066d64
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800667c8(undefined8 param_1,uint *param_2,longlong param_3,undefined1 param_4)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ushort uVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  uint local_res18 [2];
  uint local_res20 [2];
  int local_44;
  
  local_res20[0] = CONCAT31(local_res20[0]._1_3_,param_4);
  *(undefined8 *)(param_3 + 0x540) = 0x800030;
  *(undefined4 *)(param_3 + 0x548) = 0x1800130;
  uVar5 = 0;
  FUN_1800fbea0((undefined1 *)(param_3 + 0x100),0,0x114);
  do {
    *(undefined2 *)(param_3 + 0x54c) = *(undefined2 *)(param_3 + 0x540);
    *(undefined2 *)(param_3 + 0x54e) = *(undefined2 *)(param_3 + 0x542);
    uVar7 = (uint)uVar5;
    if (((byte)param_2[uVar5] & 0x1f) < 2) break;
    FUN_18006600c(param_1,(longlong)param_2,uVar7,param_3,0);
    FUN_18006600c(param_1,(longlong)param_2,uVar7,param_3,1);
    uVar5 = (ulonglong)(uVar7 + 1);
  } while (uVar7 + 1 < 8);
  uVar4 = 0x10;
  uVar7 = 0;
  uVar15 = 0x10;
  if ((((char)local_res20[0] != '\0') && (uVar15 = 0x10, (int)uVar5 == 1)) &&
     (uVar15 = 0x10, (*param_2 & 0x70000000) == 0x50000000)) {
    uVar15 = 0x20;
  }
  uVar10 = 0xffffffff;
  local_res20[0] = 0;
  local_res18[0] = 0;
  local_44 = -1;
  uVar6 = uVar5;
  uVar18 = local_res18[0];
  if ((int)uVar5 == 0) {
LAB_180066a3f:
    uVar5 = 0;
    if ((char)uVar15 == ' ') {
      if (uVar10 != 0xffffffff) {
        *(short *)(param_3 + ((longlong)(int)uVar10 + uVar4) * 0x10) = (short)uVar4;
      }
      if (local_44 != -1) {
        *(undefined2 *)(param_3 + ((longlong)local_44 + 0x18) * 0x10) = 0x110;
      }
    }
    uVar4 = 0xffffffff;
    do {
      uVar16 = 1 << ((byte)uVar5 & 0x1f);
      if ((uVar7 & uVar16) == 0) {
        *(undefined2 *)(param_3 + 0x100 + uVar5 * 0x10) = 0;
      }
      uVar6 = uVar5;
      if ((uVar18 & uVar16) == 0) {
        *(undefined2 *)(param_3 + 0x180 + uVar5 * 0x10) = 0;
        uVar6 = uVar4;
      }
      uVar13 = (uint)uVar6;
      uVar16 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar16;
      uVar4 = uVar6;
    } while (uVar16 < 8);
    cVar1 = FUN_180066670((ulonglong)(param_2[uVar10] & 0x1f),param_3 + 0x100,uVar7,uVar10,
                          param_2[uVar10] & 0x1f,0);
    cVar2 = FUN_180066670(uVar6,param_3 + 0x180,uVar18,uVar13,param_2[uVar6] >> 5 & 0x1f,1);
    uVar4 = 0;
    uVar5 = uVar4;
    if (cVar1 != '\0') {
      do {
        uVar12 = uVar5 + 1;
        *(undefined2 *)(param_3 + 0x100 + uVar5 * 0x10) = 0;
        uVar5 = uVar12;
      } while (uVar12 != 8);
      uVar10 = 0xffffffff;
    }
    uVar5 = uVar4;
    if (cVar2 != '\0') {
      do {
        uVar12 = uVar5 + 1;
        uVar6 = uVar5 * 2;
        *(undefined2 *)(param_3 + 0x180 + uVar5 * 0x10) = 0;
        uVar5 = uVar12;
      } while (uVar12 != 8);
      uVar13 = 0xffffffff;
    }
    if (uVar10 != 0xffffffff) {
      if ((((byte)param_2[uVar10] & 0x1f) == 2) &&
         (uVar6 = (ulonglong)(uVar10 * 4), (param_2[9] >> ((byte)(uVar10 * 4) & 0x1f) & 0xf) == 0))
      {
        lVar17 = (longlong)(int)uVar10 + 0x10;
        uVar6 = lVar17 * 2;
        if (*(short *)(param_3 + lVar17 * 0x10) ==
            *(short *)(param_3 + 0x104 + (longlong)(int)uVar10 * 0x10)) {
          *(undefined2 *)(param_3 + lVar17 * 0x10) = 0;
        }
      }
      if ((((byte)param_2[uVar10] & 0x1f) == 3) &&
         (uVar6 = (ulonglong)(uVar10 * 4), (param_2[10] >> ((byte)(uVar10 * 4) & 0x1f) & 0xf) == 0))
      {
        lVar17 = (longlong)(int)uVar10 + 0x10;
        uVar6 = lVar17 * 2;
        if (*(short *)(param_3 + lVar17 * 0x10) ==
            *(short *)(param_3 + 0x106 + (longlong)(int)uVar10 * 0x10)) {
          *(undefined2 *)(param_3 + lVar17 * 0x10) = 0;
        }
      }
    }
    uVar5 = uVar4;
    uVar12 = uVar4;
    if (uVar13 != 0xffffffff) {
      if (((param_2[uVar13] & 0x3e0) - 0x20 & 0xffffffdf) == 0) {
        lVar17 = (longlong)(int)uVar13 + 0x18;
        uVar6 = lVar17 * 2;
        if (*(short *)(param_3 + lVar17 * 0x10) ==
            *(short *)(param_3 + 0x184 + (longlong)(int)uVar13 * 0x10)) {
          *(undefined2 *)(param_3 + lVar17 * 0x10) = 0;
        }
      }
      if ((param_2[uVar13] & 0x3e0) == 0x60) {
        lVar17 = (longlong)(int)uVar13 + 0x18;
        uVar6 = lVar17 * 2;
        if (*(short *)(param_3 + lVar17 * 0x10) ==
            *(short *)(param_3 + 0x186 + (longlong)(int)uVar13 * 0x10)) {
          *(undefined2 *)(param_3 + lVar17 * 0x10) = 0;
        }
      }
    }
    do {
      lVar9 = uVar5 * 2;
      lVar17 = param_3 + uVar5 * 0x10;
      lVar8 = param_3;
      FUN_180066728(uVar6,param_3,(uint)uVar12,*(ushort *)(lVar17 + 0x100));
      FUN_180066728(uVar6,lVar8,(uint)uVar12,*(ushort *)(param_3 + 0x180 + lVar9 * 8));
      uVar14 = uVar4;
      if (*(short *)(lVar17 + 0x100) != 0) {
        do {
          lVar9 = param_3;
          FUN_180066728(uVar6,param_3,(uint)uVar12,*(ushort *)(lVar17 + 0x102 + uVar14 * 2));
          uVar14 = uVar14 + 1;
        } while (uVar14 != 3);
        FUN_180066728(uVar6,lVar9,(uint)uVar12,*(ushort *)(lVar17 + 0x108));
        FUN_180066728(uVar6,lVar9,(uint)uVar12,*(ushort *)(lVar17 + 0x10a));
      }
      iVar11 = (int)uVar12;
      uVar14 = uVar4;
      if (*(short *)(lVar17 + 0x180) != 0) {
        do {
          FUN_180066728(uVar6,param_3,(uint)uVar12,*(ushort *)(lVar17 + 0x182 + uVar14 * 2));
          iVar11 = (int)uVar12;
          uVar14 = uVar14 + 1;
        } while (uVar14 != 3);
      }
      uVar5 = uVar5 + 1;
      uVar12 = (ulonglong)(iVar11 + 1U);
    } while (iVar11 + 1U < 8);
    return;
  }
  while( true ) {
    uVar18 = (uint)uVar6;
    uVar7 = uVar18 - 1;
    uVar16 = uVar18 - 1;
    if ((*(ushort *)(param_3 + 0x100 + (ulonglong)uVar7 * 0x10) & 0xf0) == uVar15) break;
    uVar6 = (ulonglong)uVar16;
    uVar7 = 0;
    if (uVar16 == 0) goto LAB_1800669ff;
  }
  uVar4 = (ulonglong)uVar7;
  local_res20[0] = 1 << ((byte)uVar7 & 0x1f);
  uVar7 = local_res20[0];
  while (uVar10 = uVar16, uVar18 != 0) {
    lVar17 = 0;
    uVar10 = (uint)uVar6;
    uVar18 = uVar10 - 1;
    if ((uVar7 >> (uVar18 & 0x1f) & 1) != 0) {
      uVar12 = (ulonglong)uVar18;
      do {
        FUN_180066600(uVar4,param_3,(ushort *)(param_3 + (uVar12 * 8 + 0x81 + lVar17) * 2),
                      local_res20,local_res18);
        lVar17 = lVar17 + 1;
      } while (lVar17 != 3);
      uVar4 = 0x90;
      if ((*(short *)(param_3 + 0x108 + uVar12 * 0x10) == 0x90) ||
         (*(short *)(param_3 + 0x10a + uVar12 * 0x10) == 0x90)) {
        uVar4 = (ulonglong)(uVar10 - 2);
        local_res20[0] = local_res20[0] | 1 << ((byte)(uVar10 - 2) & 0x1f);
      }
      uVar7 = local_res20[0];
      if (((*(short *)(param_3 + 0x10c + uVar12 * 0x10) != 0) ||
          (*(short *)(param_3 + 0x10e + uVar12 * 0x10) != 0)) &&
         (((local_res20[0] >> (uVar10 & 0x1f) & 1) == 0 ||
          ((*(short *)(param_3 + 0x108 + uVar6 * 0x10) == 0 &&
           (*(short *)(param_3 + 0x10a + uVar6 * 0x10) == 0)))))) {
        *(undefined4 *)(param_3 + 0x10c + uVar12 * 0x10) = 0;
        *(undefined2 *)(param_3 + 0x104 + uVar12 * 0x10) = 0;
      }
    }
    uVar6 = (ulonglong)uVar18;
  }
LAB_1800669ff:
  do {
    uVar16 = 1 << ((char)uVar5 - 1U & 0x1f);
    iVar11 = (int)uVar5;
    uVar13 = iVar11 - 1;
    uVar3 = *(ushort *)(param_3 + 0x180 + (ulonglong)uVar13 * 0x10) & 0xf0;
    uVar4 = (ulonglong)uVar3;
    if (uVar3 == uVar15) {
      uVar18 = local_res18[0] | uVar16;
      local_44 = iVar11 + -1;
      local_res18[0] = uVar18;
      goto LAB_180066ab5;
    }
    uVar18 = local_res18[0];
    if ((local_res18[0] & uVar16) != 0) {
      local_44 = -1;
LAB_180066ab5:
      do {
        lVar17 = 0;
        iVar11 = (int)uVar5;
        uVar7 = iVar11 - 1;
        uVar5 = (ulonglong)uVar7;
        if ((uVar18 >> (uVar7 & 0x1f) & 1) != 0) {
          do {
            FUN_180066600(uVar4,param_3,(ushort *)(param_3 + (uVar5 * 8 + 0xc1 + lVar17) * 2),
                          local_res20,local_res18);
            lVar17 = lVar17 + 1;
            uVar18 = local_res18[0];
          } while (lVar17 != 3);
        }
      } while (uVar7 != 0);
      uVar4 = (ulonglong)(iVar11 + 0xf);
      uVar7 = local_res20[0];
      goto LAB_180066a3f;
    }
    uVar5 = (ulonglong)uVar13;
    if (uVar13 == 0) {
      uVar4 = (ulonglong)(iVar11 + 0xf);
      goto LAB_180066a3f;
    }
  } while( true );
}

