/*
 * FUN_100d00b0 at 100d00b0
 * undefined FUN_100d00b0(void)
 * Address ranges: 100d00b0-100d032f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d00b0(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *local_70;
  undefined *local_6c;
  uint *local_68;
  int *local_64;
  int *local_60;
  uint local_5c;
  int *local_58;
  uint local_54;
  int *local_50;
  
  local_70 = (uint *)(param_1 + 0x4c);
  uVar5 = 0;
  if (*local_70 != 0) {
    local_64 = (int *)(param_1 + 0x48);
    piVar1 = (int *)(param_1 + 8);
    local_68 = local_70;
    local_60 = piVar1;
    local_50 = local_64;
    do {
      iVar2 = *(int *)(*local_64 + uVar5 * 4);
      FUN_101322d0(*(undefined4 *)(&DAT_10170f78 + iVar2 * 4));
      (&DAT_10170f78)[iVar2 * 4] = 0;
      (&DAT_10170f80)[iVar2 * 8] = 0;
      local_6c = (undefined *)0x1;
      FUN_10007100(&DAT_10170f78 + iVar2 * 4,&local_6c);
      iVar7 = 0;
      if ((&DAT_1016d458)[*local_60 * 400] != '\0') {
        local_6c = &DAT_1016d458;
        local_58 = piVar1;
        local_54 = uVar5;
        do {
          puVar4 = local_6c;
          uVar5 = 0;
          if (*(int *)((int)&DAT_10171598 + iVar2 * 0x228 + 4) != 0) {
            do {
              if (*(uint *)(*(int *)(&DAT_10171598 + iVar2 * 0x45) + uVar5 * 4) ==
                  (uint)(byte)puVar4[*piVar1 * 400 + iVar7]) {
                local_5c = (uint)(byte)puVar4[*piVar1 * 400 + iVar7];
                FUN_10007100(&DAT_10170f78 + iVar2 * 4,&local_5c);
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < *(uint *)((int)&DAT_10171598 + iVar2 * 0x228 + 4));
          }
          iVar7 = iVar7 + 1;
          uVar5 = local_54;
        } while ((&DAT_1016d458)[iVar7 + *local_58 * 400] != '\0');
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *local_68);
    uVar5 = 0;
    if (*local_68 != 0) {
      local_68 = local_70;
      do {
        iVar2 = *(int *)(*local_50 + uVar5 * 4);
        FUN_101322d0(*(undefined4 *)(&DAT_10170f84 + iVar2 * 4));
        (&DAT_10170f84)[iVar2 * 4] = 0;
        (&DAT_10170f8c)[iVar2 * 8] = 0;
        local_70 = (uint *)0x1;
        FUN_10007100(&DAT_10170f84 + iVar2 * 4,&local_70);
        iVar7 = 0;
        if (DAT_1016d2c8 != '\0') {
          do {
            uVar6 = 0;
            if (*(int *)((int)&DAT_10171598 + iVar2 * 0x228 + 4) != 0) {
              do {
                if (*(uint **)(*(int *)(&DAT_10171598 + iVar2 * 0x45) + uVar6 * 4) ==
                    (uint *)(uint)(byte)(&DAT_1016d2c8)[iVar7]) {
                  local_70 = (uint *)(uint)(byte)(&DAT_1016d2c8)[iVar7];
                  FUN_10007100(&DAT_10170f84 + iVar2 * 4,&local_70);
                }
                uVar6 = uVar6 + 1;
              } while (uVar6 < *(uint *)((int)&DAT_10171598 + iVar2 * 0x228 + 4));
            }
            pcVar3 = &DAT_1016d2c9 + iVar7;
            iVar7 = iVar7 + 1;
          } while (*pcVar3 != '\0');
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *local_68);
    }
  }
  return;
}

