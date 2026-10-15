/*
 * FUN_1800b9b40 at 1800b9b40
 * undefined FUN_1800b9b40(void)
 * Address ranges: 1800b9b40-1800b9e17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b9b40(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar5 = param_1 + 0x1338;
  uVar4 = 0;
  do {
    if (*(longlong *)(lVar5 + uVar4 * 8) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0xd8))
                (*(longlong **)(param_1 + 0x28),uVar4,0,0,0,0,0,0);
      lVar3 = *(longlong *)(lVar5 + uVar4 * 8);
      uVar1 = 1 << (ulonglong)((uint)uVar4 & 0x1f);
      *(uint *)(lVar3 + 0x38) = *(uint *)(lVar3 + 0x38) & (uVar1 ^ 0xffffffff);
      (**(code **)(**(longlong **)(lVar5 + uVar4 * 8) + 0x10))();
      *(undefined8 *)(lVar5 + uVar4 * 8) = 0;
      *(uint *)(param_1 + 0x67f4) = *(uint *)(param_1 + 0x67f4) & (uVar1 ^ 0xffffffff);
    }
    uVar1 = (uint)uVar4 + 1;
    uVar4 = (ulonglong)uVar1;
  } while (uVar1 < 0x10);
  lVar5 = param_1 + 0x13b8;
  uVar4 = 0;
  do {
    if (*(longlong *)(lVar5 + uVar4 * 8) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x1a8))
                (*(longlong **)(param_1 + 0x28),uVar4,0,0,0);
      (**(code **)(**(longlong **)(lVar5 + uVar4 * 8) + 0x10))();
      *(undefined8 *)(lVar5 + uVar4 * 8) = 0;
      *(uint *)(param_1 + 0x6800) =
           *(uint *)(param_1 + 0x6800) & (1 << (ulonglong)((uint)uVar4 & 0x1f) ^ 0xffffffffU);
    }
    uVar1 = (uint)uVar4 + 1;
    uVar4 = (ulonglong)uVar1;
  } while (uVar1 < 5);
  lVar5 = param_1 + 0x66c8;
  uVar4 = 0;
  do {
    if (*(longlong *)(lVar5 + uVar4 * 8) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x160))
                (*(longlong **)(param_1 + 0x28),uVar4,0,0,0);
      *(undefined4 *)(*(longlong *)(lVar5 + uVar4 * 8) + 0x84) = 0xffffffff;
      (**(code **)(**(longlong **)(lVar5 + uVar4 * 8) + 0x18))();
      *(undefined8 *)(lVar5 + uVar4 * 8) = 0;
    }
    *(undefined4 *)(param_1 + 0x6748 + uVar4 * 4) = 0;
    *(undefined4 *)(param_1 + 0x6788 + uVar4 * 4) = 0;
    uVar1 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar1;
  } while (uVar1 < 0x10);
  if (*(longlong *)(&DAT_000066c0 + param_1) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x168))(*(longlong **)(param_1 + 0x28),0,0);
    *(undefined1 *)(*(longlong *)(&DAT_000066c0 + param_1) + 0x70) = 0;
    (**(code **)(**(longlong **)(&DAT_000066c0 + param_1) + 0x10))();
    *(undefined8 *)(&DAT_000066c0 + param_1) = 0;
  }
  if (*(longlong *)(param_1 + 0xc490) != 0) {
    FUN_1800c8aa8();
    *(undefined8 *)(param_1 + 0xc490) = 0;
  }
  if (*(longlong *)(param_1 + 0xc498) != 0) {
    FUN_1800c85b8();
    *(undefined8 *)(param_1 + 0xc498) = 0;
  }
  if (*(longlong *)(param_1 + 0xc488) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x120))(*(longlong **)(param_1 + 0x28),0);
    FUN_1800c1c08(*(undefined8 *)(param_1 + 0xc488));
    *(undefined8 *)(param_1 + 0xc488) = 0;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_90 = 0;
  uStack_88 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x88))
            (*(longlong **)(param_1 + 0x28),4,1,&local_80,&local_90);
  lVar5 = 0;
  do {
    plVar2 = *(longlong **)(param_1 + 0x30 + lVar5 * 8);
    if (plVar2 != (longlong *)0x0) {
      plVar6 = (longlong *)plVar2[6];
      (**(code **)(*plVar2 + 0x38))();
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      *(undefined8 *)(param_1 + 0x30 + lVar5 * 8) = 0;
      *(undefined8 *)(param_1 + 0xc460 + lVar5 * 8) = 0;
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 4);
  plVar2 = *(longlong **)(param_1 + 0x50);
  if (plVar2 != (longlong *)0x0) {
    plVar6 = (longlong *)plVar2[6];
    (**(code **)(*plVar2 + 0x38))();
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0xc480) = 0;
  }
  return;
}

