/*
 * FUN_18012fa50 at 18012fa50
 * undefined FUN_18012fa50(void)
 * Address ranges: 18012fa50-18012faeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18012fa50(longlong param_1,int param_2,uint param_3,undefined2 param_4,uint param_5,
                  int param_6,uint param_7,uint param_8,undefined8 param_9,int param_10)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  
  *(short *)(param_1 + 0x12) = (short)param_3;
  *(char *)(param_1 + 0x26) = (char)(param_5 >> 3);
  *(short *)(param_1 + 0x10) = (short)param_2;
  *(undefined2 *)(param_1 + 0x14) = param_4;
  *(int *)(param_1 + 0x20) = param_6;
  *(char *)(param_1 + 0x24) = (char)param_7;
  *(char *)(param_1 + 0x25) = (char)param_8;
  if (param_6 == 0) {
    uVar3 = param_2 * param_5 >> 3;
  }
  else {
    if (param_7 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x18012fa8c);
      (*pcVar2)();
    }
    uVar3 = 0;
    if (param_7 != 0) {
      uVar3 = ((param_2 + param_7) - 1 & -param_7) / param_7;
    }
    uVar3 = uVar3 * param_6;
  }
  uVar3 = (uVar3 + param_10) - 1 & -param_10;
  *(uint *)(param_1 + 0x18) = uVar3;
  if (param_6 != 0) {
    iVar1 = param_3 + param_8;
    if (param_8 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x18012fad4);
      (*pcVar2)();
    }
    param_3 = 0;
    if (param_8 != 0) {
      param_3 = (iVar1 - 1U & -param_8) / param_8;
    }
  }
  *(short *)(param_1 + 0x16) = (short)param_3;
  *(uint *)(param_1 + 0x1c) = (param_3 & 0xffff) * uVar3;
  return;
}

