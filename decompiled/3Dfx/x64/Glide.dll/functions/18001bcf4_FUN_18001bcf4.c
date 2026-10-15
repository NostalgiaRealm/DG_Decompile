/*
 * FUN_18001bcf4 at 18001bcf4
 * undefined8 __fastcall FUN_18001bcf4(longlong param_1)
 * Address ranges: 18001bcf4-18001be82
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18001bcf4(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  puVar1 = (undefined8 *)(param_1 + 0x3218);
  *puVar1 = 0;
  puVar3 = FUN_18005f814((undefined1 *)(param_1 + 0x3220),0,0x200);
  if (*(char *)(param_1 + 0x2beb) == '\0') {
LAB_18001be05:
    uVar4 = CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
  }
  else {
    local_res8 = 0;
    uVar4 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x31c0) + 0xc0))
                      ((longlong *)**(undefined8 **)(param_1 + 0x31c0),&local_res8,puVar1);
    if (-1 < (int)uVar4) {
      local_res10 = 4;
      uVar4 = 0;
      do {
        iVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x31c0) + 0xc0))
                          ((longlong *)**(undefined8 **)(param_1 + 0x31c0),&local_res10,
                           param_1 + 0x3220 + uVar4 * 0x10);
        if (iVar2 < 0) goto LAB_18001be6b;
        local_res18[0] = 1;
        iVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x31c0) + 0xc0))
                          ((longlong *)**(undefined8 **)(param_1 + 0x31c0),local_res18,
                           param_1 + 0x3228 + uVar4 * 0x10);
        if (iVar2 < 0) {
          (**(code **)(**(longlong **)(param_1 + (uVar4 + 0x322) * 0x10) + 0x10))();
          *(undefined8 *)(param_1 + (uVar4 + 0x322) * 0x10) = 0;
          goto LAB_18001be6b;
        }
        uVar5 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar5;
      } while (uVar5 < 0x20);
      if (uVar5 == 0x20) {
        *(undefined8 *)(param_1 + 0x2b78) = 0;
        *(undefined8 *)(param_1 + 0x2b80) = 0;
        *(undefined8 *)(param_1 + 0x2b88) = 0;
        *(undefined8 *)(param_1 + 0x2b90) = 0;
        *(undefined8 *)(param_1 + 0x2b98) = 0;
        *(undefined8 *)(param_1 + 0x2ba0) = 0;
        *(undefined8 *)(param_1 + 0x2ba8) = 0;
        *(undefined8 *)(param_1 + 0x2bb0) = 0;
        *(undefined8 *)(param_1 + 0x2bb8) = 0;
        *(undefined8 *)(param_1 + 0x2bc0) = 0;
        *(undefined8 *)(param_1 + 0x2bc8) = 0;
        *(undefined8 *)(param_1 + 0x2bd0) = 0;
        puVar3 = (undefined1 *)0x0;
        goto LAB_18001be05;
      }
      do {
        uVar4 = (ulonglong)((int)uVar4 - 1);
        (**(code **)(**(longlong **)(param_1 + 0x3220 + uVar4 * 0x10) + 0x10))();
        *(undefined8 *)(param_1 + 0x3220 + uVar4 * 0x10) = 0;
        (**(code **)(**(longlong **)(param_1 + 0x3228 + uVar4 * 0x10) + 0x10))();
        *(undefined8 *)(param_1 + 0x3228 + uVar4 * 0x10) = 0;
LAB_18001be6b:
      } while ((int)uVar4 != 0);
      uVar4 = (**(code **)(*(longlong *)*puVar1 + 0x10))();
      *puVar1 = 0;
    }
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  return uVar4;
}

