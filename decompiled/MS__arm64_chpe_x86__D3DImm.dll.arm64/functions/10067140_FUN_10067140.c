/*
 * FUN_10067140 at 10067140
 * undefined FUN_10067140(void)
 * Address ranges: 10067140-1006720f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10067140(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if ((*(uint *)(param_1 + 0x70) & 0x10800) != 0x10000) {
    return 0;
  }
  uVar5 = *(undefined4 *)(param_1 + 300);
  if (*(uint *)(param_1 + 0x18) <= *(uint *)(param_1 + 0x14)) {
    return uVar5;
  }
  if (*(int *)(param_1 + 0x130) != -1) {
    uVar2 = *(uint *)(param_1 + 0x18) - *(uint *)(param_1 + 0x14);
    if (*(char *)(param_1 + 0x137) != '\0' || 0x2000 < uVar2) {
      uVar1 = *(uint *)(param_1 + 0x10);
      if (uVar1 == 0) {
                    /* WARNING: Does not return */
        uVar4 = SoftwareBreakpoint(0xf004,0x100671cc);
        (*(code *)uVar4)();
      }
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = (uint)(*(int *)(param_1 + 0x130) << 7) / uVar1;
      }
      if ((uVar3 < 0x59) || (uVar2 < 0x2000 && *(char *)(param_1 + 0x137) != '\0')) {
        uVar5 = 0;
        goto LAB_100671f4;
      }
    }
  }
  FUN_10066fa0(param_1);
LAB_100671f4:
  *(undefined1 *)(param_1 + 0x138) = 1;
  return uVar5;
}

