/*
 * FUN_1008fd50 at 1008fd50
 * undefined FUN_1008fd50(void)
 * Address ranges: 1008fd50-1009006f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008fd50(float param_1,float param_2,float param_3,float param_4,int param_5,int param_6,
                 int param_7)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = *(undefined4 *)(param_5 + 0xa8);
  uVar2 = param_6 + *(int *)(param_5 + 0x2c) * param_7;
  iVar4 = *(int *)(param_5 + 0x1c);
  if (iVar4 == 0) {
    FUN_1008a880(uVar3,1,*(undefined4 *)(param_5 + 8));
    iVar4 = *(int *)(param_5 + 0x1c);
    uVar3 = *(undefined4 *)(param_5 + 0xa8);
  }
  FUN_1008ac30(*(float *)(param_5 + 0x148) * param_1,*(float *)(param_5 + 0x14c) * param_2,
               *(float *)(param_5 + 0x148) * param_3,*(float *)(param_5 + 0x14c) * param_4,uVar3,
               iVar4,iVar4,param_6,param_7,param_6,param_7,*(undefined4 *)(param_5 + 0x54),
               *(undefined4 *)(*(int *)(param_5 + 0x60) + uVar2 * 0x1c));
  iVar4 = param_5 + (uVar2 >> 5) * 4;
  pbVar1 = (byte *)((uVar2 >> 3 & 3) + iVar4 + 0x16c);
  *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar2 & 7)) ^ 0xff);
  pbVar1 = (byte *)((uVar2 >> 3 & 3) + iVar4 + 0x154);
  *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar2 & 7)) ^ 0xff);
  pbVar1 = (byte *)((uVar2 >> 3 & 3) + iVar4 + 0x90);
  *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(uVar2 & 7));
  pbVar1 = (byte *)((uVar2 >> 3 & 3) + iVar4 + 0x160);
  *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar2 & 7)) ^ 0xff);
  (*(code *)PTR_FUN_10134270)(*(int *)(param_5 + 0x100) + uVar2 * 0x1c + 0xc);
  return;
}

