/*
 * FUN_18004605c at 18004605c
 * undefined8 __fastcall FUN_18004605c(longlong param_1)
 * Address ranges: 18004605c-180046189
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18004605c(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 local_res8 [32];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_68 = *(undefined4 *)(param_1 + 0x2c);
  local_64 = *(undefined4 *)(param_1 + 0x34);
  local_60 = *(undefined4 *)(param_1 + 0x30);
  local_5c = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (longlong *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  plVar1 = *(longlong **)((ulonglong)*(uint *)(param_1 + 0x10) * 0x20 + *(longlong *)(param_1 + 8));
  iVar2 = (**(code **)(*plVar1 + 0x70))(plVar1,&local_68,&DAT_180064250,&local_48);
  uVar5 = 0;
  if (iVar2 < 0) {
LAB_180046111:
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    puVar3 = (undefined8 *)(**(code **)(*local_48 + 0x50))(local_48,local_res8);
    local_58 = *puVar3;
    puVar3 = (undefined8 *)(**(code **)(*local_48 + 0x48))(local_48,local_res8);
    plVar1 = (longlong *)(param_1 + 0x18);
    uStack_50 = *puVar3;
    if (*(int *)(param_1 + 0x20) == 0) {
      if (*(int *)(param_1 + 0x24) == 0) {
        puVar3 = (undefined8 *)thunk_FUN_18005d6fc(0x300);
        if (puVar3 == (undefined8 *)0x0) goto LAB_180046107;
        FUN_18005ed10(puVar3,(undefined8 *)*plVar1,(ulonglong)*(uint *)(param_1 + 0x24) * 0x30);
        FUN_18005d720((LPVOID)*plVar1);
        *plVar1 = (longlong)puVar3;
        *(undefined4 *)(param_1 + 0x24) = 0x10;
      }
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x20);
      lVar4 = *plVar1;
      puVar3 = (undefined8 *)(lVar4 + uVar5 * 0x30);
      *puVar3 = local_58;
      puVar3[1] = uStack_50;
      puVar3 = (undefined8 *)(lVar4 + 0x10 + uVar5 * 0x30);
      *puVar3 = local_48;
      puVar3[1] = uStack_40;
      puVar3 = (undefined8 *)(lVar4 + 0x20 + uVar5 * 0x30);
      *puVar3 = local_38;
      puVar3[1] = uStack_30;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    }
    else {
      lVar4 = FUN_180042a1c(plVar1,*(int *)(param_1 + 0x28) + 1,&local_58);
      if ((char)lVar4 == '\0') {
LAB_180046107:
        uVar5 = (**(code **)(*local_48 + 0x10))();
        goto LAB_180046111;
      }
    }
    uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
  }
  return uVar5;
}

