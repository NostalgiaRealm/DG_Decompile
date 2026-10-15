/*
 * FUN_1003cfc4 at 1003cfc4
 * byte __fastcall FUN_1003cfc4(int param_1)
 * Address ranges: 1003cfc4-1003d0f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall FUN_1003cfc4(int param_1)

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
LAB_1003d003:
    if ((char)uVar1 < '\0') goto LAB_1003d007;
LAB_1003d01d:
    if ((uVar1 & 0x400) != 0) goto LAB_1003d025;
LAB_1003d03b:
    if ((uVar1 & 0x200) != 0) goto LAB_1003d043;
LAB_1003d059:
    if ((uVar1 & 0x40) != 0) goto LAB_1003d05e;
LAB_1003d072:
    if ((uVar1 & 0x800) != 0) goto LAB_1003d07a;
LAB_1003d08e:
    if ((uVar1 & 0x20) != 0) goto LAB_1003d093;
LAB_1003d0a5:
    if ((uVar1 & 0x1000) != 0) goto LAB_1003d0ad;
LAB_1003d0bf:
    if ((uVar1 & 0x2000) != 0) goto LAB_1003d0c7;
  }
  else {
    bVar2 = 0;
    if ((*(uint *)(param_1 + 0x3c) & 0xffffff00) == 0) {
      bVar2 = bVar3;
    }
    bVar3 = bVar2;
    if (uVar4 == 0) goto LAB_1003d003;
LAB_1003d007:
    bVar2 = 0;
    if ((*(uint *)(param_1 + 0x30) & 0xffffff00) == 0) {
      bVar2 = bVar3;
    }
    bVar3 = bVar2;
    if (uVar4 == 0) goto LAB_1003d01d;
LAB_1003d025:
    bVar2 = 0;
    if ((*(uint *)(param_1 + 0x38) & 0xffffe000) == 0) {
      bVar2 = bVar3;
    }
    bVar3 = bVar2;
    if (uVar4 == 0) goto LAB_1003d03b;
LAB_1003d043:
    bVar2 = 0;
    if ((*(uint *)(param_1 + 0x34) & 0xffffe000) == 0) {
      bVar2 = bVar3;
    }
    bVar3 = bVar2;
    if (uVar4 == 0) goto LAB_1003d059;
LAB_1003d05e:
    bVar3 = bVar3 & 1U - ((*(uint *)(param_1 + 0x2c) & 0xfffffc00) != 0);
    if (uVar4 == 0) goto LAB_1003d072;
LAB_1003d07a:
    bVar3 = bVar3 & 1U - ((*(uint *)(param_1 + 0x40) & 0xffe00000) != 0);
    if (uVar4 == 0) goto LAB_1003d08e;
LAB_1003d093:
    bVar3 = bVar3 & 1U - ((*(uint *)(param_1 + 0x28) & 0xffffff80) != 0);
    if (uVar4 == 0) goto LAB_1003d0a5;
LAB_1003d0ad:
    bVar3 = bVar3 & 1U - ((*(uint *)(param_1 + 0x44) & 0xffffffc0) != 0);
    if (uVar4 == 0) goto LAB_1003d0bf;
LAB_1003d0c7:
    bVar3 = bVar3 & 1U - ((*(uint *)(param_1 + 0x48) & 0xffffffc0) != 0);
    if (uVar4 != 0) goto LAB_1003d0e1;
  }
  if ((uVar1 & 0x4000) == 0) {
    return bVar3;
  }
LAB_1003d0e1:
  return bVar3 & 1U - ((*(uint *)(param_1 + 0x4c) & 0xffffff80) != 0);
}

