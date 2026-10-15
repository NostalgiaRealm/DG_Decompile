/*
 * FUN_1002a5bb at 1002a5bb
 * undefined __fastcall FUN_1002a5bb(int param_1)
 * Address ranges: 1002a5bb-1002a662
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002a5bb(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_10033038(param_1);
  }
  uVar1 = FUN_1003171c(param_1);
  if ((char)uVar1 == '\0') {
    if ((*(uint *)(param_1 + 0x1bc) & 0x200) != 0) {
      iVar2 = FUN_1002b7cf(param_1);
      for (iVar3 = iVar2; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x110)) {
        if ((*(uint *)(iVar3 + 0x1bc) & 0xfe00) != 0x200) {
          FUN_10031576(iVar3);
        }
      }
      uVar4 = 0;
      do {
        for (iVar3 = *(int *)(iVar2 + 0x120 + uVar4 * 4); iVar3 != 0;
            iVar3 = *(int *)(iVar3 + 0x110)) {
          if ((*(uint *)(iVar3 + 0x1bc) & 0xfe00) != 0x200) {
            FUN_10031576(iVar3);
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 5);
      return;
    }
    do {
      FUN_10031576(param_1);
      param_1 = *(int *)(param_1 + 0x110);
    } while (param_1 != 0);
  }
  return;
}

