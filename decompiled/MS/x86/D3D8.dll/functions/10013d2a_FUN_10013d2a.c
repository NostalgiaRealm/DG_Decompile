/*
 * FUN_10013d2a at 10013d2a
 * undefined __fastcall FUN_10013d2a(int param_1)
 * Address ranges: 10013d2a-10013eee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10013d2a(int param_1)

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
  
  local_18 = *(uint *)(param_1 + 0xa04) & 0xff;
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
    iVar5 = local_c * 0x74;
    local_10 = *(int *)(param_1 + 0x548 + iVar5);
    iVar4 = local_10 * 3;
    if (((((&DAT_100af9f0)[iVar4] == '\0') || (*(int *)(param_1 + 0x54c + iVar5) != 2)) &&
        (((&DAT_100af9f1)[iVar4] == '\0' || (*(int *)(param_1 + 0x550 + iVar5) != 2)))) &&
       (((&DAT_100af9f2)[iVar4] == '\0' || (*(int *)(param_1 + 0x5ac + iVar5) != 2)))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    local_14 = *(int *)(param_1 + 0x54c + iVar5);
    if ((bVar6) && (*(char *)(param_1 + 0x9c4 + local_c) == '\0')) {
      local_10 = 2;
      local_14 = 1;
    }
    iVar4 = local_c * 0x1c;
    if (local_10 != *(int *)(param_1 + 0x8e8 + iVar4)) {
      (**(code **)(**(int **)(param_1 + 0x14) + 0x4c))(local_c,1,local_10);
      *(int *)(param_1 + 0x8e8 + iVar4) = local_10;
    }
    if (local_14 != *(int *)(param_1 + 0x8ec + iVar4)) {
      (**(code **)(**(int **)(param_1 + 0x14) + 0x4c))(local_c,2,local_14);
      *(int *)(param_1 + 0x8ec + iVar4) = local_14;
    }
    local_10 = *(int *)(param_1 + 0x554 + iVar5);
    local_14 = local_10 * 3;
    piVar3 = (int *)(param_1 + 0x558 + iVar5);
    if (((((&DAT_100af9f0)[local_14] == '\0') || (*piVar3 != 2)) &&
        (((&DAT_100af9f1)[local_14] == '\0' || (*(int *)(param_1 + 0x55c + iVar5) != 2)))) &&
       (((&DAT_100af9f2)[local_14] == '\0' || (*(int *)(param_1 + 0x5b0 + iVar5) != 2)))) {
      local_5 = 0;
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    iVar5 = *piVar3;
    if ((bVar6) && (*(char *)(param_1 + 0x9c4 + local_c) == '\0')) {
      local_10 = 2;
      iVar5 = 1;
    }
    if (local_10 != *(int *)(param_1 + 0x8f4 + iVar4)) {
      (**(code **)(**(int **)(param_1 + 0x14) + 0x4c))(local_c,4,local_10);
      *(int *)(param_1 + 0x8f4 + iVar4) = local_10;
    }
    if (iVar5 != *(int *)(param_1 + 0x8f8 + iVar4)) {
      (**(code **)(**(int **)(param_1 + 0x14) + 0x4c))(local_c,5,iVar5);
      *(int *)(param_1 + 0x8f8 + iVar4) = iVar5;
    }
    uVar1 = 0;
    bVar6 = local_18 != 0;
    if (bVar6) {
      for (; (local_18 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  *(undefined4 *)(param_1 + 0xa04) = 0;
  return;
}

