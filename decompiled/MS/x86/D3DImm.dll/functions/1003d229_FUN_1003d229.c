/*
 * FUN_1003d229 at 1003d229
 * byte __fastcall FUN_1003d229(int param_1)
 * Address ranges: 1003d229-1003d360
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall FUN_1003d229(int param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  
  bVar3 = 1;
  uVar1 = *(uint *)(param_1 + 4);
  if ((uVar1 & 1) != 0) {
    bVar3 = 1 - ((*(uint *)(param_1 + 0xc) & 0xfffffffc) != 0);
  }
  uVar4 = uVar1 & 0x18;
  if ((uVar4 == 0) && ((uVar1 & 0x100) == 0)) {
LAB_1003d268:
    if ((char)uVar1 < '\0') goto LAB_1003d26c;
LAB_1003d282:
    if ((uVar1 & 0x400) != 0) goto LAB_1003d28a;
LAB_1003d2a0:
    if ((uVar1 & 0x200) != 0) goto LAB_1003d2a8;
LAB_1003d2be:
    if ((uVar1 & 0x40) != 0) goto LAB_1003d2c3;
LAB_1003d2d7:
    if ((uVar1 & 0x800) != 0) goto LAB_1003d2df;
LAB_1003d2f3:
    if ((uVar1 & 0x20) != 0) goto LAB_1003d2f8;
LAB_1003d30a:
    if ((uVar1 & 0x1000) != 0) goto LAB_1003d312;
LAB_1003d326:
    if ((uVar1 & 0x2000) != 0) goto LAB_1003d32e;
  }
  else {
    bVar2 = 0;
    if ((*(uint *)(param_1 + 0x3c) & 0xffffff00) == 0) {
      bVar2 = bVar3;
    }
    bVar3 = bVar2;
    if (uVar4 == 0) goto LAB_1003d268;
LAB_1003d26c:
    bVar2 = 0;
    if ((*(uint *)(param_1 + 0x30) & 0xffffff00) == 0) {
      bVar2 = bVar3;
    }
    bVar3 = bVar2;
    if (uVar4 == 0) goto LAB_1003d282;
LAB_1003d28a:
    bVar2 = 0;
    if ((*(uint *)(param_1 + 0x38) & 0xffffe000) == 0) {
      bVar2 = bVar3;
    }
    bVar3 = bVar2;
    if (uVar4 == 0) goto LAB_1003d2a0;
LAB_1003d2a8:
    bVar2 = 0;
    if ((*(uint *)(param_1 + 0x34) & 0xffffe000) == 0) {
      bVar2 = bVar3;
    }
    bVar3 = bVar2;
    if (uVar4 == 0) goto LAB_1003d2be;
LAB_1003d2c3:
    bVar3 = bVar3 & 1U - ((*(uint *)(param_1 + 0x2c) & 0xffc00000) != 0);
    if (uVar4 == 0) goto LAB_1003d2d7;
LAB_1003d2df:
    bVar3 = bVar3 & 1U - ((*(uint *)(param_1 + 0x40) & 0xffe00000) != 0);
    if (uVar4 == 0) goto LAB_1003d2f3;
LAB_1003d2f8:
    bVar3 = bVar3 & 1U - ((*(uint *)(param_1 + 0x28) & 0xffffff80) != 0);
    if (uVar4 == 0) goto LAB_1003d30a;
LAB_1003d312:
    bVar3 = bVar3 & 1U - ((*(uint *)(param_1 + 0x44) & 0xfffffe00) != 0);
    if (uVar4 == 0) goto LAB_1003d326;
LAB_1003d32e:
    bVar3 = bVar3 & 1U - ((*(uint *)(param_1 + 0x48) & 0xe0fcf8c0) != 0);
    if (uVar4 != 0) goto LAB_1003d34a;
  }
  if ((uVar1 & 0x4000) == 0) {
    return bVar3;
  }
LAB_1003d34a:
  return bVar3 & 1U - ((*(uint *)(param_1 + 0x4c) & 0xffffff00) != 0);
}

