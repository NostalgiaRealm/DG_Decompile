/*
 * FUN_100b8680 at 100b8680
 * undefined FUN_100b8680(void)
 * Address ranges: 100b8680-100b88ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100b8680(int param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  
  bVar2 = *(int *)(param_1 + 0xb34) != 0;
  if (*(uint *)(param_1 + 0xb4c) != 0) {
    uVar3 = 0;
    do {
      if (bVar2 != false) break;
      iVar1 = *(int *)(*(int *)(param_1 + 0xb48) + uVar3 * 4);
      if ((*(int *)(iVar1 + 0x60) == 0) && (*(int *)(iVar1 + 0x7c) != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xb4c));
  }
  if (*(uint *)(param_1 + 0xb40) != 0) {
    uVar3 = 0;
    do {
      if (bVar2 != false) break;
      iVar1 = *(int *)(*(int *)(param_1 + 0xb3c) + uVar3 * 4);
      if ((*(int *)(iVar1 + 0x60) == 0) && (*(int *)(iVar1 + 0x7c) != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xb40));
  }
  if (*(uint *)(param_1 + 0xb58) != 0) {
    uVar3 = 0;
    do {
      if (bVar2 != false) break;
      iVar1 = *(int *)(*(int *)(param_1 + 0xb54) + uVar3 * 4);
      if ((*(int *)(iVar1 + 0xb0) == 0) && (*(int *)(iVar1 + 0xcc) != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xb58));
  }
  if (*(uint *)(param_1 + 0xb64) != 0) {
    uVar3 = 0;
    do {
      if (bVar2 != false) break;
      iVar1 = *(int *)(*(int *)(param_1 + 0xb60) + uVar3 * 4);
      if ((*(int *)(iVar1 + 0x34) == 0) && (*(int *)(iVar1 + 0x60) != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xb64));
  }
  if (*(uint *)(param_1 + 0xb70) != 0) {
    uVar3 = 0;
    do {
      if (bVar2 != false) break;
      iVar1 = *(int *)(*(int *)(param_1 + 0xb6c) + uVar3 * 4);
      if ((*(int *)(iVar1 + 0x40) == 0) && (*(int *)(iVar1 + 0x6c) != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xb70));
  }
  if (*(uint *)(param_1 + 0xb7c) != 0) {
    uVar3 = 0;
    do {
      if (bVar2 != false) {
        return bVar2;
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0xb78) + uVar3 * 4);
      if ((*(int *)(iVar1 + 0x3c) == 0) && (*(int *)(iVar1 + 0x50) != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xb7c));
  }
  return bVar2;
}

