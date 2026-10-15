/*
 * FUN_180013d90 at 180013d90
 * undefined __cdecl FUN_180013d90(longlong param_1)
 * Address ranges: 180013d90-180013e43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180013d90(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 uVar3;
  
  uVar1 = FUN_180016f80(*(longlong **)(param_1 + 0x3300),*(int *)(param_1 + 0x29fc));
  if (uVar1 != 0xffffffff) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x3300) + 0x58))();
    if ((*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x20)) ||
       (uVar3 = 0, *(int *)(lVar2 + 0x2c) != *(int *)(lVar2 + 0x24))) {
      uVar3 = 1;
    }
    *(undefined1 *)(param_1 + 0x2c82) = uVar3;
    *(float *)(param_1 + 0x2c70) = (float)*(uint *)(lVar2 + 0x28) / (float)*(uint *)(lVar2 + 0x20);
    *(float *)(param_1 + 0x2c74) = (float)*(uint *)(lVar2 + 0x2c) / (float)*(uint *)(lVar2 + 0x24);
  }
  return;
}

