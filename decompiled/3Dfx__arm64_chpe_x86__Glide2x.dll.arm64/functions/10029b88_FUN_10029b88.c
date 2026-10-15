/*
 * FUN_10029b88 at 10029b88
 * undefined FUN_10029b88(void)
 * Address ranges: 10029b88-10029ca7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10029b88(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar6 = 0;
  iVar2 = *(int *)(iVar1 + 4);
  switch(*(undefined4 *)(iVar2 + 0xeb)) {
  default:
    goto switchD_10029bbc_caseD_0;
  case 1:
    if (*(int *)(iVar1 + 0x2c44) == 1) {
LAB_10029bd4:
      uVar6 = 2;
    }
    else {
      if (*(int *)(iVar1 + 0x2c44) != 2) {
        return 0;
      }
      uVar6 = 4;
    }
    break;
  case 2:
    if (*(int *)(iVar2 + 0xe7) == 1) goto LAB_10029bd4;
    if (*(int *)(iVar2 + 0xe7) != 2) {
      return 0;
    }
    uVar6 = 4;
  }
  uVar7 = *(uint *)(iVar2 + 0xef);
  if (*(uint *)(iVar2 + 0xef) == 0) {
    uVar3 = *(uint *)(iVar1 + 0x98);
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      uVar5 = SoftwareBreakpoint(0xf004,0x10029c34);
      (*(code *)uVar5)();
    }
    uVar7 = 0;
    if (uVar3 != 0) {
      uVar7 = *(uint *)(iVar1 + 0xa0) / uVar3;
    }
    uVar3 = *(uint *)(iVar1 + 0x9c);
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      uVar5 = SoftwareBreakpoint(0xf004,0x10029c50);
      (*(code *)uVar5)();
    }
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = *(uint *)(iVar1 + 0xa4) / uVar3;
    }
    if (uVar7 == 0) {
      uVar7 = 1;
    }
    if (uVar4 == 0) {
      uVar4 = 1;
    }
    if (uVar4 <= uVar7) {
      uVar7 = uVar4;
    }
  }
  if (*(uint *)(iVar1 + 0x2c80) != uVar7) {
    *(uint *)(iVar1 + 0x2c80) = uVar7;
    *(undefined1 *)(*(int *)(param_1 + 4) + 0x3150) = 1;
  }
switchD_10029bbc_caseD_0:
  return uVar6;
}

