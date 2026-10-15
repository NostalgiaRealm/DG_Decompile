/*
 * FUN_18003da90 at 18003da90
 * uint __cdecl FUN_18003da90(longlong param_1, uint param_2, uint param_3, uint param_4, uint param_5, byte param_6, ulonglong param_7)
 * Address ranges: 18003da90-18003dba3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18003da90(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,byte param_6
                  ,ulonglong param_7)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  undefined1 uVar6;
  
  if ((param_2 & 0xf0) == 0xf0) {
    bVar5 = 7;
    if ((param_2 & 0x1000) != 0) {
      bVar5 = 8;
    }
    if ((bVar5 & param_6) == 0) goto LAB_18003dac8;
  }
  else {
LAB_18003dac8:
    bVar5 = 7;
    if ((param_3 & 0xf0) == 0xf0) {
      bVar1 = bVar5;
      if ((param_3 & 0x1000) != 0) {
        bVar1 = 8;
      }
      if ((bVar1 & param_6) != 0) goto LAB_18003db34;
    }
    if ((param_4 & 0xf0) == 0xf0) {
      bVar1 = bVar5;
      if ((param_4 & 0x1000) != 0) {
        bVar1 = 8;
      }
      if ((bVar1 & param_6) != 0) goto LAB_18003db34;
    }
    if ((param_5 & 0xf0) == 0xf0) {
      if ((param_5 & 0x1000) != 0) {
        bVar5 = 8;
      }
      if ((bVar5 & param_6) != 0) goto LAB_18003db34;
    }
    if (*(char *)(param_1 + 0xac) == '\0') {
      if (*(int *)(param_1 + 0xa8) != 0) {
        return 0xf0;
      }
      uVar6 = 0;
      goto LAB_18003db38;
    }
  }
LAB_18003db34:
  uVar6 = 1;
LAB_18003db38:
  if ((param_7 & 1) != 0) {
    *(undefined1 *)(param_1 + 0xac) = uVar6;
  }
  uVar4 = 0;
  do {
    if (*(int *)(param_1 + 0x98 + uVar4 * 4) == 0) {
      uVar3 = 3;
      if (param_6 != 7) {
        uVar3 = 1;
      }
      uVar2 = 4;
      if (param_6 != 0xf) {
        uVar2 = uVar3;
      }
      uVar3 = FUN_180055d40(param_1,uVar2,1);
      *(uint *)(param_1 + (uVar4 & 0xffffffff) * 4 + 0x98) = uVar3;
      return (uint)uVar4 | 0x80;
    }
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
  } while (uVar3 < 4);
  return 0xf0;
}

