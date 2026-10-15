/*
 * FUN_1007281c at 1007281c
 * undefined __stdcall FUN_1007281c(int param_1, int * param_2)
 * Address ranges: 1007281c-100728e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007281c(int param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  do {
    FUN_100c2ed2(param_1 + 0x18,*(uint *)(param_1 + 300 + uVar4 * 4));
    *(undefined4 *)(param_1 + 300 + uVar4 * 4) = 0;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x20);
  uVar4 = 0;
  do {
    uVar2 = *(uint *)(param_1 + 0xec + uVar4 * 4);
    if ((uVar2 & 0x3f00) == 0) {
      FUN_100c2ed2(param_1 + 0x18,uVar2);
      *(undefined4 *)(param_1 + 0xec + uVar4 * 4) = 0;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x10);
  FUN_100702e0(param_1,(uint *)(param_1 + 0x224));
  iVar5 = 0;
  iVar3 = 4;
  do {
    FUN_100702e0(param_1,(uint *)(param_1 + 0x2a0 + iVar5));
    iVar5 = iVar5 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_100702e0(param_1,(uint *)(param_1 + 0x2b0));
  cVar1 = *(char *)(*(int *)(param_1 + 0x10) + 0x4a6c);
  if (cVar1 == '\x01') {
    FUN_100691d8(param_1,param_2);
  }
  else if (cVar1 == '\x02') {
    FUN_10069788(param_1,param_2);
  }
  else if (cVar1 == '\x03') {
    FUN_1006997c(param_1,param_2);
  }
  return;
}

