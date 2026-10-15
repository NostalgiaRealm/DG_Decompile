/*
 * FUN_100eb4e0 at 100eb4e0
 * undefined FUN_100eb4e0(void)
 * Address ranges: 100eb4e0-100eb65f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100eb4e0(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  if (((*(uint *)(param_1[4] + 0xdd0) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar4 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar4 = true;
    iVar5 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar5 == 0) {
      FUN_100071d0(0);
    }
  }
  iVar5 = param_1[4];
  puVar1 = (uint *)(iVar5 + 0x6788);
  uVar3 = *puVar1;
  if (uVar3 != 0) {
    uVar6 = 0;
    do {
      if (*(undefined4 **)(*(int *)(iVar5 + 0x6784) + uVar6 * 4) == param_1) {
        if (uVar6 != 0xffffffff) {
          uVar6 = uVar6 + 1;
          if (uVar6 < uVar3) {
            do {
              puVar2 = (undefined4 *)(*(int *)(iVar5 + 0x6784) + uVar6 * 4);
              uVar6 = uVar6 + 1;
              puVar2[-1] = *puVar2;
            } while (uVar6 < *puVar1);
          }
          *puVar1 = *puVar1 - 1;
        }
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  FUN_10132260(param_1[0x9a],0x254);
  param_1[0x9a] = 0;
  FUN_101322d0(param_1[0x9b]);
  *(undefined8 *)(param_1 + 0x9b) = 0;
  FUN_100a2d78(param_1 + 5);
  *param_1 = &PTR_FUN_1015fd68;
  FUN_10132260(param_1,0x27c);
  if (bVar4) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return;
}

