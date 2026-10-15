/*
 * FUN_180023ce8 at 180023ce8
 * undefined __cdecl FUN_180023ce8(longlong param_1, longlong param_2, longlong param_3, char param_4, char param_5)
 * Address ranges: 180023ce8-180023d7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180023ce8(longlong param_1,longlong param_2,longlong param_3,char param_4,char param_5)

{
  int iVar1;
  code *pcVar2;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    uVar3 = (ulonglong)(uint)(*(int *)(param_2 + 0x24) * *(int *)(param_2 + 0x20));
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x180023d3c);
      (*pcVar2)();
    }
    iVar1 = 0;
    if (uVar3 != 0) {
      iVar1 = (int)(((ulonglong)
                     (uint)((*(int *)(param_1 + 0x29b0) - *(int *)(param_1 + 0x29a8)) *
                           (*(int *)(param_1 + 0x29ac) - *(int *)(param_1 + 0x29a4))) *
                    (ulonglong)(uint)(*(int *)(param_2 + 0x2c) * *(int *)(param_2 + 0x28))) / uVar3)
      ;
    }
    *(int *)(param_1 + 0x2b9c) = iVar1 + *(int *)(param_1 + 0x2b9c);
    if (param_4 != '\0') {
      FUN_18002ab30(param_2);
    }
  }
  if (((param_3 != 0) && (param_5 != '\0')) && (*(char *)(param_3 + 0x48) != '\0')) {
    FUN_18002ab30(param_3);
  }
  return;
}

