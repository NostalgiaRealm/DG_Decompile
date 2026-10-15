/*
 * FUN_10082230 at 10082230
 * undefined FUN_10082230(void)
 * Address ranges: 10082230-1008236b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10082230(undefined8 param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  
  uVar1 = param_4 & 0xf0;
  uVar2 = param_4 & 0x100;
  if (0x4f < uVar1) {
    if ((uVar1 < 0x51) || (uVar1 == 0x60)) {
      *(undefined1 *)(param_2 + 0x200) = 1;
      return;
    }
    if (uVar1 == 0x70) {
      pbVar4 = (byte *)((param_4 & 7) + param_2 + 0x1f6);
LAB_10082350:
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
    *(undefined1 *)(param_2 + 0x201) = 1;
    pbVar4 = (byte *)(((int)param_3 >> 3) + param_2 + 0x204);
    goto LAB_1008233c;
  }
  if (uVar1 < 0x30) {
    if (uVar1 == 0x10) {
      pbVar4 = (byte *)(param_2 + 0x1fe);
      goto LAB_10082350;
    }
    if (uVar1 != 0x20) {
      return;
    }
    pbVar4 = (byte *)(param_2 + 0x1ff);
    param_3 = param_3 + 0x18;
LAB_1008230c:
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
      pbVar4 = (byte *)(param_2 + 0x1f5);
      param_3 = param_3 + 8;
      goto LAB_1008230c;
    }
    bVar3 = 7;
    if (uVar2 != 0) {
      bVar3 = 8;
    }
    *(byte *)(param_2 + 500) = bVar3 | *(byte *)(param_2 + 500);
  }
  pbVar4 = (byte *)(((int)param_3 >> 3) + param_2 + 0x204);
LAB_1008233c:
  *pbVar4 = *pbVar4 | (byte)(1 << (ulonglong)(param_3 & 7));
  return;
}

