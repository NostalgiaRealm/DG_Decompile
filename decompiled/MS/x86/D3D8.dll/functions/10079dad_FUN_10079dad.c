/*
 * FUN_10079dad at 10079dad
 * int __fastcall FUN_10079dad(int param_1)
 * Address ranges: 10079dad-10079e8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10079dad(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint local_8;
  
  iVar6 = 0;
  local_8 = 0;
  if (DAT_100ba2a8 != 0) {
    do {
      if (iVar6 != 0) {
        return iVar6;
      }
      iVar1 = *(int *)(DAT_100ba2ac + local_8 * 4);
      if ((iVar1 != 0) && (uVar7 = 0, *(int *)(iVar1 + 0x84) != 0)) {
        do {
          if (iVar6 != 0) break;
          iVar2 = *(int *)(*(int *)(iVar1 + 0x80) + uVar7 * 4);
          if (*(int *)(iVar2 + 0xb2c) == param_1) {
            uVar5 = 0;
            iVar6 = **(int **)(iVar2 + 0xad0) + -8;
            if (**(int **)(iVar2 + 0xad0) == 0) {
              iVar6 = 0;
            }
            if (iVar6 != 0) {
              if (*(char *)(iVar6 + 0xbd) == '\0') goto LAB_10079e61;
              if (*(uint *)(iVar2 + 0xb34) != 0) {
                do {
                  iVar3 = *(int *)(*(int *)(iVar2 + 0xb30) + uVar5 * 4);
                  pcVar4 = (char *)(iVar3 + 0xb5);
                  if (iVar3 == 0) {
                    pcVar4 = &DAT_000000bd;
                  }
                  if (*pcVar4 == '\0') {
                    iVar6 = iVar3 + -8;
                    if (iVar3 == 0) {
                      iVar6 = 0;
                    }
                    goto LAB_10079e61;
                  }
                  uVar5 = uVar5 + 1;
                } while (uVar5 < *(uint *)(iVar2 + 0xb34));
              }
            }
            iVar6 = 0;
          }
LAB_10079e61:
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(iVar1 + 0x84));
      }
      local_8 = local_8 + 1;
    } while (local_8 < DAT_100ba2a8);
  }
  return iVar6;
}

