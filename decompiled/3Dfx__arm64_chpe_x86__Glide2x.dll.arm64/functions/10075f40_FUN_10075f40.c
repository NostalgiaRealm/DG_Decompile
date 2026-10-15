/*
 * FUN_10075f40 at 10075f40
 * undefined FUN_10075f40(void)
 * Address ranges: 10075f40-100760bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10075f40(int param_1)

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
  
  if ((DAT_1009f928 & 1) == 0) {
    DAT_1009f928 = DAT_1009f928 | 1;
    uRam1009f878 = 0x50b943729bd05598;
    _DAT_1009f870 = 0xbc2bdf056d99cbf4;
    DAT_1009f880 = 0x446f;
  }
  if ((*(ushort *)(param_1 + 0x2c) & 0xfffe) == 0x12) {
    uVar11 = 0;
    do {
      sVar8 = FUN_1007c6e0(*(undefined2 *)(*(int *)(param_1 + 0x30) + uVar11 * 2));
      if ((&DAT_1009f870)[uVar11] != (short)(sVar8 - (&DAT_10098060)[uVar11])) {
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
              uVar7 = FUN_1007c720(pcVar2[iVar10]);
              puVar3 = auStack_150 + iVar10;
              iVar10 = iVar10 + 1;
              *puVar3 = uVar7;
              cVar6 = pcVar2[iVar10];
            }
            uVar9 = FUN_10075eb0(auStack_150,iVar10);
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

