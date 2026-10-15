/*
 * FUN_180180138 at 180180138
 * undefined FUN_180180138(void)
 * Address ranges: 180180138-1801801e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180180138(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_2 + 0x10);
  uVar4 = 0;
  lVar5 = 0;
  do {
    if (*(char *)(lVar3 + 0x10 + lVar5) != '\0') {
      cVar2 = *(char *)(lVar3 + lVar5);
      if (cVar2 != -1) {
        if (cVar2 == '\0') {
          *(uint *)(param_2 + 0x4bc) = uVar4 | 0x320100;
          *(uint *)(param_2 + 0x4c0) = uVar4 | 0x324100;
          *(uint *)(param_2 + 0x4c4) = uVar4 | 0x328100;
        }
        else if (cVar2 == '0') {
          *(uint *)(param_2 + 0x4c8) = uVar4 | 0x320100;
          *(uint *)(param_2 + 0x4cc) = uVar4 | 0x324100;
          *(uint *)(param_2 + 0x4d0) = uVar4 | 0x328100;
        }
        uVar4 = uVar4 + 1;
      }
    }
    if (*(char *)(lVar3 + lVar5) == '0') {
      uVar1 = *(uint *)(param_2 + 0x528);
      *(uint *)(param_2 + 0x4d4) = uVar1 | 0x320100;
      *(uint *)(param_2 + 0x4d8) = uVar1 | 0x324100;
      *(uint *)(param_2 + 0x4dc) = uVar1 | 0x328100;
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x10);
  return;
}

