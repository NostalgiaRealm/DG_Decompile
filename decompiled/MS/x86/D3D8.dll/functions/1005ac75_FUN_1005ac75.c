/*
 * FUN_1005ac75 at 1005ac75
 * uint * __stdcall FUN_1005ac75(uint * param_1, undefined4 param_2, uint param_3, int param_4, int param_5, char param_6, char param_7)
 * Address ranges: 1005ac75-1005b079
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_1005ac75(uint *param_1,undefined4 param_2,uint param_3,int param_4,int param_5,
                   char param_6,char param_7)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  uint local_10;
  int local_8;
  
  *(undefined4 *)(param_5 + 0x3e0) = 0;
  uVar6 = *param_1;
  bVar4 = (byte)(uVar6 >> 0x10) & (byte)((uint)param_2 >> 0x10);
  bVar8 = bVar4 & 0xf;
  bVar4 = bVar4 & 0xf;
  uVar9 = uVar6 & 0x1fff;
  uVar6 = uVar6 & 0x70000000;
  if (uVar6 == 0) {
    uVar7 = FUN_1005abc9(param_5,uVar9);
    *(undefined4 *)(param_5 + 0x280) = uVar7;
    *(byte *)(param_5 + 0x284) = bVar8;
    *(undefined4 *)(param_5 + 0x290) = 0xffffffff;
    *(undefined4 *)(param_5 + 0x29c) = 0xffffffff;
    *(undefined4 *)(param_5 + 0x298) = 0xffffffff;
    *(undefined4 *)(param_5 + 0x294) = 0xffffffff;
  }
  else if (uVar6 == 0x30000000) {
    *(undefined4 *)(param_5 + 0x280) = *(undefined4 *)(param_5 + 0x224);
    *(undefined1 *)(param_5 + 0x284) = 1;
    *(undefined4 *)(param_5 + 0x290) = 0xffffffff;
    *(undefined4 *)(param_5 + 0x29c) = 0xffffffff;
    *(undefined4 *)(param_5 + 0x298) = 0xffffffff;
    *(undefined4 *)(param_5 + 0x294) = 0xffffffff;
  }
  else {
    if (uVar6 == 0x40000000) {
      if (uVar9 == 0) {
        uVar6 = *(uint *)(param_5 + 0x1e8);
      }
      else if (uVar9 == 1) {
        bVar4 = 1;
        uVar6 = *(uint *)(param_5 + 0x1ec);
      }
      else {
        if (uVar9 != 2) goto LAB_1005adc4;
        bVar4 = 2;
        uVar6 = *(uint *)(param_5 + 0x1f0);
      }
    }
    else {
      if (uVar6 == 0x50000000) {
        FUN_1005abfa(param_5,*(uint *)(param_5 + 500 + uVar9 * 4),bVar8,(uint *)(param_5 + 0x280));
        *(undefined4 *)(param_5 + 0x3e0) = 0x2000;
        goto LAB_1005adc4;
      }
      if (uVar6 != 0x60000000) goto LAB_1005adc4;
      uVar6 = *(uint *)(param_5 + 0x1fc + uVar9 * 4);
    }
    FUN_1005abfa(param_5,uVar6,bVar4,(uint *)(param_5 + 0x280));
  }
LAB_1005adc4:
  local_10 = 0;
  if (param_3 != 0) {
    local_8 = 0;
    do {
      uVar6 = param_1[local_10 + 1];
      iVar11 = 0;
      if (local_10 == 1) {
        iVar11 = param_4;
      }
      iVar11 = (uVar6 & 0x1fff) + iVar11;
      uVar10 = uVar6 >> 0x10;
      uVar9 = uVar6 >> 0xd & 0xffffff01;
      bVar14 = (uVar6 & 0xf000000) == 0x1000000;
      bVar4 = (byte)(uVar6 >> 0x10);
      if (param_6 != '\0') {
        bVar4 = FUN_100a183b(bVar4,0xff);
        uVar10 = (uint)bVar4;
      }
      uVar13 = uVar6 & 0x70000000;
      if (uVar13 == 0) {
        uVar7 = FUN_1005abc9(param_5,iVar11);
        *(undefined4 *)(param_5 + 0x330 + local_8) = uVar7;
        *(char *)(param_5 + 0x334 + local_8) = (char)uVar10;
        *(undefined4 *)(param_5 + 0x340 + local_8) = 0xffffffff;
        *(undefined4 *)(param_5 + 0x34c + local_8) = 0xffffffff;
        *(undefined4 *)(param_5 + 0x348 + local_8) = 0xffffffff;
        *(undefined4 *)(param_5 + 0x344 + local_8) = 0xffffffff;
      }
      else if (uVar13 == 0x10000000) {
        *(undefined4 *)(param_5 + 0x330 + local_8) = *(undefined4 *)(param_5 + 0xec + iVar11 * 4);
        *(char *)(param_5 + 0x334 + local_8) = (char)uVar10;
LAB_1005afd8:
        *(undefined4 *)(param_5 + 0x340 + local_8) = 0xffffffff;
        *(undefined4 *)(param_5 + 0x34c + local_8) = 0xffffffff;
        *(undefined4 *)(param_5 + 0x348 + local_8) = 0xffffffff;
        *(undefined4 *)(param_5 + 0x344 + local_8) = 0xffffffff;
      }
      else if (uVar13 == 0x20000000) {
        cVar5 = (char)uVar9;
        if (((*(char *)(param_5 + 200) == '\0') || (cVar5 != '\0')) ||
           (iVar2 = *(int *)(param_5 + 0x10), *(char *)(iVar11 + 0x44f + iVar2) == '\0')) {
          FUN_1004ee48((undefined4 *)(local_8 + 0x330 + param_5),uVar9 << 0x1e | 0x410804,bVar4,
                       iVar11 * 0x10);
          if (cVar5 != '\0') {
            *(uint *)(param_5 + 0x350 + local_10 * 0x30) = *(uint *)(param_5 + 0x224) | 0x10000000;
            *(undefined1 *)(param_5 + 0x354 + local_10 * 0x30) = 0;
          }
        }
        else {
          uVar9 = 0xffffffff;
          iVar11 = iVar11 * 4 + 0x214;
          if (param_7 != '\0') {
            uVar9 = 0x7fffffff;
          }
          uVar13 = 0;
          if ((uVar6 & 0xf000000) == 0x1000000) {
            uVar13 = 0x80000000;
          }
          uVar12 = uVar10 & 0xff;
          uVar6 = *(uint *)(iVar2 + ((uVar12 >> 6) + iVar11) * 4);
          uVar3 = *(uint *)(iVar2 + ((uVar12 >> 4 & 3) + iVar11) * 4);
          uVar12 = *(uint *)(iVar2 + ((uVar12 >> 2 & 3) + iVar11) * 4);
          uVar10 = *(uint *)(iVar2 + ((uVar10 & 3) + iVar11) * 4);
          *(undefined4 *)(param_5 + 0x330 + local_8) = 0x410400;
          *(undefined1 *)(param_5 + 0x334 + local_8) = 0xe4;
          bVar14 = false;
          *(uint *)(param_5 + 0x340 + local_8) = uVar10 & uVar9 ^ uVar13;
          param_7 = '\0';
          *(uint *)(param_5 + 0x344 + local_8) = uVar12 & uVar9 ^ uVar13;
          *(uint *)(param_5 + 0x348 + local_8) = uVar3 & uVar9 ^ uVar13;
          *(uint *)(param_5 + 0x34c + local_8) = uVar6 & uVar9 ^ uVar13;
        }
      }
      else if (uVar13 == 0x30000000) {
        *(undefined4 *)(param_5 + 0x330 + local_8) = *(undefined4 *)(param_5 + 0x224);
        *(undefined1 *)(param_5 + 0x334 + local_8) = 0xe4;
        goto LAB_1005afd8;
      }
      uVar6 = 0;
      if (param_7 != '\0') {
        uVar6 = 0x8000000;
      }
      if (bVar14) {
        uVar6 = 0x80000000;
      }
      puVar1 = (uint *)(param_5 + 0x330 + local_8);
      *puVar1 = *puVar1 | uVar6;
      local_8 = local_8 + 0x30;
      local_10 = local_10 + 1;
    } while (local_10 < param_3);
  }
  return param_1 + param_3 + 1;
}

