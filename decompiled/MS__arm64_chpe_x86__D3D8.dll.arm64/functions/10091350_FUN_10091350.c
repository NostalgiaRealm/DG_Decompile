/*
 * FUN_10091350 at 10091350
 * undefined FUN_10091350(void)
 * Address ranges: 10091350-1009143b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10091350(int param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  byte *pbVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = param_2 & 0xffffffff;
  uVar3 = FUN_1008f048(param_1);
  uVar4 = (uint)param_2;
  if ((uVar3 & 1) == 0) {
    FUN_1008ca80(param_1,uVar5,param_3 & 0xffffffff);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x60) + uVar4 * 0x1c + 0xc;
    (*(code *)PTR_FUN_10134298)(iVar1,iVar1);
    iVar1 = param_1 + (uVar4 >> 5) * 4;
    pbVar2 = (byte *)(((uint)(uVar5 >> 3) & 3) + iVar1 + 0x154);
    *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
    pbVar2 = (byte *)(((uint)(uVar5 >> 3) & 3) + iVar1 + 0x178);
    *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
    *(undefined1 *)(param_1 + 0xdb) = 0;
    pbVar2 = (byte *)(((uint)(uVar5 >> 3) & 3) + iVar1 + 0xcc);
    *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
  }
  return;
}

