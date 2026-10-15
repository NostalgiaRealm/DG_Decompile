/*
 * FUN_1003c130 at 1003c130
 * undefined FUN_1003c130(void)
 * Address ranges: 1003c130-1003c2e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003c130(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  code *extraout_w11;
  ulonglong extraout_x11;
  uint uVar9;
  uint uVar10;
  uint local_68;
  uint uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  uint uStack_54;
  uint local_50;
  
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar10 = 0;
  if (DAT_100c2940 != 0) {
    uVar8 = DAT_100c2940;
    do {
      iVar1 = *(int *)(DAT_100c2950 + uVar10 * 4);
      if (*(int *)(param_1 + 0x11c) == *(int *)(iVar1 + 0x11c)) {
        if (((*(uint *)(iVar1 + 0x104) >> 4 & 1) == 0) &&
           ((&DAT_100be33c)[*(int *)(iVar1 + 0x11c) * 0x228] != '\0')) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        uVar9 = 0;
        if (*(uint *)(iVar1 + 300) != 0) {
          do {
            uVar5 = (*pcVar4)();
            iVar6 = (*extraout_w11)(uVar5);
            if (((*(uint *)(iVar6 + 0x68) >> 0xb & 1) == 0) &&
               ((*(uint *)(iVar6 + 0x6c) & 0x20010) == 0)) {
              local_60 = 0;
              iVar2 = *(int *)(*(int *)(iVar1 + 0x128) + uVar9 * 4);
              local_68 = (uint)*(ushort *)(iVar2 + 0x148);
              uStack_64 = (uint)*(ushort *)(iVar2 + 0x14a);
              uStack_54 = (uint)*(ushort *)(iVar2 + 0x14c);
              local_58 = 0;
              local_50 = (uint)*(ushort *)(iVar2 + 0x14e);
              uVar7 = FUN_10003b00(iVar6,*(int *)(param_1 + 0x11c),&local_68);
              if (((uVar7 & 1) == 0) || (bVar3)) {
                FUN_1004f858(extraout_x11 & 0xffffffff);
              }
            }
            uVar9 = uVar9 + 1;
            uVar8 = DAT_100c2940;
          } while (uVar9 < *(uint *)(iVar1 + 300));
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar8);
  }
  return;
}

