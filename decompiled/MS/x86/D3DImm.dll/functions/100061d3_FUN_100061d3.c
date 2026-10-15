/*
 * FUN_100061d3 at 100061d3
 * undefined __fastcall FUN_100061d3(int param_1)
 * Address ranges: 100061d3-10006357
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100061d3(int param_1)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_10 = *(uint *)(param_1 + 0x934) & 0xff;
  uVar1 = 0;
  bVar6 = local_10 != 0;
  if (bVar6) {
    for (; (local_10 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar6) {
    pbVar2 = (byte *)((int)&local_10 + ((int)uVar1 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar1 & 7));
    local_8 = uVar1 & 0xff;
    iVar3 = local_8 * 100;
    local_c = *(int *)(param_1 + 0x4f8 + iVar3);
    if ((((&DAT_1005d300)[local_c * 3] == '\0') || (*(int *)(param_1 + 0x4fc + iVar3) != 2)) &&
       (((&DAT_1005d301)[local_c * 3] == '\0' || (*(int *)(param_1 + 0x500 + iVar3) != 2)))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    iVar5 = *(int *)(param_1 + 0x4fc + iVar3);
    if ((bVar6) && (*(char *)(param_1 + 0x8f4 + local_8) == '\0')) {
      local_c = 2;
      iVar5 = 1;
    }
    iVar4 = local_8 * 0x1c;
    if (local_c != *(int *)(param_1 + 0x818 + iVar4)) {
      (**(code **)(**(int **)(param_1 + 0x14) + 0x54))(local_8,1,local_c);
      *(int *)(param_1 + 0x818 + iVar4) = local_c;
    }
    if (iVar5 != *(int *)(param_1 + 0x81c + iVar4)) {
      (**(code **)(**(int **)(param_1 + 0x14) + 0x54))(local_8,2,iVar5);
      *(int *)(param_1 + 0x81c + iVar4) = iVar5;
    }
    local_c = *(int *)(param_1 + 0x504 + iVar3);
    iVar5 = local_c * 3;
    if ((((&DAT_1005d300)[iVar5] == '\0') || (*(int *)(param_1 + iVar3 + 0x508) != 2)) &&
       (((&DAT_1005d301)[iVar5] == '\0' || (*(int *)(param_1 + 0x50c + iVar3) != 2)))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    iVar3 = *(int *)(param_1 + iVar3 + 0x508);
    if ((bVar6) && (*(char *)(param_1 + 0x8f4 + local_8) == '\0')) {
      local_c = 2;
      iVar3 = 1;
    }
    if (local_c != *(int *)(param_1 + 0x824 + iVar4)) {
      (**(code **)(**(int **)(param_1 + 0x14) + 0x54))(local_8,4,local_c);
      *(int *)(param_1 + 0x824 + iVar4) = local_c;
    }
    if (iVar3 != *(int *)(param_1 + 0x828 + iVar4)) {
      (**(code **)(**(int **)(param_1 + 0x14) + 0x54))(local_8,5,iVar3);
      *(int *)(param_1 + 0x828 + iVar4) = iVar3;
    }
    uVar1 = 0;
    bVar6 = local_10 != 0;
    if (bVar6) {
      for (; (local_10 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  *(undefined4 *)(param_1 + 0x934) = 0;
  return;
}

