/*
 * FUN_18005b8e8 at 18005b8e8
 * undefined __cdecl FUN_18005b8e8(longlong param_1, longlong param_2, int param_3)
 * Address ranges: 18005b8e8-18005b957
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005b8e8(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x18005b918);
    (*pcVar2)();
  }
  uVar4 = 0;
  if (uVar1 != 0) {
    uVar4 = ((uVar1 + param_3) - 1 & -uVar1) / uVar1;
  }
  iVar3 = FUN_180061620(param_1,*(longlong *)(param_2 + 0x18),*(byte **)(param_2 + 0x20),
                        *(uint *)(param_2 + 0x2c),uVar4);
  if (iVar3 != -1) {
    *(uint *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + uVar4;
    *(uint *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x40) * uVar4;
  }
  return;
}

