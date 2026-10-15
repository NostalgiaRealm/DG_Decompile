/*
 * FUN_180101340 at 180101340
 * undefined FUN_180101340(void)
 * Address ranges: 180101340-180101357
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_180101340(longlong param_1)

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
  uint auStack_40 [2];
  longlong alStack_38 [2];
  undefined1 auStack_28 [8];
  short sStack_20;
  
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    alStack_38[0] = 0;
    alStack_38[1] = 0;
    uVar7 = (*__imp_KERNEL32_dll_GetCurrentProcess)();
    iVar6 = (*__imp_KERNEL32_dll_GetProcessAffinityMask)(uVar7,alStack_38 + 1,alStack_38);
    if (iVar6 != 0) {
      uVar7 = (*__imp_KERNEL32_dll_GetCurrentThread)();
      iVar6 = (*__imp_KERNEL32_dll_GetThreadGroupAffinity)(uVar7,auStack_28);
      if ((iVar6 != 0) && (alStack_38[0] != 0)) {
        auStack_40[0] = 0;
        uVar7 = (*__imp_KERNEL32_dll_GetCurrentProcess)();
        (**(code **)(param_1 + 0x60))(0,0,auStack_40,uVar7,0);
        auStack_40[0] = auStack_40[0] >> 5;
        if (auStack_40[0] != 0) {
          auVar5._8_8_ = 0;
          auVar5._0_8_ = CONCAT44(0,auStack_40[0]);
          lVar11 = CONCAT44(0,auStack_40[0]) << 5;
          if (SUB168(auVar5 * ZEXT816(0x20),8) != 0) {
            lVar11 = -1;
          }
          lVar11 = thunk_FUN_180102f80(lVar11);
          if (lVar11 != 0) {
            uVar7 = (*__imp_KERNEL32_dll_GetCurrentProcess)();
            iVar6 = (**(code **)(param_1 + 0x60))(lVar11,auStack_40[0] << 5,auStack_40,uVar7,0);
            if (iVar6 != 0) {
              bVar10 = 0;
              auStack_40[0] = auStack_40[0] >> 5;
              uVar9 = 0;
              if (auStack_40[0] != 0) {
                do {
                  if ((*(short *)(lVar11 + 0xc + uVar9 * 0x20) == sStack_20) &&
                     (bVar4 = *(byte *)(lVar11 + 0x12 + uVar9 * 0x20), bVar10 <= bVar4)) {
                    bVar10 = bVar4;
                  }
                  uVar1 = (int)uVar9 + 1;
                  uVar9 = (ulonglong)uVar1;
                } while (uVar1 < auStack_40[0]);
              }
              uVar9 = 0;
              if (auStack_40[0] != 0) {
                do {
                  if (*(short *)(lVar11 + 0xc + uVar9 * 0x20) == sStack_20) {
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
                } while (uVar1 < auStack_40[0]);
              }
            }
          }
          FUN_180102fc0(lVar11,0x20);
        }
      }
    }
  }
  return;
}

