/*
 * FUN_1800dce68 at 1800dce68
 * undefined4 __fastcall FUN_1800dce68(longlong param_1, ulonglong param_2, int param_3, undefined8 param_4, undefined4 param_5, char param_6)
 * Address ranges: 1800dce68-1800dd03b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1800dce68(longlong param_1,ulonglong param_2,int param_3,undefined8 param_4,undefined4 param_5,
             char param_6)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 local_178 [256];
  undefined4 local_78;
  undefined4 local_74;
  
  uVar5 = param_2 & 0xffffffff;
  if ((*(char *)(param_1 + 0x2c + uVar5 * 0x28) != '\0') &&
     (iVar3 = *(int *)(param_1 + 0x28 + uVar5 * 0x28),
     *(int *)(param_1 + 0x28 + uVar5 * 0x28) = iVar3 + 1, iVar3 == 0)) {
    lVar6 = uVar5 * 0x18c0;
    puVar8 = (undefined8 *)(param_1 + 0x6b0 + lVar6);
    if (param_3 == 5) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(param_1 + 0x18 + uVar5 * 0x28);
    }
    *(undefined4 *)(lVar6 + 0x6d0 + param_1) = 0;
    pcVar2 = *(code **)(param_1 + 0x2e0);
    iVar3 = (*pcVar2)(plVar7,param_3,0,0,param_4,param_5,7,puVar8,param_1 + 0x6cc + lVar6,
                      param_1 + 0x6b8 + lVar6);
    if (iVar3 < 0) {
      if (param_6 != '\0') {
        iVar3 = (*pcVar2)(0,5,0,0,param_4,param_5,7,puVar8,param_1 + 0x6cc + lVar6,
                          param_1 + 0x6b8 + lVar6);
        if (-1 < iVar3) {
          (*(code *)**(undefined8 **)*puVar8)
                    ((undefined8 *)*puVar8,&DAT_180106738,param_1 + 0x6c0 + lVar6);
          *(undefined4 *)(lVar6 + 0x6c8 + param_1) = 5;
          goto LAB_1800dd024;
        }
      }
      piVar1 = (int *)(param_1 + 0x28 + uVar5 * 0x28);
      *piVar1 = *piVar1 + -1;
    }
    else {
      (*(code *)**(undefined8 **)*puVar8)
                ((undefined8 *)*puVar8,&DAT_180106738,param_1 + 0x6c0 + lVar6);
      *(int *)(lVar6 + 0x6c8 + param_1) = param_3;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x40))(plVar7,local_178);
        *(undefined4 *)(lVar6 + 0x6d0 + param_1) = local_78;
        *(undefined4 *)(lVar6 + 0x6d4 + param_1) = local_74;
      }
      if (*(longlong *)(param_1 + 0x2d8) != 0) {
        uVar4 = FUN_1800ee4f8(FUN_1800ee598);
        if ((char)uVar4 != '\0') goto LAB_1800dd024;
      }
      *(undefined8 *)(param_1 + 0x30 + uVar5 * 0x28) = 0;
    }
  }
LAB_1800dd024:
  return *(undefined4 *)(param_1 + 0x28 + uVar5 * 0x28);
}

