/*
 * FUN_10017dad at 10017dad
 * undefined __fastcall FUN_10017dad(int param_1)
 * Address ranges: 10017dad-10017f74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10017dad(int param_1)

{
  uint uVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  undefined1 local_5;
  
  local_18 = *(uint *)(param_1 + 0xcc8) & 0xff;
  uVar1 = 0;
  bVar6 = local_18 != 0;
  if (bVar6) {
    for (; (local_18 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar6) {
    pbVar2 = (byte *)((int)&local_18 + ((int)uVar1 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar1 & 7));
    local_c = uVar1 & 0xff;
    iVar5 = local_c * 0x84;
    local_10 = *(int *)(param_1 + 0x77c + iVar5);
    iVar4 = local_10 * 3;
    if (((((&DAT_100d1b30)[iVar4] == '\0') || (*(int *)(param_1 + 0x780 + iVar5) != 2)) &&
        (((&DAT_100d1b31)[iVar4] == '\0' || (*(int *)(param_1 + 0x784 + iVar5) != 2)))) &&
       (((&DAT_100d1b32)[iVar4] == '\0' || (*(int *)(param_1 + 0x7e0 + iVar5) != 2)))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    local_14 = *(int *)(param_1 + 0x780 + iVar5);
    if ((bVar6) && (*(char *)(param_1 + 0xc78 + local_c) == '\0')) {
      local_10 = 2;
      local_14 = 1;
    }
    iVar4 = local_c * 0x1c;
    if (local_10 != *(int *)(param_1 + 0xb9c + iVar4)) {
      (**(code **)(**(int **)(param_1 + 0x14) + 0x4c))(local_c,1,local_10);
      *(int *)(param_1 + 0xb9c + iVar4) = local_10;
    }
    if (local_14 != *(int *)(param_1 + 0xba0 + iVar4)) {
      (**(code **)(**(int **)(param_1 + 0x14) + 0x4c))(local_c,2,local_14);
      *(int *)(param_1 + 0xba0 + iVar4) = local_14;
    }
    local_10 = *(int *)(param_1 + 0x788 + iVar5);
    local_14 = local_10 * 3;
    piVar3 = (int *)(param_1 + 0x78c + iVar5);
    if (((((&DAT_100d1b30)[local_14] == '\0') || (*piVar3 != 2)) &&
        (((&DAT_100d1b31)[local_14] == '\0' || (*(int *)(param_1 + 0x790 + iVar5) != 2)))) &&
       (((&DAT_100d1b32)[local_14] == '\0' || (*(int *)(param_1 + 0x7e4 + iVar5) != 2)))) {
      local_5 = 0;
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    iVar5 = *piVar3;
    if ((bVar6) && (*(char *)(param_1 + 0xc78 + local_c) == '\0')) {
      local_10 = 2;
      iVar5 = 1;
    }
    if (local_10 != *(int *)(param_1 + 0xba8 + iVar4)) {
      (**(code **)(**(int **)(param_1 + 0x14) + 0x4c))(local_c,4,local_10);
      *(int *)(param_1 + 0xba8 + iVar4) = local_10;
    }
    if (iVar5 != *(int *)(param_1 + 0xbac + iVar4)) {
      (**(code **)(**(int **)(param_1 + 0x14) + 0x4c))(local_c,5,iVar5);
      *(int *)(param_1 + 0xbac + iVar4) = iVar5;
    }
    uVar1 = 0;
    bVar6 = local_18 != 0;
    if (bVar6) {
      for (; (local_18 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  *(undefined4 *)(param_1 + 0xcc8) = 0;
  return;
}

