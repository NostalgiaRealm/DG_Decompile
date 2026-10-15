/*
 * FUN_1801a8ac8 at 1801a8ac8
 * undefined FUN_1801a8ac8(void)
 * Address ranges: 1801a8ac8-1801a8b6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801a8ac8(longlong param_1)

{
  undefined *puVar1;
  code *extraout_x11;
  uint uVar2;
  uint uVar3;
  
  FUN_1801ab078(param_1,0,0);
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    do {
      uVar2 = 0;
      if (*(int *)(param_1 + 0x30) != 0) {
        do {
          (*(code *)puVar1)();
          (*extraout_x11)(param_1,uVar2,uVar3,1);
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(param_1 + 0x30));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x34));
  }
  return *(undefined4 *)(param_1 + 0x8c);
}

