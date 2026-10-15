/*
 * FUN_1801673b0 at 1801673b0
 * undefined FUN_1801673b0(void)
 * Address ranges: 1801673b0-18016753f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801673b0(longlong param_1,longlong param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  if ((*(float *)(param_1 + 0x6930) != (float)*(uint *)(param_2 + 0x24)) ||
     (*(float *)(param_1 + 0x6934) != (float)*(uint *)(param_2 + 0x28))) {
    *(float *)(param_1 + 0x6930) = (float)*(uint *)(param_2 + 0x24);
    *(float *)(param_1 + 0x6934) = (float)*(uint *)(param_2 + 0x28);
    *(float *)(param_1 + 0xed0) = (float)*(uint *)(param_2 + 0x24);
    *(float *)(param_1 + 0xed4) = (float)*(uint *)(param_2 + 0x28);
    (*(code *)puVar1)(0x180224000);
    uVar2 = (*extraout_x11)(param_2,0);
    *(float *)(param_1 + 0xf00) = (float)uVar2;
    (*(code *)puVar1)(0x180224000);
    uVar2 = (*extraout_x11_00)(param_2,0);
    *(float *)(param_1 + 0xf04) = (float)uVar2;
    FUN_180164290(param_1);
    *(undefined1 *)(param_1 + 0xf68e) = 1;
    *(undefined1 *)(param_1 + 0xf691) = 1;
  }
  (*(code *)puVar1)(0x180224000);
  iVar3 = (*extraout_x11_01)(param_2,0);
  (*(code *)puVar1)(0x180224000);
  uVar4 = (*extraout_x11_02)(param_2,0);
  if ((iVar3 != *(int *)(param_1 + 0x7598)) || (bVar5 = 0, iVar3 != *(int *)(param_1 + 0x759c))) {
    bVar5 = 1;
  }
  *(int *)(param_1 + 0x7598) = iVar3;
  *(undefined4 *)(param_1 + 0x759c) = uVar4;
  *(byte *)(param_1 + 0x7665) = *(byte *)(param_1 + 0x7665) | bVar5;
  *(byte *)(param_1 + 0xf6c1) = *(byte *)(param_1 + 0xf6c1) | bVar5;
  return;
}

