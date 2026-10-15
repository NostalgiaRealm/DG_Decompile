/*
 * FUN_180084c88 at 180084c88
 * undefined FUN_180084c88(void)
 * Address ranges: 180084c88-180084ea3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_180084c88(longlong param_1,ulonglong param_2,int param_3,uint param_4,ulonglong param_5,
             ulonglong *param_6,undefined4 *param_7)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong *local_70;
  undefined4 local_68;
  
  FUN_1800e5470(*(undefined8 *)(param_1 + -0x90),param_2,param_1 + -0xe0);
  uVar6 = 2;
  lVar4 = (**(code **)(*(longlong *)(param_1 + -0xe0) + 200))(param_1 + -0xe0);
  if (lVar4 != 0) {
    if (*(longlong *)(param_1 + -0x28) == 0) {
      func_0x0001801bad48(&local_70,*(undefined4 *)(param_1 + -0xb4));
      FUN_180082d80(param_1 + -0x40,*(undefined4 *)(param_1 + -0xbc),
                    *(undefined4 *)(param_1 + -0xb8),*(undefined4 *)(param_1 + -0xb0),
                    *(undefined4 *)(param_1 + -0xac),1,(ulonglong)local_70 & 0xffffffff,0,0,0,3,0,
                    0x30000,0,0,0,0);
      uVar8 = 0;
      puVar1 = param_6;
      if (*(int *)(param_1 + -0xac) != 0) {
        do {
          local_70 = puVar1;
          uVar7 = 0;
          if (*(int *)(param_1 + -0xb0) != 0) {
            do {
              FUN_1800a2b98(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xb8),uVar7);
              uVar2 = FUN_1800a2b50(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xbc));
              (*__imp_USER32_dll_SetRect)
                        (*(longlong *)(param_1 + -0x50) +
                         (ulonglong)(uVar7 + *(int *)(param_1 + -0xa4) * uVar8) * 0x28 + 0x18,0,0,
                         uVar2);
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(uint *)(param_1 + -0xb0));
          }
          uVar8 = uVar8 + 1;
          param_6 = local_70;
          puVar1 = local_70;
        } while (uVar8 < *(uint *)(param_1 + -0xac));
      }
    }
    if (*(longlong *)(param_1 + -0x28) != 0) {
      (*(code *)**(undefined8 **)(param_1 + -0xe0))(param_1 + -0xe0,param_2 & 0xffffffff,param_3);
      uVar6 = 3;
      if ((param_5 & 1) != 0) {
        if ((param_4 & 1) == 0) {
          uVar6 = 2;
          if ((param_4 & 2) == 0) {
            uVar6 = 3;
          }
        }
        else {
          uVar6 = 1;
        }
      }
      plVar5 = *(longlong **)(*(longlong *)(param_1 + -0x88) + 8);
      iVar3 = (**(code **)(*plVar5 + 0x70))
                        (plVar5,*(undefined8 *)(param_1 + -0x28),
                         (int)param_2 + *(int *)(param_1 + -0xa4) * param_3,uVar6,
                         (param_4 & 4) << 0x12,&local_70);
      if (iVar3 < 0) {
        uVar6 = 1;
        if (iVar3 != -0x7785fff6) {
          uVar6 = 2;
        }
      }
      else {
        uVar6 = 0;
        *param_6 = (ulonglong)local_70;
        *param_7 = local_68;
      }
    }
  }
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(*(longlong *)(param_1 + -0x90) + 0x620);
  return uVar6;
}

