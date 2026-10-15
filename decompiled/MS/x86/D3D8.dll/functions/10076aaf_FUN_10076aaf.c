/*
 * FUN_10076aaf at 10076aaf
 * uint __stdcall FUN_10076aaf(int param_1, int param_2, uint param_3)
 * Address ranges: 10076aaf-10076c3d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10076aaf(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint local_28;
  uint local_1c;
  uint local_10;
  
  if (param_1 == 0) {
    uVar7 = 0;
    if (param_2 != 0) {
      uVar7 = *(uint *)(param_2 + param_3 * 4);
      uVar7 = uVar7 >> 0x18 | uVar7 << 8;
    }
  }
  else {
    iVar8 = param_1 * 0x2c;
    iVar6 = 0;
    local_1c = 0;
    local_10 = 0;
    uVar7 = 0;
    local_28 = 0;
    do {
      bVar1 = (&DAT_100b319c)[local_28];
      uVar3 = 0xff << (bVar1 & 0x1f) & param_3;
      uVar5 = *(uint *)(&DAT_100b8a58 + iVar8) & uVar3;
      uVar9 = *(uint *)(&DAT_100b8a60 + iVar8) & uVar3;
      if (param_1 == 8) {
        if (bVar1 == 0) {
          iVar6 = 0xff;
          local_1c = 0xff;
          local_10 = 0xff;
        }
      }
      else {
        bVar2 = (&DAT_100b8a68)[iVar8];
        if ((char)bVar2 < '\0') {
          uVar4 = uVar5 << (-bVar2 & 0x1f);
        }
        else {
          uVar4 = uVar5 >> (bVar2 & 0x1f);
        }
        iVar6 = iVar6 + (uVar5 >> ((&DAT_100b8a69)[iVar8] & 0x1f) | uVar4);
        local_1c = local_1c +
                   ((*(uint *)(&DAT_100b8a5c + iVar8) & uVar3) >> ((&DAT_100b8a6b)[iVar8] & 0x1f) |
                   (*(uint *)(&DAT_100b8a5c + iVar8) & uVar3) >> ((&DAT_100b8a6a)[iVar8] & 0x1f));
        bVar2 = (&DAT_100b8a6c)[iVar8];
        if ((char)bVar2 < '\0') {
          uVar5 = uVar9 << (-bVar2 & 0x1f);
        }
        else {
          uVar5 = uVar9 >> (bVar2 & 0x1f);
        }
        local_10 = local_10 + (uVar9 >> ((&DAT_100b8a6d)[iVar8] & 0x1f) | uVar5);
      }
      uVar7 = ((*(uint *)(&DAT_100b8a64 + iVar8) & uVar3) >> ((&DAT_100b8a6f)[iVar8] & 0x1f) |
              (*(uint *)(&DAT_100b8a64 + iVar8) & uVar3) >> ((&DAT_100b8a6e)[iVar8] & 0x1f)) *
              (uint)(byte)(&DAT_100b8a70)[iVar8] + uVar7;
      if ((bVar1 == 0) && ((&DAT_100b8a70)[iVar8] == 0)) {
        uVar7 = 0xff;
      }
      local_28 = local_28 + 1;
    } while (local_28 < 4);
    uVar7 = ((iVar6 << 8 | local_1c) << 8 | local_10) << 8 | uVar7;
  }
  return uVar7;
}

