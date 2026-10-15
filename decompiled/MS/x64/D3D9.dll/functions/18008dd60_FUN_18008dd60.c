/*
 * FUN_18008dd60 at 18008dd60
 * char __fastcall FUN_18008dd60(longlong param_1, longlong param_2, longlong param_3, longlong param_4, uint param_5, uint param_6, char param_7)
 * Address ranges: 18008dd60-18008dfa4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_18008dd60(longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5,
                  uint param_6,char param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  longlong *plStack0000000000000040;
  longlong *plStack0000000000000048;
  
  plVar1 = (longlong *)(param_1 + 0x28);
  plVar2 = (longlong *)**(undefined8 **)(param_1 + 0x10);
  *plVar1 = 0;
  plStack0000000000000040 = plVar2;
  plStack0000000000000048 = plVar1;
  bVar3 = FUN_18008dca8(param_1,param_5,param_6);
  if (bVar3) {
    if (param_2 != 0) {
      lVar8 = *(longlong *)(param_1 + 0x20);
      if ((lVar8 == 0) || (param_7 == '\0')) {
        lVar8 = *(longlong *)(param_1 + 0x18);
      }
      iVar4 = (**(code **)(*plVar2 + 0x38))(plVar2,lVar8,param_2,plVar1);
      if (iVar4 < 0) goto LAB_18008df25;
    }
    cVar9 = '\x01';
    if ((param_3 != 0) || (param_4 != 0)) {
      lVar8 = *(longlong *)(param_1 + 0x20);
      uVar11 = 0;
      if (param_6 != 0) {
        do {
          if (param_5 != 0) {
            uVar10 = 0;
            do {
              if (param_3 == 0) {
                if (lVar8 == 0) {
                  *(undefined4 *)(param_4 + 0x14) = 1;
                  uVar6 = uVar10;
                  uVar5 = uVar11;
                }
                else {
                  uVar6 = uVar11;
                  uVar5 = 1;
                }
                *(uint *)(param_4 + 0xc) = uVar6;
                *(uint *)(param_4 + 0x10) = uVar5;
                uVar6 = uVar11 * param_5 + uVar10;
                iVar4 = (**(code **)(*plStack0000000000000040 + 0x50))
                                  (plStack0000000000000040,
                                   *(undefined8 *)
                                    (param_1 + 0x18 + (ulonglong)(-(uint)(lVar8 != 0) & 8)),param_4,
                                   *(longlong *)(param_1 + 0x30) +
                                   ((ulonglong)uVar6 * 4 + 1 + (ulonglong)uVar6) * 8);
              }
              else {
                if (lVar8 == 0) {
                  *(undefined4 *)(param_3 + 0x10) = 1;
                  uVar6 = uVar10;
                  uVar5 = uVar11;
                }
                else {
                  uVar6 = uVar11;
                  uVar5 = 1;
                }
                *(uint *)(param_3 + 8) = uVar6;
                *(uint *)(param_3 + 0xc) = uVar5;
                iVar4 = (**(code **)(*plStack0000000000000040 + 0x48))
                                  (plStack0000000000000040,
                                   *(undefined8 *)
                                    (param_1 + 0x18 + (ulonglong)(-(uint)(lVar8 != 0) & 8)),param_3,
                                   *(longlong *)(param_1 + 0x30) +
                                   (ulonglong)(uVar11 * param_5 + uVar10) * 0x28);
              }
              if (iVar4 < 0) {
                cVar9 = '\0';
                break;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < param_5);
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < param_6);
      }
    }
    if (cVar9 != '\0') {
      return cVar9;
    }
  }
LAB_18008df25:
  uVar11 = 0;
  if (param_6 != 0) {
    do {
      if (param_5 != 0) {
        uVar10 = 0;
        do {
          uVar7 = (ulonglong)(uVar11 * param_5 + uVar10);
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x30) + uVar7 * 0x28);
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x10))();
            *(undefined8 *)(*(longlong *)(param_1 + 0x30) + uVar7 * 0x28) = 0;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < param_5);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_6);
  }
  plVar1 = plStack0000000000000048;
  if ((longlong *)*plStack0000000000000048 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plStack0000000000000048 + 0x10))();
    *plVar1 = 0;
  }
  return '\0';
}

