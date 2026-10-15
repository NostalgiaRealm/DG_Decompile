/*
 * FUN_10025960 at 10025960
 * undefined FUN_10025960(void)
 * Address ranges: 10025960-10025a6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10025960(int param_1,uint param_2,int param_3,int param_4)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_40 [16];
  
  iVar3 = param_2 * 0x21 + param_3;
  if (*(char *)(param_1 + 0x3c4) == '\0') {
    piVar2 = (int *)(param_1 + iVar3 * 4 + 0x778);
    if (*piVar2 != param_4) {
      if ((param_3 == 3 || param_3 < 1) || 5 < param_3) {
        FUN_10157b40(auStack_40);
        FUN_10025a70(param_1,param_2,param_3,param_4);
        FUN_10157a90(auStack_40);
      }
      else {
        *(uint *)(param_1 + 0xcc8) = 1 << (ulonglong)(param_2 & 0x1f) | *(uint *)(param_1 + 0xcc8);
      }
      *piVar2 = param_4;
    }
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 0x3b4) + *(int *)(param_1 + 0x3c0) * 4);
    *(int *)(iVar5 + iVar3 * 4 + 0x350) = param_4;
    uVar4 = param_2 * 0x21 + param_3;
    pbVar1 = (byte *)((uVar4 >> 3 & 3) + iVar5 + ((uVar4 >> 5) + 0x2af1) * 4);
    *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(uVar4 & 7));
  }
  return;
}

