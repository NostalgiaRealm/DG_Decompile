/*
 * FUN_10050120 at 10050120
 * undefined FUN_10050120(void)
 * Address ranges: 10050120-10050257
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10050120(int param_1)

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
LAB_10050164:
    if ((uVar2 >> 7 & 1) != 0) goto LAB_10050168;
LAB_1005017c:
    if ((uVar2 >> 10 & 1) != 0) goto LAB_10050180;
LAB_10050194:
    if ((uVar2 >> 9 & 1) != 0) goto LAB_10050198;
LAB_100501ac:
    if ((uVar2 >> 6 & 1) != 0) goto LAB_100501b0;
LAB_100501c8:
    if ((uVar2 >> 0xb & 1) != 0) goto LAB_100501cc;
LAB_100501e4:
    if ((uVar2 >> 5 & 1) != 0) goto LAB_100501e8;
LAB_10050200:
    if ((uVar2 >> 0xc & 1) != 0) goto LAB_10050204;
LAB_1005021c:
    if ((uVar2 >> 0xd & 1) != 0) goto LAB_10050220;
  }
  else {
    if ((*(uint *)(param_1 + 0x3c) & 0xffffff00) != 0) {
      bVar3 = false;
    }
    if (uVar1 == 0) goto LAB_10050164;
LAB_10050168:
    if ((*(uint *)(param_1 + 0x30) & 0xffffff00) != 0) {
      bVar3 = false;
    }
    if (uVar1 == 0) goto LAB_1005017c;
LAB_10050180:
    if ((*(uint *)(param_1 + 0x38) & 0xffffe000) != 0) {
      bVar3 = false;
    }
    if (uVar1 == 0) goto LAB_10050194;
LAB_10050198:
    if ((*(uint *)(param_1 + 0x34) & 0xffffe000) != 0) {
      bVar3 = false;
    }
    if (uVar1 == 0) goto LAB_100501ac;
LAB_100501b0:
    bVar3 = (bool)((*(uint *)(param_1 + 0x2c) & 0xfffc0000) == 0 & bVar3);
    if (uVar1 == 0) goto LAB_100501c8;
LAB_100501cc:
    bVar3 = (bool)((*(uint *)(param_1 + 0x40) & 0xffe00000) == 0 & bVar3);
    if (uVar1 == 0) goto LAB_100501e4;
LAB_100501e8:
    bVar3 = (bool)((*(uint *)(param_1 + 0x28) & 0xffffff80) == 0 & bVar3);
    if (uVar1 == 0) goto LAB_10050200;
LAB_10050204:
    bVar3 = (bool)((*(uint *)(param_1 + 0x44) & 0xffffffc0) == 0 & bVar3);
    if (uVar1 == 0) goto LAB_1005021c;
LAB_10050220:
    bVar3 = (bool)((*(uint *)(param_1 + 0x48) & 0xffffffc0) == 0 & bVar3);
    if (uVar1 != 0) goto LAB_1005023c;
  }
  if ((uVar2 >> 0xe & 1) == 0) {
    return bVar3;
  }
LAB_1005023c:
  return (bool)((*(uint *)(param_1 + 0x4c) & 0xffffff00) == 0 & bVar3);
}

