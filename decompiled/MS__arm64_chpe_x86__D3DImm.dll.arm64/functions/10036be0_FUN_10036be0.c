/*
 * FUN_10036be0 at 10036be0
 * undefined FUN_10036be0(void)
 * Address ranges: 10036be0-10036cab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10036be0(int param_1,undefined8 *param_2)

{
  uint uVar1;
  code *extraout_w11;
  undefined8 uVar2;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1,0);
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = param_2[8];
    *(undefined8 *)(param_1 + 0xc38) = param_2[9];
    *(undefined8 *)(param_1 + 0xc30) = uVar2;
    uVar2 = param_2[10];
    *(undefined8 *)(param_1 + 0xc48) = param_2[0xb];
    *(undefined8 *)(param_1 + 0xc40) = uVar2;
    uVar2 = param_2[0xc];
    *(undefined8 *)(param_1 + 0xc58) = param_2[0xd];
    *(undefined8 *)(param_1 + 0xc50) = uVar2;
    uVar2 = *param_2;
    *(undefined8 *)(param_1 + 0xc68) = param_2[1];
    *(undefined8 *)(param_1 + 0xc60) = uVar2;
    uVar2 = param_2[2];
    *(undefined8 *)(param_1 + 0xc78) = param_2[3];
    *(undefined8 *)(param_1 + 0xc70) = uVar2;
    uVar2 = param_2[4];
    *(undefined8 *)(param_1 + 0xc88) = param_2[5];
    *(undefined8 *)(param_1 + 0xc80) = uVar2;
  }
  uVar1 = 0x80000000;
  if (param_2 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x470) = uVar1 | *(uint *)(param_1 + 0x470) & 0x7fffffff;
  return;
}

