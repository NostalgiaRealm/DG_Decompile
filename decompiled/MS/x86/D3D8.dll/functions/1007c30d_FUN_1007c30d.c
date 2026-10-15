/*
 * FUN_1007c30d at 1007c30d
 * undefined4 __stdcall FUN_1007c30d(int param_1, uint param_2)
 * Address ranges: 1007c30d-1007c385
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007c30d(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = param_2;
  FUN_10003838((void *)((int)&param_2 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  uVar3 = 0x8876086c;
  if (*(char *)(param_1 + -0x56c0) == '\0') {
    if (((uVar2 == 0) || (*(uint *)(param_1 + -0x56cc) < uVar2)) ||
       (*(int *)(*(int *)(param_1 + -0x56d0) + -4 + uVar2 * 4) == 0)) {
      bVar1 = false;
    }
    else {
      FUN_10006069((void *)(param_1 + -0x58e0),uVar2 - 1);
      bVar1 = true;
    }
    uVar3 = 0;
    if (!bVar1) {
      uVar3 = 0x8876086c;
    }
  }
  FUN_10003881((char *)((int)&param_2 + 3));
  return uVar3;
}

