/*
 * FUN_1800925c4 at 1800925c4
 * ulonglong __fastcall FUN_1800925c4(longlong param_1, char param_2)
 * Address ranges: 1800925c4-180092845
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800925c4(longlong param_1,char param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  byte *pbVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  undefined4 local_68;
  int local_64;
  
  uVar7 = 0;
  if (*(longlong *)(param_1 + 0x218) == 0) {
    FUN_1800ac794(param_1,(undefined8 *)&local_68);
    lVar10 = 0x38;
    if (*(char *)(param_1 + 0x248) != '\0') {
      bVar11 = *(int *)(param_1 + 0x2c) != 0x15;
      uVar2 = 0x50;
      if (bVar11) {
        uVar2 = 0x40;
      }
      local_64 = *(int *)((ulonglong)uVar2 + *(longlong *)(param_1 + 8));
      lVar6 = 0x48;
      if (bVar11) {
        lVar6 = lVar10;
      }
      local_68 = *(undefined4 *)(lVar6 + *(longlong *)(param_1 + 8));
    }
    uVar2 = *(uint *)(param_1 + 0x34);
    if (*(int *)(param_1 + 0x38) == 0) {
      lVar10 = 0x30;
    }
    FUN_18008dfa8((longlong *)(param_1 + 0x200),*(undefined4 *)(param_1 + 0x170),
                  *(undefined4 *)(param_1 + 0x174),*(uint *)(param_1 + lVar10),uVar2,1,local_68,
                  local_64,0,0,0,8,0,-(uint)(uVar2 != 1) & 4,0,uVar2 != 1,'\0');
    *(undefined1 *)(param_1 + 0x16b) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  if (*(longlong *)(param_1 + 0x218) == 0) goto LAB_180092810;
  if (*(char *)(param_1 + 0x16b) == '\0') {
    uVar2 = *(uint *)(param_1 + 0x34);
    if (uVar2 == 0) {
LAB_1800927b5:
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
      (**(code **)(*plVar3 + 0x178))
                (plVar3,*(longlong *)(param_1 + 0x218),*(undefined8 *)(param_1 + 0x78));
      if (uVar2 != 0) {
        do {
          uVar8 = (int)uVar7 + 0x40;
          uVar5 = 0xffffffffffffffff;
          if (uVar2 < uVar8) {
            uVar5 = 0xffffffffffffffff >> (0x40 - ((byte)uVar2 & 0x3f) & 0x3f);
          }
          puVar1 = (ulonglong *)(param_1 + 0x158 + (uVar7 >> 6) * 8);
          *puVar1 = *puVar1 | uVar5;
          uVar7 = (ulonglong)uVar8;
        } while (uVar8 < uVar2);
      }
    }
    else {
      uVar5 = uVar7;
      uVar9 = uVar7;
      do {
        if (uVar5 != 0) goto LAB_180092751;
        uVar5 = 0xffffffffffffffff;
        uVar8 = (int)uVar9 + 0x40;
        if (uVar2 < uVar8) {
          uVar5 = 0xffffffffffffffffU >> (0x40 - ((byte)uVar2 & 0x3f) & 0x3f) & 0xffffffff;
        }
        uVar5 = *(ulonglong *)(param_1 + 0x158 + (uVar9 >> 6) * 8) & uVar5;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 < uVar2);
      if (uVar5 == 0) goto LAB_1800927b5;
LAB_180092751:
      do {
        uVar8 = (uint)uVar7;
        uVar5 = (ulonglong)(uVar8 & 0x3f);
        if ((*(byte *)(param_1 + 0x158 + (uVar7 >> 6) * 8 + ((longlong)uVar5 >> 3)) >> (uVar5 & 7) &
            1) == 0) {
          plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
          (**(code **)(*plVar3 + 0x170))
                    (plVar3,*(undefined8 *)(param_1 + 0x218),uVar7,0,0,0,
                     *(undefined8 *)(param_1 + 0x78),uVar8,0);
          pbVar4 = (byte *)(param_1 + 0x158 + (uVar7 >> 6) * 8 + ((longlong)uVar5 >> 3));
          *pbVar4 = *pbVar4 | '\x01' << (uVar5 & 7);
        }
        uVar7 = (ulonglong)(uVar8 + 1);
      } while (uVar8 + 1 < uVar2);
    }
    *(undefined1 *)(param_1 + 0x16b) = 1;
  }
  uVar7 = *(ulonglong *)(param_1 + 0x228);
LAB_180092810:
  if ((param_2 != '\0') && (*(longlong *)(param_1 + 0x228) != 0)) {
    FUN_18008e464(param_1 + 0x200,0);
    uVar7 = *(ulonglong *)(param_1 + 0x238);
  }
  return uVar7;
}

