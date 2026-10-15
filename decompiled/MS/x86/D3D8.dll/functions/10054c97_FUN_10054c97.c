/*
 * FUN_10054c97 at 10054c97
 * undefined __stdcall FUN_10054c97(int * param_1, int param_2)
 * Address ranges: 10054c97-10054da9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10054c97(int *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  do {
    if ((*(char *)(uVar4 + 0x10 + *(int *)(param_2 + 0x10)) != '\0') &&
       (*(char *)(uVar4 + *(int *)(param_2 + 0x10)) != -1)) {
      FUN_1005a846(param_2,param_1,uVar4,0xf,uVar3 | 0x410200);
      uVar3 = uVar3 + 1;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x10);
  if (*(char *)(param_2 + 0x49e) != '\0') {
    *(undefined1 *)(*(int *)(param_2 + 0x488) + 0x10 + *(int *)(param_2 + 0x10)) = 7;
    piVar1 = (int *)(param_2 + 0x18);
    uVar3 = FUN_100a05ed((int)piVar1,4,'\x01');
    cVar2 = *(char *)(*(uint *)(param_2 + 0x488) + 0xca + param_2);
    if ((cVar2 != '\x02') && (cVar2 != '\x03')) {
      FUN_1005a846(param_2,param_1,*(uint *)(param_2 + 0x488),7,uVar3);
    }
    FUN_100a138c(piVar1,param_1,0x10);
    FUN_100a138c(piVar1,param_1,0x44);
    FUN_100a138c(piVar1,param_1,0x38);
    FUN_100a068b((int)piVar1,uVar3);
  }
  return;
}

