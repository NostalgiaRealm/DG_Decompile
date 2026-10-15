/*
 * FUN_1800747c4 at 1800747c4
 * undefined __fastcall FUN_1800747c4(undefined8 param_1, uint param_2, uint param_3, undefined8 * param_4)
 * Address ranges: 1800747c4-18007486f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800747c4(undefined8 param_1,uint param_2,uint param_3,undefined8 *param_4)

{
  int iVar1;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  iVar6 = 0;
  *param_4 = 0;
  param_4[1] = 0;
  uVar5 = param_2;
  uVar4 = param_3;
  while (uVar4 != 0) {
    uVar3 = *(int *)(&DAT_180102980 + (ulonglong)(uVar4 - 1) * 4) - iVar6;
    iVar6 = 0;
    if (uVar5 < uVar3) {
      uVar5 = uVar5 & 0xfffffffe;
      if (2 < uVar5) {
        iVar6 = uVar5 - 2;
        *(uint *)(param_4 + uVar2 * 2 + 1) = *(int *)(param_4 + uVar2 * 2 + 1) + uVar5;
      }
      uVar2 = (ulonglong)((int)uVar2 + 1);
      *(uint *)(param_4 + uVar2 * 2) = param_3 - uVar4;
      *(int *)((longlong)param_4 + uVar2 * 0x10 + 4) = iVar6;
      param_4[uVar2 * 2 + 1] = 0;
      uVar5 = param_2;
    }
    else {
      *(uint *)(param_4 + uVar2 * 2 + 1) = *(int *)(param_4 + uVar2 * 2 + 1) + uVar3;
      uVar5 = uVar5 - uVar3;
      uVar4 = uVar4 - 1;
    }
    iVar1 = (int)uVar2;
  }
  if (iVar1 != 5) {
    uVar2 = (ulonglong)(iVar1 + 1);
    *(undefined4 *)(param_4 + uVar2 * 2) = 0xffffffff;
    *(undefined4 *)(param_4 + uVar2 * 2 + 1) = 0xffffffff;
    *(undefined4 *)((longlong)param_4 + uVar2 * 0x10 + 4) = 0xffffffff;
  }
  return;
}

