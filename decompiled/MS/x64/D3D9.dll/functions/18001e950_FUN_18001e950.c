/*
 * FUN_18001e950 at 18001e950
 * uint __fastcall FUN_18001e950(longlong param_1, longlong param_2, uint param_3)
 * Address ranges: 18001e950-18001ea4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18001e950(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = param_3 & 0xfffff807;
  uVar6 = 0;
  do {
    if ((8 << ((byte)uVar6 & 0x1f) & param_3 & 0x7f8) != 0) {
      iVar3 = 3;
      uVar1 = *(uint *)(param_1 + 0x7ec + (ulonglong)uVar6 * 0x84);
      uVar2 = uVar6;
      if (((uVar1 & 0xf0000) - 0x10000 & 0xfffcffff) != 0) {
        uVar2 = uVar1 & 7;
        if (*(char *)(param_2 + 0x14 + (ulonglong)(uVar2 + 7) * 8) == -1) {
          uVar2 = 0xffffffff;
        }
        else {
          iVar3 = *(byte *)(param_2 + 0x4d + (ulonglong)uVar2 * 8) - 1;
        }
      }
      uVar1 = *(uint *)(param_1 + 0x820 + (ulonglong)uVar6 * 0x84) & 0xff;
      iVar5 = iVar3;
      if ((uVar1 != 0) && (iVar5 = uVar1 - 1, 4 < uVar1)) {
        iVar5 = iVar3;
      }
      if (uVar2 != 0xffffffff) {
        uVar4 = uVar4 | iVar5 << ((byte)uVar2 * '\x02' + 0x12 & 0x1f) | 8 << ((byte)uVar2 & 0x1f);
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 8);
  uVar6 = uVar4 | 4;
  if (*(int *)(param_1 + 0x4ec) == 0) {
    uVar6 = uVar4;
  }
  uVar4 = uVar6;
  if ((*(int *)(param_1 + 0x6a8) - 1U < 3) && (uVar4 = uVar6 | 4, *(int *)(param_1 + 0x4e8) == 0)) {
    uVar4 = uVar6;
  }
  return uVar4 | 0x40000000;
}

