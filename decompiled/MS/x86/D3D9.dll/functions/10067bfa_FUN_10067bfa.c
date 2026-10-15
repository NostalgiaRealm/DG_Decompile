/*
 * FUN_10067bfa at 10067bfa
 * undefined __stdcall FUN_10067bfa(int param_1)
 * Address ranges: 10067bfa-10067cb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10067bfa(int param_1)

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
        *(uint *)(param_1 + 0x4ac) = uVar5 | 0x320100;
        *(uint *)(param_1 + 0x4b0) = uVar5 | 0x324100;
        *(uint *)(param_1 + 0x4b4) = uVar5 | 0x328100;
      }
      else if (cVar1 == '0') {
        *(uint *)(param_1 + 0x4b8) = uVar5 | 0x320100;
        *(uint *)(param_1 + 0x4bc) = uVar5 | 0x324100;
        *(uint *)(param_1 + 0x4c0) = uVar5 | 0x328100;
      }
      uVar5 = uVar5 + 1;
    }
    if (*(char *)(iVar2 + uVar4) == '0') {
      uVar3 = *(uint *)(param_1 + 0x518);
      *(uint *)(param_1 + 0x4c4) = uVar3 | 0x320100;
      *(uint *)(param_1 + 0x4c8) = uVar3 | 0x324100;
      *(uint *)(param_1 + 0x4cc) = uVar3 | 0x328100;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x10);
  return;
}

