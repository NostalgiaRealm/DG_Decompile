/*
 * FUN_10051bc2 at 10051bc2
 * undefined __stdcall FUN_10051bc2(int * param_1, int param_2)
 * Address ranges: 10051bc2-10051c43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10051bc2(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (*(char *)(param_2 + 0x4d) != '\0') {
    FUN_100a1c01(param_1);
  }
  uVar3 = 0;
  if (*(int *)(param_2 + 0x60) != 0) {
    do {
      FUN_100a14fb(param_1,4);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_2 + 0x60));
  }
  if (1 < *(uint *)(param_2 + 0x498)) {
    if (*(char *)(param_2 + 0x49d) == '\0') {
      iVar1 = 6;
      puVar2 = (undefined4 *)(*(int *)(param_2 + 0x490) * 0x60 + 0x444 + param_2);
    }
    else {
      iVar1 = *(int *)(param_2 + 0x490) * 6;
      puVar2 = (undefined4 *)(param_2 + 0x4a4);
    }
    FUN_100a1c13(param_1,puVar2,iVar1);
  }
  return;
}

