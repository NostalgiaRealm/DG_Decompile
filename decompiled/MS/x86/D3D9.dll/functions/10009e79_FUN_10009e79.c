/*
 * FUN_10009e79 at 10009e79
 * undefined __stdcall FUN_10009e79(void)
 * Address ranges: 10009e79-1000a079
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10009e79(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint local_28;
  
  DAT_100df2e4 = FUN_100cfd89(0x4080);
  DAT_100e39f4 = DAT_100df2e4 + 0xfU & 0xfffffff0;
  if (DAT_100e39f4 != 0) {
    local_28 = 0;
    do {
      uVar5 = local_28 << 0x10;
      uVar4 = uVar5 & 0x30000;
      uVar3 = uVar5 & 0xc0000;
      uVar2 = uVar5 & 0x300000;
      uVar5 = uVar5 & 0xc00000;
      iVar6 = local_28 * 0x40;
      piVar1 = (int *)(iVar6 + DAT_100e39f4);
      *piVar1 = (uVar4 != 0) - 1;
      piVar1[1] = (uVar3 != 0) - 1;
      piVar1[2] = (uVar2 != 0) - 1;
      piVar1[3] = (uVar5 != 0) - 1;
      piVar1 = (int *)(iVar6 + 0x10 + DAT_100e39f4);
      *piVar1 = (uVar4 != 0x10000) - 1;
      piVar1[1] = (uVar3 != 0x40000) - 1;
      piVar1[2] = (uVar2 != 0x100000) - 1;
      piVar1[3] = (uVar5 != 0x400000) - 1;
      piVar1 = (int *)(iVar6 + 0x20 + DAT_100e39f4);
      *piVar1 = (uVar4 != 0x20000) - 1;
      piVar1[1] = (uVar3 != 0x80000) - 1;
      piVar1[2] = (uVar2 != 0x200000) - 1;
      piVar1[3] = (uVar5 != 0x800000) - 1;
      piVar1 = (int *)(iVar6 + 0x30 + DAT_100e39f4);
      *piVar1 = (uVar4 != 0x30000) - 1;
      piVar1[1] = (uVar3 != 0xc0000) - 1;
      piVar1[2] = (uVar2 != 0x300000) - 1;
      piVar1[3] = (uVar5 != 0xc00000) - 1;
      local_28 = local_28 + 1;
    } while (local_28 < 0x100);
  }
  return;
}

