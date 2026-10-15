/*
 * FUN_1800256f8 at 1800256f8
 * undefined __cdecl FUN_1800256f8(longlong param_1)
 * Address ranges: 1800256f8-1800257a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800256f8(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 uVar3;
  
  uVar1 = FUN_180023af0(param_1,*(int *)(param_1 + 0x2984));
  if ((int)uVar1 != -1) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x3180) + 0x58))();
    if ((*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x20)) ||
       (uVar3 = 0, *(int *)(lVar2 + 0x2c) != *(int *)(lVar2 + 0x24))) {
      uVar3 = 1;
    }
    *(undefined1 *)(param_1 + 0x2bea) = uVar3;
    *(float *)(param_1 + 0x2bd8) = (float)*(uint *)(lVar2 + 0x28) / (float)*(uint *)(lVar2 + 0x20);
    *(float *)(param_1 + 0x2bdc) = (float)*(uint *)(lVar2 + 0x2c) / (float)*(uint *)(lVar2 + 0x24);
  }
  return;
}

