/*
 * FUN_10044d8b at 10044d8b
 * undefined4 __fastcall FUN_10044d8b(int param_1)
 * Address ranges: 10044d8b-10044f2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10044d8b(int param_1)

{
  undefined4 *this;
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_13c [284];
  int local_20;
  int local_1c;
  uint local_14;
  uint local_10;
  int *local_c;
  int *local_8;
  
  local_c = (int *)0x0;
  piVar1 = *(int **)(param_1 + 0x4ec);
  if ((piVar1 == (int *)0x0) || (uVar2 = (**(code **)(*piVar1 + 0x34))(piVar1), uVar2 == 0)) {
    iVar3 = (**(code **)(param_1 + 0x2a8))(&DAT_100549d0,&local_c);
    if (-1 < iVar3) {
      piVar1 = *(int **)(param_1 + 0x4ec);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      *(int **)(param_1 + 0x4ec) = local_c;
    }
    local_c = *(int **)(param_1 + 0x4ec);
    if (local_c == (int *)0x0) {
      return 0;
    }
    this = (undefined4 *)(param_1 + 0x4f0);
    thunk_FUN_1004f9b6((LPVOID)*this);
    *this = 0;
    *(undefined4 *)(param_1 + 0x4f4) = 0;
    *(undefined4 *)(param_1 + 0x4f8) = 0;
    local_8 = (int *)0x0;
    local_10 = 0;
    while (uVar2 = (**(code **)(*local_c + 0x30))(local_c,local_10,&local_8), -1 < (int)uVar2) {
      iVar3 = (**(code **)(*local_8 + 0x28))(local_8,local_13c);
      if (-1 < iVar3) {
        uVar5 = 0;
        uVar2 = 0xffffffff;
        do {
          iVar3 = uVar5 * 0x28;
          if (((*(int *)(param_1 + 0x1c + iVar3) == local_20) &&
              (*(int *)(param_1 + 0x20 + iVar3) == local_1c)) &&
             ((local_20 != 0 || (local_1c != 0)))) {
            (**(code **)(*local_8 + 8))(local_8);
            local_8 = (int *)0x0;
            uVar4 = uVar5;
            break;
          }
          uVar4 = uVar2;
          if ((*(int *)(param_1 + 0x18 + iVar3) == 0) && (uVar4 = uVar5, uVar2 != 0xffffffff)) {
            uVar4 = uVar2;
          }
          uVar5 = uVar5 + 1;
          uVar2 = uVar4;
        } while (uVar5 < 0x10);
        if (local_8 == (int *)0x0) {
          if (uVar4 != 0xffffffff) goto LAB_10044eb9;
        }
        else if (uVar4 == 0xffffffff) {
          (**(code **)(*local_8 + 8))(local_8);
        }
        else {
          iVar3 = uVar4 * 0x28;
          *(int **)(param_1 + 0x18 + iVar3) = local_8;
          *(int *)(param_1 + 0x1c + iVar3) = local_20;
          *(int *)(param_1 + 0x20 + iVar3) = local_1c;
          *(undefined1 *)(param_1 + 0x28 + iVar3) = 1;
LAB_10044eb9:
          local_14 = uVar4;
          FUN_100059ce(this,&local_14);
        }
      }
      local_10 = local_10 + 1;
    }
    local_10 = 0;
    do {
      uVar5 = local_10;
      iVar3 = local_10 * 0x28;
      if ((*(char *)(param_1 + 0x28 + iVar3) != '\0') &&
         (uVar2 = FUN_10044faa((void *)(param_1 + 0x4f0),(int *)&local_10), uVar2 == 0xffffffff)) {
        piVar1 = *(int **)(param_1 + 0x18 + iVar3);
        uVar2 = (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined1 *)(param_1 + 0x28 + iVar3) = 0;
      }
      local_10 = uVar5 + 1;
    } while (local_10 < 0x10);
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}

