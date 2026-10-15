/*
 * FUN_10120080 at 10120080
 * undefined FUN_10120080(void)
 * Address ranges: 10120080-10120107
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10120080(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 != 0) {
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar4 = ((uVar1 + param_3) - 1 & -uVar1) / uVar1;
    }
    if (uVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_1012a280(param_1,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                           *(undefined4 *)(param_2 + 0x1c));
      if (iVar3 != -1) {
        *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + uVar4;
      }
    }
    return iVar3;
  }
                    /* WARNING: Does not return */
  uVar2 = SoftwareBreakpoint(0xf004,0x101200b0);
  (*(code *)uVar2)();
}

