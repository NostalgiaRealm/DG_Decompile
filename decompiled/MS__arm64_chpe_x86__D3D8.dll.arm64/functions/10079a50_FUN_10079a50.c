/*
 * FUN_10079a50 at 10079a50
 * undefined FUN_10079a50(void)
 * Address ranges: 10079a50-10079b2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10079a50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint local_80 [32];
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  local_80[0] = *(uint *)(param_1 + 0x10);
  if (*(int *)(iVar1 + 0xd4) == 0) {
    uVar6 = 0x410200;
    iVar7 = 2;
  }
  else {
    local_80[3] = 0;
    iVar7 = 4;
    local_80[0] = local_80[0] | *(int *)(iVar1 + 0xd8) << 0xe;
    uVar6 = 0x40420300;
    local_80[2] = *(int *)(iVar1 + 0xd4);
  }
  local_80[0] = local_80[0] | uVar6;
  local_80[1] = (uint)*(byte *)(param_1 + 0x14);
  uVar6 = *(uint *)(param_1 + 0x18);
  iVar5 = 0;
  local_80[iVar7] = uVar6;
  puVar4 = (uint *)(param_1 + 0x1c);
  while (uVar6 != 0x12345678) {
    uVar6 = *puVar4;
    iVar5 = iVar5 + 1;
    (local_80 + iVar7)[iVar5] = uVar6;
    puVar4 = puVar4 + 1;
  }
  local_80[iVar5 + iVar7] = 0;
  FUN_100ee900(iVar1 + 0x18,uVar2,uVar3,local_80);
  return;
}

