/*
 * FUN_1001ff10 at 1001ff10
 * undefined FUN_1001ff10(void)
 * Address ranges: 1001ff10-1002002f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001ff10(int param_1,uint param_2,int param_3,int param_4)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_40 [16];
  
  iVar3 = param_2 * 0x1d + param_3;
  if (*(char *)(param_1 + 0x220) == '\0') {
    piVar2 = (int *)(param_1 + iVar3 * 4 + 0x544);
    if (*piVar2 != param_4) {
      if ((param_3 == 3 || param_3 < 1) || 5 < param_3) {
        FUN_10121020(auStack_40);
        FUN_10020030(param_1,param_2,param_3,param_4);
        FUN_10120f70(auStack_40);
      }
      else {
        *(uint *)(param_1 + 0xa04) = 1 << (ulonglong)(param_2 & 0x1f) | *(uint *)(param_1 + 0xa04);
      }
      *piVar2 = param_4;
    }
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 0x210) + *(int *)(param_1 + 0x21c) * 4);
    *(int *)(iVar5 + iVar3 * 4 + 0x2c0) = param_4;
    uVar4 = param_2 * 0x1d + param_3;
    pbVar1 = (byte *)((uVar4 >> 3 & 3) + iVar5 + ((uVar4 >> 5) + 0x24d3) * 4);
    *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(uVar4 & 7));
  }
  return;
}

