/*
 * FUN_100050b0 at 100050b0
 * undefined FUN_100050b0(void)
 * Address ranges: 100050b0-1000515f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100050b0(int param_1,ulonglong param_2,undefined4 param_3)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  undefined1 auStack_30 [16];
  
  FUN_10096840(auStack_30);
  uVar3 = (uint)param_2;
  if (*(char *)(param_1 + 0x224) == '\0') {
    FUN_10005060(param_1,param_2 & 0xffffffff,param_3);
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x214) + *(int *)(param_1 + 0x220) * 4);
    FUN_100122e0(iVar1 + uVar3 * 0x40 + 0x58c,param_3);
    pbVar2 = (byte *)(((uint)((param_2 & 0xffffffff) >> 3) & 3) + iVar1 + ((uVar3 >> 5) + 0x293) * 4
                     );
    *pbVar2 = *pbVar2 | (byte)(1 << (ulonglong)(uVar3 & 7));
  }
  FUN_10096790(auStack_30);
  return;
}

