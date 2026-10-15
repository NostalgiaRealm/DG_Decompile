/*
 * FUN_100145c0 at 100145c0
 * undefined FUN_100145c0(void)
 * Address ranges: 100145c0-1001469b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100145c0(int param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x3300);
  FUN_1006e560(*piVar1,param_2,param_1);
  FUN_10013830(param_1,1);
  iVar2 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 4) + 0x33)) {
    do {
      FUN_100301b8(*(undefined4 *)(param_1 + 0xd140 + iVar2 * 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(*(int *)(param_1 + 4) + 0x33));
  }
  FUN_10036188(param_1 + 0x3d10);
  FUN_1001adb0(param_1 + 0x3438);
  FUN_100123d0(param_1);
  FUN_100685f0(*piVar1,*(undefined4 *)(param_1 + 0x3304));
  (*(code *)PTR_FUN_100a0090)(*piVar1 + 0x4a0);
  return;
}

