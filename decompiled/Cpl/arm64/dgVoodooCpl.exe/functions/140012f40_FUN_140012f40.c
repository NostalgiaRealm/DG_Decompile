/*
 * FUN_140012f40 at 140012f40
 * ulonglong __cdecl FUN_140012f40(longlong param_1, int param_2)
 * Address ranges: 140012f40-1400131e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_140012f40(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong extraout_x1;
  longlong lVar8;
  ulonglong extraout_x12;
  ulonglong uVar9;
  uint uVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong local_1a0;
  longlong lStack_198;
  code *local_190;
  undefined1 auStack_188 [256];
  undefined4 local_88;
  undefined4 uStack_84;
  
  uVar7 = FUN_140013388(param_1,param_2);
  uVar9 = extraout_x12;
  if ((int)uVar7 == -1) goto LAB_1400131c4;
  lVar1 = param_1 + (uVar7 & 0xffffffff) * 4;
  if (*(int *)(lVar1 + 0x434) == -1) {
    *(undefined4 *)(lVar1 + 0x434) = 0;
    uVar9 = extraout_x1 & 0xffffffff;
    lVar8 = *(longlong *)(param_1 + 0x480);
    lVar2 = lVar8 + uVar9 * 0x28;
    if (*(char *)(lVar2 + 0x1c) != '\0') {
      iVar5 = *(int *)(lVar2 + 0x18);
      cVar4 = *(char *)(param_1 + 0x498);
      uVar12 = *(undefined8 *)(param_1 + 0x490);
      iVar6 = *(int *)(param_1 + 0x488);
      uVar3 = *(undefined4 *)(param_1 + 0x48c);
      *(int *)(lVar2 + 0x18) = iVar5 + 1;
      if (iVar5 == 0) {
        if (iVar6 == 5) {
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = *(longlong **)(lVar2 + 8);
        }
        *(undefined4 *)(lVar2 + 0x350) = 0;
        local_190 = *(code **)(lVar8 + 0x2d0);
        local_1a0 = lVar2 + 0x338;
        lStack_198 = lVar2 + 0x34c;
        iVar5 = (*local_190)(plVar11,iVar6,0,0,uVar12,uVar3,7,lVar2 + 0x330,lStack_198,local_1a0);
        if (iVar5 < 0) {
          if (cVar4 != '\0') {
            iVar6 = (*local_190)(0,5,0,0,uVar12,uVar3,7,lVar2 + 0x330,lStack_198,local_1a0);
            if (-1 < iVar6) {
              (**(code **)**(undefined8 **)(lVar2 + 0x330))
                        (*(undefined8 **)(lVar2 + 0x330),&DAT_140028f60,lVar2 + 0x340);
              *(undefined4 *)(lVar2 + 0x348) = 5;
              goto LAB_1400130d4;
            }
          }
          *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1;
        }
        else {
          (**(code **)**(undefined8 **)(lVar2 + 0x330))
                    (*(undefined8 **)(lVar2 + 0x330),&DAT_140028f60,lVar2 + 0x340);
          *(int *)(lVar2 + 0x348) = iVar6;
          if (plVar11 != (longlong *)0x0) {
            (**(code **)(*plVar11 + 0x40))(plVar11,auStack_188);
            *(undefined4 *)(lVar2 + 0x350) = local_88;
            *(undefined4 *)(lVar2 + 0x354) = uStack_84;
          }
        }
      }
    }
LAB_1400130d4:
    if (*(int *)(lVar2 + 0x18) != 0) {
      uVar10 = 2;
      lVar2 = *(longlong *)(param_1 + 0x480) + uVar9 * 0x28;
      do {
        plVar11 = *(longlong **)(lVar2 + 0x330);
        iVar6 = (**(code **)(*plVar11 + 0xf0))(plVar11,0x1c,uVar10,&local_1a0);
        if ((((iVar6 == 0) && ((int)local_1a0 != 0)) &&
            (plVar11 = *(longlong **)(lVar2 + 0x330),
            iVar6 = (**(code **)(*plVar11 + 0xf0))(plVar11,0x39,uVar10,&local_1a0), iVar6 == 0)) &&
           ((int)local_1a0 != 0)) {
          *(char *)(param_1 + (uVar7 & 0xffffffff) + (ulonglong)*(uint *)(lVar1 + 0x434) * 0x10 +
                   0x334) = (char)uVar10;
          *(int *)(lVar1 + 0x434) = *(int *)(lVar1 + 0x434) + 1;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < 0x21);
      lVar2 = *(longlong *)(param_1 + 0x480) + uVar9 * 0x28;
      iVar6 = *(int *)(lVar2 + 0x18) + -1;
      *(int *)(lVar2 + 0x18) = iVar6;
      if (iVar6 == 0) {
        if (*(longlong **)(lVar2 + 0x340) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar2 + 0x340) + 0x10))();
          *(undefined8 *)(lVar2 + 0x340) = 0;
        }
        if (*(longlong **)(lVar2 + 0x338) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar2 + 0x338) + 0x10))();
          *(undefined8 *)(lVar2 + 0x338) = 0;
        }
        if (*(longlong **)(lVar2 + 0x330) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar2 + 0x330) + 0x10))();
          *(undefined8 *)(lVar2 + 0x330) = 0;
        }
      }
    }
  }
  uVar9 = (ulonglong)*(uint *)(lVar1 + 0x434);
LAB_1400131c4:
  return uVar9 & 0xffffffff;
}

