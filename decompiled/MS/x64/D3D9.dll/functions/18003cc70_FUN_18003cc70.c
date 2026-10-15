/*
 * FUN_18003cc70 at 18003cc70
 * undefined8 __fastcall FUN_18003cc70(longlong param_1)
 * Address ranges: 18003cc70-18003cd3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18003cc70(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 local_res8;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_20 = 1;
  local_28 = *(undefined4 *)(param_1 + 0x2c);
  puVar1 = (undefined8 *)(param_1 + 0x18);
  puVar5 = (undefined8 *)
           (*(longlong *)(param_1 + 8) + 0x6b0 + (ulonglong)*(uint *)(param_1 + 0x28) * 0x18c0);
  *(undefined8 **)(param_1 + 0x10) = puVar5;
  local_18 = 0;
  local_24 = 0;
  if (*(int *)(param_1 + 0x30) == 1) {
    local_24 = 2;
  }
  local_1c = 0;
  if (*(int *)(param_1 + 0x30) == 1) {
    local_1c = 0x10000;
  }
  plVar2 = (longlong *)*puVar5;
  uVar4 = (**(code **)(*plVar2 + 0x18))(plVar2,&local_28,0,puVar1);
  if ((int)uVar4 < 0) {
LAB_18003cd2e:
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
    if (*(int *)(param_1 + 0x30) == 1) {
      local_res8 = 0;
      iVar3 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x10) + 0xc0))
                        ((longlong *)**(undefined8 **)(param_1 + 0x10),&local_res8,param_1 + 0x20);
      uVar4 = 0;
      if (iVar3 < 0) {
        uVar4 = (**(code **)(*(longlong *)*puVar1 + 0x10))();
        *puVar1 = 0;
        goto LAB_18003cd2e;
      }
    }
    uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  return uVar4;
}

