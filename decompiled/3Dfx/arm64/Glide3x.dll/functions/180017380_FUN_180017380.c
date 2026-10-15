/*
 * FUN_180017380 at 180017380
 * undefined __cdecl FUN_180017380(longlong param_1, longlong param_2, longlong param_3, char param_4, char param_5)
 * Address ranges: 180017380-180017413
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180017380(longlong param_1,longlong param_2,longlong param_3,char param_4,char param_5)

{
  int iVar1;
  code *pcVar2;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    uVar3 = (ulonglong)(uint)(*(int *)(param_2 + 0x24) * *(int *)(param_2 + 0x20));
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x1800173d4);
      (*pcVar2)();
    }
    iVar1 = 0;
    if (uVar3 != 0) {
      iVar1 = (int)(((ulonglong)
                     (uint)((*(int *)(param_1 + 0x2a28) - *(int *)(param_1 + 0x2a20)) *
                           (*(int *)(param_1 + 0x2a24) - *(int *)(param_1 + 0x2a1c))) *
                    (ulonglong)(uint)(*(int *)(param_2 + 0x2c) * *(int *)(param_2 + 0x28))) / uVar3)
      ;
    }
    *(int *)(param_1 + 0x2c34) = iVar1 + *(int *)(param_1 + 0x2c34);
    if (param_4 != '\0') {
      FUN_18001d7d8(param_2);
    }
  }
  if (((param_3 != 0) && (param_5 != '\0')) && (*(char *)(param_3 + 0x48) != '\0')) {
    FUN_18001d7d8(param_3);
  }
  return;
}

