/*
 * FUN_18011e370 at 18011e370
 * undefined FUN_18011e370(void)
 * Address ranges: 18011e370-18011e473
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18011e370(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = param_3 & 0xfffff807;
  uVar4 = 0;
  do {
    if ((8 << (ulonglong)((uint)uVar4 & 0x1f) & param_3 & 0x7f8) != 0) {
      iVar3 = 3;
      uVar1 = *(uint *)(param_1 + 0x7ec + uVar4 * 0x84);
      uVar2 = uVar4;
      if (((uVar1 & 0xf0000) - 0x10000 & 0xfffcffff) != 0) {
        uVar1 = uVar1 & 7;
        uVar2 = (ulonglong)uVar1;
        if (*(char *)(param_2 + 0x14 + (ulonglong)(uVar1 + 7) * 8) == -1) {
          uVar2 = 0xffffffff;
        }
        else {
          iVar3 = *(byte *)(param_2 + 0x4d + uVar2 * 8) - 1;
        }
      }
      uVar1 = *(uint *)(param_1 + 0x820 + uVar4 * 0x84) & 0xff;
      if ((uVar1 != 0) && (uVar1 < 5)) {
        iVar3 = uVar1 - 1;
      }
      uVar1 = (uint)uVar2;
      if (uVar1 != 0xffffffff) {
        uVar5 = iVar3 << (ulonglong)(uVar1 * 2 + 0x12 & 0x1f) | 8 << (ulonglong)(uVar1 & 0x1f) |
                uVar5;
      }
    }
    uVar1 = (uint)uVar4 + 1;
    uVar4 = (ulonglong)uVar1;
  } while (uVar1 < 8);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x4ec) != 0) {
    uVar1 = 4;
  }
  if ((*(int *)(param_1 + 0x6a8) - 1U < 3) && (*(int *)(param_1 + 0x4e8) != 0)) {
    uVar1 = 4;
  }
  return uVar1 | uVar5 | 0x40000000;
}

