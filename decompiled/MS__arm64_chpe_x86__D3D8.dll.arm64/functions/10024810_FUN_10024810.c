/*
 * FUN_10024810 at 10024810
 * undefined FUN_10024810(void)
 * Address ranges: 10024810-1002497b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10024810(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  uVar5 = 0;
  do {
    uVar1 = *(uint *)(param_1 + 0x548 + uVar5 * 0x74) & 0x1f;
    if (uVar1 == 1) break;
    iVar2 = param_1 + uVar5 * 0x74;
    iVar3 = uVar1 * 3;
    if (*(char *)(iVar3 + 0x1012b5e0) != '\0') {
      uVar6 = *(uint *)(&DAT_1012b6a0 + (uVar5 + (*(uint *)(iVar2 + 0x54c) & 0xf) * 8) * 4) | uVar6;
    }
    if (*(char *)(iVar3 + 0x1012b5e1) != '\0') {
      uVar6 = *(uint *)(&DAT_1012b6a0 + (uVar5 + (*(uint *)(iVar2 + 0x550) & 0xf) * 8) * 4) | uVar6;
    }
    if (*(char *)(iVar3 + 0x1012b5e2) != '\0') {
      uVar6 = *(uint *)(&DAT_1012b6a0 + (uVar5 + (*(uint *)(iVar2 + 0x5ac) & 0xf) * 8) * 4) | uVar6;
    }
    iVar3 = (*(uint *)(iVar2 + 0x554) & 0x1f) * 3;
    if (*(char *)(iVar3 + 0x1012b5e0) != '\0') {
      uVar6 = *(uint *)(&DAT_1012b6a0 + (uVar5 + (*(uint *)(iVar2 + 0x558) & 0xf) * 8) * 4) | uVar6;
    }
    if (*(char *)(iVar3 + 0x1012b5e1) != '\0') {
      uVar6 = *(uint *)(&DAT_1012b6a0 + (uVar5 + (*(uint *)(iVar2 + 0x55c) & 0xf) * 8) * 4) | uVar6;
    }
    if (*(char *)(iVar3 + 0x1012b5e2) != '\0') {
      uVar6 = *(uint *)(&DAT_1012b6a0 + (uVar5 + (*(uint *)(iVar2 + 0x5b0) & 0xf) * 8) * 4) | uVar6;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 8);
  if (uVar6 == 0) {
    uVar6 = 2;
  }
  uVar4 = FUN_10024700(param_1,param_2,uVar6);
  return uVar4;
}

