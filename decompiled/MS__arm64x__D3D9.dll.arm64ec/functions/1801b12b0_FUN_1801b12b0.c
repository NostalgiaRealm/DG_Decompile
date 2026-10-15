/*
 * FUN_1801b12b0 at 1801b12b0
 * undefined FUN_1801b12b0(void)
 * Address ranges: 1801b12b0-1801b141f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801b12b0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined8 local_50;
  undefined4 local_48;
  
  local_98 = 0;
  local_88 = *(undefined8 *)(param_1 + 0x30);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_54 = 0;
  uStack_80 = 0;
  lVar6 = *(longlong *)(param_1 + -0xb0) +
          (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x10) * 0x1ac0;
  local_90 = *(undefined4 *)(param_1 + -0xe0);
  local_50 = 0xffffffff00000000;
  local_48 = 0xffffffff;
  uVar1 = FUN_180202770(*(longlong *)(param_1 + -0xb0),&local_98);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + -0xb0);
  FUN_180221850(lVar6 + 0x1bc0);
  if (*(char *)(lVar6 + 0x1dc4) != '\0') {
    puVar2 = (undefined8 *)FUN_1802218b0(lVar6 + 0x1bc0,0x20);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_1801042e0(lVar6 + 0x1dc0);
      puVar2[1] = 0x20;
      puVar2[2] = uVar4;
      puVar2[3] = uVar1;
      puVar2[4] = uVar5;
      puVar3 = (undefined8 *)((longlong)puVar2 + 0x37U & 0xfffffffffffffff8);
      *(undefined4 *)(puVar2 + 5) = param_2;
      *(undefined4 *)((longlong)puVar2 + 0x2c) = param_3;
      DataMemoryBarrier(2,3);
      *puVar3 = 0;
      *puVar2 = FUN_1801b1428;
      *(undefined8 **)(lVar6 + (ulonglong)*(uint *)(lVar6 + 0x1dbc) * 0x28 + 0x1c50) = puVar3;
      if (*(char *)(lVar6 + 0x1dc5) != '\0') {
        FUN_180221bb0(lVar6 + 0x1bc0);
        thunk_FUN_180223874(*(undefined8 *)(lVar6 + 0x1c40));
        return;
      }
      goto LAB_1801b1400;
    }
    FUN_180221bb0(lVar6 + 0x1bc0);
    thunk_FUN_1802237c0(100);
    FUN_180221850(lVar6 + 0x1bc0);
  }
  puVar2 = *(undefined8 **)(lVar6 + 0x1da0);
  *puVar2 = uVar4;
  puVar2[1] = uVar1;
  puVar2[2] = uVar5;
  *(undefined4 *)(puVar2 + 3) = param_2;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = param_3;
  FUN_1801b1428();
LAB_1801b1400:
  FUN_180221bb0(lVar6 + 0x1bc0);
  return;
}

