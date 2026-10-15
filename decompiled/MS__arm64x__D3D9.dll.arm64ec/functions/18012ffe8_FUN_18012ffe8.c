/*
 * FUN_18012ffe8 at 18012ffe8
 * undefined FUN_18012ffe8(void)
 * Address ranges: 18012ffe8-180130287
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18012ffe8(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  char cVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined4 local_50;
  int iStack_4c;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  if ((*(uint *)(param_1 + 0x48) & 1) == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FUN_18012ff70(param_1);
    puVar2 = __hybrid_os_arm64x_dispatch_icall;
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11_02)(param_1);
    if (*(char *)(param_1 + 0x27) == '\0') {
      local_58 = 0;
      if ((param_2 & 1) == 0) {
        local_50 = FUN_18012faf0(param_1);
        iStack_4c = *(ushort *)(param_1 + 0x16) - 1;
        (*(code *)puVar2)(0x180224000);
        (*extraout_x11_03)(param_1,&local_58);
      }
      else {
        local_60[0] = 0;
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        (*(code *)puVar2)(0x180224000);
        cVar4 = (*extraout_x11_04)(param_1,&local_58,local_60);
        if (cVar4 != '\0') {
          (*(code *)puVar2)(0x180225000);
          (*extraout_x11_05)(param_1,uVar7,local_58);
          goto LAB_18013023c;
        }
      }
    }
    else {
LAB_18013023c:
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_06)(param_1);
    }
    iVar6 = 0;
    iVar5 = 0;
  }
  else {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)();
    uVar9 = 0x80;
    iVar5 = 0;
    iVar6 = 0;
    uVar8 = 0;
    if (*(int *)(param_1 + 0x40) == 0) goto LAB_180130258;
    do {
      if ((*(byte *)(*(longlong *)(param_1 + 0x30) + uVar8) & uVar9) == 0) {
        if (iVar5 != iVar6) {
          FUN_180130288(param_1,&local_58,iVar5,iVar6);
          (*(code *)puVar2)(0x180224000);
          (*extraout_x11_00)(param_1,&local_58);
          FUN_18012feb0(param_1,iVar5,iVar6);
          iVar5 = iVar6;
        }
        iVar5 = iVar5 + 1;
      }
      iVar6 = iVar6 + 1;
      *(byte *)(*(longlong *)(param_1 + 0x30) + uVar8) =
           *(byte *)(*(longlong *)(param_1 + 0x30) + uVar8) & ~(byte)uVar9;
      bVar3 = uVar9 < 2;
      uVar1 = (uint)uVar8;
      if (bVar3) {
        uVar1 = (uint)uVar8 + 1;
      }
      uVar8 = (ulonglong)uVar1;
      uVar9 = uVar9 >> 1;
      if (bVar3) {
        uVar9 = 0x80;
      }
    } while (uVar1 < *(uint *)(param_1 + 0x40));
    if (iVar5 == iVar6) goto LAB_180130258;
    FUN_180130288(param_1,&local_58,iVar5,iVar6);
    (*(code *)puVar2)(0x180224000);
    (*extraout_x11_01)(param_1,&local_58);
  }
  FUN_18012feb0(param_1,iVar5,iVar6);
LAB_180130258:
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xfffffffe;
  return 1;
}

