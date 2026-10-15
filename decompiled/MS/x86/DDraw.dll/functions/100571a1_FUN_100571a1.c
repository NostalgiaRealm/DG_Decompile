/*
 * FUN_100571a1 at 100571a1
 * undefined __fastcall FUN_100571a1(int * param_1, int * param_2, uint param_3, uint * param_4)
 * Address ranges: 100571a1-100575b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100571a1(int *param_1,int *param_2,uint param_3,uint *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  byte bVar9;
  uint uVar8;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  bool bVar13;
  uint local_c8 [32];
  uint auStack_48 [4];
  int *local_38;
  int *local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  byte local_19;
  uint local_18;
  uint local_14;
  uint *local_10;
  uint local_c;
  byte local_5;
  
  local_38 = param_2;
  uVar8 = ((param_3 & 0x80000000) != 0) + 1;
  local_34 = param_1;
  local_c = uVar8;
  if ((param_3 & 0x80000000) != 0) {
    local_c8[1] = *param_4;
    param_4 = param_4 + 1;
  }
  if (((param_3 & 0x7ff) == 0x26) || (local_20 = 1, (param_3 & 0x7ff) == 0x4d)) {
    local_20 = 2;
  }
  local_14 = local_14 & 0xffffff00;
  local_24 = 0;
  do {
    local_10 = (uint *)*param_4;
    param_4 = param_4 + 1;
    if (local_10 == (uint *)0x0) goto LAB_10057566;
    if ((local_24 == 0) || (local_10 != (uint *)0xffffffff)) {
      puVar11 = param_4;
      if (local_10 != (uint *)0xffffffff) goto LAB_10057245;
    }
    else {
      do {
        local_10 = (uint *)*param_4;
        param_4 = param_4 + 1;
        uVar8 = local_c;
        puVar11 = param_4;
      } while (local_10 == (uint *)0xffffffff);
LAB_10057245:
      local_19 = (byte)*puVar11;
      param_4 = puVar11 + 1;
      local_14 = 0;
      local_28 = (uint)local_10 & 0x40000000;
      local_5 = 0;
      if (local_28 != 0) {
        local_14 = *param_4;
        puVar11 = puVar11 + 2;
        while (local_14 == 0xffffffff) {
          local_14 = *puVar11;
          puVar11 = puVar11 + 1;
          uVar8 = local_c;
        }
        local_5 = (byte)*puVar11;
        param_4 = puVar11 + 1;
      }
      local_2c = (uint)local_10 & 0xff;
      local_c = (uint)local_10 >> 0x10 & 3;
      uVar3 = local_2c;
      if (1 < local_c) {
        uVar3 = (uint)local_10 >> 0xe & 3;
      }
      local_18 = local_c + 1;
      uVar2 = FUN_1005709b((uint)local_10,local_19);
      bVar13 = local_28 != 0;
      local_c8[uVar8] = uVar2;
      uVar2 = local_2c;
      local_c8[uVar8 + 1] = uVar3;
      local_c8[uVar8 + 2] = uVar2;
      uVar3 = local_18;
      if (bVar13) {
        uVar2 = FUN_1005705f(local_14,local_5,1,local_c8 + uVar8,0,0);
        uVar3 = local_18;
        local_c8[uVar8 + local_18] = uVar2;
        local_c8[uVar8 + uVar3 + 1] = local_14 & 0xff;
        uVar3 = local_c + 3;
      }
      uVar8 = uVar8 + uVar3;
      local_c = uVar8;
      local_14 = (uint)local_10 >> 0x12 & 0xffffff03;
    }
    local_24 = local_24 + 1;
  } while (local_24 < local_20);
  if (local_10 != (uint *)0x0) {
    uVar3 = *param_4;
    while( true ) {
      uVar2 = local_c;
      puVar11 = param_4 + 1;
      local_2c = uVar3;
      if (uVar3 == 0) break;
      if (uVar3 != 0xffffffff) {
        local_20 = *puVar11;
        puVar10 = param_4 + 2;
        uVar8 = uVar3 >> 8 & 0x3f;
        bVar1 = (byte)local_20;
        local_5 = bVar1;
        if (((local_20 & 0x100) != 0) && ((char)local_14 != '\0')) {
          uVar5 = CONCAT31((int3)local_20,(char)local_14) & 0xffff;
          do {
            bVar9 = (byte)(uVar5 >> 8);
            local_5 = bVar9 << 2 | bVar9 & 3;
            cVar7 = (char)uVar5 + -1;
            uVar5 = (uint)CONCAT11(local_5,cVar7);
          } while (cVar7 != '\0');
        }
        local_18 = local_20 & 0xff;
        if ((local_20 & 0x100) != 0) {
          local_18 = (uint)(byte)(bVar1 + (char)local_14);
        }
        puVar11 = puVar10;
        if (uVar8 == 4) {
          local_10 = (uint *)(uVar3 & 0x80000000);
          local_30 = uVar3 >> 0x14;
          local_20 = 0;
          uVar8 = local_30 & 7;
          if (uVar8 != 0) {
            uVar5 = 0;
            do {
              uVar6 = *puVar10;
              puVar10 = puVar10 + 1;
              auStack_48[uVar5] = uVar6 & (~(uVar3 << 4) | 0x7fffffff) ^ (uint)local_10;
              uVar5 = uVar5 + 1;
              puVar11 = puVar10;
            } while (uVar5 < uVar8);
          }
          if ((local_30 & 4) == 0) {
            bVar1 = 0;
            local_5 = 0;
            uVar3 = 1;
LAB_10057508:
            uVar3 = FUN_100577d6(4,bVar1,0,uVar3,0,0,0);
          }
          else {
            if ((local_2c & 0x10000000) == 0) {
              bVar1 = 0xe4;
              uVar3 = uVar8;
              goto LAB_10057508;
            }
            local_5 = 0xe4;
            uVar3 = FUN_1005782e(4,(byte)local_18,0,uVar8,0,0,0);
          }
          uVar5 = 0;
          local_c8[uVar2] = uVar3;
          bVar1 = local_5;
          uVar3 = uVar2;
          if (uVar8 != 0) {
            do {
              uVar6 = uVar5 + 1;
              local_c8[uVar5 + uVar2 + 1] = auStack_48[bVar1 >> ((char)uVar5 * '\x02' & 0x1fU) & 3];
              uVar5 = uVar6;
              uVar3 = local_c;
            } while (uVar6 < uVar8);
          }
          uVar8 = uVar3 + 1 + uVar8;
        }
        else {
          local_10 = puVar10;
          if ((uVar8 == 8) || (uVar8 == 9)) {
            uVar8 = 0;
            puVar11 = param_4 + 3;
            uVar5 = local_28 >> 8;
            local_28 = local_28 & 0xffffff00;
            if ((uVar3 & 0x40000000) != 0) {
              uVar8 = *puVar11;
              puVar12 = param_4 + 4;
              while (uVar8 == 0xffffffff) {
                uVar8 = *puVar12;
                puVar12 = puVar12 + 1;
              }
              puVar11 = puVar12 + 1;
              local_28 = CONCAT31((int3)uVar5,(char)*puVar12);
            }
            bVar1 = local_5;
            if ((uVar3 & 0x10000000) != 0) {
              bVar1 = (byte)local_18;
            }
            iVar4 = FUN_10056a89(local_34,local_c8 + local_c,uVar3,*puVar10,bVar1,uVar8,
                                 (byte)local_28);
          }
          else {
            uVar8 = 0;
            uVar5 = local_24 >> 8;
            local_24 = local_24 & 0xffffff00;
            if ((uVar3 & 0x40000000) != 0) {
              uVar8 = *puVar10;
              puVar10 = param_4 + 3;
              while (uVar8 == 0xffffffff) {
                uVar8 = *puVar10;
                puVar10 = puVar10 + 1;
              }
              puVar11 = puVar10 + 1;
              local_24 = CONCAT31((int3)uVar5,(char)*puVar10);
            }
            bVar1 = local_5;
            if ((uVar3 & 0x10000000) != 0) {
              bVar1 = (byte)local_18;
            }
            iVar4 = FUN_10056d7a(local_34,local_c8 + local_c,uVar3,bVar1,uVar8,(byte)local_24);
          }
          uVar8 = uVar2 + iVar4;
        }
        local_c = uVar8;
      }
      uVar3 = *puVar11;
      param_4 = puVar11;
    }
  }
LAB_10057566:
  local_c8[0] = (uVar8 & 0x7f) << 0x18 | param_3;
  if ((uVar8 != 0) && ((char)local_38[3] != '\0')) {
    if ((uint)local_38[2] < (local_38[1] + uVar8 * 4) - *local_38) {
      FUN_100575d3(local_38,uVar8 * 4);
    }
    iVar4 = uVar8 * 4;
    puVar11 = local_c8;
    puVar10 = (uint *)local_38[1];
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar10 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar10 = puVar10 + 1;
    }
    local_38[1] = local_38[1] + iVar4;
  }
  return;
}

