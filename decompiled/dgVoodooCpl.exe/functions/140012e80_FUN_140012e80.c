/*
 * FUN_140012e80 at 140012e80
 * bool __fastcall FUN_140012e80(longlong param_1, ulonglong param_2, int param_3, undefined8 param_4, undefined4 param_5, char param_6)
 * Address ranges: 140012e80-14001304d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_140012e80(longlong param_1,ulonglong param_2,int param_3,undefined8 param_4,
                  undefined4 param_5,char param_6)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 local_158 [256];
  undefined4 local_58;
  undefined4 local_54;
  
  uVar6 = param_2 & 0xffffffff;
  if ((*(char *)(param_1 + 0x1c + uVar6 * 0x28) != '\0') &&
     (iVar5 = *(int *)(param_1 + 0x18 + uVar6 * 0x28),
     *(int *)(param_1 + 0x18 + uVar6 * 0x28) = iVar5 + 1, iVar5 == 0)) {
    puVar1 = (undefined8 *)(param_1 + 0x330 + uVar6 * 0x28);
    if (param_3 == 5) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(param_1 + 8 + uVar6 * 0x28);
    }
    *(undefined4 *)(param_1 + 0x350 + uVar6 * 0x28) = 0;
    pcVar4 = *(code **)(param_1 + 0x2d0);
    lVar3 = param_1 + 0x338 + uVar6 * 0x28;
    iVar5 = (*pcVar4)(plVar7,param_3,0,0,param_4,param_5,7,puVar1,param_1 + 0x34c + uVar6 * 0x28,
                      lVar3);
    if (iVar5 < 0) {
      if ((param_6 == '\0') ||
         (iVar5 = (*pcVar4)(0,5,0,0,param_4,param_5,7,puVar1,param_1 + 0x34c + uVar6 * 0x28,lVar3),
         iVar5 < 0)) {
        piVar2 = (int *)(param_1 + 0x18 + uVar6 * 0x28);
        *piVar2 = *piVar2 + -1;
      }
      else {
        (*(code *)**(undefined8 **)*puVar1)
                  ((undefined8 *)*puVar1,&DAT_140028f00,param_1 + 0x340 + uVar6 * 0x28);
        *(undefined4 *)(param_1 + 0x348 + uVar6 * 0x28) = 5;
      }
    }
    else {
      (*(code *)**(undefined8 **)*puVar1)
                ((undefined8 *)*puVar1,&DAT_140028f00,param_1 + 0x340 + uVar6 * 0x28);
      *(int *)(param_1 + 0x348 + uVar6 * 0x28) = param_3;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x40))(plVar7,local_158);
        *(undefined4 *)(param_1 + 0x350 + uVar6 * 0x28) = local_58;
        *(undefined4 *)(param_1 + 0x354 + uVar6 * 0x28) = local_54;
      }
    }
  }
  return *(int *)(param_1 + 0x18 + uVar6 * 0x28) != 0;
}

