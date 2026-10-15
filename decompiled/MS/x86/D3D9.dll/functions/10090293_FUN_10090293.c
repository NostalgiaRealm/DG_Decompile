/*
 * FUN_10090293 at 10090293
 * undefined __fastcall FUN_10090293(int param_1)
 * Address ranges: 10090293-10090416
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10090293(int param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint local_18;
  uint local_14;
  uint local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_14 = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    do {
      uVar3 = local_14;
      iVar6 = *(int *)(*(int *)(param_1 + 0x48) + local_14 * 4);
      local_c = &DAT_100deee0 + iVar6 * 8;
      FUN_1000fc01(local_c);
      local_10 = 1;
      FUN_10003d8f(local_c,&local_10);
      local_10 = 0;
      if ((&DAT_100db448)[*(int *)(param_1 + 8) * 400] != '\0') {
        uVar4 = iVar6 * 0x228;
        local_18 = uVar4;
        do {
          uVar5 = 0;
          uVar3 = local_10;
          if (*(int *)(&DAT_100df504 + uVar4) != 0) {
            do {
              local_8 = (uint)(byte)(&DAT_100db448)[*(int *)(param_1 + 8) * 400 + uVar3];
              if (*(uint *)(*(int *)(&DAT_100df500 + uVar4) + uVar5 * 4) == local_8) {
                FUN_10003d8f(local_c,&local_8);
                uVar3 = local_10;
                uVar4 = local_18;
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < *(uint *)(&DAT_100df504 + uVar4));
          }
          local_10 = uVar3 + 1;
          uVar3 = local_14;
        } while ((&DAT_100db448)[local_10 + *(int *)(param_1 + 8) * 400] != '\0');
      }
      local_14 = uVar3 + 1;
    } while (local_14 < *(uint *)(param_1 + 0x4c));
    local_10 = 0;
    if (*(int *)(param_1 + 0x4c) != 0) {
      do {
        uVar3 = local_10;
        local_14 = *(int *)(*(int *)(param_1 + 0x48) + local_10 * 4);
        puVar1 = &DAT_100deeec + local_14 * 8;
        local_c = puVar1;
        FUN_1000fc01(puVar1);
        local_18 = 1;
        FUN_10003d8f(puVar1,&local_18);
        puVar1 = local_c;
        if (DAT_100db2b8 != '\0') {
          iVar7 = local_14 * 0x228;
          iVar6 = 0;
          do {
            local_14 = 0;
            if (*(int *)(&DAT_100df504 + iVar7) != 0) {
              do {
                if (*(uint *)(*(int *)(&DAT_100df500 + iVar7) + local_14 * 4) ==
                    (uint)(byte)(&DAT_100db2b8)[iVar6]) {
                  local_18 = (uint)(byte)(&DAT_100db2b8)[iVar6];
                  FUN_10003d8f(puVar1,&local_18);
                }
                local_14 = local_14 + 1;
              } while (local_14 < *(uint *)(&DAT_100df504 + iVar7));
            }
            pcVar2 = &DAT_100db2b9 + iVar6;
            iVar6 = iVar6 + 1;
            uVar3 = local_10;
          } while (*pcVar2 != '\0');
        }
        local_10 = uVar3 + 1;
      } while (local_10 < *(uint *)(param_1 + 0x4c));
    }
  }
  return;
}

