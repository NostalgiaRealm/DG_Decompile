/*
 * FUN_1001bec0 at 1001bec0
 * undefined FUN_1001bec0(void)
 * Address ranges: 1001bec0-1001c073
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1001bec0(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  if ((*(int *)(param_1 + 0x60) == 1) && (puVar1 = (uint *)(param_1 + 0x48), *puVar1 == 0)) {
    uVar6 = *(ushort *)(param_1 + 0x30);
    iVar7 = FUN_1001bce0(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),uVar6,1,
                         *(undefined4 *)(param_1 + 0x58));
    puVar2 = (uint *)(param_1 + 100);
    uVar10 = *puVar2;
    iVar8 = FUN_100febf0(uVar10 * iVar7 + 0x2c);
    uVar11 = iVar8 + 0x23U & 0xffffffe0;
    *(int *)(uVar11 - 4) = iVar8;
    *puVar1 = uVar11;
    FUN_100ff690(uVar11,0,uVar10 * iVar7 + 8);
    uVar11 = 0;
    if (*puVar2 != 0) {
      do {
        uVar10 = 0;
        uVar4 = *puVar1;
        if (uVar6 != 0) {
          do {
            iVar9 = FUN_1001bce0(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),
                                 uVar10,1,*(undefined4 *)(param_1 + 0x58));
            iVar8 = uVar10 * 4 + uVar11 * 0x40;
            uVar10 = uVar10 + 1;
            iVar5 = *(int *)(*(int *)(iVar8 + *(int *)(param_1 + 0x38)) + 4);
            *(undefined4 *)(iVar5 + 0xb4) = 0;
            *(uint *)(iVar5 + 0x20) = iVar9 + uVar4 + uVar11 * iVar7;
            *(uint *)(iVar5 + 0x34) = *(uint *)(iVar5 + 0x34) | 0x28;
            puVar3 = (uint *)(*(int *)(*(int *)(*(int *)(param_1 + 0x38) + iVar8) + 4) + 0x34);
            *puVar3 = *puVar3 | 1;
          } while (uVar10 < uVar6);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *puVar2);
    }
  }
  return 1;
}

