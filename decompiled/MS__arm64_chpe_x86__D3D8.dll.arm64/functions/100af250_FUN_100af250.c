/*
 * FUN_100af250 at 100af250
 * undefined FUN_100af250(void)
 * Address ranges: 100af250-100af30b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100af250(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar5 = DAT_1013ced8;
  uVar4 = DAT_1013ced4;
  iVar6 = 0;
  uVar8 = 0;
  if (DAT_1013ced4 != 0) {
    do {
      if (iVar6 != 0) {
        return iVar6;
      }
      iVar1 = *(int *)(iVar5 + uVar8 * 4);
      if ((iVar1 != 0) && (uVar2 = *(uint *)(iVar1 + 0x84), uVar2 != 0)) {
        uVar7 = 0;
        do {
          if (iVar6 != 0) break;
          iVar3 = *(int *)(*(int *)(iVar1 + 0x80) + uVar7 * 4);
          if (*(int *)(iVar3 + 0xb2c) == param_1) {
            iVar6 = FUN_100b1c10(iVar3);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar2);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar4);
  }
  return iVar6;
}

