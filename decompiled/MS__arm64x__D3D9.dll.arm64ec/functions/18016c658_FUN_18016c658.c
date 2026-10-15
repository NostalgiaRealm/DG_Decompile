/*
 * FUN_18016c658 at 18016c658
 * undefined FUN_18016c658(void)
 * Address ranges: 18016c658-18016c6eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18016c658(longlong param_1,uint param_2,int param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *extraout_x11;
  
  uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar3,0);
  puVar2 = (undefined8 *)(param_1 + (ulonglong)param_2 * 4 + 0x6320);
  for (uVar1 = param_3 - param_2 >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *param_4;
    puVar2 = puVar2 + 1;
    param_4 = param_4 + 1;
  }
  if ((param_3 - param_2 & 1) != 0) {
    *(undefined4 *)puVar2 = *(undefined4 *)param_4;
  }
  *(undefined1 *)(param_1 + 0xf6b6) = 1;
  return;
}

