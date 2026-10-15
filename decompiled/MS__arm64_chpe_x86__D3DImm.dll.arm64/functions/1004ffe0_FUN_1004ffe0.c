/*
 * FUN_1004ffe0 at 1004ffe0
 * undefined FUN_1004ffe0(void)
 * Address ranges: 1004ffe0-10050117
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1004ffe0(int param_1)

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
LAB_10050024:
    if ((uVar2 >> 7 & 1) != 0) goto LAB_10050028;
LAB_1005003c:
    if ((uVar2 >> 10 & 1) != 0) goto LAB_10050040;
LAB_10050054:
    if ((uVar2 >> 9 & 1) != 0) goto LAB_10050058;
LAB_1005006c:
    if ((uVar2 >> 6 & 1) != 0) goto LAB_10050070;
LAB_10050088:
    if ((uVar2 >> 0xb & 1) != 0) goto LAB_1005008c;
LAB_100500a4:
    if ((uVar2 >> 5 & 1) != 0) goto LAB_100500a8;
LAB_100500c0:
    if ((uVar2 >> 0xc & 1) != 0) goto LAB_100500c4;
LAB_100500dc:
    if ((uVar2 >> 0xd & 1) != 0) goto LAB_100500e0;
  }
  else {
    if ((*(uint *)(param_1 + 0x3c) & 0xffffff00) != 0) {
      bVar3 = false;
    }
    if (uVar1 == 0) goto LAB_10050024;
LAB_10050028:
    if ((*(uint *)(param_1 + 0x30) & 0xffffff00) != 0) {
      bVar3 = false;
    }
    if (uVar1 == 0) goto LAB_1005003c;
LAB_10050040:
    if ((*(uint *)(param_1 + 0x38) & 0xffffe000) != 0) {
      bVar3 = false;
    }
    if (uVar1 == 0) goto LAB_10050054;
LAB_10050058:
    if ((*(uint *)(param_1 + 0x34) & 0xffffe000) != 0) {
      bVar3 = false;
    }
    if (uVar1 == 0) goto LAB_1005006c;
LAB_10050070:
    bVar3 = (bool)((*(uint *)(param_1 + 0x2c) & 0xfffffc00) == 0 & bVar3);
    if (uVar1 == 0) goto LAB_10050088;
LAB_1005008c:
    bVar3 = (bool)((*(uint *)(param_1 + 0x40) & 0xffe00000) == 0 & bVar3);
    if (uVar1 == 0) goto LAB_100500a4;
LAB_100500a8:
    bVar3 = (bool)((*(uint *)(param_1 + 0x28) & 0xffffff80) == 0 & bVar3);
    if (uVar1 == 0) goto LAB_100500c0;
LAB_100500c4:
    bVar3 = (bool)((*(uint *)(param_1 + 0x44) & 0xffffffc0) == 0 & bVar3);
    if (uVar1 == 0) goto LAB_100500dc;
LAB_100500e0:
    bVar3 = (bool)((*(uint *)(param_1 + 0x48) & 0xffffffc0) == 0 & bVar3);
    if (uVar1 != 0) goto LAB_100500fc;
  }
  if ((uVar2 >> 0xe & 1) == 0) {
    return bVar3;
  }
LAB_100500fc:
  return (bool)((*(uint *)(param_1 + 0x4c) & 0xffffff80) == 0 & bVar3);
}

