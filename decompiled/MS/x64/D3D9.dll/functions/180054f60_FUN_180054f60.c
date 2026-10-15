/*
 * FUN_180054f60 at 180054f60
 * undefined __fastcall FUN_180054f60(longlong * param_1)
 * Address ranges: 180054f60-18005509b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180054f60(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  byte *pbVar4;
  longlong lVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar8 = (int)param_1[1] - 1;
  uVar9 = (ulonglong)uVar8;
  if (uVar8 < 4) {
    lVar2 = *param_1;
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    plVar3 = (longlong *)param_1[2];
    lVar5 = param_1[3];
    FUN_180049b30(lVar2,0,0,0);
    FUN_180043ba0(lVar2,*(ulonglong *)(lVar2 + 0xfee8 + uVar9 * 8));
    *(undefined8 *)(lVar2 + 0xfee8 + uVar9 * 8) = 0;
    pbVar4 = (byte *)(lVar2 + 0xffd4 + ((longlong)(int)uVar8 >> 3));
    *pbVar4 = *pbVar4 & ~('\x01' << (uVar8 & 7));
    if (plVar3 == (longlong *)0x0) {
      *(undefined8 *)(lVar2 + 0xfe98 + uVar9 * 8) = 0;
      *(undefined8 *)(lVar2 + 0xfec0 + uVar9 * 8) = 0;
    }
    else {
      iVar7 = (**(code **)(*plVar3 + 8))(plVar3);
      if (iVar7 == 1) {
        *(undefined8 *)(lVar2 + 0xfe98 + uVar9 * 8) = 0;
        *(longlong **)(lVar2 + 0xfec0 + uVar9 * 8) = plVar3 + -4;
      }
      else {
        if ((((char)lVar5 == '\0') || (iVar7 = (**(code **)(*plVar3 + 0x48))(plVar3), iVar7 != 1))
           || (uVar6 = 1, *(int *)((longlong)plVar3 + -0xcc) != 1)) {
          uVar6 = 0;
        }
        *(undefined1 *)((longlong)plVar3 + 0x92) = uVar6;
        *(longlong **)(lVar2 + 0xfe98 + uVar9 * 8) = plVar3 + -0x20;
        *(undefined8 *)(lVar2 + 0xfec0 + uVar9 * 8) = 0;
        if (*(int *)((longlong)plVar3 + -0xbc) - 3U < 3) {
          pbVar4 = (byte *)(lVar2 + 0xffcc + ((longlong)(int)uVar8 >> 3));
          *pbVar4 = *pbVar4 | '\x01' << (uVar8 & 7);
        }
      }
      if (*(int *)(lVar2 + 0x81c + uVar9 * 8) != iVar1) {
        *(int *)(lVar2 + 0x81c + uVar9 * 8) = iVar1;
        pbVar4 = (byte *)(lVar2 + 0xf6bc + ((longlong)(int)uVar8 >> 3));
        *pbVar4 = *pbVar4 | '\x01' << (uVar8 & 7);
      }
      *(undefined1 *)(lVar2 + 0x1018b) = 1;
    }
    *(undefined1 *)(lVar2 + 0xf6c0) = 1;
    pbVar4 = (byte *)(lVar2 + 0xf6b8 + ((longlong)(int)uVar8 >> 3));
    *pbVar4 = *pbVar4 | '\x01' << (uVar8 & 7);
  }
  return;
}

