/*
 * FUN_10028650 at 10028650
 * undefined FUN_10028650(void)
 * Address ranges: 10028650-10028707
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10028650(int param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  byte *pbVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = param_2 & 0xffffffff;
  uVar3 = FUN_10025fc8(param_1);
  uVar4 = (uint)param_2;
  if ((uVar3 & 1) == 0) {
    FUN_10022350(param_1,uVar5,param_3 & 0xffffffff);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x5c) + uVar4 * 0x20 + 0x10;
    (*(code *)PTR_FUN_100ba2e0)(iVar1,iVar1);
    param_1 = param_1 + (uVar4 >> 5) * 4;
    pbVar2 = (byte *)(((uint)(uVar5 >> 3) & 3) + param_1 + 0x1c0);
    *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
    pbVar2 = (byte *)(((uint)(uVar5 >> 3) & 3) + param_1 + 0x1e4);
    *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
  }
  return;
}

