/*
 * FUN_180101358 at 180101358
 * undefined FUN_180101358(void)
 * Address ranges: 180101358-1801014ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180101358(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte bVar10;
  longlong lVar11;
  uint in_stack_00000010;
  longlong lStack0000000000000018;
  undefined8 uStack0000000000000020;
  short in_stack_00000030;
  
  lStack0000000000000018 = 0;
  uStack0000000000000020 = 0;
  uVar7 = (*__imp_KERNEL32_dll_GetCurrentProcess)();
  iVar6 = (*__imp_KERNEL32_dll_GetProcessAffinityMask)(uVar7,&stack0x00000020,&stack0x00000018);
  if (iVar6 != 0) {
    uVar7 = (*__imp_KERNEL32_dll_GetCurrentThread)();
    iVar6 = (*__imp_KERNEL32_dll_GetThreadGroupAffinity)(uVar7,&stack0x00000028);
    if ((iVar6 != 0) && (lStack0000000000000018 != 0)) {
      in_stack_00000010 = 0;
      uVar7 = (*__imp_KERNEL32_dll_GetCurrentProcess)();
      (**(code **)(param_1 + 0x60))(0,0,&stack0x00000010,uVar7,0);
      in_stack_00000010 = in_stack_00000010 >> 5;
      if (in_stack_00000010 != 0) {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = CONCAT44(0,in_stack_00000010);
        lVar11 = CONCAT44(0,in_stack_00000010) << 5;
        if (SUB168(auVar5 * ZEXT816(0x20),8) != 0) {
          lVar11 = -1;
        }
        lVar11 = thunk_FUN_180102f80(lVar11);
        if (lVar11 != 0) {
          uVar7 = (*__imp_KERNEL32_dll_GetCurrentProcess)();
          iVar6 = (**(code **)(param_1 + 0x60))
                            (lVar11,in_stack_00000010 << 5,&stack0x00000010,uVar7,0);
          if (iVar6 != 0) {
            bVar10 = 0;
            in_stack_00000010 = in_stack_00000010 >> 5;
            uVar9 = 0;
            if (in_stack_00000010 != 0) {
              do {
                if ((*(short *)(lVar11 + 0xc + uVar9 * 0x20) == in_stack_00000030) &&
                   (bVar4 = *(byte *)(lVar11 + 0x12 + uVar9 * 0x20), bVar10 <= bVar4)) {
                  bVar10 = bVar4;
                }
                uVar1 = (int)uVar9 + 1;
                uVar9 = (ulonglong)uVar1;
              } while (uVar1 < in_stack_00000010);
            }
            uVar9 = 0;
            if (in_stack_00000010 != 0) {
              do {
                if (*(short *)(lVar11 + 0xc + uVar9 * 0x20) == in_stack_00000030) {
                  lVar2 = lVar11 + uVar9 * 0x20;
                  uVar8 = 1L << ((ulonglong)*(byte *)(lVar2 + 0xe) & 0x3f);
                  uVar3 = uVar8;
                  if (bVar10 <= *(byte *)(lVar2 + 0x12)) {
                    uVar3 = 0;
                  }
                  *(ulonglong *)(param_1 + 0x68) = uVar3 | *(ulonglong *)(param_1 + 0x68);
                  *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) | uVar8;
                }
                uVar1 = (int)uVar9 + 1;
                uVar9 = (ulonglong)uVar1;
              } while (uVar1 < in_stack_00000010);
            }
          }
        }
        FUN_180102fc0(lVar11,0x20);
      }
    }
  }
  return;
}

