/*
 * FUN_100ea568 at 100ea568
 * undefined FUN_100ea568(void)
 * Address ranges: 100ea568-100ea5ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100ea568(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    uVar2 = SoftwareBreakpoint(0xf004,0x100ea5a0);
    (*(code *)uVar2)();
  }
  uVar4 = 0;
  if (uVar1 != 0) {
    uVar4 = ((uVar1 + param_3) - 1 & -uVar1) / uVar1;
  }
  iVar3 = FUN_100f6cb0(param_1,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                       *(undefined4 *)(param_2 + 0x1c));
  if (iVar3 != -1) {
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + uVar4;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + uVar4 * *(uint *)(param_1 + 0x28);
  }
  return iVar3;
}

