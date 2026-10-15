/*
 * FUN_18016c268 at 18016c268
 * undefined FUN_18016c268(void)
 * Address ranges: 18016c268-18016c2f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18016c268(longlong param_1,int param_2,int param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *extraout_x11;
  
  uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar4,0);
  uVar2 = param_3 - param_2 & 0x3fffffff;
  uVar1 = uVar2 << 1;
  puVar3 = (undefined8 *)(param_1 + (ulonglong)(uint)(param_2 << 2) * 4 + 0x11b0);
  while (uVar2 != 0) {
    *puVar3 = *param_4;
    uVar1 = uVar1 - 1;
    puVar3 = puVar3 + 1;
    param_4 = param_4 + 1;
    uVar2 = uVar1;
  }
  *(undefined1 *)(param_1 + 0xf6b5) = 1;
  return;
}

