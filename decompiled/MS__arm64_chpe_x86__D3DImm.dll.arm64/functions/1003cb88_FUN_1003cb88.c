/*
 * FUN_1003cb88 at 1003cb88
 * undefined FUN_1003cb88(void)
 * Address ranges: 1003cb88-1003ccc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003cb88(undefined8 param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  
  uVar1 = param_4 & 0xf0;
  uVar2 = param_4 & 0x100;
  if (0x4f < uVar1) {
    if ((uVar1 < 0x51) || (uVar1 == 0x60)) {
      *(undefined1 *)(param_2 + 0x1f0) = 1;
      return;
    }
    if (uVar1 == 0x70) {
      pbVar4 = (byte *)((param_4 & 7) + param_2 + 0x1e6);
LAB_1003cca8:
      bVar3 = 7;
      if (uVar2 != 0) {
        bVar3 = 8;
      }
      *pbVar4 = bVar3 | *pbVar4;
      return;
    }
    if (uVar1 != 0x90) {
      return;
    }
    param_3 = param_3 + 0x10;
    *(undefined1 *)(param_2 + 0x1f1) = 1;
    pbVar4 = (byte *)(((int)param_3 >> 3) + param_2 + 500);
    goto LAB_1003cc94;
  }
  if (uVar1 < 0x30) {
    if (uVar1 == 0x10) {
      pbVar4 = (byte *)(param_2 + 0x1ee);
      goto LAB_1003cca8;
    }
    if (uVar1 != 0x20) {
      return;
    }
    pbVar4 = (byte *)(param_2 + 0x1ef);
    param_3 = param_3 + 0x18;
LAB_1003cc64:
    bVar3 = 7;
    if (uVar2 != 0) {
      bVar3 = 8;
    }
    *pbVar4 = bVar3 | *pbVar4;
  }
  else {
    if (0x30 < uVar1) {
      if (uVar1 != 0x40) {
        return;
      }
      pbVar4 = (byte *)(param_2 + 0x1e5);
      param_3 = param_3 + 8;
      goto LAB_1003cc64;
    }
    bVar3 = 7;
    if (uVar2 != 0) {
      bVar3 = 8;
    }
    *(byte *)(param_2 + 0x1e4) = bVar3 | *(byte *)(param_2 + 0x1e4);
  }
  pbVar4 = (byte *)(((int)param_3 >> 3) + param_2 + 500);
LAB_1003cc94:
  *pbVar4 = *pbVar4 | (byte)(1 << (ulonglong)(param_3 & 7));
  return;
}

