/*
 * FUN_180213160 at 180213160
 * undefined FUN_180213160(void)
 * Address ranges: 180213160-18021325b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180213160(longlong *param_1,int param_2,longlong *param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  uint local_8c;
  uint local_88 [18];
  
  iVar6 = 0;
  uVar5 = 0;
  lVar4 = *param_3;
  uVar1 = param_2 * 0x18;
  while (lVar4 != 0) {
    lVar4 = param_3[uVar5];
    local_8c = uVar1;
    iVar3 = FUN_180222d10(lVar4);
    FUN_180214fe8(param_1,lVar4,iVar3 + 1);
    local_88[uVar5] = iVar6 + param_2 * 0x18 + 8;
    uVar5 = (ulonglong)((int)uVar5 + 1);
    iVar6 = iVar3 + iVar6 + 1;
    uVar1 = local_8c;
    lVar4 = param_3[uVar5];
  }
  local_8c = 0xabababab;
  FUN_180214fe8(param_1,&local_8c,-iVar6 & 3U);
  lVar4 = *param_1;
  *(uint *)(lVar4 + 4) = (uVar1 | -iVar6 & 3U) + iVar6 + 8;
  *(int *)(lVar4 + 8) = param_2;
  puVar2 = (uint *)(*param_1 + 0x10);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *puVar2 = local_88[*puVar2];
    puVar2 = puVar2 + 6;
  }
  return;
}

