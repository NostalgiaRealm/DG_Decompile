/*
 * FUN_1006945b at 1006945b
 * undefined __stdcall FUN_1006945b(int param_1, int * param_2)
 * Address ranges: 1006945b-10069528
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006945b(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_100c2e34(param_1 + 0x18,4,'\x01');
  *(uint *)(param_1 + 0x1e8) = uVar1;
  if (*(char *)(*(int *)(param_1 + 0x10) + 0x444) < '\0') {
    uVar1 = FUN_10069529(param_1,param_2,2);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x1b4);
  }
  *(uint *)(param_1 + 500) = uVar1;
  if (*(char *)(*(int *)(param_1 + 0x10) + 0x445) < '\0') {
    uVar1 = FUN_10069529(param_1,param_2,3);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x1b8);
  }
  *(uint *)(param_1 + 0x1f8) = uVar1;
  if ((char)(*(byte *)(*(int *)(param_1 + 0x10) + 0x443) |
            *(byte *)(*(int *)(param_1 + 0x10) + 0x442)) < '\0') {
    uVar1 = FUN_10069529(param_1,param_2,4);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x1bc);
  }
  *(uint *)(param_1 + 0x1ec) = uVar1;
  uVar2 = 0;
  *(uint *)(param_1 + 0x1f0) = uVar1;
  do {
    if (*(char *)(uVar2 + 0x446 + *(int *)(param_1 + 0x10)) < '\0') {
      uVar1 = FUN_10069529(param_1,param_2,uVar2 + 5);
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x1c0 + uVar2 * 4);
    }
    *(uint *)(param_1 + 0x1fc + uVar2 * 4) = uVar1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 8);
  return;
}

