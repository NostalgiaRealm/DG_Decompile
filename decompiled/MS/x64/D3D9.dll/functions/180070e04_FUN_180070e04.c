/*
 * FUN_180070e04 at 180070e04
 * uint * __fastcall FUN_180070e04(undefined8 param_1, uint * param_2, uint param_3, int param_4, uint * param_5, longlong * param_6, char param_7, char param_8)
 * Address ranges: 180070e04-1800712e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_180070e04(undefined8 param_1,uint *param_2,uint param_3,int param_4,uint *param_5,
                    longlong *param_6,char param_7,char param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  
  uVar12 = 0;
  if (param_3 != 0) {
    lVar10 = 0;
    do {
      uVar4 = *param_2;
      iVar7 = 0;
      if (uVar12 == 1) {
        iVar7 = param_4;
      }
      uVar8 = (uVar4 & 0x7ff) + iVar7;
      bVar9 = (byte)(uVar4 >> 0x10);
      if ((uVar4 & 0x2000) == 0) {
        uVar5 = 0;
      }
      else {
        param_2 = param_2 + 1;
        uVar5 = *param_2;
      }
      if (param_7 != '\0') {
        bVar9 = bVar9 >> 6;
        bVar9 = bVar9 | ((bVar9 << 2 | bVar9) << 2 | bVar9) << 2;
      }
      param_2 = param_2 + 1;
      uVar1 = uVar4 & 0xf000000;
      if (param_8 != '\0') {
        uVar1 = 0xb000000;
      }
      uVar2 = uVar4 >> 0x14 & 0x700 | uVar4 & 0x1800;
      uVar3 = uVar2 >> 8;
      if (uVar2 == 0) {
        uVar4 = FUN_18006c684(0xb000000,(longlong)param_5,uVar8);
LAB_180071230:
        param_5[lVar10 * 0xc + 0xfc] = uVar4;
        *(byte *)(param_5 + lVar10 * 0xc + 0xfd) = bVar9;
        param_5[lVar10 * 0xc + 0x100] = 0xffffffff;
        param_5[lVar10 * 0xc + 0x101] = 0xffffffff;
        param_5[lVar10 * 0xc + 0x102] = 0xffffffff;
        param_5[lVar10 * 0xc + 0x103] = 0xffffffff;
      }
      else if (uVar3 == 1) {
        FUN_180070bdc(param_5 + lVar10 * 0xc + 0xfc,param_5,param_6,uVar8,bVar9,
                      -(uint)((uVar4 & 0x2000) != 0) & uVar5,param_5 + lVar10 * 0xc + 0xfc);
      }
      else if (uVar3 == 2) {
        if (((char)param_5[0x3e] == '\0') ||
           (lVar11 = *(longlong *)(param_5 + 0x40),
           *(char *)((ulonglong)uVar8 + 0x331 + lVar11) == '\0')) {
          uVar4 = param_5[0x1e];
          uVar8 = uVar8 * 0x10 + 0x80;
LAB_1800710f7:
          *(byte *)(param_5 + lVar10 * 0xc + 0xfd) = bVar9;
          param_5[lVar10 * 0xc + 0xfc] = uVar4;
          param_5[lVar10 * 0xc + 0x100] = uVar8;
          goto LAB_18007110d;
        }
        uVar6 = (ulonglong)(uVar8 * 4);
        uVar2 = *(uint *)(lVar11 + 0x414 + ((bVar9 >> 6) + uVar6) * 4);
        uVar4 = *(uint *)(lVar11 + 0x414 + ((bVar9 >> 4 & 3) + uVar6) * 4);
        uVar8 = *(uint *)(lVar11 + 0x414 + ((bVar9 >> 2 & 3) + uVar6) * 4);
        uVar5 = *(uint *)(lVar11 + 0x414 + ((bVar9 & 3) + uVar6) * 4);
LAB_1800710ad:
        param_5[lVar10 * 0xc + 0xfc] = 0x410400;
        *(undefined1 *)(param_5 + lVar10 * 0xc + 0xfd) = 0xe4;
        param_5[lVar10 * 0xc + 0x100] = uVar5;
        param_5[lVar10 * 0xc + 0x101] = uVar8;
        param_5[lVar10 * 0xc + 0x102] = uVar4;
        param_5[lVar10 * 0xc + 0x103] = uVar2;
      }
      else if (uVar3 == 3) {
        param_5[lVar10 * 0xc + 0xfc] = uVar8 + 5 | 0x410100;
        *(byte *)(param_5 + lVar10 * 0xc + 0xfd) = bVar9;
        param_5[lVar10 * 0xc + 0x100] = 0xffffffff;
LAB_18007110d:
        param_5[lVar10 * 0xc + 0x103] = 0xffffffff;
        param_5[lVar10 * 0xc + 0x102] = 0xffffffff;
        param_5[lVar10 * 0xc + 0x101] = 0xffffffff;
      }
      else {
        if (uVar3 == 7) {
          if (((char)param_5[0x3e] == '\0') ||
             (lVar11 = *(longlong *)(param_5 + 0x40),
             *(char *)((ulonglong)uVar8 + 400 + lVar11) == '\0')) {
            uVar4 = param_5[0x22];
            uVar8 = uVar8 * 0x10;
            goto LAB_1800710f7;
          }
          uVar6 = (ulonglong)(uVar8 * 4);
          uVar2 = *(uint *)(lVar11 + 0x1a0 + ((bVar9 >> 6) + uVar6) * 4);
          uVar4 = *(uint *)(lVar11 + 0x1a0 + ((bVar9 >> 4 & 3) + uVar6) * 4);
          uVar8 = *(uint *)(lVar11 + 0x1a0 + ((bVar9 >> 2 & 3) + uVar6) * 4);
          uVar5 = *(uint *)(lVar11 + 0x1a0 + ((bVar9 & 3) + uVar6) * 4);
          goto LAB_1800710ad;
        }
        if (uVar3 == 10) {
          lVar11 = lVar10 * 6;
          uVar6 = FUN_1800ec878((int *)param_5,uVar8,0,uVar8);
          param_5[lVar11 * 2 + 0xfc] = (uint)uVar6;
          *(byte *)(param_5 + lVar11 * 2 + 0xfd) = bVar9;
          param_5[lVar11 * 2 + 0x100] = 0xffffffff;
          param_5[lVar11 * 2 + 0x103] = 0xffffffff;
          param_5[lVar11 * 2 + 0x102] = 0xffffffff;
          param_5[lVar11 * 2 + 0x101] = 0xffffffff;
          uVar6 = FUN_1800ec878((int *)param_5,uVar8,1,uVar8 + 0x10);
          param_5[300] = (uint)uVar6;
          *(byte *)(param_5 + 0x12d) = bVar9;
          param_5[0x130] = 0xffffffff;
          param_5[0x133] = 0xffffffff;
          param_5[0x132] = 0xffffffff;
          param_5[0x131] = 0xffffffff;
        }
        else if (uVar3 == 0x11) {
          if (uVar8 != 1) {
            uVar4 = FUN_180070764(0xb000000,param_5,param_6);
            goto LAB_180071230;
          }
          uVar4 = FUN_180070890(0xb000000,param_5,param_6);
          param_5[lVar10 * 0xc + 0xfc] = uVar4;
          param_5[lVar10 * 0xc + 0x100] = 0xffffffff;
          *(undefined1 *)(param_5 + lVar10 * 0xc + 0xfd) = 0;
          param_5[lVar10 * 0xc + 0x103] = 0xffffffff;
          param_5[lVar10 * 0xc + 0x102] = 0xffffffff;
          param_5[lVar10 * 0xc + 0x101] = 0xffffffff;
        }
        else if (uVar3 == 0x12) {
          param_5[lVar10 * 0xc + 0xfc] = uVar8 | 0x20410a00;
          *(undefined1 *)(param_5 + lVar10 * 0xc + 0xfd) = 0;
          param_5[lVar10 * 0xc + 0x100] = 0xffffffff;
          param_5[lVar10 * 0xc + 0x103] = 0xffffffff;
          param_5[lVar10 * 0xc + 0x102] = 0xffffffff;
          param_5[lVar10 * 0xc + 0x101] = 0xffffffff;
        }
      }
      if (uVar1 == 0x1000000) {
        param_5[lVar10 * 0xc + 0xfc] = param_5[lVar10 * 0xc + 0xfc] | 0x80000000;
      }
      else if (uVar1 == 0xb000000) {
        param_5[lVar10 * 0xc + 0xfc] = param_5[lVar10 * 0xc + 0xfc] | 0x8000000;
      }
      else if (uVar1 == 0xc000000) {
        param_5[lVar10 * 0xc + 0xfc] = param_5[lVar10 * 0xc + 0xfc] | 0x88000000;
      }
      param_8 = '\0';
      uVar12 = uVar12 + 1;
      lVar10 = lVar10 + 1;
    } while (uVar12 < param_3);
  }
  return param_2;
}

