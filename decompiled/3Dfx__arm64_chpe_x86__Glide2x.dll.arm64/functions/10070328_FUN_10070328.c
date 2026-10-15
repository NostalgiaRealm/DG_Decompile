/*
 * FUN_10070328 at 10070328
 * undefined FUN_10070328(void)
 * Address ranges: 10070328-10070467
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10070328(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  do {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x14 + uVar4 * 0xc) != 0) {
      iVar1 = param_1 + uVar4 * 0xc;
      do {
        FUN_1007a060(*(undefined4 *)(*(int *)(iVar1 + 0x10) + uVar3 * 4));
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(iVar1 + 0x14));
    }
    puVar2 = (undefined4 *)(param_1 + 0x10 + uVar4 * 0xc);
    FUN_1007a060(*puVar2);
    *puVar2 = 0;
    puVar2 = (undefined4 *)(param_1 + 0xd0 + uVar4 * 0xc);
    *(undefined4 *)(param_1 + 0x14 + uVar4 * 0xc) = 0;
    *(undefined4 *)(param_1 + 0x18 + uVar4 * 0xc) = 0;
    FUN_1007a060(*puVar2);
    *puVar2 = 0;
    puVar2 = (undefined4 *)(param_1 + 400 + uVar4 * 0xc);
    *(undefined4 *)(param_1 + 0xd4 + uVar4 * 0xc) = 0;
    *(undefined4 *)(param_1 + 0xd8 + uVar4 * 0xc) = 0;
    FUN_1007a060(*puVar2);
    uVar3 = uVar4 + 1;
    *puVar2 = 0;
    *(undefined4 *)(param_1 + 0x194 + uVar4 * 0xc) = 0;
    *(undefined4 *)(param_1 + 0x198 + uVar4 * 0xc) = 0;
    uVar4 = uVar3;
  } while (uVar3 < 0x10);
  return;
}

