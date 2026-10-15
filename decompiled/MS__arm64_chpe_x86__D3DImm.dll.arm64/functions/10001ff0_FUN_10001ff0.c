/*
 * FUN_10001ff0 at 10001ff0
 * undefined FUN_10001ff0(void)
 * Address ranges: 10001ff0-10002107
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10001ff0(int param_1,uint param_2,int param_3,int param_4)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_40 [16];
  
  iVar3 = param_2 * 0x19 + param_3;
  if (*(char *)(param_1 + 0x224) == '\0') {
    piVar2 = (int *)(param_1 + iVar3 * 4 + 0x4f4);
    if (*piVar2 != param_4) {
      if ((param_3 == 3 || param_3 < 1) || 5 < param_3) {
        FUN_10096840(auStack_40);
        FUN_10002110(param_1,param_2,param_3,param_4);
        FUN_10096790(auStack_40);
      }
      else {
        *(uint *)(param_1 + 0x934) = 1 << (ulonglong)(param_2 & 0x1f) | *(uint *)(param_1 + 0x934);
      }
      *piVar2 = param_4;
    }
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 0x214) + *(int *)(param_1 + 0x220) * 4);
    *(int *)(iVar5 + iVar3 * 4 + 0x26c) = param_4;
    uVar4 = param_2 * 0x19 + param_3;
    pbVar1 = (byte *)((uVar4 >> 3 & 3) + iVar5 + ((uVar4 >> 5) + 0x28c) * 4);
    *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(uVar4 & 7));
  }
  return;
}

