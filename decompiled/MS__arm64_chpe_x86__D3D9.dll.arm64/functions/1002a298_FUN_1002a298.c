/*
 * FUN_1002a298 at 1002a298
 * undefined FUN_1002a298(void)
 * Address ranges: 1002a298-1002a403
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1002a298(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  uVar5 = 0;
  do {
    uVar2 = *(uint *)(param_1 + 0x77c + uVar5 * 0x84) & 0x1f;
    if (uVar2 == 1) break;
    iVar1 = param_1 + uVar5 * 0x84;
    iVar3 = uVar2 * 3;
    if (*(char *)(iVar3 + 0x10160f60) != '\0') {
      uVar6 = *(uint *)(&DAT_10161020 + (uVar5 + (*(uint *)(iVar1 + 0x780) & 0xf) * 8) * 4) | uVar6;
    }
    if (*(char *)(iVar3 + 0x10160f61) != '\0') {
      uVar6 = *(uint *)(&DAT_10161020 + (uVar5 + (*(uint *)(iVar1 + 0x784) & 0xf) * 8) * 4) | uVar6;
    }
    if (*(char *)(iVar3 + 0x10160f62) != '\0') {
      uVar6 = *(uint *)(&DAT_10161020 + (uVar5 + (*(uint *)(iVar1 + 0x7e0) & 0xf) * 8) * 4) | uVar6;
    }
    iVar3 = (*(uint *)(iVar1 + 0x788) & 0x1f) * 3;
    if (*(char *)(iVar3 + 0x10160f60) != '\0') {
      uVar6 = *(uint *)(&DAT_10161020 + (uVar5 + (*(uint *)(iVar1 + 0x78c) & 0xf) * 8) * 4) | uVar6;
    }
    if (*(char *)(iVar3 + 0x10160f61) != '\0') {
      uVar6 = *(uint *)(&DAT_10161020 + (uVar5 + (*(uint *)(iVar1 + 0x790) & 0xf) * 8) * 4) | uVar6;
    }
    if (*(char *)(iVar3 + 0x10160f62) != '\0') {
      uVar6 = *(uint *)(&DAT_10161020 + (uVar5 + (*(uint *)(iVar1 + 0x7e4) & 0xf) * 8) * 4) | uVar6;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 8);
  if (uVar6 == 0) {
    uVar6 = 2;
  }
  uVar4 = FUN_1002a198(param_1,param_2,uVar6);
  return uVar4;
}

