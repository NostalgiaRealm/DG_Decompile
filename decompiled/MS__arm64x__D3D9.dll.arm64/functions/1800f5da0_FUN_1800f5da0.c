/*
 * FUN_1800f5da0 at 1800f5da0
 * undefined FUN_1800f5da0(void)
 * Address ranges: 1800f5da0-1800f5e9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f5da0(longlong *param_1,int param_2,longlong *param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 local_a0 [2];
  uint local_98 [18];
  
  iVar5 = 0;
  uVar4 = 0;
  lVar3 = *param_3;
  while (lVar3 != 0) {
    lVar3 = param_3[uVar4];
    iVar2 = func_0x000180222d10(lVar3);
    FUN_1800f5a90(param_1,lVar3,iVar2 + 1);
    local_98[uVar4] = iVar5 + param_2 * 0x18 + 8;
    uVar4 = (ulonglong)((int)uVar4 + 1);
    iVar5 = iVar2 + iVar5 + 1;
    lVar3 = param_3[uVar4];
  }
  local_a0[0] = 0xabababab;
  FUN_1800f5a90(param_1,local_a0,-iVar5 & 3U);
  lVar3 = *param_1;
  *(uint *)(lVar3 + 4) = (param_2 * 0x18 | -iVar5 & 3U) + iVar5 + 8;
  *(int *)(lVar3 + 8) = param_2;
  puVar1 = (uint *)(*param_1 + 0x10);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *puVar1 = local_98[*puVar1];
    puVar1 = puVar1 + 6;
  }
  return;
}

