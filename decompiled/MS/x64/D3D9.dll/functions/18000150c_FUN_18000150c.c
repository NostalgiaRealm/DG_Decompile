/*
 * FUN_18000150c at 18000150c
 * byte __fastcall FUN_18000150c(longlong param_1, undefined8 * param_2)
 * Address ranges: 18000150c-1800016ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_18000150c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  byte bVar8;
  uint uVar9;
  
  plVar1 = DAT_180111f20;
  bVar8 = 1;
  uVar3 = (**(code **)(*DAT_180111f20 + 0x50))(DAT_180111f20,&DAT_1800fd590);
  if (uVar3 != 0) {
    iVar4 = (**(code **)*param_2)(param_2);
    if (iVar4 == 0) {
      puVar5 = (uint *)(param_2 + -4);
      if (param_2 == (undefined8 *)0x0) {
        puVar5 = (uint *)&DAT_00000070;
      }
      if (((*puVar5 & 0x203) == 0) && (uVar9 = 0, uVar3 != 0)) {
        do {
          puVar7 = (undefined8 *)(**(code **)(*plVar1 + 0x58))(plVar1,&DAT_1800fd590,uVar9);
          if (puVar7 != (undefined8 *)0x0) {
            bVar2 = (**(code **)*puVar7)
                              (puVar7,-(ulonglong)(*(longlong *)(param_1 + 0xe28) != 0) &
                                      *(longlong *)(param_1 + 0xe28) + 0x88U,param_2);
            bVar8 = bVar8 & bVar2;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar3);
      }
    }
    else if (iVar4 == 1) {
      puVar5 = (uint *)(param_2 + -4);
      if (param_2 == (undefined8 *)0x0) {
        puVar5 = (uint *)&DAT_00000070;
      }
      if (((*puVar5 & 0x203) == 0) && (uVar9 = 0, uVar3 != 0)) {
        do {
          plVar6 = (longlong *)(**(code **)(*plVar1 + 0x58))(plVar1,&DAT_1800fd590,uVar9);
          if (plVar6 != (longlong *)0x0) {
            bVar2 = (**(code **)(*plVar6 + 8))
                              (plVar6,-(ulonglong)(*(longlong *)(param_1 + 0xe28) != 0) &
                                      *(longlong *)(param_1 + 0xe28) + 0x88U,param_2);
            bVar8 = bVar8 & bVar2;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar3);
      }
    }
    else if (iVar4 == 2) {
      puVar5 = (uint *)((longlong)param_2 + -0x1c);
      if (param_2 == (undefined8 *)0x0) {
        puVar5 = (uint *)&DAT_000000f4;
      }
      if (((*puVar5 & 0x200) == 0) && (uVar9 = 0, uVar3 != 0)) {
        do {
          plVar6 = (longlong *)(**(code **)(*plVar1 + 0x58))(plVar1,&DAT_1800fd590,uVar9);
          if (plVar6 != (longlong *)0x0) {
            bVar2 = (**(code **)(*plVar6 + 0x10))
                              (plVar6,-(ulonglong)(*(longlong *)(param_1 + 0xe28) != 0) &
                                      *(longlong *)(param_1 + 0xe28) + 0x88U,param_2);
            bVar8 = bVar8 & bVar2;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar3);
      }
    }
  }
  return bVar8;
}

