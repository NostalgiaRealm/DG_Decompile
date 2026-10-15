/*
 * FUN_1800300a0 at 1800300a0
 * undefined FUN_1800300a0(void)
 * Address ranges: 1800300a0-180030223
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800300a0(longlong param_1,longlong param_2,int param_3,undefined8 *param_4,int param_5,
                 uint param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  
  param_6 = param_6 & 1;
  if (param_6 != 0) {
    FUN_18002a810(param_1,0,0,0);
  }
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  iVar2 = -0x7fffbffb;
  iVar3 = iVar2;
  if (param_3 == 9) {
    if (param_5 - 1U < 3) goto LAB_180030128;
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    uVar7 = 8;
    if (param_5 == 0) {
      uVar7 = 0;
    }
    iVar3 = (**(code **)(*plVar5 + 0xe8))(plVar5,uVar6,&local_40,uVar7,param_6 ^ 1);
  }
  else {
    if (param_3 != 0xb) {
      if (param_3 == 0xc) {
        if (6 < param_5 - 1U) {
          plVar5 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
          uVar7 = 0x10;
          puVar1 = &local_40;
          if (param_5 == 0) {
            uVar7 = 0;
            puVar1 = (undefined4 *)0x0;
          }
          iVar3 = (**(code **)(*plVar5 + 0xe8))(plVar5,uVar6,puVar1,uVar7,param_6 ^ 1);
          if (iVar3 == 0) {
            if (param_4 == (undefined8 *)0x0) {
              return 0;
            }
            *param_4 = CONCAT44(uStack_3c,local_40);
            return 0;
          }
        }
      }
      else {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
        iVar3 = (**(code **)(*plVar5 + 0xe8))(plVar5,uVar6,param_4,param_5,param_6 ^ 1);
        if (iVar3 == 0) {
          return 0;
        }
      }
      goto LAB_180030128;
    }
    if (param_5 - 1U < 3) goto LAB_180030128;
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    uVar7 = 0x10;
    puVar1 = &local_40;
    if (param_5 == 0) {
      uVar7 = 0;
      puVar1 = (undefined4 *)0x0;
    }
    iVar3 = (**(code **)(*plVar5 + 0xe8))(plVar5,uVar6,puVar1,uVar7,param_6 ^ 1);
    local_40 = local_38;
  }
  if (iVar3 == 0) {
    if (param_4 != (undefined8 *)0x0) {
      *(undefined4 *)param_4 = local_40;
    }
    return 0;
  }
LAB_180030128:
  iVar4 = 1;
  if (iVar3 != 1) {
    iVar4 = iVar2;
  }
  return iVar4;
}

