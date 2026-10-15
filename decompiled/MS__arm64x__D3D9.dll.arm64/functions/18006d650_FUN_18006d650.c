/*
 * FUN_18006d650 at 18006d650
 * undefined FUN_18006d650(void)
 * Address ranges: 18006d650-18006d6fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006d650(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_2 + 0x10);
  uVar3 = 0;
  lVar4 = 0;
  do {
    if (*(char *)(lVar5 + 0x10 + lVar4) != '\0') {
      cVar2 = *(char *)(lVar5 + lVar4);
      if (cVar2 != -1) {
        if (cVar2 == '\0') {
          *(uint *)(param_2 + 0x4bc) = uVar3 | 0x320100;
          *(uint *)(param_2 + 0x4c0) = uVar3 | 0x324100;
          *(uint *)(param_2 + 0x4c4) = uVar3 | 0x328100;
        }
        else if (cVar2 == '0') {
          *(uint *)(param_2 + 0x4c8) = uVar3 | 0x320100;
          *(uint *)(param_2 + 0x4cc) = uVar3 | 0x324100;
          *(uint *)(param_2 + 0x4d0) = uVar3 | 0x328100;
        }
        uVar3 = uVar3 + 1;
      }
    }
    if (*(char *)(lVar5 + lVar4) == '0') {
      uVar1 = *(uint *)(param_2 + 0x528);
      *(uint *)(param_2 + 0x4d4) = uVar1 | 0x320100;
      *(uint *)(param_2 + 0x4d8) = uVar1 | 0x324100;
      *(uint *)(param_2 + 0x4dc) = uVar1 | 0x328100;
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x10);
  return;
}

