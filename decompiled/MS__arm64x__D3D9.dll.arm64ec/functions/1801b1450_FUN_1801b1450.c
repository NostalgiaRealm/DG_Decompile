/*
 * FUN_1801b1450 at 1801b1450
 * undefined FUN_1801b1450(void)
 * Address ranges: 1801b1450-1801b15b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801b1450(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  
  local_a0 = 0;
  local_90 = *(undefined8 *)(param_1 + 0x30);
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_5c = 0;
  uStack_88 = 0;
  lVar4 = *(longlong *)(param_1 + -0xb0) +
          (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x10) * 0x1ac0;
  local_98 = *(undefined4 *)(param_1 + -0xe0);
  local_58 = 0xffffffff00000000;
  local_50 = 0xffffffff;
  uVar1 = FUN_180202770(*(longlong *)(param_1 + -0xb0),&local_a0);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + -0xb0);
  FUN_180221850(lVar4 + 0x1bc0);
  if (*(char *)(lVar4 + 0x1dc4) != '\0') {
    puVar2 = (undefined8 *)FUN_1802218b0(lVar4 + 0x1bc0,0x20);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_1801042e0(lVar4 + 0x1dc0);
      puVar2[1] = 0x20;
      puVar2[2] = uVar5;
      puVar2[3] = uVar1;
      puVar2[4] = uVar6;
      puVar3 = (undefined8 *)((longlong)puVar2 + 0x33U & 0xfffffffffffffff8);
      *(undefined1 *)(puVar2 + 5) = param_2;
      DataMemoryBarrier(2,3);
      *puVar3 = 0;
      *puVar2 = FUN_1801b15c0;
      *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x1dbc) * 0x28 + 0x1c50) = puVar3;
      if (*(char *)(lVar4 + 0x1dc5) != '\0') {
        FUN_180221bb0(lVar4 + 0x1bc0);
        thunk_FUN_180223874(*(undefined8 *)(lVar4 + 0x1c40));
        return;
      }
      goto LAB_1801b1598;
    }
    FUN_180221bb0(lVar4 + 0x1bc0);
    thunk_FUN_1802237c0(100);
    FUN_180221850(lVar4 + 0x1bc0);
  }
  puVar2 = *(undefined8 **)(lVar4 + 0x1da0);
  *puVar2 = uVar5;
  puVar2[1] = uVar1;
  puVar2[2] = uVar6;
  *(undefined1 *)(puVar2 + 3) = param_2;
  FUN_1801b15c0();
LAB_1801b1598:
  FUN_180221bb0(lVar4 + 0x1bc0);
  return;
}

