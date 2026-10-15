/*
 * FUN_180069260 at 180069260
 * undefined FUN_180069260(void)
 * Address ranges: 180069260-180069397
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180069260(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar4 = FUN_1800f5ce8(param_2,*(undefined4 *)(param_3 + 0x20));
  *(uint *)(param_3 + 0x530) = (uint)*(undefined8 *)(param_3 + 0x520) >> 0xc & 0xf;
  uVar6 = func_0x000180222c50(param_3 + 0x544,0,0x300);
  uVar5 = *(int *)(param_3 + 0x52c) << 2;
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1800692d0);
    (*pcVar3)();
  }
  uVar7 = 0;
  if (uVar5 != 0) {
    uVar7 = 0x400 / uVar5;
  }
  uVar6 = FUN_1800691a0(uVar6,uVar7,*(int *)(param_3 + 0x530),
                        param_3 + (ulonglong)(*(int *)(param_3 + 0x530) * 6 - 6) * 0x10 + 0x544);
  uVar5 = (uint)uVar6;
  *(undefined4 *)(param_3 + 0x534) = 0;
  *(uint *)(param_3 + 0x538) = uVar5;
  if (uVar5 != 0) {
    uVar7 = 0;
    uVar8 = 0;
    do {
      uVar2 = *(uint *)(param_3 + 0x54c +
                       (ulonglong)(uVar7 + (*(int *)(param_3 + 0x530) + -1) * 6) * 0x10);
      if (uVar8 < uVar2) {
        *(uint *)(param_3 + 0x534) = uVar2;
        uVar8 = uVar2;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  uVar1 = *(ulonglong *)(param_3 + 0x520) & 0x800;
  *(bool *)(param_3 + 0x53d) = uVar1 != 0;
  if (uVar1 != 0) {
    uVar5 = 1;
    if (1 < *(uint *)(param_3 + 0x530)) {
      do {
        uVar6 = FUN_1800691a0(uVar6,*(undefined4 *)(param_3 + 0x534),uVar5,
                              param_3 + 0x544 + (ulonglong)(uVar5 * 6 - 6) * 0x10);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_3 + 0x530));
    }
  }
  FUN_1800f5f08(*(undefined4 *)(param_3 + 0x20),param_2,0);
  return uVar4;
}

