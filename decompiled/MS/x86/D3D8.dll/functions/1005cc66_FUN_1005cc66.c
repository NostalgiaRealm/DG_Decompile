/*
 * FUN_1005cc66 at 1005cc66
 * undefined __stdcall FUN_1005cc66(int param_1, int * param_2)
 * Address ranges: 1005cc66-1005ccd9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005cc66(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    FUN_100a068b(param_1 + 0x18,*(uint *)(param_1 + 300 + uVar2 * 4));
    *(undefined4 *)(param_1 + 300 + uVar2 * 4) = 0;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x20);
  uVar2 = 0;
  do {
    uVar1 = *(uint *)(param_1 + 0xec + uVar2 * 4);
    if ((uVar1 & 0x3f00) == 0) {
      FUN_100a068b(param_1 + 0x18,uVar1);
      *(undefined4 *)(param_1 + 0xec + uVar2 * 4) = 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  FUN_1005a8c7(param_1,(uint *)(param_1 + 0x224));
  FUN_10055ea7(param_1,param_2);
  return;
}

