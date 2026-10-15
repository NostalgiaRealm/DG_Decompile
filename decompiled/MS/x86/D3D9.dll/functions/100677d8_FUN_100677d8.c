/*
 * FUN_100677d8 at 100677d8
 * undefined __stdcall FUN_100677d8(int * param_1, int param_2)
 * Address ranges: 100677d8-100678f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100677d8(int *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  do {
    if ((*(char *)(uVar3 + 0x10 + *(int *)(param_2 + 0x10)) != '\0') &&
       (*(char *)(uVar3 + *(int *)(param_2 + 0x10)) != -1)) {
      FUN_100701b0(param_2,param_1,uVar3,0xf,uVar4 | 0x410200);
      uVar4 = uVar4 + 1;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  if (*(char *)(param_2 + 0x52e) != '\0') {
    *(undefined1 *)(*(int *)(param_2 + 0x518) + 0x10 + *(int *)(param_2 + 0x10)) = 7;
    piVar1 = (int *)(param_2 + 0x18);
    uVar4 = FUN_100c2e34((int)piVar1,4,'\x01');
    cVar2 = *(char *)(*(uint *)(param_2 + 0x518) + 0xca + param_2);
    if ((cVar2 != '\x02') && (cVar2 != '\x03')) {
      FUN_100701b0(param_2,param_1,*(uint *)(param_2 + 0x518),7,uVar4);
    }
    FUN_100c3be1(piVar1,param_1,0x10);
    FUN_100c3be1(piVar1,param_1,0x44);
    FUN_100c3be1(piVar1,param_1,0x38);
    FUN_100c2ed2((int)piVar1,uVar4);
  }
  return;
}

