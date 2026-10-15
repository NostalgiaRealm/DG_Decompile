/*
 * FUN_180206f40 at 180206f40
 * undefined FUN_180206f40(void)
 * Address ranges: 180206f40-180206fa3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180206f40(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  code *extraout_x11;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0xb28);
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xb20);
    FUN_180206ff8();
    uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar2,iVar1,uVar3);
    *(undefined4 *)(param_1 + 0xb28) = 0;
  }
  return;
}

