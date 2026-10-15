/*
 * FUN_1004ade9 at 1004ade9
 * undefined __stdcall FUN_1004ade9(uint * param_1, short * param_2, short * param_3)
 * Address ranges: 1004ade9-1004b34e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004ade9(uint *param_1,short *param_2,short *param_3)

{
  short *psVar1;
  short *psVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int local_20;
  ushort local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  psVar1 = param_2;
  param_2[0x168] = 0x30;
  local_10 = 0;
  param_2[0x169] = 0x80;
  param_2[0x16a] = 0;
  param_2[0x16b] = 0;
  param_2[0x16c] = 0x130;
  param_2[0x16d] = 0x180;
  FUN_100ada8e((int *)(param_2 + 0x72),0,0x114);
  do {
    psVar1[0x16e] = psVar1[0x168];
    psVar1[0x16f] = psVar1[0x169];
    if (((byte)param_1[local_10] & 0x1f) < 2) break;
    FUN_1004a75d((int)param_1,local_10,(uint)psVar1,0);
    FUN_1004a75d((int)param_1,local_10,(uint)psVar1,1);
    local_10 = local_10 + 1;
  } while (local_10 < 8);
  local_1c = 0x10;
  if (((char)param_3 != '\0') && (local_10 == 1)) {
    local_1c = 0x10;
    if ((*param_1 & 0x70000000) == 0x50000000) {
      local_1c = 0x20;
    }
  }
  param_3 = (short *)0x0;
  param_2 = (short *)0x0;
  local_14 = 0;
  local_c = 0;
  local_18 = 0xffffffff;
  local_20 = -1;
  local_8 = local_10;
  if (local_10 != 0) {
    do {
      uVar5 = local_8 - 1;
      if ((psVar1[local_8 * 8 + 0x6a] & 0xf0U) == local_1c) {
        psVar2 = (short *)(1 << ((byte)uVar5 & 0x1f));
        param_2 = psVar2;
        param_3 = psVar2;
        local_18 = uVar5;
        if (local_8 != 0) {
          do {
            if (((uint)psVar2 & 1 << ((char)local_8 - 1U & 0x1f)) != 0) {
              iVar8 = local_8 << 3;
              iVar9 = 3;
              do {
                FUN_1004ac13((int)psVar1,(ushort *)(psVar1 + iVar8 + 0x6b),(uint *)&param_2,&local_c
                            );
                iVar8 = iVar8 + 1;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
              if ((psVar1[local_8 * 8 + 0x6e] == 0x90) || (psVar1[local_8 * 8 + 0x6f] == 0x90)) {
                param_2 = (short *)((uint)param_2 | 1 << (local_8 - 2 & 0x1f));
              }
              param_3 = psVar1 + local_8 * 8 + 0x71;
              psVar2 = param_2;
              if (((psVar1[local_8 * 8 + 0x70] != 0) || (*param_3 != 0)) &&
                 ((((uint)param_2 & 1 << ((byte)local_8 & 0x1f)) == 0 ||
                  ((psVar1[local_8 * 8 + 0x76] == 0 && (psVar1[local_8 * 8 + 0x77] == 0)))))) {
                *param_3 = 0;
                psVar1[local_8 * 8 + 0x70] = 0;
                psVar1[local_8 * 8 + 0x6c] = 0;
              }
            }
            local_8 = local_8 - 1;
          } while (local_8 != 0);
          local_8 = 0;
          param_3 = psVar2;
        }
        break;
      }
      local_8 = uVar5;
      local_18 = 0xffffffff;
    } while (uVar5 != 0);
LAB_1004b01a:
    uVar5 = local_10 - 1;
    if ((psVar1[local_10 * 8 + 0xaa] & 0xf0U) == local_1c) {
      local_14 = local_c | 1 << (uVar5 & 0x1f);
      local_20 = local_10 - 1;
      local_c = local_14;
      goto LAB_1004b05e;
    }
    local_14 = local_c;
    if ((local_c & 1 << ((byte)uVar5 & 0x1f)) == 0) {
      local_10 = uVar5;
      if (uVar5 == 0) goto LAB_1004b0aa;
      goto LAB_1004b01a;
    }
    local_20 = -1;
LAB_1004b05e:
    do {
      if ((local_14 & 1 << ((char)local_10 - 1U & 0x1f)) != 0) {
        iVar8 = local_10 << 3;
        iVar9 = 3;
        do {
          FUN_1004ac13((int)psVar1,(ushort *)(psVar1 + iVar8 + 0xab),(uint *)&param_2,&local_c);
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + -1;
          local_14 = local_c;
        } while (iVar9 != 0);
      }
      local_10 = local_10 - 1;
    } while (local_10 != 0);
    param_3 = param_2;
  }
LAB_1004b0aa:
  if ((char)local_1c == ' ') {
    if (local_18 != 0xffffffff) {
      psVar1[local_18 * 8 + 0x72] = 0x10;
    }
    if (local_20 != -1) {
      psVar1[local_20 * 8 + 0xb2] = 0x110;
    }
  }
  uVar7 = 0;
  uVar5 = 0xffffffff;
  do {
    param_2 = (short *)(1 << ((byte)uVar7 & 0x1f));
    if (((uint)param_2 & (uint)param_3) == 0) {
      psVar1[uVar7 * 8 + 0x72] = 0;
    }
    uVar10 = uVar7;
    if (((uint)param_2 & local_14) == 0) {
      psVar1[uVar7 * 8 + 0xb2] = 0;
      uVar10 = uVar5;
    }
    uVar7 = uVar7 + 1;
    uVar5 = uVar10;
  } while (uVar7 < 8);
  uVar3 = FUN_1004ac81((int)(psVar1 + 0x72),(uint)param_3,local_18,param_1[local_18] & 0x1f,0);
  uVar4 = FUN_1004ac81((int)(psVar1 + 0xb2),local_14,uVar10,param_1[uVar10] >> 5 & 0x1f,1);
  if ((char)uVar3 != '\0') {
    uVar5 = 0;
    do {
      uVar7 = uVar5 + 1;
      psVar1[uVar5 * 8 + 0x72] = 0;
      uVar5 = uVar7;
    } while (uVar7 < 8);
    local_18 = 0xffffffff;
  }
  if ((char)uVar4 != '\0') {
    uVar5 = 0;
    do {
      uVar7 = uVar5 + 1;
      psVar1[uVar5 * 8 + 0xb2] = 0;
      uVar5 = uVar7;
    } while (uVar7 < 8);
    uVar10 = 0xffffffff;
  }
  if (local_18 != 0xffffffff) {
    bVar6 = (char)local_18 * '\x04';
    if (((((byte)param_1[local_18] & 0x1f) == 2) && ((param_1[9] >> (bVar6 & 0x1f) & 0xf) == 0)) &&
       (psVar1[local_18 * 8 + 0x72] == psVar1[local_18 * 8 + 0x74])) {
      psVar1[local_18 * 8 + 0x72] = 0;
    }
    if (((((byte)param_1[local_18] & 0x1f) == 3) && ((param_1[10] >> (bVar6 & 0x1f) & 0xf) == 0)) &&
       (psVar1[local_18 * 8 + 0x72] == psVar1[local_18 * 8 + 0x75])) {
      psVar1[local_18 * 8 + 0x72] = 0;
    }
  }
  if (uVar10 != 0xffffffff) {
    uVar5 = param_1[uVar10] >> 5 & 0x1f;
    if (((uVar5 == 2) || (uVar5 == 1)) && (psVar1[uVar10 * 8 + 0xb2] == psVar1[uVar10 * 8 + 0xb4]))
    {
      psVar1[uVar10 * 8 + 0xb2] = 0;
    }
    if (((param_1[uVar10] & 0x3e0) == 0x60) &&
       (psVar1[uVar10 * 8 + 0xb2] == psVar1[uVar10 * 8 + 0xb5])) {
      psVar1[uVar10 * 8 + 0xb2] = 0;
    }
  }
  uVar5 = 0;
  do {
    FUN_1004ad2f((int)psVar1,uVar5,(uint)(ushort)psVar1[uVar5 * 8 + 0x72]);
    FUN_1004ad2f((int)psVar1,uVar5,(uint)(ushort)psVar1[uVar5 * 8 + 0xb2]);
    param_2 = (short *)(uVar5 << 3);
    if (psVar1[uVar5 * 8 + 0x72] != 0) {
      param_3 = psVar1 + uVar5 * 8;
      uVar7 = 0;
      do {
        FUN_1004ad2f((int)psVar1,uVar5,(uint)(ushort)param_3[uVar7 + 0x73]);
        uVar7 = uVar7 + 1;
      } while (uVar7 < 3);
      FUN_1004ad2f((int)psVar1,uVar5,(uint)(ushort)psVar1[uVar5 * 8 + 0x76]);
      FUN_1004ad2f((int)psVar1,uVar5,(uint)(ushort)psVar1[uVar5 * 8 + 0x77]);
    }
    if (psVar1[uVar5 * 8 + 0xb2] != 0) {
      param_3 = psVar1 + (int)param_2;
      uVar7 = 0;
      do {
        FUN_1004ad2f((int)psVar1,uVar5,(uint)(ushort)param_3[uVar7 + 0xb3]);
        uVar7 = uVar7 + 1;
      } while (uVar7 < 3);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 8);
  return;
}

