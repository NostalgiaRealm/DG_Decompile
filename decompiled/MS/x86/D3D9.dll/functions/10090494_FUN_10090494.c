/*
 * FUN_10090494 at 10090494
 * undefined __fastcall FUN_10090494(int param_1)
 * Address ranges: 10090494-10090503
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10090494(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_8;
  
  iVar2 = 0;
  local_8 = 0;
  uVar4 = DAT_100dea68;
  if (DAT_100dea68 != 0) {
    do {
      if (iVar2 != 0) {
        return;
      }
      iVar1 = *(int *)(DAT_100dea6c + local_8 * 4);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0xb8) != 0)) {
        uVar3 = 0;
        do {
          uVar4 = DAT_100dea68;
          if (iVar2 != 0) break;
          iVar2 = FUN_100938f1(*(void **)(*(int *)(iVar1 + 0xb4) + uVar3 * 4),param_1);
          uVar3 = uVar3 + 1;
          uVar4 = DAT_100dea68;
        } while (uVar3 < *(uint *)(iVar1 + 0xb8));
      }
      local_8 = local_8 + 1;
    } while (local_8 < uVar4);
  }
  return;
}

