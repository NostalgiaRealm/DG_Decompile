/*
 * FUN_100df850 at 100df850
 * undefined FUN_100df850(void)
 * Address ranges: 100df850-100dfa7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100df850(int param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  
  bVar2 = *(int *)(param_1 + 0xdf8) != 0;
  if (*(uint *)(param_1 + 0xe10) != 0) {
    uVar3 = 0;
    do {
      if (bVar2 != false) break;
      iVar1 = *(int *)(*(int *)(param_1 + 0xe0c) + uVar3 * 4);
      if ((*(int *)(iVar1 + 0x60) == 0) && (*(int *)(iVar1 + 0x7c) != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xe10));
  }
  if (*(uint *)(param_1 + 0xe04) != 0) {
    uVar3 = 0;
    do {
      if (bVar2 != false) break;
      iVar1 = *(int *)(*(int *)(param_1 + 0xe00) + uVar3 * 4);
      if ((*(int *)(iVar1 + 0x60) == 0) && (*(int *)(iVar1 + 0x7c) != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xe04));
  }
  if (*(uint *)(param_1 + 0xe1c) != 0) {
    uVar3 = 0;
    do {
      if (bVar2 != false) break;
      iVar1 = *(int *)(*(int *)(param_1 + 0xe18) + uVar3 * 4);
      if ((*(int *)(iVar1 + 0xb0) == 0) && (*(int *)(iVar1 + 0xcc) != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xe1c));
  }
  if (*(uint *)(param_1 + 0xe28) != 0) {
    uVar3 = 0;
    do {
      if (bVar2 != false) break;
      iVar1 = *(int *)(*(int *)(param_1 + 0xe24) + uVar3 * 4);
      if ((*(int *)(iVar1 + 0x34) == 0) && (*(int *)(iVar1 + 0x74) != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xe28));
  }
  if (*(uint *)(param_1 + 0xe34) != 0) {
    uVar3 = 0;
    do {
      if (bVar2 != false) break;
      iVar1 = *(int *)(*(int *)(param_1 + 0xe30) + uVar3 * 4);
      if ((*(int *)(iVar1 + 0x40) == 0) && (*(int *)(iVar1 + 0x6c) != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xe34));
  }
  if (*(uint *)(param_1 + 0xe40) != 0) {
    uVar3 = 0;
    do {
      if (bVar2 != false) {
        return bVar2;
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0xe3c) + uVar3 * 4);
      if ((*(int *)(iVar1 + 0x3c) == 0) && (*(int *)(iVar1 + 0x50) != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xe40));
  }
  return bVar2;
}

