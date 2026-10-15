/*
 * FUN_1008cc6c at 1008cc6c
 * uint __stdcall FUN_1008cc6c(int param_1, int param_2, uint param_3)
 * Address ranges: 1008cc6c-1008cdf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1008cc6c(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint local_28;
  uint local_1c;
  uint local_10;
  
  uVar6 = 0;
  if (param_1 == 0) {
    if (param_2 != 0) {
      uVar6 = *(uint *)(param_2 + param_3 * 4);
      uVar6 = uVar6 >> 0x18 | uVar6 << 8;
    }
  }
  else {
    iVar8 = param_1 * 0x2c;
    uVar7 = 0;
    local_1c = 0;
    local_10 = 0;
    local_28 = 0;
    do {
      bVar1 = (&DAT_100d694c)[local_28];
      uVar3 = 0xff << (bVar1 & 0x1f) & param_3;
      uVar5 = *(uint *)(&DAT_100dcd80 + iVar8) & uVar3;
      uVar9 = *(uint *)(&DAT_100dcd88 + iVar8) & uVar3;
      if (param_1 == 8) {
        if (bVar1 == 0) {
          uVar6 = 0;
          local_10 = 0;
          local_1c = 0;
        }
      }
      else {
        bVar2 = (&DAT_100dcd90)[iVar8];
        if ((char)bVar2 < '\0') {
          uVar4 = uVar5 << (-bVar2 & 0x1f);
        }
        else {
          uVar4 = uVar5 >> (bVar2 & 0x1f);
        }
        uVar6 = uVar6 + (uVar5 >> ((&DAT_100dcd91)[iVar8] & 0x1f) | uVar4);
        local_1c = local_1c +
                   ((*(uint *)(&DAT_100dcd84 + iVar8) & uVar3) >> ((&DAT_100dcd93)[iVar8] & 0x1f) |
                   (*(uint *)(&DAT_100dcd84 + iVar8) & uVar3) >> ((&DAT_100dcd92)[iVar8] & 0x1f));
        bVar2 = (&DAT_100dcd94)[iVar8];
        if ((char)bVar2 < '\0') {
          uVar5 = uVar9 << (-bVar2 & 0x1f);
        }
        else {
          uVar5 = uVar9 >> (bVar2 & 0x1f);
        }
        local_10 = local_10 + (uVar9 >> ((&DAT_100dcd95)[iVar8] & 0x1f) | uVar5);
      }
      uVar7 = ((*(uint *)(&DAT_100dcd8c + iVar8) & uVar3) >> ((&DAT_100dcd97)[iVar8] & 0x1f) |
              (*(uint *)(&DAT_100dcd8c + iVar8) & uVar3) >> ((&DAT_100dcd96)[iVar8] & 0x1f)) *
              (uint)(byte)(&DAT_100dcd98)[iVar8] + uVar7;
      if ((bVar1 == 0) && ((&DAT_100dcd98)[iVar8] == 0)) {
        uVar7 = 0xff;
      }
      local_28 = local_28 + 1;
    } while (local_28 < 4);
    uVar6 = ((uVar6 << 8 | local_1c) << 8 | local_10) << 8 | uVar7;
  }
  return uVar6;
}

