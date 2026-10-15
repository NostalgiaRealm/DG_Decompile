/*
 * FUN_18020f3e0 at 18020f3e0
 * undefined FUN_18020f3e0(void)
 * Address ranges: 18020f3e0-18020f44f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18020f3e0(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x18020f410);
    (*pcVar2)();
  }
  uVar4 = 0;
  if (uVar1 != 0) {
    uVar4 = ((uVar1 + param_3) - 1 & -uVar1) / uVar1;
  }
  iVar3 = FUN_18021cf30((int)param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20)
                        ,*(undefined4 *)(param_2 + 0x2c));
  if (iVar3 != -1) {
    *(uint *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + uVar4;
    *(uint *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x40) * uVar4;
  }
  return;
}

