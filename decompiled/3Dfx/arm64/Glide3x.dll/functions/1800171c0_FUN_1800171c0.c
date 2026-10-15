/*
 * FUN_1800171c0 at 1800171c0
 * undefined __cdecl FUN_1800171c0(longlong param_1, uint * param_2, uint * param_3)
 * Address ranges: 1800171c0-1800172bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800171c0(longlong param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar2 = FUN_180016f80(*(longlong **)(param_1 + 0x3300),*(int *)(param_1 + 0x29fc));
  iVar1 = *(int *)(param_1 + 0x2a00);
  *param_2 = uVar2;
  uVar3 = FUN_180016f80(*(longlong **)(param_1 + 0x3300),iVar1);
  uVar2 = *param_2;
  *param_3 = uVar3;
  if (uVar2 == 0xffffffff) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x3300) + 0x58))();
  }
  if (*param_3 == 0xffffffff) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x3300) + 0x58))();
  }
  if (lVar4 != 0) {
    *(byte *)(lVar4 + 0x4a) = *(byte *)(lVar4 + 0x4a) | 2;
  }
  if (lVar5 != 0) {
    *(byte *)(lVar5 + 0x4a) = *(byte *)(lVar5 + 0x4a) | 2;
  }
  if (lVar4 == 0) {
    lVar4 = lVar5;
  }
  if (lVar4 != 0) {
    uVar2 = *(uint *)(lVar4 + 0x24);
    if ((*(float *)(param_1 + 0x2c90) != (float)*(uint *)(lVar4 + 0x20)) ||
       (*(float *)(param_1 + 0x2c94) != (float)uVar2)) {
      *(float *)(param_1 + 0x2c90) = (float)*(uint *)(lVar4 + 0x20);
      *(float *)(param_1 + 0x2c94) = (float)uVar2;
      *(undefined1 *)(param_1 + 0x32f0) = 1;
    }
  }
  return;
}

