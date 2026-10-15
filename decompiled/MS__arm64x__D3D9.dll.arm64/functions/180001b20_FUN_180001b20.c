/*
 * FUN_180001b20 at 180001b20
 * undefined FUN_180001b20(void)
 * Address ranges: 180001b20-180001ceb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180001b20(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  
  plVar3 = DAT_18024de60;
  uVar4 = (**(code **)(*DAT_18024de60 + 0x50))(DAT_18024de60,&DAT_180229468);
  if (uVar4 != 0) {
    iVar5 = (**(code **)*param_2)(param_2);
    if (iVar5 == 0) {
      puVar1 = (uint *)&DAT_00000070;
      if (param_2 != (undefined8 *)0x0) {
        puVar1 = (uint *)(param_2 + -4);
      }
      if (((*puVar1 & 0x203) == 0) && (uVar7 = 0, uVar4 != 0)) {
        do {
          plVar6 = (longlong *)(**(code **)(*plVar3 + 0x58))(plVar3,&DAT_180229468,uVar7);
          if (plVar6 != (longlong *)0x0) {
            lVar2 = 0;
            if (*(longlong *)(param_1 + 0xe28) != 0) {
              lVar2 = *(longlong *)(param_1 + 0xe28) + 0x88;
            }
            (**(code **)(*plVar6 + 0x18))(plVar6,lVar2,param_2);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar4);
      }
    }
    else if (iVar5 == 1) {
      puVar1 = (uint *)&DAT_00000070;
      if (param_2 != (undefined8 *)0x0) {
        puVar1 = (uint *)(param_2 + -4);
      }
      if (((*puVar1 & 0x203) == 0) && (uVar7 = 0, uVar4 != 0)) {
        do {
          plVar6 = (longlong *)(**(code **)(*plVar3 + 0x58))(plVar3,&DAT_180229468,uVar7);
          if (plVar6 != (longlong *)0x0) {
            lVar2 = 0;
            if (*(longlong *)(param_1 + 0xe28) != 0) {
              lVar2 = *(longlong *)(param_1 + 0xe28) + 0x88;
            }
            (**(code **)(*plVar6 + 0x20))(plVar6,lVar2,param_2);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar4);
      }
    }
    else if (iVar5 == 2) {
      puVar1 = (uint *)&DAT_000000f4;
      if (param_2 != (undefined8 *)0x0) {
        puVar1 = (uint *)((longlong)param_2 + -0x1c);
      }
      if (((*puVar1 >> 9 & 1) == 0) && (uVar7 = 0, uVar4 != 0)) {
        do {
          plVar6 = (longlong *)(**(code **)(*plVar3 + 0x58))(plVar3,&DAT_180229468,uVar7);
          if (plVar6 != (longlong *)0x0) {
            lVar2 = 0;
            if (*(longlong *)(param_1 + 0xe28) != 0) {
              lVar2 = *(longlong *)(param_1 + 0xe28) + 0x88;
            }
            (**(code **)(*plVar6 + 0x28))(plVar6,lVar2,param_2);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar4);
      }
    }
  }
  return;
}

