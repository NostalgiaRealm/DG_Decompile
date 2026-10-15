/*
 * FUN_180001928 at 180001928
 * undefined FUN_180001928(void)
 * Address ranges: 180001928-180001b1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_180001928(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  byte bVar10;
  
  plVar3 = DAT_18024de60;
  bVar10 = 1;
  uVar5 = (**(code **)(*DAT_18024de60 + 0x50))(DAT_18024de60,&DAT_180229468);
  if (uVar5 != 0) {
    iVar6 = (**(code **)*param_2)(param_2);
    if (iVar6 == 0) {
      puVar1 = (uint *)&DAT_00000070;
      if (param_2 != (undefined8 *)0x0) {
        puVar1 = (uint *)(param_2 + -4);
      }
      if (((*puVar1 & 0x203) == 0) && (uVar9 = 0, uVar5 != 0)) {
        do {
          puVar8 = (undefined8 *)(**(code **)(*plVar3 + 0x58))(plVar3,&DAT_180229468,uVar9);
          if (puVar8 != (undefined8 *)0x0) {
            lVar2 = 0;
            if (*(longlong *)(param_1 + 0xe28) != 0) {
              lVar2 = *(longlong *)(param_1 + 0xe28) + 0x88;
            }
            bVar4 = (**(code **)*puVar8)(puVar8,lVar2,param_2);
            bVar10 = bVar4 & bVar10;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar5);
      }
    }
    else if (iVar6 == 1) {
      puVar1 = (uint *)&DAT_00000070;
      if (param_2 != (undefined8 *)0x0) {
        puVar1 = (uint *)(param_2 + -4);
      }
      if (((*puVar1 & 0x203) == 0) && (uVar9 = 0, uVar5 != 0)) {
        do {
          plVar7 = (longlong *)(**(code **)(*plVar3 + 0x58))(plVar3,&DAT_180229468,uVar9);
          if (plVar7 != (longlong *)0x0) {
            lVar2 = 0;
            if (*(longlong *)(param_1 + 0xe28) != 0) {
              lVar2 = *(longlong *)(param_1 + 0xe28) + 0x88;
            }
            bVar4 = (**(code **)(*plVar7 + 8))(plVar7,lVar2,param_2);
            bVar10 = bVar4 & bVar10;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar5);
      }
    }
    else if (iVar6 == 2) {
      puVar1 = (uint *)&DAT_000000f4;
      if (param_2 != (undefined8 *)0x0) {
        puVar1 = (uint *)((longlong)param_2 + -0x1c);
      }
      if (((*puVar1 >> 9 & 1) == 0) && (uVar9 = 0, uVar5 != 0)) {
        do {
          plVar7 = (longlong *)(**(code **)(*plVar3 + 0x58))(plVar3,&DAT_180229468,uVar9);
          if (plVar7 != (longlong *)0x0) {
            lVar2 = 0;
            if (*(longlong *)(param_1 + 0xe28) != 0) {
              lVar2 = *(longlong *)(param_1 + 0xe28) + 0x88;
            }
            bVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,lVar2,param_2);
            bVar10 = bVar4 & bVar10;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar5);
      }
    }
  }
  return bVar10;
}

