/*
 * FUN_140016218 at 140016218
 * int __cdecl FUN_140016218(longlong param_1)
 * Address ranges: 140016218-1400162f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_140016218(longlong param_1)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar9;
  ulonglong uVar8;
  
  pbVar6 = *(byte **)(param_1 + 0x40);
  uVar8 = 0;
  iVar7 = 0;
  bVar2 = false;
  if (pbVar6 != (byte *)0x0) {
    uVar9 = 0;
    do {
      iVar7 = (int)uVar8;
      if (0xffe < uVar9 || bVar2) break;
      bVar1 = *pbVar6;
      uVar8 = (ulonglong)(char)bVar1;
      *(byte *)(*(longlong *)(param_1 + 0x58) + (ulonglong)*(uint *)(param_1 + 0x60)) = bVar1;
      if ((((int)(char)bVar1 - 0x2cU & 0xff) < 0x32) &&
         ((0x280000002c001U >> ((ulonglong)((int)(char)bVar1 - 0x2cU) & 0x3f) & 1) != 0)) {
        bVar3 = 1;
      }
      else {
        bVar3 = 0;
      }
      if ((bVar1 < 0x21) && ((0x100002600U >> (uVar8 & 0x3f) & 1) != 0)) {
        bVar4 = 1;
      }
      else {
        bVar4 = 0;
      }
      iVar7 = (int)(char)bVar1;
      bVar2 = (bool)(bVar4 | bVar3);
      if (!bVar2) {
        lVar5 = FUN_140015ba8(param_1);
        *(longlong *)(param_1 + 0x40) = lVar5;
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
      }
      pbVar6 = *(byte **)(param_1 + 0x40);
      uVar9 = uVar9 + 1;
    } while (pbVar6 != (byte *)0x0);
  }
  if (!bVar2) {
    iVar7 = 0;
  }
  return iVar7;
}

