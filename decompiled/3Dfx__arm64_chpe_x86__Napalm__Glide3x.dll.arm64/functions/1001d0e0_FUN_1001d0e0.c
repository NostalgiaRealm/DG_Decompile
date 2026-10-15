/*
 * FUN_1001d0e0 at 1001d0e0
 * undefined FUN_1001d0e0(void)
 * Address ranges: 1001d0e0-1001d1b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001d0e0(int param_1,int param_2,int param_3,char param_4,char param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    uVar3 = (ulonglong)(uint)(*(int *)(param_2 + 0x24) * *(int *)(param_2 + 0x20));
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      uVar2 = SoftwareBreakpoint(0xf004,0x1001d174);
      (*(code *)uVar2)();
    }
    iVar1 = 0;
    if (uVar3 != 0) {
      iVar1 = (int)(((ulonglong)
                     (uint)((*(int *)(param_1 + 0x2b48) - *(int *)(param_1 + 0x2b40)) *
                           (*(int *)(param_1 + 0x2b44) - *(int *)(param_1 + 0x2b3c))) *
                    (ulonglong)(uint)(*(int *)(param_2 + 0x2c) * *(int *)(param_2 + 0x28))) / uVar3)
      ;
    }
    *(int *)(param_1 + 0x2d64) = iVar1 + *(int *)(param_1 + 0x2d64);
    if (param_4 != '\0') {
      FUN_10024830(param_2);
    }
  }
  if (((param_3 != 0) && (param_5 != '\0')) && (*(char *)(param_3 + 0x48) != '\0')) {
    FUN_10024830(param_3);
  }
  return;
}

