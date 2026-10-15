/*
 * FUN_1007fe48 at 1007fe48
 * undefined FUN_1007fe48(void)
 * Address ranges: 1007fe48-1007ff2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1007fe48(int param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  
  uVar4 = 0;
  uVar5 = 0;
  do {
    uVar3 = *(uint *)(param_1 + uVar5 * 4);
    uVar1 = uVar3 & 0x1f;
    if (uVar1 < 2) {
      return uVar4;
    }
    if (uVar1 == 0xd) {
LAB_1007ff14:
      uVar4 = 1 << (ulonglong)(uVar5 & 0x1f) | uVar4;
    }
    else {
      bVar2 = 2;
      if ((uVar3 & 0xe000) != 0x4000) {
        bVar2 = 0;
      }
      bVar6 = 4;
      if ((uVar3 & 0x1c00000) != 0x800000) {
        bVar6 = 0;
      }
      if (((((uVar3 & 0x1c00) == 0x800 | bVar2 | bVar6) & *(byte *)(uVar1 + 0x10162178)) != 0) ||
         (uVar1 = uVar3 >> 5 & 0x1f, uVar1 == 0xd)) goto LAB_1007ff14;
      bVar2 = 4;
      if ((uVar3 & 0xe000000) != 0x4000000) {
        bVar2 = 0;
      }
      bVar6 = 2;
      if ((uVar3 & 0x380000) != 0x100000) {
        bVar6 = 0;
      }
      if (((bVar2 | bVar6 | (uVar3 & 0x70000) == 0x20000) & *(byte *)(uVar1 + 0x10162178)) != 0)
      goto LAB_1007ff14;
    }
    uVar5 = uVar5 + 1;
    if (7 < uVar5) {
      return uVar4;
    }
  } while( true );
}

