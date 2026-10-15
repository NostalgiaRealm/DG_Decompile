/*
 * FUN_100550a1 at 100550a1
 * undefined __stdcall FUN_100550a1(int param_1)
 * Address ranges: 100550a1-1005515a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100550a1(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = *(int *)(param_1 + 0x10);
  uVar5 = 0;
  uVar4 = 0;
  do {
    if ((*(char *)(iVar2 + 0x10 + uVar4) != '\0') && (cVar1 = *(char *)(iVar2 + uVar4), cVar1 != -1)
       ) {
      if (cVar1 == '\0') {
        *(uint *)(param_1 + 0x41c) = uVar5 | 0x320100;
        *(uint *)(param_1 + 0x420) = uVar5 | 0x324100;
        *(uint *)(param_1 + 0x424) = uVar5 | 0x328100;
      }
      else if (cVar1 == '0') {
        *(uint *)(param_1 + 0x428) = uVar5 | 0x320100;
        *(uint *)(param_1 + 0x42c) = uVar5 | 0x324100;
        *(uint *)(param_1 + 0x430) = uVar5 | 0x328100;
      }
      uVar5 = uVar5 + 1;
    }
    if (*(char *)(iVar2 + uVar4) == '0') {
      uVar3 = *(uint *)(param_1 + 0x488);
      *(uint *)(param_1 + 0x434) = uVar3 | 0x320100;
      *(uint *)(param_1 + 0x438) = uVar3 | 0x324100;
      *(uint *)(param_1 + 0x43c) = uVar3 | 0x328100;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x10);
  return;
}

