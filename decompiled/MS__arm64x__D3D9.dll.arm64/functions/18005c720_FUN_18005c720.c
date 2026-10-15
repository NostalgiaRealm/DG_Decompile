/*
 * FUN_18005c720 at 18005c720
 * undefined FUN_18005c720(void)
 * Address ranges: 18005c720-18005c7f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18005c720(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  uVar5 = 0;
  do {
    uVar2 = *(uint *)(param_1 + uVar5 * 4);
    uVar1 = uVar2 & 0x1f;
    if (uVar1 < 2) {
      return uVar3;
    }
    if (uVar1 == 0xd) {
LAB_18005c7dc:
      uVar3 = 1 << (ulonglong)((uint)uVar5 & 0x1f) | uVar3;
    }
    else {
      bVar4 = 2;
      if ((uVar2 & 0xe000) != 0x4000) {
        bVar4 = 0;
      }
      if (((((bVar4 | ((uVar2 & 0x1c00000) == 0x800000) << 2 | (uVar2 & 0x1c00) == 0x800) &
            (&DAT_18022c278)[uVar1]) != 0) || ((uVar2 & 0x3e0) == 0x1a0)) ||
         ((((uVar2 & 0x70000) == 0x20000 | ((uVar2 & 0x380000) == 0x100000) << 1 |
           ((uVar2 & 0xe000000) == 0x4000000) << 2) &
          (&DAT_18022c278)[(ulonglong)(uVar2 >> 5) & 0x1f]) != 0)) goto LAB_18005c7dc;
    }
    uVar1 = (uint)uVar5 + 1;
    uVar5 = (ulonglong)uVar1;
    if (7 < uVar1) {
      return uVar3;
    }
  } while( true );
}

