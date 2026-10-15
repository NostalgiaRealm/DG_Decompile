/*
 * FUN_18003c330 at 18003c330
 * undefined __fastcall FUN_18003c330(longlong param_1, int param_2, int param_3, longlong * param_4, undefined1 param_5)
 * Address ranges: 18003c330-18003c486
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003c330(longlong param_1,int param_2,int param_3,longlong *param_4,undefined1 param_5)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar8 = param_2 - 1;
  uVar9 = (ulonglong)uVar8;
  if (uVar8 < 4) {
    FUN_180038960(param_1,0,0,0);
    if (param_4 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xfc18 + uVar9 * 8) = 0;
      *(undefined8 *)(param_1 + 0xfc40 + uVar9 * 8) = 0;
    }
    else {
      iVar5 = (**(code **)(*param_4 + 8))(param_4);
      if (iVar5 == 1) {
        *(undefined8 *)(param_1 + 0xfc18 + uVar9 * 8) = 0;
        *(longlong **)(param_1 + 0xfc40 + uVar9 * 8) = param_4 + -4;
        if (*(int *)(param_1 + 0x81c + uVar9 * 8) != param_3) {
          *(int *)(param_1 + 0x81c + uVar9 * 8) = param_3;
          pbVar2 = (byte *)(param_1 + 0xf6bc + ((longlong)(int)uVar8 >> 3));
          *pbVar2 = *pbVar2 | '\x01' << (uVar8 & 7);
        }
        plVar7 = (longlong *)&DAT_1800ff0a8;
        cVar3 = '\x01';
        cVar4 = (&DAT_1800ff0a8)[*(uint *)((longlong)param_4 + -0xc)];
      }
      else {
        plVar7 = param_4 + -0x1c;
        (**(code **)(*plVar7 + 0xf8))(plVar7,param_5);
        *(longlong **)(param_1 + 0xfc18 + uVar9 * 8) = plVar7;
        *(undefined8 *)(param_1 + 0xfc40 + uVar9 * 8) = 0;
        if (*(int *)(param_1 + 0x81c + uVar9 * 8) != param_3) {
          *(int *)(param_1 + 0x81c + uVar9 * 8) = param_3;
          pbVar2 = (byte *)(param_1 + 0xf6bc + ((longlong)(int)uVar8 >> 3));
          *pbVar2 = *pbVar2 | '\x01' << (uVar8 & 7);
        }
        cVar3 = (**(code **)(*plVar7 + 0x78))(plVar7);
        cVar4 = (**(code **)(*plVar7 + 0x80))();
      }
      bVar1 = *(byte *)(param_1 + 0xf6b4);
      uVar6 = FUN_18005aef0(plVar7,(int *)(param_1 + 0x5420 + (ulonglong)uVar8 * 0x20),
                            (int *)(param_1 + 0x5430 + (ulonglong)uVar8 * 0x20),cVar3,cVar4);
      *(byte *)(param_1 + 0xf6b4) = (byte)uVar6 | bVar1;
    }
    *(undefined1 *)(param_1 + 0xf6c0) = 1;
    pbVar2 = (byte *)(param_1 + 0xf6b8 + ((longlong)(int)uVar8 >> 3));
    *pbVar2 = *pbVar2 | '\x01' << (uVar8 & 7);
  }
  return;
}

