/*
 * FUN_1801378a0 at 1801378a0
 * undefined FUN_1801378a0(void)
 * Address ranges: 1801378a0-180137907
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801378a0(longlong param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  longlong lVar6;
  undefined8 uStack_58;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  iVar3 = (*extraout_x11)(uVar4,*(undefined8 *)(param_1 + 0xf718),0);
  if (-1 < iVar3) {
    uVar4 = (*(code *)puVar2)(0x180224000);
    iVar3 = (*extraout_x11_00)(uVar4,*(undefined8 *)(param_1 + 0xf710),0);
    if (-1 < iVar3) {
      if (*(longlong *)(param_1 + 0x68) != *(longlong *)(param_1 + 0x60)) {
        *(int *)(param_1 + 0x78) =
             (int)*(longlong *)(param_1 + 0x68) - (int)*(undefined8 *)(param_1 + 0x58);
      }
      *(longlong *)(param_1 + 0x68) = uStack_58;
      *(longlong *)(param_1 + 0x58) = uStack_58;
      *(longlong *)(param_1 + 0x88) = uStack_58;
      if ((param_2 & 1) == 0) {
        iVar3 = *(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x70);
        uVar1 = *(uint *)(param_1 + 0x78);
        *(int *)(param_1 + 0x70) = iVar3;
        uVar5 = uVar1;
        if ((param_4 != 0) && (param_4 != *(int *)(param_1 + 0x80))) {
          uVar5 = iVar3 * param_4;
          if (uVar5 < uVar1) {
            *(uint *)(param_1 + 0x7c) = uVar1 - uVar5;
            uVar5 = uVar1;
          }
          else {
            *(undefined4 *)(param_1 + 0x7c) = 0;
          }
        }
        lVar6 = uStack_58 + (ulonglong)uVar5;
        *(longlong *)(param_1 + 0x68) = lVar6;
      }
      else {
        *(undefined4 *)(param_1 + 0x70) = 0;
        *(undefined4 *)(param_1 + 0x78) = 0;
        *(undefined4 *)(param_1 + 0x7c) = 0;
        lVar6 = uStack_58;
      }
      if (param_4 != 0) {
        *(int *)(param_1 + 0x80) = param_4;
      }
      *(longlong *)(param_1 + 0x60) = lVar6;
      *(undefined4 *)(param_1 + 0x74) = 0;
      if ((param_3 & 1) == 0) {
        uVar1 = *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x90);
        *(uint *)(param_1 + 0x90) = uVar1;
        *(ulonglong *)(param_1 + 0x88) = uStack_58 + (ulonglong)uVar1 * 4;
      }
      else {
        *(undefined4 *)(param_1 + 0x90) = 0;
      }
      *(undefined4 *)(param_1 + 0x94) = 0;
      return 1;
    }
    uVar4 = (*(code *)puVar2)(0x180224000);
    (*extraout_x11_01)(uVar4,*(undefined8 *)(param_1 + 0xf718),0);
  }
  return 0;
}

