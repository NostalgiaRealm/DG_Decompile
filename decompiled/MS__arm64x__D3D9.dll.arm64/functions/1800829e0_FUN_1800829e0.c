/*
 * FUN_1800829e0 at 1800829e0
 * undefined FUN_1800829e0(void)
 * Address ranges: 1800829e0-180082ad7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800829e0(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *local_50;
  longlong lStack_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined4 local_2c;
  
  param_2 = param_2 & 0xffffffff;
  local_50 = (longlong *)0x0;
  lStack_48 = 0;
  *(undefined8 *)(*param_1 + param_2 * 0x48) = param_3;
  uVar4 = *param_4;
  uVar3 = param_4[3];
  uVar2 = param_4[2];
  lVar1 = *param_1 + param_2 * 0x48;
  *(undefined8 *)(lVar1 + 0x10) = param_4[1];
  *(undefined8 *)(lVar1 + 8) = uVar4;
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  *(undefined8 *)(lVar1 + 0x28) = param_4[4];
  *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(param_4 + 5);
  (**(code **)(**(longlong **)param_1[4] + 0x28))(*(longlong **)param_1[4],param_4,0,&local_50);
  if ((local_50 != (longlong *)0x0) && ((*(uint *)(param_4 + 4) >> 3 & 1) != 0)) {
    local_40 = *(undefined4 *)(param_4 + 2);
    local_3c = 5;
    local_34 = 0xffffffff;
    local_2c = 1;
    (**(code **)(**(longlong **)param_1[4] + 0x38))
              (*(longlong **)param_1[4],local_50,&local_40,&lStack_48);
    if (lStack_48 == 0) {
      (**(code **)(*local_50 + 0x10))();
      local_50 = (longlong *)0x0;
    }
  }
  lVar1 = *param_1 + param_2 * 0x48;
  *(longlong *)(lVar1 + 0x40) = lStack_48;
  *(longlong **)(lVar1 + 0x38) = local_50;
  return;
}

