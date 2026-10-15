/*
 * FUN_1003d0f5 at 1003d0f5
 * byte __fastcall FUN_1003d0f5(int param_1)
 * Address ranges: 1003d0f5-1003d228
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall FUN_1003d0f5(int param_1)

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
LAB_1003d134:
    if ((char)uVar1 < '\0') goto LAB_1003d138;
LAB_1003d14e:
    if ((uVar1 & 0x400) != 0) goto LAB_1003d156;
LAB_1003d16c:
    if ((uVar1 & 0x200) != 0) goto LAB_1003d174;
LAB_1003d18a:
    if ((uVar1 & 0x40) != 0) goto LAB_1003d18f;
LAB_1003d1a3:
    if ((uVar1 & 0x800) != 0) goto LAB_1003d1ab;
LAB_1003d1bf:
    if ((uVar1 & 0x20) != 0) goto LAB_1003d1c4;
LAB_1003d1d6:
    if ((uVar1 & 0x1000) != 0) goto LAB_1003d1de;
LAB_1003d1f0:
    if ((uVar1 & 0x2000) != 0) goto LAB_1003d1f8;
  }
  else {
    bVar2 = 0;
    if ((*(uint *)(param_1 + 0x3c) & 0xffffff00) == 0) {
      bVar2 = bVar3;
    }
    bVar3 = bVar2;
    if (uVar4 == 0) goto LAB_1003d134;
LAB_1003d138:
    bVar2 = 0;
    if ((*(uint *)(param_1 + 0x30) & 0xffffff00) == 0) {
      bVar2 = bVar3;
    }
    bVar3 = bVar2;
    if (uVar4 == 0) goto LAB_1003d14e;
LAB_1003d156:
    bVar2 = 0;
    if ((*(uint *)(param_1 + 0x38) & 0xffffe000) == 0) {
      bVar2 = bVar3;
    }
    bVar3 = bVar2;
    if (uVar4 == 0) goto LAB_1003d16c;
LAB_1003d174:
    bVar2 = 0;
    if ((*(uint *)(param_1 + 0x34) & 0xffffe000) == 0) {
      bVar2 = bVar3;
    }
    bVar3 = bVar2;
    if (uVar4 == 0) goto LAB_1003d18a;
LAB_1003d18f:
    bVar3 = bVar3 & 1U - ((*(uint *)(param_1 + 0x2c) & 0xfffc0000) != 0);
    if (uVar4 == 0) goto LAB_1003d1a3;
LAB_1003d1ab:
    bVar3 = bVar3 & 1U - ((*(uint *)(param_1 + 0x40) & 0xffe00000) != 0);
    if (uVar4 == 0) goto LAB_1003d1bf;
LAB_1003d1c4:
    bVar3 = bVar3 & 1U - ((*(uint *)(param_1 + 0x28) & 0xffffff80) != 0);
    if (uVar4 == 0) goto LAB_1003d1d6;
LAB_1003d1de:
    bVar3 = bVar3 & 1U - ((*(uint *)(param_1 + 0x44) & 0xffffffc0) != 0);
    if (uVar4 == 0) goto LAB_1003d1f0;
LAB_1003d1f8:
    bVar3 = bVar3 & 1U - ((*(uint *)(param_1 + 0x48) & 0xffffffc0) != 0);
    if (uVar4 != 0) goto LAB_1003d212;
  }
  if ((uVar1 & 0x4000) == 0) {
    return bVar3;
  }
LAB_1003d212:
  return bVar3 & 1U - ((*(uint *)(param_1 + 0x4c) & 0xffffff00) != 0);
}

