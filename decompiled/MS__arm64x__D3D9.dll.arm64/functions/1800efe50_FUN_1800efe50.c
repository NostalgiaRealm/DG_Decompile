/*
 * FUN_1800efe50 at 1800efe50
 * undefined FUN_1800efe50(void)
 * Address ranges: 1800efe50-1800efebf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800efe50(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x1800efe80);
    (*pcVar2)();
  }
  uVar4 = 0;
  if (uVar1 != 0) {
    uVar4 = ((uVar1 + param_3) - 1 & -uVar1) / uVar1;
  }
  iVar3 = FUN_1800fba78((int)param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20)
                        ,*(undefined4 *)(param_2 + 0x2c));
  if (iVar3 != -1) {
    *(uint *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + uVar4;
    *(uint *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x40) * uVar4;
  }
  return;
}

