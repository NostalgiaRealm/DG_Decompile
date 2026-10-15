/*
 * FUN_1006f990 at 1006f990
 * undefined FUN_1006f990(void)
 * Address ranges: 1006f990-1006fd97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006f990(undefined4 param_1,undefined4 param_2,uint param_3,uint *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint auStack_d0 [4];
  uint local_c0 [32];
  
  uVar8 = 1 - ((int)param_3 >> 0x1f);
  if ((int)param_3 < 0) {
    local_c0[1] = *param_4;
    param_4 = param_4 + 1;
  }
  uVar5 = 1;
  if ((param_3 & 0x7ff) == 0x26 || (param_3 & 0x7ff) == 0x4d) {
    uVar5 = 2;
  }
  uVar7 = 0;
  uVar13 = 0;
  do {
    bVar6 = (byte)uVar7;
    uVar10 = *param_4;
    puVar12 = param_4 + 1;
    if (uVar10 == 0) break;
    if (uVar13 == 0 || uVar10 != 0xffffffff) {
      if (uVar10 != 0xffffffff) goto LAB_1006fa50;
    }
    else {
      do {
        param_4 = param_4 + 1;
        uVar10 = *param_4;
        puVar12 = puVar12 + 1;
      } while (uVar10 == 0xffffffff);
LAB_1006fa50:
      uVar7 = *puVar12;
      if ((uVar10 >> 0x1e & 1) == 0) {
        uVar3 = 0;
        uVar4 = 0;
      }
      else {
        puVar11 = puVar12 + 1;
        puVar12 = puVar12 + 2;
        uVar3 = *puVar11;
        while (uVar3 == 0xffffffff) {
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
          uVar3 = *puVar11;
        }
        uVar4 = (undefined1)*puVar12;
      }
      iVar2 = FUN_1006f560(param_1,local_c0 + uVar8,uVar10,(char)uVar7,uVar3,uVar4);
      uVar8 = iVar2 + uVar8;
      uVar7 = uVar10 >> 0x12 & 3;
      puVar12 = puVar12 + 1;
    }
    bVar6 = (byte)uVar7;
    uVar13 = uVar13 + 1;
    param_4 = puVar12;
  } while (uVar13 < uVar5);
  if (uVar10 != 0) {
    uVar5 = *puVar12;
    while (uVar5 != 0) {
      puVar9 = puVar12 + 1;
      puVar11 = puVar9;
      if (uVar5 != 0xffffffff) {
        uVar13 = *puVar9;
        uVar7 = uVar5 >> 8 & 0x3f;
        puVar11 = puVar12 + 2;
        uVar10 = uVar13 & 0xff;
        if ((uVar13 & 0x100) != 0) {
          bVar1 = FUN_1006ed30(uVar10,bVar6);
          uVar10 = (uint)bVar1;
        }
        uVar3 = bVar6 + uVar13;
        if ((uVar13 & 0x100) == 0) {
          uVar3 = uVar13;
        }
        if (uVar7 == 4) {
          uVar13 = 0;
          uVar7 = uVar5 >> 0x14 & 7;
          if (uVar7 != 0) {
            do {
              puVar9 = puVar9 + 1;
              puVar11 = puVar11 + 1;
              puVar12 = auStack_d0 + uVar13;
              uVar13 = uVar13 + 1;
              *puVar12 = *puVar9 & (~(uVar5 << 4) | 0x7fffffff) ^ uVar5 & 0x80000000;
            } while (uVar13 < uVar7);
          }
          if (uVar7 < 4) {
            uVar10 = 0;
            uVar5 = 0x4001;
          }
          else if ((uVar5 >> 0x1c & 1) == 0) {
            uVar5 = 0x4e46;
            if (uVar7 != 4) {
              uVar5 = 0x4e40;
            }
          }
          else {
            uVar5 = 0x400a;
            if (uVar7 != 4) {
              uVar5 = 0x4008;
            }
            uVar5 = uVar5 | (uVar3 & 3) << 4;
            uVar10 = 0xe4;
          }
          local_c0[uVar8] = uVar5;
          uVar5 = 0;
          if (uVar7 != 0) {
            do {
              iVar2 = uVar5 + 1;
              uVar13 = uVar5 & 0xf;
              uVar5 = uVar5 + 1;
              local_c0[uVar8 + iVar2] = auStack_d0[uVar10 >> (ulonglong)(uVar13 << 1) & 3];
            } while (uVar5 < uVar7);
          }
          uVar8 = uVar7 + uVar8 + 1;
        }
        else if (uVar7 - 8 < 2) {
          uVar13 = *puVar11;
          if ((uVar5 >> 0x1e & 1) == 0) {
            uVar7 = 0;
            uVar4 = 0;
          }
          else {
            puVar9 = puVar12 + 3;
            puVar11 = puVar12 + 4;
            uVar7 = *puVar9;
            while (uVar7 == 0xffffffff) {
              puVar9 = puVar9 + 1;
              puVar11 = puVar11 + 1;
              uVar7 = *puVar9;
            }
            uVar4 = (undefined1)*puVar11;
          }
          uVar3 = uVar3 & 0xff;
          if ((uVar5 & 0x10000000) == 0) {
            uVar3 = uVar10;
          }
          iVar2 = FUN_1006ed70(param_1,local_c0 + uVar8,uVar5,uVar13,uVar3,uVar7,uVar4);
          uVar8 = iVar2 + uVar8;
          puVar11 = puVar11 + 1;
        }
        else {
          if ((uVar5 >> 0x1e & 1) == 0) {
            uVar13 = 0;
            uVar4 = 0;
          }
          else {
            puVar12 = puVar12 + 3;
            uVar13 = *puVar11;
            while (uVar13 == 0xffffffff) {
              puVar11 = puVar11 + 1;
              puVar12 = puVar12 + 1;
              uVar13 = *puVar11;
            }
            uVar4 = (undefined1)*puVar12;
            puVar11 = puVar12 + 1;
          }
          uVar7 = uVar3 & 0xff;
          if ((uVar5 & 0x10000000) == 0) {
            uVar7 = uVar10;
          }
          iVar2 = FUN_1006f280(param_1,local_c0 + uVar8,uVar5,uVar7,uVar13,uVar4);
          uVar8 = iVar2 + uVar8;
        }
      }
      puVar12 = puVar11;
      uVar5 = *puVar11;
    }
  }
  local_c0[0] = param_3 | (uVar8 & 0x7f) << 0x18;
  FUN_1006ffa0(param_2,uVar8,local_c0);
  return;
}

