/*
 * FUN_10050260 at 10050260
 * undefined FUN_10050260(void)
 * Address ranges: 10050260-1005039b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10050260(int param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = *(uint *)(param_1 + 4);
  bVar3 = true;
  if ((uVar2 & 1) != 0) {
    bVar3 = (*(uint *)(param_1 + 0xc) & 0xfffffffc) == 0;
  }
  uVar1 = uVar2 & 0x18;
  if ((uVar1 == 0) && ((uVar2 >> 8 & 1) == 0)) {
LAB_100502a4:
    if ((uVar2 >> 7 & 1) != 0) goto LAB_100502a8;
LAB_100502bc:
    if ((uVar2 >> 10 & 1) != 0) goto LAB_100502c0;
LAB_100502d4:
    if ((uVar2 >> 9 & 1) != 0) goto LAB_100502d8;
LAB_100502ec:
    if ((uVar2 >> 6 & 1) != 0) goto LAB_100502f0;
LAB_10050308:
    if ((uVar2 >> 0xb & 1) != 0) goto LAB_1005030c;
LAB_10050324:
    if ((uVar2 >> 5 & 1) != 0) goto LAB_10050328;
LAB_10050340:
    if ((uVar2 >> 0xc & 1) != 0) goto LAB_10050344;
LAB_1005035c:
    if ((uVar2 >> 0xd & 1) != 0) goto LAB_10050360;
  }
  else {
    if ((*(uint *)(param_1 + 0x3c) & 0xffffff00) != 0) {
      bVar3 = false;
    }
    if (uVar1 == 0) goto LAB_100502a4;
LAB_100502a8:
    if ((*(uint *)(param_1 + 0x30) & 0xffffff00) != 0) {
      bVar3 = false;
    }
    if (uVar1 == 0) goto LAB_100502bc;
LAB_100502c0:
    if ((*(uint *)(param_1 + 0x38) & 0xffffe000) != 0) {
      bVar3 = false;
    }
    if (uVar1 == 0) goto LAB_100502d4;
LAB_100502d8:
    if ((*(uint *)(param_1 + 0x34) & 0xffffe000) != 0) {
      bVar3 = false;
    }
    if (uVar1 == 0) goto LAB_100502ec;
LAB_100502f0:
    bVar3 = (bool)((*(uint *)(param_1 + 0x2c) & 0xffc00000) == 0 & bVar3);
    if (uVar1 == 0) goto LAB_10050308;
LAB_1005030c:
    bVar3 = (bool)((*(uint *)(param_1 + 0x40) & 0xffe00000) == 0 & bVar3);
    if (uVar1 == 0) goto LAB_10050324;
LAB_10050328:
    bVar3 = (bool)((*(uint *)(param_1 + 0x28) & 0xffffff80) == 0 & bVar3);
    if (uVar1 == 0) goto LAB_10050340;
LAB_10050344:
    bVar3 = (bool)((*(uint *)(param_1 + 0x44) & 0xfffffe00) == 0 & bVar3);
    if (uVar1 == 0) goto LAB_1005035c;
LAB_10050360:
    bVar3 = (bool)((*(uint *)(param_1 + 0x48) & 0xe0fcf8c0) == 0 & bVar3);
    if (uVar1 != 0) goto LAB_10050380;
  }
  if ((uVar2 >> 0xe & 1) == 0) {
    return bVar3;
  }
LAB_10050380:
  return (bool)((*(uint *)(param_1 + 0x4c) & 0xffffff00) == 0 & bVar3);
}

