/*
 * FUN_1001fd82 at 1001fd82
 * undefined __thiscall FUN_1001fd82(void * this, undefined4 param_1, int param_2, int param_3)
 * Address ranges: 1001fd82-100200ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall FUN_1001fd82(void *this,undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  float local_102c [1024];
  int *local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  undefined3 uStack_8;
  byte local_5;
  
  iVar6 = param_2 * 0x2c;
  bVar1 = (&DAT_10069406)[iVar6];
  uStack_8 = 0x1fd8f;
  local_2c = this;
  if (param_3 == 0) {
    bVar2 = (&DAT_10069407)[iVar6];
    local_1c = (uint)(char)bVar2;
    local_5 = (&DAT_10069408)[iVar6];
    local_18 = (uint)local_5;
    local_10 = 0;
    do {
      uVar7 = *(uint *)(&DAT_100693f0 + iVar6) & local_10;
      uVar4 = *(uint *)(&DAT_100693f8 + iVar6) & local_10;
      uVar9 = *(uint *)(&DAT_100693fc + iVar6) & local_10;
      if (param_2 == 8) {
        local_c = 0xff;
        uVar5 = 0xff;
        uVar7 = 0xff;
      }
      else {
        bVar3 = (&DAT_10069400)[iVar6];
        if ((char)bVar3 < '\0') {
          uVar5 = uVar7 << (-bVar3 & 0x1f);
        }
        else {
          uVar5 = uVar7 >> (bVar3 & 0x1f);
        }
        uVar5 = uVar7 >> ((&DAT_10069401)[iVar6] & 0x1f) | uVar5;
        local_c = (*(uint *)(&DAT_100693f4 + iVar6) & local_10) >> ((&DAT_10069402)[iVar6] & 0x1f) |
                  (*(uint *)(&DAT_100693f4 + iVar6) & local_10) >> ((&DAT_10069403)[iVar6] & 0x1f);
        bVar3 = (&DAT_10069404)[iVar6];
        if ((char)bVar3 < '\0') {
          uVar7 = uVar4 << (-bVar3 & 0x1f);
        }
        else {
          uVar7 = uVar4 >> (bVar3 & 0x1f);
        }
        uVar7 = uVar4 >> ((&DAT_10069405)[iVar6] & 0x1f) | uVar7;
        if (param_2 == 10) {
          uVar7 = 0x7f;
        }
      }
      if ((char)bVar1 < '\0') {
        uVar4 = uVar9 << (-bVar1 & 0x1f);
      }
      else {
        uVar4 = uVar9 >> (bVar1 & 0x1f);
      }
      iVar8 = (uVar9 >> (bVar2 & 0x1f) | uVar4) * local_18;
      if (local_5 == 0) {
        iVar8 = 0xff;
        if ((&DAT_10069409)[iVar6] != '\0') {
          iVar8 = 0x7f;
        }
      }
      local_102c[local_10 * 4] =
           (float)((double)(int)uVar5 + (double)(&DAT_10066fd0)[-((int)uVar5 >> 0x1f)]);
      local_102c[local_10 * 4 + 1] =
           (float)((double)(int)local_c + (double)(&DAT_10066fd0)[-((int)local_c >> 0x1f)]);
      local_102c[local_10 * 4 + 2] =
           (float)((double)(int)uVar7 + (double)(&DAT_10066fd0)[-((int)uVar7 >> 0x1f)]);
      uVar4 = local_10 + 1;
      local_102c[local_10 * 4 + 3] =
           (float)((double)iVar8 + (double)(&DAT_10066fd0)[-(iVar8 >> 0x1f)]);
      local_14 = (int)(char)bVar1;
      local_10 = uVar4;
    } while (uVar4 < 0x100);
  }
  else {
    local_c = (uint)(char)bVar1;
    bVar2 = (&DAT_10069407)[iVar6];
    local_18 = (uint)(char)bVar2;
    local_1c = (uint)(byte)(&DAT_10069408)[iVar6];
    local_14 = 0;
    do {
      uVar9 = 0;
      uVar4 = local_14 << ((byte)param_3 & 0x1f);
      uVar7 = *(uint *)(&DAT_100693f0 + iVar6) & uVar4;
      local_10 = *(uint *)(&DAT_100693f8 + iVar6) & uVar4;
      local_24 = 0;
      local_20 = *(uint *)(&DAT_100693fc + iVar6) & uVar4;
      local_28 = 0;
      if (param_2 != 8) {
        bVar3 = (&DAT_10069400)[iVar6];
        if ((char)bVar3 < '\0') {
          local_24 = uVar7 << (-bVar3 & 0x1f);
        }
        else {
          local_24 = uVar7 >> (bVar3 & 0x1f);
        }
        local_24 = uVar7 >> ((&DAT_10069401)[iVar6] & 0x1f) | local_24;
        local_28 = (*(uint *)(&DAT_100693f4 + iVar6) & uVar4) >> ((&DAT_10069403)[iVar6] & 0x1f) |
                   (*(uint *)(&DAT_100693f4 + iVar6) & uVar4) >> ((&DAT_10069402)[iVar6] & 0x1f);
        bVar3 = (&DAT_10069404)[iVar6];
        if ((char)bVar3 < '\0') {
          uVar9 = local_10 << (-bVar3 & 0x1f);
        }
        else {
          uVar9 = local_10 >> (bVar3 & 0x1f);
        }
        uVar9 = local_10 >> ((&DAT_10069405)[iVar6] & 0x1f) | uVar9;
      }
      if ((char)bVar1 < '\0') {
        uVar4 = local_20 << (-bVar1 & 0x1f);
      }
      else {
        uVar4 = local_20 >> (bVar1 & 0x1f);
      }
      iVar8 = (local_20 >> (bVar2 & 0x1f) | uVar4) * local_1c;
      local_102c[local_14 * 4] =
           (float)((double)(int)local_24 + (double)(&DAT_10066fd0)[-((int)local_24 >> 0x1f)]);
      local_102c[local_14 * 4 + 1] =
           (float)((double)(int)local_28 + (double)(&DAT_10066fd0)[-((int)local_28 >> 0x1f)]);
      local_102c[local_14 * 4 + 2] =
           (float)((double)(int)uVar9 + (double)(&DAT_10066fd0)[-((int)uVar9 >> 0x1f)]);
      uVar4 = local_14 + 1;
      local_102c[local_14 * 4 + 3] =
           (float)((double)iVar8 + (double)(&DAT_10066fd0)[-(iVar8 >> 0x1f)]);
      local_14 = uVar4;
      local_5 = bVar1;
    } while (uVar4 < 0x100);
  }
  (**(code **)(*local_2c + 0x94))(param_1,local_102c,1);
  return;
}

