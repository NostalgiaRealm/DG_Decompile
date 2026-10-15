/*
 * FUN_18011cad8 at 18011cad8
 * undefined FUN_18011cad8(void)
 * Address ranges: 18011cad8-18011cc07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18011cad8(longlong param_1,int param_2)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  code *extraout_x11;
  code *extraout_x11_00;
  int local_10 [4];
  
  lVar5 = *(longlong *)(param_1 + 0x358);
  uVar3 = 0;
  while (*(int *)(lVar5 + uVar3 * 4) != param_2) {
    uVar6 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar6;
    if (7 < uVar6) {
      if ((uVar6 == 8) && (uVar6 = *(uint *)(param_1 + 0x360), 8 < uVar6)) {
        uVar3 = 8;
        do {
          uVar2 = (uint)uVar3;
          if (*(int *)(*(longlong *)(param_1 + 0x358) + uVar3 * 4) == param_2) {
            while (uVar4 = uVar2 + 1, uVar4 < uVar6) {
              *(undefined4 *)(*(longlong *)(param_1 + 0x358) + (ulonglong)uVar2 * 4) =
                   *(undefined4 *)(*(longlong *)(param_1 + 0x358) + (ulonglong)uVar4 * 4);
              uVar2 = uVar4;
              uVar6 = *(uint *)(param_1 + 0x360);
            }
            *(int *)(param_1 + 0x360) = *(int *)(param_1 + 0x360) + -1;
            return;
          }
          uVar3 = (ulonglong)(uVar2 + 1);
        } while (uVar2 + 1 < uVar6);
      }
      return;
    }
  }
  local_10[0] = param_2;
  if (*(uint *)(param_1 + 0x360) < 9) {
    *(undefined4 *)(lVar5 + uVar3 * 4) = 0xffffffff;
    uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11_00)(uVar1,uVar3 & 0xffffffff,0);
    return;
  }
  uVar6 = *(uint *)(param_1 + 0x360) - 1;
  *(uint *)(param_1 + 0x360) = uVar6;
  *(undefined4 *)(lVar5 + uVar3 * 4) = *(undefined4 *)(lVar5 + (ulonglong)uVar6 * 4);
  lVar5 = FUN_18010d668(param_1 + 0x318,local_10);
  if (lVar5 == 0) {
    return;
  }
  uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar1,uVar3 & 0xffffffff);
  return;
}

