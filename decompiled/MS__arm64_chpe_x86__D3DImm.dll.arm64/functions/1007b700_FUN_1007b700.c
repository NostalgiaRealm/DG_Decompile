/*
 * FUN_1007b700 at 1007b700
 * undefined FUN_1007b700(void)
 * Address ranges: 1007b700-1007b797
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1007b700(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    uVar2 = SoftwareBreakpoint(0xf004,0x1007b738);
    (*(code *)uVar2)();
  }
  uVar4 = 0;
  if (uVar1 != 0) {
    uVar4 = ((uVar1 + param_3) - 1 & -uVar1) / uVar1;
  }
  iVar3 = switchD_1007b190::caseD_1007b2f0
                    (param_1,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                     *(undefined4 *)(param_2 + 0x1c));
  if (iVar3 != -1) {
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + uVar4;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + uVar4 * *(uint *)(param_1 + 0x28);
  }
  return iVar3;
}

