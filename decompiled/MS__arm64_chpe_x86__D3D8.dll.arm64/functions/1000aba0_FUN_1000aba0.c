/*
 * FUN_1000aba0 at 1000aba0
 * undefined FUN_1000aba0(void)
 * Address ranges: 1000aba0-1000ad17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000aba0(int param_1,char param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((param_2 != '\0') && (*(int *)(&DAT_000057b8 + param_1) != 0)) {
    *(undefined1 *)(*(int *)(&DAT_000057b8 + param_1) + 0x48) = 0;
    uVar3 = (*pcVar2)();
    (*extraout_w11)(uVar3);
    *(undefined4 *)(&DAT_000057b8 + param_1) = 0;
    *(undefined8 *)(param_1 + 0x5894) = 0;
    uVar3 = (*pcVar2)();
    (*extraout_w11_00)(uVar3,0,0);
  }
  if (*(int *)(param_1 + 0x57bc) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x57bc) + 0x5c) = 0xffffffff;
    uVar3 = (*pcVar2)();
    (*extraout_w11_01)(uVar3);
    *(undefined4 *)(param_1 + 0x57bc) = 0;
    *(undefined4 *)(param_1 + 0x57fc) = 0;
    *(undefined4 *)(param_1 + 0x583c) = 0;
    *(uint *)(param_1 + 0x587c) = *(uint *)(param_1 + 0x587c) & 0xfffffffe;
    uVar1 = *(uint *)(&DAT_00005890 + param_1);
    *(uint *)(param_1 + 0x5884) = *(uint *)(param_1 + 0x5884) & 0xfffffffe;
    *(uint *)(param_1 + 0x5888) = *(uint *)(param_1 + 0x5888) & 0xfffffffe;
    *(uint *)(param_1 + 0x588c) = *(uint *)(param_1 + 0x588c) & 0xfffffffe;
    *(uint *)(&DAT_00005890 + param_1) = uVar1 & 0xfffffffe;
    uVar3 = (*pcVar2)();
    (*extraout_w11_02)(uVar3,0,0,0,0);
  }
  return;
}

