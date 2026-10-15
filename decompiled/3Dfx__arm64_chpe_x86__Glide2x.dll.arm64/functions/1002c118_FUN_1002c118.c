/*
 * FUN_1002c118 at 1002c118
 * undefined FUN_1002c118(void)
 * Address ranges: 1002c118-1002c1ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002c118(int param_1,int param_2,int param_3,char param_4,char param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    uVar3 = (ulonglong)(uint)(*(int *)(param_2 + 0x24) * *(int *)(param_2 + 0x20));
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      uVar2 = SoftwareBreakpoint(0xf004,0x1002c1ac);
      (*(code *)uVar2)();
    }
    iVar1 = 0;
    if (uVar3 != 0) {
      iVar1 = (int)(((ulonglong)
                     (uint)((*(int *)(param_1 + 0x2990) - *(int *)(param_1 + 0x2988)) *
                           (*(int *)(param_1 + 0x298c) - *(int *)(param_1 + 0x2984))) *
                    (ulonglong)(uint)(*(int *)(param_2 + 0x2c) * *(int *)(param_2 + 0x28))) / uVar3)
      ;
    }
    *(int *)(param_1 + 0x2b7c) = iVar1 + *(int *)(param_1 + 0x2b7c);
    if (param_4 != '\0') {
      FUN_10034cc8(param_2);
    }
  }
  if (((param_3 != 0) && (param_5 != '\0')) && (*(char *)(param_3 + 0x48) != '\0')) {
    FUN_10034cc8(param_3);
  }
  return;
}

