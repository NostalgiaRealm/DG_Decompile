/*
 * FUN_18010a378 at 18010a378
 * undefined FUN_18010a378(void)
 * Address ranges: 18010a378-18010a4a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18010a378(longlong param_1,char param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  if ((param_2 != '\0') && (*(longlong *)(&DAT_000066c0 + param_1) != 0)) {
    *(undefined1 *)(*(longlong *)(&DAT_000066c0 + param_1) + 0x70) = 0;
    (*(code *)puVar2)(0x180224000);
    (*extraout_x11)();
    *(undefined8 *)(&DAT_000066c0 + param_1) = 0;
    *(undefined8 *)(param_1 + 0x67e0) = 0;
    uVar3 = (*(code *)puVar2)(0x180224000);
    (*extraout_x11_00)(uVar3,0,0);
  }
  if (*(longlong *)(param_1 + 0x66c8) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x66c8) + 0x84) = 0xffffffff;
    (*(code *)puVar2)(0x180224000);
    (*extraout_x11_01)();
    *(undefined8 *)(param_1 + 0x66c8) = 0;
    *(undefined4 *)(param_1 + 0x6748) = 0;
    *(undefined4 *)(param_1 + 0x6788) = 0;
    *(uint *)(param_1 + 0x67c8) = *(uint *)(param_1 + 0x67c8) & 0xfffffffe;
    uVar1 = *(uint *)(&DAT_000067dc + param_1);
    *(uint *)(param_1 + 0x67d0) = *(uint *)(param_1 + 0x67d0) & 0xfffffffe;
    *(uint *)(param_1 + 0x67d4) = *(uint *)(param_1 + 0x67d4) & 0xfffffffe;
    *(uint *)(param_1 + 0x67d8) = *(uint *)(param_1 + 0x67d8) & 0xfffffffe;
    *(uint *)(&DAT_000067dc + param_1) = uVar1 & 0xfffffffe;
    uVar3 = (*(code *)puVar2)(0x180225000);
    (*extraout_x11_02)(uVar3,0,0,0,0);
  }
  return;
}

