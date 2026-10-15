/*
 * FUN_180023b28 at 180023b28
 * undefined __cdecl FUN_180023b28(longlong param_1, undefined8 param_2, int * param_3)
 * Address ranges: 180023b28-180023c23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180023b28(longlong param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *extraout_x8;
  int extraout_w9;
  
  uVar3 = FUN_180023af0(param_1,*(int *)(param_1 + 0x2984));
  iVar2 = *(int *)(param_1 + 0x2988);
  *extraout_x8 = (int)uVar3;
  uVar3 = FUN_180023af0(uVar3,iVar2);
  *param_3 = (int)uVar3;
  if (extraout_w9 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x3180) + 0x58))
                      (*(longlong **)(param_1 + 0x3180),extraout_w9);
  }
  if (*param_3 == -1) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x3180) + 0x58))();
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
    uVar1 = *(uint *)(lVar4 + 0x24);
    if ((*(float *)(param_1 + 0x2bf0) != (float)*(uint *)(lVar4 + 0x20)) ||
       (*(float *)(param_1 + 0x2bf4) != (float)uVar1)) {
      *(float *)(param_1 + 0x2bf0) = (float)*(uint *)(lVar4 + 0x20);
      *(float *)(param_1 + 0x2bf4) = (float)uVar1;
      *(undefined1 *)(param_1 + 0x3170) = 1;
    }
  }
  return;
}

