/*
 * FUN_1800b0098 at 1800b0098
 * undefined __fastcall FUN_1800b0098(longlong param_1)
 * Address ranges: 1800b0098-1800b036b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b0098(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong in_stack_ffffffffffffff58;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  uVar10 = 0;
  uVar9 = uVar10;
  do {
    if (*(longlong *)(param_1 + 0x1338 + uVar9 * 8) != 0) {
      in_stack_ffffffffffffff58 = in_stack_ffffffffffffff58 & 0xffffffff00000000;
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0xd8))
                (*(longlong **)(param_1 + 0x28),uVar9,0,0,in_stack_ffffffffffffff58,0,0,0);
      uVar7 = ~(1 << ((byte)uVar9 & 0x1f));
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x1338 + uVar9 * 8) + 0x38);
      *puVar1 = *puVar1 & uVar7;
      (**(code **)(**(longlong **)(param_1 + 0x1338 + uVar9 * 8) + 0x10))();
      *(undefined8 *)(param_1 + 0x1338 + uVar9 * 8) = 0;
      *(uint *)(param_1 + 0x67f4) = *(uint *)(param_1 + 0x67f4) & uVar7;
    }
    uVar7 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar7;
    uVar8 = uVar10;
  } while (uVar7 < 0x10);
  do {
    if (*(longlong *)(param_1 + 0x13b8 + uVar8 * 8) != 0) {
      in_stack_ffffffffffffff58 = in_stack_ffffffffffffff58 & 0xffffffffffffff00;
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x1a8))
                (*(longlong **)(param_1 + 0x28),uVar8,0,0,in_stack_ffffffffffffff58);
      (**(code **)(**(longlong **)(param_1 + 0x13b8 + uVar8 * 8) + 0x10))();
      *(undefined8 *)(param_1 + 0x13b8 + uVar8 * 8) = 0;
      *(uint *)(param_1 + 0x6800) = *(uint *)(param_1 + 0x6800) & ~(1 << ((byte)uVar8 & 0x1f));
    }
    uVar7 = (int)uVar8 + 1;
    uVar9 = uVar10;
    uVar8 = (ulonglong)uVar7;
  } while (uVar7 < 5);
  do {
    if (*(longlong *)(&DAT_000066c8 + uVar9 * 8 + param_1) != 0) {
      in_stack_ffffffffffffff58 = in_stack_ffffffffffffff58 & 0xffffffff00000000;
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x160))
                (*(longlong **)(param_1 + 0x28),uVar9,0,0,in_stack_ffffffffffffff58);
      *(undefined4 *)(*(longlong *)(&DAT_000066c8 + uVar9 * 8 + param_1) + 0x84) = 0xffffffff;
      (**(code **)(**(longlong **)(&DAT_000066c8 + uVar9 * 8 + param_1) + 0x18))();
      *(undefined8 *)(&DAT_000066c8 + uVar9 * 8 + param_1) = 0;
    }
    uVar7 = (int)uVar9 + 1;
    *(undefined4 *)(param_1 + 0x6748 + uVar9 * 4) = 0;
    *(undefined4 *)(param_1 + 0x6788 + uVar9 * 4) = 0;
    uVar9 = (ulonglong)uVar7;
  } while (uVar7 < 0x10);
  if (*(longlong *)(&DAT_000066c0 + param_1) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x168))(*(longlong **)(param_1 + 0x28),0,0);
    *(undefined1 *)(*(longlong *)(&DAT_000066c0 + param_1) + 0x70) = 0;
    (**(code **)(**(longlong **)(&DAT_000066c0 + param_1) + 0x10))();
    *(undefined8 *)(&DAT_000066c0 + param_1) = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0xc490);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)puVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 + -1 + *(int *)(puVar4 + 1) == 0) {
      FUN_1800c30a8(puVar4);
    }
    *(undefined8 *)(param_1 + 0xc490) = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0xc498);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)puVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 + -1 + *(int *)(puVar4 + 1) == 0) {
      FUN_1800c2d6c(puVar4);
    }
    *(undefined8 *)(param_1 + 0xc498) = 0;
  }
  if (*(longlong *)(param_1 + 0xc488) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x120))(*(longlong **)(param_1 + 0x28),0);
    puVar4 = *(undefined8 **)(param_1 + 0xc488);
    LOCK();
    piVar2 = (int *)((longlong)puVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 + -1 + *(int *)(puVar4 + 1) == 0) {
      FUN_1800c04c0(puVar4);
    }
    *(undefined8 *)(param_1 + 0xc488) = 0;
  }
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_88 = 0;
  local_80 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x88))
            (*(longlong **)(param_1 + 0x28),4,1,&local_78,&local_88);
  do {
    plVar5 = *(longlong **)(param_1 + 0x30 + uVar10 * 8);
    if (plVar5 != (longlong *)0x0) {
      plVar6 = (longlong *)plVar5[6];
      (**(code **)(*plVar5 + 0x38))();
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      *(undefined8 *)(param_1 + 0x30 + uVar10 * 8) = 0;
      *(undefined8 *)(param_1 + 0xc460 + uVar10 * 8) = 0;
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 != 4);
  plVar5 = *(longlong **)(param_1 + 0x50);
  if (plVar5 != (longlong *)0x0) {
    plVar6 = (longlong *)plVar5[6];
    (**(code **)(*plVar5 + 0x38))();
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0xc480) = 0;
  }
  return;
}

