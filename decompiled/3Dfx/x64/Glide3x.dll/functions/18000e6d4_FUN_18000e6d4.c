/*
 * FUN_18000e6d4 at 18000e6d4
 * undefined8 __fastcall FUN_18000e6d4(longlong param_1)
 * Address ranges: 18000e6d4-18000e862
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000e6d4(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  puVar1 = (undefined8 *)(param_1 + 0x3398);
  *puVar1 = 0;
  puVar3 = FUN_180060f94((undefined1 *)(param_1 + 0x33a0),0,0x200);
  if (*(char *)(param_1 + 0x2c83) == '\0') {
LAB_18000e7e5:
    uVar4 = CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
  }
  else {
    local_res8 = 0;
    uVar4 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x3340) + 0xc0))
                      ((longlong *)**(undefined8 **)(param_1 + 0x3340),&local_res8,puVar1);
    if (-1 < (int)uVar4) {
      local_res10 = 4;
      uVar4 = 0;
      do {
        iVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x3340) + 0xc0))
                          ((longlong *)**(undefined8 **)(param_1 + 0x3340),&local_res10,
                           param_1 + 0x33a0 + uVar4 * 0x10);
        if (iVar2 < 0) goto LAB_18000e84b;
        local_res18[0] = 1;
        iVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x3340) + 0xc0))
                          ((longlong *)**(undefined8 **)(param_1 + 0x3340),local_res18,
                           param_1 + 0x33a8 + uVar4 * 0x10);
        if (iVar2 < 0) {
          (**(code **)(**(longlong **)(param_1 + (uVar4 + 0x33a) * 0x10) + 0x10))();
          *(undefined8 *)(param_1 + (uVar4 + 0x33a) * 0x10) = 0;
          goto LAB_18000e84b;
        }
        uVar5 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar5;
      } while (uVar5 < 0x20);
      if (uVar5 == 0x20) {
        *(undefined8 *)(param_1 + 0x2c10) = 0;
        *(undefined8 *)(param_1 + 0x2c18) = 0;
        *(undefined8 *)(param_1 + 0x2c20) = 0;
        *(undefined8 *)(param_1 + 0x2c28) = 0;
        *(undefined8 *)(param_1 + 0x2c30) = 0;
        *(undefined8 *)(param_1 + 0x2c38) = 0;
        *(undefined8 *)(param_1 + 0x2c40) = 0;
        *(undefined8 *)(param_1 + 0x2c48) = 0;
        *(undefined8 *)(param_1 + 0x2c50) = 0;
        *(undefined8 *)(param_1 + 0x2c58) = 0;
        *(undefined8 *)(param_1 + 0x2c60) = 0;
        *(undefined8 *)(param_1 + 0x2c68) = 0;
        puVar3 = (undefined1 *)0x0;
        goto LAB_18000e7e5;
      }
      do {
        uVar4 = (ulonglong)((int)uVar4 - 1);
        (**(code **)(**(longlong **)(param_1 + 0x33a0 + uVar4 * 0x10) + 0x10))();
        *(undefined8 *)(param_1 + 0x33a0 + uVar4 * 0x10) = 0;
        (**(code **)(**(longlong **)(param_1 + 0x33a8 + uVar4 * 0x10) + 0x10))();
        *(undefined8 *)(param_1 + 0x33a8 + uVar4 * 0x10) = 0;
LAB_18000e84b:
      } while ((int)uVar4 != 0);
      uVar4 = (**(code **)(*(longlong *)*puVar1 + 0x10))();
      *puVar1 = 0;
    }
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  return uVar4;
}

