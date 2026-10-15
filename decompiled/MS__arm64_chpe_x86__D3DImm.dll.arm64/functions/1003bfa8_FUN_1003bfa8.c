/*
 * FUN_1003bfa8 at 1003bfa8
 * undefined FUN_1003bfa8(void)
 * Address ranges: 1003bfa8-1003c067
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1003bfa8(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  
  uVar3 = 0;
  uVar4 = 0;
  do {
    uVar2 = *(uint *)(param_1 + uVar4 * 4);
    uVar1 = uVar2 & 0x1f;
    if (uVar1 < 2) {
      return uVar3;
    }
    if (uVar1 == 0xd) {
LAB_1003c04c:
      uVar3 = 1 << (ulonglong)(uVar4 & 0x1f) | uVar3;
    }
    else {
      bVar5 = 2;
      if ((uVar2 & 0xe000) != 0x4000) {
        bVar5 = 0;
      }
      if (((((uVar2 & 0x1c00) == 0x800 | bVar5) & *(byte *)(uVar1 + 0x1009e1a8)) != 0) ||
         (uVar1 = uVar2 >> 5 & 0x1f, uVar1 == 0xd)) goto LAB_1003c04c;
      bVar5 = 2;
      if ((uVar2 & 0x380000) != 0x100000) {
        bVar5 = 0;
      }
      if (((bVar5 | (uVar2 & 0x70000) == 0x20000) & *(byte *)(uVar1 + 0x1009e1a8)) != 0)
      goto LAB_1003c04c;
    }
    uVar4 = uVar4 + 1;
    if (7 < uVar4) {
      return uVar3;
    }
  } while( true );
}

