/*
 * FUN_100c4554 at 100c4554
 * undefined4 __fastcall FUN_100c4554(int param_1, undefined * param_2)
 * Address ranges: 100c4554-100c45f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_100c4554(int param_1,undefined *param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined1 local_124 [260];
  uint local_20;
  code *local_1c;
  int local_18;
  int local_14;
  char *local_10;
  uint local_c;
  int local_8;
  
  local_20 = *(int *)(param_1 + 0x3c) + param_1;
  if (*(int *)(local_20 + 0x7c) != 0) {
    iVar5 = *(int *)(local_20 + 0x78) + param_1;
    local_c = 0;
    local_20 = *(int *)(iVar5 + 0x20) + param_1;
    local_1c = (code *)param_2;
    local_18 = iVar5;
    local_14 = param_1;
    if (*(int *)(iVar5 + 0x18) != 0) {
      do {
        pcVar4 = (char *)(*(int *)(local_20 + local_c * 4) + param_1);
        local_8 = 0;
        local_10 = pcVar4;
        iVar6 = local_8;
        if (*pcVar4 != '\0') {
          iVar6 = 0;
          do {
            pcVar1 = pcVar4 + iVar6;
            iVar5 = FUN_100d0b3a((int)*pcVar1);
            local_124[iVar6] = (char)iVar5;
            iVar6 = iVar6 + 1;
            iVar5 = local_18;
            param_1 = local_14;
          } while (pcVar1[1] != '\0');
        }
        local_8 = iVar6;
        uVar2 = local_c;
        uVar3 = (*local_1c)(local_124,local_8);
        if ((char)uVar3 != '\0') {
          return CONCAT31((int3)((uint)uVar3 >> 8),1);
        }
        local_c = uVar2 + 1;
      } while (local_c < *(uint *)(iVar5 + 0x18));
    }
  }
  return local_20 & 0xffffff00;
}

