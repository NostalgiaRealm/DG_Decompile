/*
 * FUN_10079be0 at 10079be0
 * undefined FUN_10079be0(void)
 * Address ranges: 10079be0-10079d5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10079be0(int param_1)

{
  uint *puVar1;
  char *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined1 uVar7;
  short sVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_150 [272];
  
  if ((DAT_100a2a78 & 1) == 0) {
    DAT_100a2a78 = DAT_100a2a78 | 1;
    uRam100a29e8 = 0x50b943729bd05598;
    _DAT_100a29e0 = 0xbc2bdf056d99cbf4;
    DAT_100a29f0 = 0x446f;
  }
  if ((*(ushort *)(param_1 + 0x2c) & 0xfffe) == 0x12) {
    uVar11 = 0;
    do {
      sVar8 = FUN_10080f90(*(undefined2 *)(*(int *)(param_1 + 0x30) + uVar11 * 2));
      if ((&DAT_100a29e0)[uVar11] != (short)(sVar8 - (&DAT_1009c130)[uVar11])) {
        return 0;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < 9);
    if (uVar11 == 9) {
      iVar4 = *(int *)(param_1 + 0x18);
      iVar10 = *(int *)(iVar4 + 0x3c) + iVar4;
      if (*(int *)(iVar10 + 0x7c) != 0) {
        uVar11 = 0;
        iVar10 = *(int *)(iVar10 + 0x78) + iVar4;
        iVar5 = *(int *)(iVar10 + 0x20);
        puVar1 = (uint *)(iVar10 + 0x18);
        if (*puVar1 != 0) {
          do {
            iVar10 = 0;
            pcVar2 = (char *)(*(int *)(iVar5 + iVar4 + uVar11 * 4) + iVar4);
            cVar6 = *pcVar2;
            while (cVar6 != '\0') {
              uVar7 = FUN_10080fd0(pcVar2[iVar10]);
              puVar3 = auStack_150 + iVar10;
              iVar10 = iVar10 + 1;
              *puVar3 = uVar7;
              cVar6 = pcVar2[iVar10];
            }
            uVar9 = FUN_10079b50(auStack_150,iVar10);
            if ((uVar9 & 1) != 0) {
              return 1;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < *puVar1);
        }
      }
    }
  }
  return 0;
}

