/*
 * FUN_100617f1 at 100617f1
 * uint * __stdcall FUN_100617f1(uint * param_1, uint param_2, int param_3, uint * param_4, int * param_5, char param_6, char param_7)
 * Address ranges: 100617f1-10061c31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_100617f1(uint *param_1,uint param_2,int param_3,uint *param_4,int *param_5,char param_6,
                   char param_7)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  uint extraout_EDX;
  uint uVar8;
  uint uVar9;
  uint local_14;
  uint local_8;
  
  local_8 = 0;
  puVar3 = param_1;
  if (param_2 != 0) {
    do {
      uVar2 = *puVar3;
      iVar6 = 0;
      if (local_8 == 1) {
        iVar6 = param_3;
      }
      param_1._0_1_ = (byte)(uVar2 >> 0x10);
      uVar8 = (uVar2 & 0x7ff) + iVar6;
      uVar1 = uVar2 >> 0xd;
      if ((uVar1 & 1) == 0) {
        local_14 = 0;
      }
      else {
        local_14 = puVar3[1];
      }
      puVar4 = puVar3 + 1;
      if ((uVar1 & 1) == 0) {
        puVar4 = puVar3;
      }
      if (param_6 != '\0') {
        bVar7 = (byte)param_1 >> 6;
        param_1._0_1_ = bVar7 | ((bVar7 << 2 | bVar7) << 2 | bVar7) << 2;
      }
      puVar3 = puVar4 + 1;
      uVar5 = uVar2 & 0xf000000;
      if (param_7 != '\0') {
        uVar5 = 0xb000000;
      }
      uVar2 = FUN_1005da5e(uVar2);
      if (uVar2 < 8) {
        if (uVar2 == 7) {
          if (((char)param_4[0x3c] == '\0') ||
             (uVar2 = param_4[0x3d], *(char *)(uVar8 + 400 + uVar2) == '\0')) {
            uVar2 = param_4[0x20];
            iVar6 = uVar8 * 0x10;
LAB_10061a8f:
            FUN_1005e1dc(param_4 + local_8 * 0xc + 0xf8,uVar2,(byte)param_1,iVar6);
          }
          else {
            uVar9 = extraout_EDX & 0xff;
            iVar6 = uVar8 * 4 + 0x68;
            uVar1 = *(uint *)(uVar2 + ((uVar9 >> 6) + iVar6) * 4);
            uVar8 = *(uint *)(uVar2 + ((uVar9 >> 4 & 3) + iVar6) * 4);
            uVar9 = *(uint *)(uVar2 + ((uVar9 >> 2 & 3) + iVar6) * 4);
            uVar2 = *(uint *)(uVar2 + ((extraout_EDX & 3) + iVar6) * 4);
LAB_1006197a:
            param_4[local_8 * 0xc + 0xf8] = 0x410400;
            *(undefined1 *)(param_4 + local_8 * 0xc + 0xf9) = 0xe4;
            param_4[local_8 * 0xc + 0xfc] = uVar2;
            param_4[local_8 * 0xc + 0xfd] = uVar9;
            param_4[local_8 * 0xc + 0xfe] = uVar8;
            param_4[local_8 * 0xc + 0xff] = uVar1;
          }
        }
        else if (uVar2 == 0) {
          uVar2 = FUN_1005e39a((int)param_4,uVar8);
          *(byte *)(param_4 + local_8 * 0xc + 0xf9) = (byte)param_1;
          param_4[local_8 * 0xc + 0xf8] = uVar2;
          param_4[local_8 * 0xc + 0xfc] = 0xffffffff;
          param_4[local_8 * 0xc + 0xff] = 0xffffffff;
          param_4[local_8 * 0xc + 0xfe] = 0xffffffff;
          param_4[local_8 * 0xc + 0xfd] = 0xffffffff;
        }
        else if (uVar2 == 1) {
          uVar2 = 0;
          if ((uVar1 & 1) != 0) {
            uVar2 = local_14;
          }
          FUN_10061603((int *)param_4,param_5,uVar8,(byte)param_1,uVar2,
                       param_4 + local_8 * 0xc + 0xf8);
        }
        else {
          if (uVar2 == 2) {
            if (((char)param_4[0x3c] == '\0') ||
               (uVar2 = param_4[0x3d], *(char *)(uVar8 + 0x331 + uVar2) == '\0')) {
              uVar2 = param_4[0x1c];
              iVar6 = uVar8 * 0x10 + 0x80;
              goto LAB_10061a8f;
            }
            uVar9 = extraout_EDX & 0xff;
            iVar6 = uVar8 * 4;
            uVar1 = *(uint *)(uVar2 + 0x414 + ((uVar9 >> 6) + iVar6) * 4);
            uVar8 = *(uint *)(uVar2 + 0x414 + ((uVar9 >> 4 & 3) + iVar6) * 4);
            uVar9 = *(uint *)(uVar2 + 0x414 + ((uVar9 >> 2 & 3) + iVar6) * 4);
            uVar2 = *(uint *)(uVar2 + 0x414 + ((extraout_EDX & 3) + iVar6) * 4);
            goto LAB_1006197a;
          }
          if (uVar2 == 3) {
            *(char *)(param_4 + local_8 * 0xc + 0xf9) = (char)extraout_EDX;
            param_4[local_8 * 0xc + 0xf8] = uVar8 + 5 | 0x410100;
            param_4[local_8 * 0xc + 0xfc] = 0xffffffff;
            param_4[local_8 * 0xc + 0xff] = 0xffffffff;
            param_4[local_8 * 0xc + 0xfe] = 0xffffffff;
            param_4[local_8 * 0xc + 0xfd] = 0xffffffff;
          }
        }
      }
      else if (uVar2 == 10) {
        uVar2 = FUN_100c2df1(param_4,uVar8,0,uVar8);
        param_4[local_8 * 0xc + 0xf8] = uVar2;
        *(byte *)(param_4 + local_8 * 0xc + 0xf9) = (byte)param_1;
        param_4[local_8 * 0xc + 0xfc] = 0xffffffff;
        param_4[local_8 * 0xc + 0xff] = 0xffffffff;
        param_4[local_8 * 0xc + 0xfe] = 0xffffffff;
        param_4[local_8 * 0xc + 0xfd] = 0xffffffff;
        uVar2 = FUN_100c2df1(param_4,uVar8,1,uVar8 + 0x10);
        param_4[0x128] = uVar2;
        *(byte *)(param_4 + 0x129) = (byte)param_1;
        param_4[300] = 0xffffffff;
        param_4[0x12f] = 0xffffffff;
        param_4[0x12e] = 0xffffffff;
        param_4[0x12d] = 0xffffffff;
      }
      else if (uVar2 == 0x11) {
        if (uVar8 == 1) {
          param_1._0_1_ = 0;
          uVar2 = FUN_100613b5((int *)param_4,param_5);
        }
        else {
          uVar2 = FUN_100612dc((int *)param_4,param_5);
        }
        param_4[local_8 * 0xc + 0xf8] = uVar2;
        *(byte *)(param_4 + local_8 * 0xc + 0xf9) = (byte)param_1;
        param_4[local_8 * 0xc + 0xfc] = 0xffffffff;
        param_4[local_8 * 0xc + 0xff] = 0xffffffff;
        param_4[local_8 * 0xc + 0xfe] = 0xffffffff;
        param_4[local_8 * 0xc + 0xfd] = 0xffffffff;
      }
      else if (uVar2 == 0x12) {
        param_4[local_8 * 0xc + 0xf8] = uVar8 | 0x20410a00;
        *(undefined1 *)(param_4 + local_8 * 0xc + 0xf9) = 0;
        param_4[local_8 * 0xc + 0xfc] = 0xffffffff;
        param_4[local_8 * 0xc + 0xff] = 0xffffffff;
        param_4[local_8 * 0xc + 0xfe] = 0xffffffff;
        param_4[local_8 * 0xc + 0xfd] = 0xffffffff;
      }
      if (uVar5 == 0x1000000) {
        param_4[local_8 * 0xc + 0xf8] = param_4[local_8 * 0xc + 0xf8] | 0x80000000;
      }
      else if (uVar5 == 0xb000000) {
        param_4[local_8 * 0xc + 0xf8] = param_4[local_8 * 0xc + 0xf8] | 0x8000000;
      }
      else if (uVar5 == 0xc000000) {
        param_4[local_8 * 0xc + 0xf8] = param_4[local_8 * 0xc + 0xf8] | 0x88000000;
      }
      local_8 = local_8 + 1;
      param_7 = '\0';
    } while (local_8 < param_2);
  }
  return puVar3;
}

