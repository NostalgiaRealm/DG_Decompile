/*
 * FUN_180042d50 at 180042d50
 * undefined1 __fastcall FUN_180042d50(longlong param_1)
 * Address ranges: 180042d50-180042ec2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_180042d50(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined1 uVar8;
  undefined8 in_stack_ffffffffffffff48;
  undefined8 in_stack_ffffffffffffff50;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68 [2];
  undefined8 local_60;
  ulonglong local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  
  local_60 = 0x10000;
  local_58 = (ulonglong)((*(int *)(param_1 + 0x30) + 0xffU & 0xffffff00) << 10);
  local_68[0] = 1;
  local_50 = 1;
  local_4c = 0x10001;
  local_44 = 1;
  local_3c = 1;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = (longlong *)0x0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  bVar3 = FUN_180046244(*(longlong *)(param_1 + 8),(ulonglong)*(uint *)(param_1 + 0x10),
                        &DAT_180063e68,0,local_68,0xac3,in_stack_ffffffffffffff48,
                        in_stack_ffffffffffffff50,&local_88);
  if (bVar3 == 0) {
    return 0;
  }
  local_98 = (**(code **)(*local_88 + 0x58))();
  iVar4 = (**(code **)(*local_88 + 0x40))(local_88,0,0,&uStack_90);
  if (iVar4 < 0) {
LAB_180042ea5:
    (**(code **)(*local_88 + 0x10))();
    uVar8 = 0;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x58);
    if (*(int *)(param_1 + 0x60) == 0) {
      if (*(int *)(param_1 + 100) == 0) {
        puVar6 = (undefined8 *)thunk_FUN_18005db9c(0x300);
        if (puVar6 == (undefined8 *)0x0) goto LAB_180042ea5;
        FUN_18005f1b0(puVar6,(undefined8 *)*plVar1,(ulonglong)*(uint *)(param_1 + 100) * 0x30);
        FUN_18005dbc0((LPVOID)*plVar1);
        *plVar1 = (longlong)puVar6;
        *(undefined4 *)(param_1 + 100) = 0x10;
      }
      uVar7 = (ulonglong)*(uint *)(param_1 + 0x60);
      lVar2 = *plVar1;
      puVar6 = (undefined8 *)(lVar2 + uVar7 * 0x30);
      *puVar6 = local_98;
      puVar6[1] = uStack_90;
      puVar6 = (undefined8 *)(lVar2 + 0x10 + uVar7 * 0x30);
      *puVar6 = local_88;
      puVar6[1] = uStack_80;
      puVar6 = (undefined8 *)(lVar2 + 0x20 + uVar7 * 0x30);
      *puVar6 = local_78;
      puVar6[1] = uStack_70;
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    }
    else {
      uVar5 = FUN_180042ec4(plVar1,*(int *)(param_1 + 0x68) + 1,&local_98);
      if ((char)uVar5 == '\0') goto LAB_180042ea5;
    }
    uVar8 = 1;
  }
  return uVar8;
}

