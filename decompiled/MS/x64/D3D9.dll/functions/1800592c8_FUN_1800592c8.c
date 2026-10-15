/*
 * FUN_1800592c8 at 1800592c8
 * undefined8 * __fastcall FUN_1800592c8(longlong param_1, undefined8 * param_2, ulonglong param_3)
 * Address ranges: 1800592c8-18005946f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800592c8(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined4 in_stack_ffffffffffffff40;
  undefined4 in_stack_ffffffffffffff44;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined1 local_50;
  
  FUN_1800fbea0((undefined1 *)param_2,0,0x60);
  local_70 = 1;
  iVar1 = *(int *)((ulonglong)*(uint *)(param_1 + 0x10) * 0x1ac0 + 0x904 +
                  *(longlong *)(param_1 + 8));
  local_78 = 0x100;
  if ((param_3 & 0x100) == 0) {
    local_88 = (undefined8 *)thunk_FUN_1800fbccc(0x100);
    local_80 = local_88;
    cVar3 = FUN_18008469c((longlong *)(param_1 + 0x20),param_1 + 0x30,param_3,0x10051,
                          (ulonglong *)&local_88,
                          CONCAT44(in_stack_ffffffffffffff44,
                                   CONCAT31((int3)((uint)in_stack_ffffffffffffff40 >> 8),
                                            *(undefined1 *)(param_1 + 0x2f0))),param_2 + 1);
    puVar5 = local_88;
    if (cVar3 != '\0') {
      plVar4 = FUN_1800f08f4((longlong)local_80 - (longlong)local_88,local_88);
      *param_2 = plVar4;
    }
  }
  else {
    local_88 = (undefined8 *)thunk_FUN_1800fbccc(0x100);
    local_58 = 0x100;
    local_50 = 1;
    local_80 = local_88;
    local_68 = (undefined8 *)thunk_FUN_1800fbccc(0x100);
    local_60 = local_68;
    cVar3 = FUN_1800789b8((uint *)(param_1 + 0x20),param_1 + 0x30,param_3,
                          *(undefined1 *)(param_1 + 0x2f0),iVar1 == 0x1002,0x10051,
                          (longlong *)&local_88,param_2 + 1,0x20051,(longlong *)&local_68,
                          param_2 + 7);
    puVar2 = local_68;
    puVar5 = local_88;
    if (cVar3 != '\0') {
      plVar4 = FUN_1800f08f4((longlong)local_80 - (longlong)local_88,local_88);
      *param_2 = plVar4;
      if (plVar4 != (longlong *)0x0) {
        plVar4 = FUN_1800f08f4((longlong)local_60 - (longlong)puVar2,puVar2);
        param_2[6] = plVar4;
        if (plVar4 == (longlong *)0x0) {
          (**(code **)(*(longlong *)*param_2 + 0x10))();
          *param_2 = 0;
        }
      }
    }
    FUN_1800fbcf0(puVar2);
  }
  FUN_1800fbcf0(puVar5);
  return param_2;
}

