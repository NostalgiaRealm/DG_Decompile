/*
 * FUN_180116678 at 180116678
 * undefined FUN_180116678(void)
 * Address ranges: 180116678-18011671f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180116678(longlong *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *extraout_x11;
  longlong lVar3;
  longlong lVar4;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(lVar3 + -8);
    puVar1 = (undefined8 *)(lVar3 + lVar4 * 0x28);
    while (lVar4 != 0) {
      lVar4 = lVar4 + -1;
      if ((*(uint *)((longlong)puVar1 + -0xc) & 1) == 0) {
        FUN_1802229d8();
      }
      else {
        (*(code *)puVar2)();
        (*extraout_x11)();
      }
      puVar1[-3] = 0;
      puVar1[-2] = 0;
      puVar1[-4] = 0;
      puVar1[-5] = 0;
      puVar1 = puVar1 + -5;
    }
    FUN_1802229d8(lVar3 + -8,*(longlong *)(lVar3 + -8) * 0x28 + 8);
  }
  return;
}

