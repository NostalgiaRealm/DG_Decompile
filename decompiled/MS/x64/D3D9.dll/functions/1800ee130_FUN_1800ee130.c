/*
 * FUN_1800ee130 at 1800ee130
 * undefined __fastcall FUN_1800ee130(longlong * param_1, int param_2, longlong * param_3)
 * Address ranges: 1800ee130-1800ee204
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ee130(longlong *param_1,int param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  ulonglong uVar4;
  int iVar5;
  int local_res10 [6];
  uint auStack_88 [18];
  
  iVar5 = 0;
  uVar4 = 0;
  uVar1 = param_2 * 0x18;
  lVar2 = *param_3;
  while (lVar2 != 0) {
    local_res10[0] = param_2;
    lVar2 = FUN_1800fc564((char *)param_3[uVar4]);
    FUN_1800edd90(param_1,(undefined8 *)param_3[uVar4],(ulonglong)((int)lVar2 + 1));
    auStack_88[uVar4] = uVar1 + 8 + iVar5;
    iVar5 = iVar5 + 1 + (int)lVar2;
    uVar4 = (ulonglong)((int)uVar4 + 1);
    param_2 = local_res10[0];
    lVar2 = param_3[uVar4];
  }
  local_res10[0] = -0x54545455;
  FUN_1800edd90(param_1,(undefined8 *)local_res10,(ulonglong)(-iVar5 & 3U));
  lVar2 = *param_1;
  *(uint *)(lVar2 + 4) = iVar5 + 8 + (uVar1 | -iVar5 & 3U);
  *(int *)(lVar2 + 8) = param_2;
  puVar3 = (uint *)(*param_1 + 0x10);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *puVar3 = auStack_88[*puVar3];
    puVar3 = puVar3 + 6;
  }
  return;
}

