/*
 * FUN_1004da98 at 1004da98
 * undefined FUN_1004da98(void)
 * Address ranges: 1004da98-1004dbcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1004da98(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  bool bVar6;
  byte bVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  piVar1 = (int *)(param_1 + 0x24);
  pbVar4 = (byte *)*piVar1;
  uVar10 = 0;
  uVar9 = 0;
  bVar6 = false;
  if (pbVar4 != (byte *)0x0) {
    uVar11 = 0;
    piVar2 = (int *)(param_1 + 0x38);
    do {
      uVar9 = (uint)uVar10;
      if (0xffe < uVar11 || bVar6) break;
      bVar5 = *pbVar4;
      uVar9 = (uint)(char)bVar5;
      *(byte *)(*(int *)(param_1 + 0x34) + *piVar2) = bVar5;
      uVar10 = (ulonglong)uVar9;
      if (((uVar9 - 0x2c & 0xff) < 0x32) &&
         ((0x280000002c001U >> ((ulonglong)(uVar9 - 0x2c) & 0x3f) & 1) != 0)) {
        bVar7 = 1;
      }
      else {
        bVar7 = 0;
      }
      if ((bVar5 < 0x21) && ((0x100002600U >> (uVar10 & 0x3f) & 1) != 0)) {
        bVar5 = 1;
      }
      else {
        bVar5 = 0;
      }
      bVar6 = (bool)(bVar5 | bVar7);
      if (!bVar6) {
        if (((*piVar1 != 0) &&
            (iVar3 = *piVar1 + 1, *piVar1 = iVar3, iVar3 == *(int *)(param_1 + 0x28))) &&
           (uVar8 = FUN_1004d968(param_1), (uVar8 & 1) == 0)) {
          *piVar1 = 0;
        }
        *piVar2 = *piVar2 + 1;
      }
      pbVar4 = (byte *)*piVar1;
      uVar11 = uVar11 + 1;
    } while (pbVar4 != (byte *)0x0);
  }
  if (!bVar6) {
    uVar9 = 0;
  }
  return uVar9;
}

