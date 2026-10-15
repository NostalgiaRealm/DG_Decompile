/*
 * FUN_18001b6ec at 18001b6ec
 * undefined __fastcall FUN_18001b6ec(longlong param_1)
 * Address ranges: 18001b6ec-18001b8f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001b6ec(longlong param_1)

{
  uint uVar1;
  byte *pbVar2;
  longlong lVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint local_res8 [2];
  
  local_res8[0] = *(uint *)(param_1 + 0xd14) & 0xff;
  uVar1 = 0;
  if (local_res8[0] != 0) {
    for (; (local_res8[0] >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  if (local_res8[0] != 0) {
    pbVar2 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar1 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar1 & 7));
    while( true ) {
      uVar9 = (ulonglong)(uVar1 & 0xff);
      lVar8 = uVar9 * 0x84;
      piVar5 = (int *)(param_1 + 0x7c8 + lVar8);
      uVar10 = (ulonglong)*(uint *)(param_1 + 0x7c4 + lVar8);
      lVar7 = uVar10 * 3;
      if (((((&DAT_1800fdea0)[lVar7] == '\0') || (*piVar5 != 2)) &&
          (((&DAT_1800fdea1)[lVar7] == '\0' || (*(int *)(param_1 + 0x7cc + lVar8) != 2)))) &&
         (((&DAT_1800fdea2)[lVar7] == '\0' || (*(int *)(param_1 + 0x828 + lVar8) != 2)))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      iVar6 = *piVar5;
      if ((bVar4) && (*(char *)(param_1 + 0xcc0 + uVar9) == '\0')) {
        iVar6 = 1;
        uVar10 = 2;
      }
      lVar7 = uVar9 * 0x1c;
      if ((int)uVar10 != *(int *)(param_1 + 0xbe4 + lVar7)) {
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x98))
                  (*(longlong **)(param_1 + 0x28),uVar9,1,uVar10);
        *(int *)(param_1 + 0xbe4 + lVar7) = (int)uVar10;
      }
      if (iVar6 != *(int *)(param_1 + 0xbe8 + lVar7)) {
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x98))
                  (*(longlong **)(param_1 + 0x28),uVar9,2,iVar6);
        *(int *)(param_1 + 0xbe8 + lVar7) = iVar6;
      }
      uVar10 = (ulonglong)*(uint *)(param_1 + 2000 + lVar8);
      lVar3 = uVar10 * 3;
      if (((((&DAT_1800fdea0)[lVar3] == '\0') ||
           (piVar5 = (int *)(param_1 + 0x7d4 + lVar8), *piVar5 != 2)) &&
          ((piVar5 = (int *)(param_1 + 0x7d4 + lVar8), (&DAT_1800fdea1)[lVar3] == '\0' ||
           (*(int *)(param_1 + 0x7d8 + lVar8) != 2)))) &&
         (((&DAT_1800fdea2)[lVar3] == '\0' || (*(int *)(param_1 + 0x82c + lVar8) != 2)))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      iVar6 = *piVar5;
      if ((bVar4) && (*(char *)(param_1 + 0xcc0 + uVar9) == '\0')) {
        iVar6 = 1;
        uVar10 = 2;
      }
      if ((int)uVar10 != *(int *)(param_1 + 0xbf0 + lVar7)) {
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x98))
                  (*(longlong **)(param_1 + 0x28),uVar9,4,uVar10);
        *(int *)(param_1 + 0xbf0 + lVar7) = (int)uVar10;
      }
      if (iVar6 != *(int *)(param_1 + 0xbf4 + lVar7)) {
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x98))
                  (*(longlong **)(param_1 + 0x28),uVar9,5,iVar6);
        *(int *)(param_1 + 0xbf4 + lVar7) = iVar6;
      }
      uVar1 = 0;
      if (local_res8[0] != 0) {
        for (; (local_res8[0] >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      if (local_res8[0] == 0) break;
      pbVar2 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar1 >> 3));
      *pbVar2 = *pbVar2 & ~('\x01' << (uVar1 & 7));
    }
  }
  *(undefined4 *)(param_1 + 0xd14) = 0;
  return;
}

