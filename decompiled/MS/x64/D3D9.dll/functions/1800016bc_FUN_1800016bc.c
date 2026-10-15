/*
 * FUN_1800016bc at 1800016bc
 * undefined __fastcall FUN_1800016bc(longlong param_1, undefined8 * param_2)
 * Address ranges: 1800016bc-18000184d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800016bc(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  
  plVar1 = DAT_180111f20;
  uVar2 = (**(code **)(*DAT_180111f20 + 0x50))(DAT_180111f20,&DAT_1800fd590);
  if (uVar2 != 0) {
    iVar3 = (**(code **)*param_2)(param_2);
    if (iVar3 == 0) {
      puVar4 = (uint *)(param_2 + -4);
      if (param_2 == (undefined8 *)0x0) {
        puVar4 = (uint *)&DAT_00000070;
      }
      if (((*puVar4 & 0x203) == 0) && (uVar6 = 0, uVar2 != 0)) {
        do {
          plVar5 = (longlong *)(**(code **)(*plVar1 + 0x58))(plVar1,&DAT_1800fd590,uVar6);
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x18))
                      (plVar5,-(ulonglong)(*(longlong *)(param_1 + 0xe28) != 0) &
                              *(longlong *)(param_1 + 0xe28) + 0x88U,param_2);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar2);
      }
    }
    else if (iVar3 == 1) {
      puVar4 = (uint *)(param_2 + -4);
      if (param_2 == (undefined8 *)0x0) {
        puVar4 = (uint *)&DAT_00000070;
      }
      if (((*puVar4 & 0x203) == 0) && (uVar6 = 0, uVar2 != 0)) {
        do {
          plVar5 = (longlong *)(**(code **)(*plVar1 + 0x58))(plVar1,&DAT_1800fd590,uVar6);
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x20))
                      (plVar5,-(ulonglong)(*(longlong *)(param_1 + 0xe28) != 0) &
                              *(longlong *)(param_1 + 0xe28) + 0x88U,param_2);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar2);
      }
    }
    else if (iVar3 == 2) {
      puVar4 = (uint *)((longlong)param_2 + -0x1c);
      if (param_2 == (undefined8 *)0x0) {
        puVar4 = (uint *)&DAT_000000f4;
      }
      if (((*puVar4 & 0x200) == 0) && (uVar6 = 0, uVar2 != 0)) {
        do {
          plVar5 = (longlong *)(**(code **)(*plVar1 + 0x58))(plVar1,&DAT_1800fd590,uVar6);
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x28))
                      (plVar5,-(ulonglong)(*(longlong *)(param_1 + 0xe28) != 0) &
                              *(longlong *)(param_1 + 0xe28) + 0x88U,param_2);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar2);
      }
    }
  }
  return;
}

