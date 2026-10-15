/*
 * FUN_100951b5 at 100951b5
 * undefined4 __stdcall FUN_100951b5(int param_1, undefined4 * param_2)
 * Address ranges: 100951b5-1009520c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100951b5(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0x8876086c;
  if (param_2 != (undefined4 *)0x0) {
    if (*(char *)(param_1 + -0x62f0) == '\0') {
      *(undefined4 *)(param_1 + 0x6cc) = *param_2;
      *(undefined4 *)(param_1 + 0x6d0) = param_2[1];
      *(undefined4 *)(param_1 + 0x6d4) = param_2[2];
      *(undefined4 *)(param_1 + 0x6d8) = param_2[3];
      *(undefined1 *)(param_1 + 0x5c3c) = 1;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + -0x6300) + *(int *)(param_1 + -0x62f4) * 4);
      *(undefined4 *)(iVar1 + 0x4fb8) = *param_2;
      *(undefined4 *)(iVar1 + 0x4fbc) = param_2[1];
      *(undefined4 *)(iVar1 + 0x4fc0) = param_2[2];
      *(undefined4 *)(iVar1 + 0x4fc4) = param_2[3];
      *(undefined1 *)(iVar1 + 0xac22) = 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}

