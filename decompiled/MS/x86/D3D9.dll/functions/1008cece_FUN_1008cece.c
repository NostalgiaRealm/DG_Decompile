/*
 * FUN_1008cece at 1008cece
 * undefined __thiscall FUN_1008cece(void * this, int param_1, int param_2, int param_3)
 * Address ranges: 1008cece-1008d288
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall FUN_1008cece(void *this,int param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  double dVar13;
  float local_1430 [1024];
  uint local_430 [256];
  int *local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  undefined3 uStack_8;
  byte local_5;
  
  local_2c = param_2 * 0x2c;
  local_30 = this;
  bVar1 = (&DAT_100dcd96)[local_2c];
  if (param_3 == 0) {
    local_14 = (int)(char)bVar1;
    local_1c = (int)(char)(&DAT_100dcd97)[local_2c];
    uStack_8 = 0x8cedb;
    local_5 = (&DAT_100dcd98)[local_2c];
    local_10 = 0;
    local_18 = (uint)(byte)(&DAT_100dcd98)[local_2c];
    do {
      uVar3 = local_10;
      uVar8 = *(uint *)(&DAT_100dcd80 + local_2c) & local_10;
      uVar4 = *(uint *)(&DAT_100dcd88 + local_2c) & local_10;
      uVar10 = *(uint *)(&DAT_100dcd8c + local_2c) & local_10;
      if (param_2 == 8) {
        local_c = 0;
        uVar5 = 0;
        uVar8 = 0;
LAB_1008d15a:
      }
      else {
        bVar2 = (&DAT_100dcd90)[local_2c];
        if ((char)bVar2 < '\0') {
          uVar5 = uVar8 << (-bVar2 & 0x1f);
        }
        else {
          uVar5 = uVar8 >> (bVar2 & 0x1f);
        }
        uVar5 = uVar8 >> ((&DAT_100dcd91)[local_2c] & 0x1f) | uVar5;
        local_c = (*(uint *)(&DAT_100dcd84 + local_2c) & local_10) >>
                  ((&DAT_100dcd92)[local_2c] & 0x1f) |
                  (*(uint *)(&DAT_100dcd84 + local_2c) & local_10) >>
                  ((&DAT_100dcd93)[local_2c] & 0x1f);
        bVar2 = (&DAT_100dcd94)[local_2c];
        if ((char)bVar2 < '\0') {
          uVar8 = uVar4 << (-bVar2 & 0x1f);
        }
        else {
          uVar8 = uVar4 >> (bVar2 & 0x1f);
        }
        uVar8 = uVar4 >> ((&DAT_100dcd95)[local_2c] & 0x1f) | uVar8;
        if (param_2 == 10) {
          uVar8 = 0x7f;
          goto LAB_1008d15a;
        }
      }
      uVar4 = local_c;
      if ((char)bVar1 < '\0') {
        uVar6 = uVar10 << (-(byte)local_14 & 0x1f);
      }
      else {
        uVar6 = uVar10 >> ((byte)local_14 & 0x1f);
      }
      iVar7 = (uVar10 >> ((byte)local_1c & 0x1f) | uVar6) * local_18;
      if (local_5 == 0) {
        iVar7 = 0xff;
        if ((&DAT_100dcd99)[local_2c] != '\0') {
          iVar7 = 0x7f;
        }
      }
      local_430[local_10] = ((iVar7 << 8 | uVar8) << 8 | local_c) << 8 | uVar5;
      local_1430[local_10 * 4] =
           (float)((double)(int)uVar5 + (double)(&DAT_100d97a0)[-((int)uVar5 >> 0x1f)]);
      local_1430[local_10 * 4 + 1] =
           (float)((double)(int)uVar4 + (double)(&DAT_100d97a0)[-((int)uVar4 >> 0x1f)]);
      local_1430[local_10 * 4 + 2] =
           (float)((double)(int)uVar8 + (double)(&DAT_100d97a0)[-((int)uVar8 >> 0x1f)]);
      local_10 = local_10 + 1;
      local_1430[uVar3 * 4 + 3] = (float)((double)iVar7 + (double)(&DAT_100d97a0)[-(iVar7 >> 0x1f)])
      ;
    } while (local_10 < 0x100);
  }
  else {
    uStack_8 = 0x8cedb;
    local_5 = bVar1;
    local_20 = (int)(char)bVar1;
    local_18 = (int)(char)(&DAT_100dcd97)[local_2c];
    local_c = 0;
    local_1c = (uint)(byte)(&DAT_100dcd98)[local_2c];
    do {
      uVar3 = local_c;
      uVar10 = 0;
      uVar4 = local_c << ((byte)param_3 & 0x1f);
      uVar8 = *(uint *)(&DAT_100dcd80 + local_2c) & uVar4;
      local_10 = *(uint *)(&DAT_100dcd88 + local_2c) & uVar4;
      local_14 = 0;
      local_24 = *(uint *)(&DAT_100dcd8c + local_2c) & uVar4;
      local_28 = 0;
      if (param_2 != 8) {
        bVar1 = (&DAT_100dcd90)[local_2c];
        if ((char)bVar1 < '\0') {
          uVar10 = uVar8 << (-bVar1 & 0x1f);
        }
        else {
          uVar10 = uVar8 >> (bVar1 & 0x1f);
        }
        local_14 = uVar8 >> ((&DAT_100dcd91)[local_2c] & 0x1f) | uVar10;
        local_28 = (*(uint *)(&DAT_100dcd84 + local_2c) & uVar4) >>
                   ((&DAT_100dcd93)[local_2c] & 0x1f) |
                   (*(uint *)(&DAT_100dcd84 + local_2c) & uVar4) >>
                   ((&DAT_100dcd92)[local_2c] & 0x1f);
        bVar1 = (&DAT_100dcd94)[local_2c];
        if ((char)bVar1 < '\0') {
          uVar10 = local_10 << (-bVar1 & 0x1f);
        }
        else {
          uVar10 = local_10 >> (bVar1 & 0x1f);
        }
        uVar10 = local_10 >> ((&DAT_100dcd95)[local_2c] & 0x1f) | uVar10;
      }
      uVar4 = local_28;
      if ((char)local_5 < '\0') {
        uVar8 = local_24 << (-(byte)local_20 & 0x1f);
      }
      else {
        uVar8 = local_24 >> ((byte)local_20 & 0x1f);
      }
      iVar9 = (local_24 >> ((byte)local_18 & 0x1f) | uVar8) * local_1c;
      dVar13 = (double)(int)local_14;
      iVar7 = (int)local_14 >> 0x1f;
      local_430[local_c] = ((iVar9 * 0x100 | uVar10) << 8 | local_28) << 8 | local_14;
      local_1430[local_c * 4] = (float)(dVar13 + (double)(&DAT_100d97a0)[-iVar7]);
      local_1430[local_c * 4 + 1] =
           (float)((double)(int)uVar4 + (double)(&DAT_100d97a0)[-((int)uVar4 >> 0x1f)]);
      local_1430[local_c * 4 + 2] =
           (float)((double)(int)uVar10 + (double)(&DAT_100d97a0)[-((int)uVar10 >> 0x1f)]);
      local_c = local_c + 1;
      local_1430[uVar3 * 4 + 3] = (float)((double)iVar9 + (double)(&DAT_100d97a0)[-(iVar9 >> 0x1f)])
      ;
    } while (local_c < 0x100);
  }
  puVar11 = local_430;
  puVar12 = (uint *)(local_30 + param_1 * 0x100 + 0x26);
  for (iVar7 = 0x100; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  (**(code **)(*local_30 + 0xac))(param_1,local_1430,1);
  return;
}

