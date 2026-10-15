/*
 * FUN_180044ed0 at 180044ed0
 * bool __fastcall FUN_180044ed0(longlong param_1, byte param_2)
 * Address ranges: 180044ed0-180045067
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180044ed0(longlong param_1,byte param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte *pbVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *(byte *)(param_1 + 0x10195) = *(byte *)(param_1 + 0x10195) | param_2;
  if ((*(uint *)(param_1 + 0x6940) & 0xf800) == 0) {
    return true;
  }
  if (*(char *)(param_1 + 0xf692) != '\0') {
    uVar7 = 0;
    do {
      puVar1 = (uint *)(param_1 + 0xf694 + uVar7 * 4);
      uVar6 = 0;
      bVar8 = *puVar1 != 0;
      if (bVar8) {
        for (; (*puVar1 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
      if (bVar8) {
        pbVar3 = (byte *)(param_1 + 0xf694 + uVar7 * 4 + ((longlong)(int)uVar6 >> 3));
        *pbVar3 = *pbVar3 & ~('\x01' << (uVar6 & 7));
        while (iVar4 = (uVar6 & 0xff) + (int)uVar7 * 0x20, iVar4 < 0x100) {
          lVar5 = (longlong)iVar4 * 0x40;
          FUN_18002d088((float *)(lVar5 + 0x7670 + param_1),(undefined8 *)(param_1 + 0xb670 + lVar5)
                        ,'\x01');
          puVar1 = (uint *)(param_1 + 0xf694 + uVar7 * 4);
          uVar6 = 0;
          bVar8 = *puVar1 == 0;
          if (!bVar8) {
            for (; (*puVar1 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
            }
          }
          if (bVar8) break;
          pbVar3 = (byte *)(param_1 + 0xf694 + uVar7 * 4 + ((longlong)(int)uVar6 >> 3));
          *pbVar3 = *pbVar3 & ~('\x01' << (uVar6 & 7));
        }
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < 8);
  }
  if ((*(byte *)(param_1 + 0xf692) == 0) && (*(char *)(param_1 + 0x10195) == '\0')) {
    bVar8 = true;
  }
  else {
    lVar5 = FUN_180043440(param_1,*(longlong *)(param_1 + 0xf738),(undefined8 *)(param_1 + 0x7670),
                          0x8000,*(byte *)(param_1 + 0xf692));
    bVar8 = lVar5 != 0;
    *(longlong *)(param_1 + 0xf998) = lVar5;
    *(byte *)(param_1 + 0x10195) = *(byte *)(param_1 + 0x10195) & lVar5 == 0;
    *(bool *)(param_1 + 0xf692) = lVar5 == 0;
    if ((lVar5 != 0) &&
       (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508),
       lVar5 != *(longlong *)(lVar2 + 0x78))) {
      iVar4 = *(int *)(lVar2 + 0x67c);
      *(int *)(lVar2 + 0x67c) = iVar4 + 1;
      if (((iVar4 == 0) && (*(longlong *)(lVar2 + 0xb10) != 0)) &&
         (uVar7 = 0, *(int *)(lVar2 + 0xba8) != 0)) {
        do {
          (**(code **)**(undefined8 **)(*(longlong *)(lVar2 + 0xba0) + uVar7 * 8))();
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
        } while (uVar6 < *(uint *)(lVar2 + 0xba8));
      }
      (**(code **)(**(longlong **)(lVar2 + 0x688) + 0x130))(*(longlong **)(lVar2 + 0x688),2,lVar5);
      *(longlong *)(lVar2 + 0x78) = lVar5;
    }
  }
  return bVar8;
}

