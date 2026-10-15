/*
 * FUN_100706cd at 100706cd
 * uint * __stdcall FUN_100706cd(uint * param_1, undefined4 param_2, uint param_3, int param_4, int param_5, char param_6, char param_7)
 * Address ranges: 100706cd-10070ac0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_100706cd(uint *param_1,undefined4 param_2,uint param_3,int param_4,int param_5,
                   char param_6,char param_7)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  uint local_10;
  int local_8;
  
  *(undefined4 *)(param_5 + 0x470) = 0;
  uVar9 = *param_1;
  uVar11 = uVar9 & 0x7ff;
  bVar8 = (byte)(uVar9 >> 0x10) & (byte)((uint)param_2 >> 0x10) & 0xf;
  uVar9 = (uVar9 >> 0x14 & 0x700 | uVar9 & 0x1800) >> 8;
  if (uVar9 == 0) {
    uVar7 = FUN_10070621(param_5,uVar11);
    *(undefined4 *)(param_5 + 0x310) = uVar7;
    *(byte *)(param_5 + 0x314) = bVar8;
  }
  else {
    if (uVar9 != 3) {
      if (uVar9 == 4) {
        if (uVar11 == 0) {
          uVar9 = *(uint *)(param_5 + 0x1e8);
        }
        else if (uVar11 == 1) {
          bVar8 = 1;
          uVar9 = *(uint *)(param_5 + 0x1ec);
        }
        else {
          if (uVar11 != 2) goto LAB_10070806;
          bVar8 = 2;
          uVar9 = *(uint *)(param_5 + 0x1f0);
        }
      }
      else {
        if (uVar9 == 5) {
          FUN_10070652(param_5,*(uint *)(param_5 + 500 + uVar11 * 4),bVar8,(uint *)(param_5 + 0x310)
                      );
          *(undefined4 *)(param_5 + 0x470) = 0x2000;
          goto LAB_10070806;
        }
        if (uVar9 != 6) goto LAB_10070806;
        uVar9 = *(uint *)(param_5 + 0x1fc + uVar11 * 4);
      }
      FUN_10070652(param_5,uVar9,bVar8,(uint *)(param_5 + 0x310));
      goto LAB_10070806;
    }
    *(undefined4 *)(param_5 + 0x310) = *(undefined4 *)(param_5 + 0x224);
    *(undefined1 *)(param_5 + 0x314) = 1;
  }
  *(undefined4 *)(param_5 + 0x324) = 0xffffffff;
  *(undefined4 *)(param_5 + 0x328) = 0xffffffff;
  *(undefined4 *)(param_5 + 0x32c) = 0xffffffff;
  *(undefined4 *)(param_5 + 800) = 0xffffffff;
LAB_10070806:
  local_10 = 0;
  if (param_3 != 0) {
    local_8 = 0;
    do {
      uVar9 = param_1[local_10 + 1];
      iVar12 = 0;
      if (local_10 == 1) {
        iVar12 = param_4;
      }
      iVar12 = (uVar9 & 0x7ff) + iVar12;
      uVar11 = uVar9 >> 0xd & 0xffffff01;
      uVar10 = uVar9 >> 0x10;
      bVar13 = (uVar9 & 0xf000000) == 0x1000000;
      bVar8 = (byte)(uVar9 >> 0x10);
      if (param_6 != '\0') {
        bVar8 = FUN_100c4090(bVar8,0xff);
        uVar10 = (uint)bVar8;
      }
      uVar5 = (uVar9 >> 0x14 & 0x700 | uVar9 & 0x1800) >> 8;
      if (uVar5 == 0) {
        uVar7 = FUN_10070621(param_5,iVar12);
        *(undefined4 *)(param_5 + 0x3c0 + local_8) = uVar7;
        *(char *)(param_5 + 0x3c4 + local_8) = (char)uVar10;
        *(undefined4 *)(param_5 + 0x3d0 + local_8) = 0xffffffff;
        *(undefined4 *)(param_5 + 0x3dc + local_8) = 0xffffffff;
        *(undefined4 *)(param_5 + 0x3d8 + local_8) = 0xffffffff;
        *(undefined4 *)(param_5 + 0x3d4 + local_8) = 0xffffffff;
      }
      else if (uVar5 == 1) {
        uVar7 = *(undefined4 *)(param_5 + 0xec + iVar12 * 4);
        *(char *)(param_5 + 0x3c4 + local_8) = (char)uVar10;
LAB_10070a1b:
        *(undefined4 *)(param_5 + 0x3c0 + local_8) = uVar7;
        *(undefined4 *)(param_5 + 0x3d0 + local_8) = 0xffffffff;
        *(undefined4 *)(param_5 + 0x3dc + local_8) = 0xffffffff;
        *(undefined4 *)(param_5 + 0x3d8 + local_8) = 0xffffffff;
        *(undefined4 *)(param_5 + 0x3d4 + local_8) = 0xffffffff;
      }
      else if (uVar5 == 2) {
        cVar4 = (char)uVar11;
        if (((*(char *)(param_5 + 200) == '\0') || (cVar4 != '\0')) ||
           (iVar2 = *(int *)(param_5 + 0x10), *(char *)(iVar12 + 0x44f + iVar2) == '\0')) {
          FUN_1005e1dc((undefined4 *)(local_8 + 0x3c0 + param_5),uVar11 << 0x1e | 0x410804,bVar8,
                       iVar12 * 0x10 + 0x140);
          if (cVar4 != '\0') {
            *(uint *)(param_5 + 0x3e0 + local_10 * 0x30) = *(uint *)(param_5 + 0x224) | 0x10000000;
            *(undefined1 *)(param_5 + 0x3e4 + local_10 * 0x30) = 0;
          }
        }
        else {
          uVar11 = 0xffffffff;
          uVar5 = uVar10 & 0xff;
          if (param_7 != '\0') {
            uVar11 = 0x7fffffff;
          }
          uVar6 = 0;
          if ((uVar9 & 0xf000000) == 0x1000000) {
            uVar6 = 0x80000000;
          }
          iVar12 = iVar12 * 4 + 0x214;
          uVar9 = *(uint *)(iVar2 + ((uVar5 >> 6) + iVar12) * 4);
          uVar3 = *(uint *)(iVar2 + ((uVar5 >> 4 & 3) + iVar12) * 4);
          uVar5 = *(uint *)(iVar2 + ((uVar5 >> 2 & 3) + iVar12) * 4);
          uVar10 = *(uint *)(iVar2 + ((uVar10 & 3) + iVar12) * 4);
          *(undefined4 *)(param_5 + 0x3c0 + local_8) = 0x410400;
          *(undefined1 *)(param_5 + 0x3c4 + local_8) = 0xe4;
          bVar13 = false;
          *(uint *)(param_5 + 0x3d0 + local_8) = uVar10 & uVar11 ^ uVar6;
          param_7 = '\0';
          *(uint *)(param_5 + 0x3d4 + local_8) = uVar5 & uVar11 ^ uVar6;
          *(uint *)(param_5 + 0x3d8 + local_8) = uVar3 & uVar11 ^ uVar6;
          *(uint *)(param_5 + 0x3dc + local_8) = uVar9 & uVar11 ^ uVar6;
        }
      }
      else if (uVar5 == 3) {
        uVar7 = *(undefined4 *)(param_5 + 0x224);
        *(undefined1 *)(param_5 + 0x3c4 + local_8) = 0xe4;
        goto LAB_10070a1b;
      }
      uVar9 = 0;
      if (param_7 != '\0') {
        uVar9 = 0x8000000;
      }
      if (bVar13) {
        uVar9 = 0x80000000;
      }
      puVar1 = (uint *)(param_5 + 0x3c0 + local_8);
      *puVar1 = *puVar1 | uVar9;
      local_8 = local_8 + 0x30;
      local_10 = local_10 + 1;
    } while (local_10 < param_3);
  }
  return param_1 + param_3 + 1;
}

