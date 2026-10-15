/*
 * FUN_180030720 at 180030720
 * undefined FUN_180030720(void)
 * Address ranges: 180030720-1800307f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180030720(longlong param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_18 = 0;
  local_28 = *(undefined4 *)(param_1 + 0x2c);
  puVar1 = (undefined8 *)
           (*(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x18c0 + 0x6b0);
  *(undefined8 **)(param_1 + 0x10) = puVar1;
  bVar2 = *(int *)(param_1 + 0x30) != 1;
  uStack_24 = 2;
  if (bVar2) {
    uStack_24 = 0;
  }
  uStack_1c = 0x10000;
  if (bVar2) {
    uStack_1c = 0;
  }
  local_20 = 1;
  plVar4 = (longlong *)*puVar1;
  iVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,&local_28,0,param_1 + 0x18);
  if (iVar3 < 0) {
LAB_1800307dc:
    uVar5 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x30) == 1) {
      local_30 = 0;
      iVar3 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x10) + 0xc0))
                        ((longlong *)**(undefined8 **)(param_1 + 0x10),&local_30,param_1 + 0x20);
      if (iVar3 < 0) {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
        *(undefined8 *)(param_1 + 0x18) = 0;
        goto LAB_1800307dc;
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}

