/*
 * FUN_18007961c at 18007961c
 * undefined __fastcall FUN_18007961c(undefined8 param_1, longlong param_2)
 * Address ranges: 18007961c-1800796d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18007961c(undefined8 param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  lVar3 = *(longlong *)(param_2 + 0x10);
  uVar5 = 0;
  lVar4 = 0;
  do {
    if ((*(char *)(lVar3 + 0x10 + lVar4) != '\0') && (cVar1 = *(char *)(lVar3 + lVar4), cVar1 != -1)
       ) {
      if (cVar1 == '\0') {
        *(uint *)(param_2 + 0x4bc) = uVar5 | 0x320100;
        *(uint *)(param_2 + 0x4c0) = uVar5 | 0x324100;
        *(uint *)(param_2 + 0x4c4) = uVar5 | 0x328100;
      }
      else if (cVar1 == '0') {
        *(uint *)(param_2 + 0x4c8) = uVar5 | 0x320100;
        *(uint *)(param_2 + 0x4cc) = uVar5 | 0x324100;
        *(uint *)(param_2 + 0x4d0) = uVar5 | 0x328100;
      }
      uVar5 = uVar5 + 1;
    }
    if (*(char *)(lVar3 + lVar4) == '0') {
      uVar2 = *(uint *)(param_2 + 0x528);
      *(uint *)(param_2 + 0x4d4) = uVar2 | 0x320100;
      *(uint *)(param_2 + 0x4d8) = uVar2 | 0x324100;
      *(uint *)(param_2 + 0x4dc) = uVar2 | 0x328100;
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x10);
  return;
}

