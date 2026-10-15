/*
 * FUN_180119e68 at 180119e68
 * undefined FUN_180119e68(void)
 * Address ranges: 180119e68-180119ee3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180119e68(longlong param_1)

{
  int iVar1;
  undefined *puVar2;
  code *extraout_x11;
  uint uVar3;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  for (iVar1 = *(int *)(param_1 + 0x80); iVar1 != 0; iVar1 = iVar1 + -1) {
    uVar3 = (uint)*(ushort *)(param_1 + 0x3c);
    if (*(ushort *)(param_1 + 0x3c) != 0) {
      do {
        (*(code *)puVar2)();
        (*extraout_x11)(param_1,iVar1 + -1,uVar3 - 1);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}

