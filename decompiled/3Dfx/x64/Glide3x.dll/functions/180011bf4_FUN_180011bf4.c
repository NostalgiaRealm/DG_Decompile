/*
 * FUN_180011bf4 at 180011bf4
 * undefined __fastcall FUN_180011bf4(longlong param_1)
 * Address ranges: 180011bf4-180011c90
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180011bf4(longlong param_1)

{
  undefined1 uVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = FUN_180014854(*(longlong **)(param_1 + 0x3300),*(int *)(param_1 + 0x29fc));
  if (uVar2 != 0xffffffff) {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x3300) + 0x58))
                      (*(longlong **)(param_1 + 0x3300),uVar2);
    if ((*(int *)(lVar3 + 0x28) == *(int *)(lVar3 + 0x20)) &&
       (*(int *)(lVar3 + 0x2c) == *(int *)(lVar3 + 0x24))) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 0x2c82) = uVar1;
    *(float *)(param_1 + 0x2c70) = (float)*(uint *)(lVar3 + 0x28) / (float)*(uint *)(lVar3 + 0x20);
    *(float *)(param_1 + 0x2c74) = (float)*(uint *)(lVar3 + 0x2c) / (float)*(uint *)(lVar3 + 0x24);
  }
  return;
}

