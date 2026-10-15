/*
 * FUN_180012580 at 180012580
 * undefined FUN_180012580(void)
 * Address ranges: 180012580-18001267b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180012580(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar3 = param_3 & 0xfffff807;
  uVar2 = 0;
  do {
    if ((8 << (ulonglong)((uint)uVar2 & 0x1f) & param_3 & 0x7f8) != 0) {
      iVar1 = 3;
      uVar4 = *(uint *)(param_1 + 0x7ec + uVar2 * 0x84);
      uVar5 = uVar2;
      if (((uVar4 & 0xf0000) - 0x10000 & 0xfffcffff) != 0) {
        uVar4 = uVar4 & 7;
        uVar5 = (ulonglong)uVar4;
        if (*(char *)(param_2 + 0x14 + (ulonglong)(uVar4 + 7) * 8) == -1) {
          uVar5 = 0xffffffff;
        }
        else {
          iVar1 = *(byte *)(param_2 + 0x4d + uVar5 * 8) - 1;
        }
      }
      uVar4 = *(uint *)(param_1 + 0x820 + uVar2 * 0x84) & 0xff;
      if ((uVar4 != 0) && (uVar4 < 5)) {
        iVar1 = uVar4 - 1;
      }
      uVar4 = (uint)uVar5;
      if (uVar4 != 0xffffffff) {
        uVar3 = iVar1 << (ulonglong)(uVar4 * 2 + 0x12 & 0x1f) | 8 << (ulonglong)(uVar4 & 0x1f) |
                uVar3;
      }
    }
    uVar4 = (uint)uVar2 + 1;
    uVar2 = (ulonglong)uVar4;
  } while (uVar4 < 8);
  uVar4 = 0;
  if (*(int *)(param_1 + 0x4ec) != 0) {
    uVar4 = 4;
  }
  if ((*(int *)(param_1 + 0x6a8) - 1U < 3) && (*(int *)(param_1 + 0x4e8) != 0)) {
    uVar4 = 4;
  }
  return uVar4 | uVar3 | 0x40000000;
}

