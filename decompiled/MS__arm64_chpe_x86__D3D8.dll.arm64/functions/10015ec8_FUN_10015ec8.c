/*
 * FUN_10015ec8 at 10015ec8
 * undefined FUN_10015ec8(void)
 * Address ranges: 10015ec8-10015f6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10015ec8(int param_1,undefined4 param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x589c) == 0) {
    uVar4 = FUN_10024810(param_1,param_2);
  }
  else {
    pcVar1 = *(char **)(*(int *)(param_1 + 0x589c) + 4);
    uVar5 = 0;
    if (*pcVar1 != '\0') {
      uVar5 = 2;
    }
    if (pcVar1[1] != '\0') {
      uVar5 = uVar5 | 4;
    }
    uVar6 = 0;
    do {
      iVar3 = uVar6 + 0x2a;
      uVar2 = uVar6 & 0x1f;
      uVar6 = uVar6 + 1;
      if (pcVar1[iVar3] != '\0') {
        uVar5 = 8 << (ulonglong)uVar2 | uVar5;
      }
    } while (uVar6 < 8);
    uVar4 = FUN_10024700(param_1,param_2,uVar5);
  }
  return uVar4;
}

