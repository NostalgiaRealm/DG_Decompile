/*
 * FUN_100092d8 at 100092d8
 * undefined __stdcall FUN_100092d8(void)
 * Address ranges: 100092d8-100094d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100092d8(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint local_28;
  
  DAT_100bee2c = FUN_100ad4a9(0x4080);
  DAT_100bee30 = DAT_100bee2c + 0xfU & 0xfffffff0;
  if (DAT_100bee30 != 0) {
    local_28 = 0;
    do {
      uVar5 = local_28 << 0x10;
      uVar4 = uVar5 & 0x30000;
      uVar3 = uVar5 & 0xc0000;
      uVar2 = uVar5 & 0x300000;
      uVar5 = uVar5 & 0xc00000;
      iVar6 = local_28 * 0x40;
      piVar1 = (int *)(iVar6 + DAT_100bee30);
      *piVar1 = (uVar4 != 0) - 1;
      piVar1[1] = (uVar3 != 0) - 1;
      piVar1[2] = (uVar2 != 0) - 1;
      piVar1[3] = (uVar5 != 0) - 1;
      piVar1 = (int *)(iVar6 + 0x10 + DAT_100bee30);
      *piVar1 = (uVar4 != 0x10000) - 1;
      piVar1[1] = (uVar3 != 0x40000) - 1;
      piVar1[2] = (uVar2 != 0x100000) - 1;
      piVar1[3] = (uVar5 != 0x400000) - 1;
      piVar1 = (int *)(iVar6 + 0x20 + DAT_100bee30);
      *piVar1 = (uVar4 != 0x20000) - 1;
      piVar1[1] = (uVar3 != 0x80000) - 1;
      piVar1[2] = (uVar2 != 0x200000) - 1;
      piVar1[3] = (uVar5 != 0x800000) - 1;
      piVar1 = (int *)(iVar6 + 0x30 + DAT_100bee30);
      *piVar1 = (uVar4 != 0x30000) - 1;
      piVar1[1] = (uVar3 != 0xc0000) - 1;
      piVar1[2] = (uVar2 != 0x300000) - 1;
      piVar1[3] = (uVar5 != 0xc00000) - 1;
      local_28 = local_28 + 1;
    } while (local_28 < 0x100);
  }
  return;
}

