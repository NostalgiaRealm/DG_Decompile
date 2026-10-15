/*
 * FUN_18008dbd4 at 18008dbd4
 * undefined __fastcall FUN_18008dbd4(longlong * param_1, ulonglong param_2, undefined8 param_3, undefined8 * param_4)
 * Address ranges: 18008dbd4-18008dca7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18008dbd4(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *local_58;
  longlong lStack_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar8 = param_2 & 0xffffffff;
  *(undefined8 *)(*param_1 + uVar8 * 0x48) = param_3;
  lVar3 = *param_1;
  uVar7 = param_4[1];
  puVar1 = (undefined8 *)(lVar3 + 8 + uVar8 * 0x48);
  *puVar1 = *param_4;
  puVar1[1] = uVar7;
  uVar7 = param_4[3];
  puVar1 = (undefined8 *)(lVar3 + 0x18 + uVar8 * 0x48);
  *puVar1 = param_4[2];
  puVar1[1] = uVar7;
  uVar4 = *(undefined4 *)(param_4 + 4);
  uVar5 = *(undefined4 *)((longlong)param_4 + 0x24);
  uVar6 = *(undefined4 *)(param_4 + 5);
  puVar2 = (undefined4 *)(lVar3 + 0x24 + uVar8 * 0x48);
  *puVar2 = *(undefined4 *)((longlong)param_4 + 0x1c);
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  local_58 = (longlong *)0x0;
  lStack_50 = 0;
  (**(code **)(**(longlong **)param_1[4] + 0x28))(*(longlong **)param_1[4],param_4,0,&local_58);
  if ((local_58 != (longlong *)0x0) && ((*(byte *)(param_4 + 4) & 8) != 0)) {
    local_48 = *(undefined4 *)(param_4 + 2);
    local_44 = 5;
    local_3c = 0xffffffff;
    local_38 = 0;
    local_34 = 1;
    (**(code **)(**(longlong **)param_1[4] + 0x38))
              (*(longlong **)param_1[4],local_58,&local_48,&lStack_50);
    if (lStack_50 == 0) {
      (**(code **)(*local_58 + 0x10))();
      local_58 = (longlong *)0x0;
    }
  }
  puVar1 = (undefined8 *)(*param_1 + 0x38 + uVar8 * 0x48);
  *puVar1 = local_58;
  puVar1[1] = lStack_50;
  return;
}

