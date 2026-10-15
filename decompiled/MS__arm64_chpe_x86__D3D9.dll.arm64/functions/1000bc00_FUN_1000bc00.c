/*
 * FUN_1000bc00 at 1000bc00
 * undefined FUN_1000bc00(void)
 * Address ranges: 1000bc00-1000bd77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000bc00(int param_1,char param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((param_2 != '\0') && (*(int *)(&DAT_0000658c + param_1) != 0)) {
    *(undefined1 *)(*(int *)(&DAT_0000658c + param_1) + 0x48) = 0;
    uVar3 = (*pcVar2)();
    (*extraout_w11)(uVar3);
    *(undefined4 *)(&DAT_0000658c + param_1) = 0;
    *(undefined8 *)(param_1 + 0x6668) = 0;
    uVar3 = (*pcVar2)();
    (*extraout_w11_00)(uVar3,0,0);
  }
  if (*(int *)(param_1 + 26000) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 26000) + 0x5c) = 0xffffffff;
    uVar3 = (*pcVar2)();
    (*extraout_w11_01)(uVar3);
    *(undefined4 *)(param_1 + 26000) = 0;
    *(undefined4 *)(param_1 + 0x65d0) = 0;
    *(undefined4 *)(param_1 + 0x6610) = 0;
    *(uint *)(param_1 + 0x6650) = *(uint *)(param_1 + 0x6650) & 0xfffffffe;
    uVar1 = *(uint *)(&DAT_00006664 + param_1);
    *(uint *)(param_1 + 0x6658) = *(uint *)(param_1 + 0x6658) & 0xfffffffe;
    *(uint *)(param_1 + 0x665c) = *(uint *)(param_1 + 0x665c) & 0xfffffffe;
    *(uint *)(param_1 + 0x6660) = *(uint *)(param_1 + 0x6660) & 0xfffffffe;
    *(uint *)(&DAT_00006664 + param_1) = uVar1 & 0xfffffffe;
    uVar3 = (*pcVar2)();
    (*extraout_w11_02)(uVar3,0,0,0,0);
  }
  return;
}

