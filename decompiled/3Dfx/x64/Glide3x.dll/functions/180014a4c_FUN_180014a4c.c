/*
 * FUN_180014a4c at 180014a4c
 * undefined __fastcall FUN_180014a4c(longlong param_1, uint * param_2, uint * param_3)
 * Address ranges: 180014a4c-180014b3a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180014a4c(longlong param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = FUN_180014854(*(longlong **)(param_1 + 0x3300),*(int *)(param_1 + 0x29fc));
  iVar1 = *(int *)(param_1 + 0x2a00);
  plVar2 = *(longlong **)(param_1 + 0x3300);
  *param_2 = uVar3;
  uVar4 = FUN_180014854(plVar2,iVar1);
  uVar3 = *param_2;
  *param_3 = uVar4;
  if (uVar3 == 0xffffffff) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x3300) + 0x58))
                      (*(longlong **)(param_1 + 0x3300),*param_2);
  }
  if (*param_3 == 0xffffffff) {
    lVar6 = 0;
  }
  else {
    lVar6 = (**(code **)(**(longlong **)(param_1 + 0x3300) + 0x58))
                      (*(longlong **)(param_1 + 0x3300),*param_3);
  }
  if (lVar5 != 0) {
    *(byte *)(lVar5 + 0x4a) = *(byte *)(lVar5 + 0x4a) | 2;
  }
  if (lVar6 != 0) {
    *(byte *)(lVar6 + 0x4a) = *(byte *)(lVar6 + 0x4a) | 2;
  }
  if (lVar5 != 0) {
    lVar6 = lVar5;
  }
  if (lVar6 != 0) {
    uVar3 = *(uint *)(lVar6 + 0x24);
    if ((*(float *)(param_1 + 0x2c90) != (float)*(uint *)(lVar6 + 0x20)) ||
       (*(float *)(param_1 + 0x2c94) != (float)uVar3)) {
      *(float *)(param_1 + 0x2c90) = (float)*(uint *)(lVar6 + 0x20);
      *(float *)(param_1 + 0x2c94) = (float)uVar3;
      *(undefined1 *)(param_1 + 0x32f0) = 1;
    }
  }
  return;
}

