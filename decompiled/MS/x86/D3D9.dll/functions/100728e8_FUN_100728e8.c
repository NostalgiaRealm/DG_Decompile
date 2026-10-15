/*
 * FUN_100728e8 at 100728e8
 * undefined __stdcall FUN_100728e8(int * param_1, int param_2)
 * Address ranges: 100728e8-10072987
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100728e8(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = 0xff;
  do {
    if (((*(char *)(uVar3 + 0x10 + *(int *)(param_2 + 0x10)) != '\0') &&
        (*(char *)(uVar3 + *(int *)(param_2 + 0x10)) != -1)) &&
       (*(char *)(param_2 + 0xca + uVar3) != -1)) {
      FUN_100c4367(param_1);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  if (*(char *)(param_2 + 0x2b4) != '\0') {
    uVar3 = 0;
    uVar1 = 0;
    do {
      if (*(int *)(param_2 + 0xec + uVar1 * 4) != 0) {
        if (uVar1 < uVar2) {
          uVar2 = uVar1;
        }
        if (uVar3 < uVar1) {
          uVar3 = uVar1;
        }
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x10);
    FUN_100c4483(param_1);
  }
  return;
}

