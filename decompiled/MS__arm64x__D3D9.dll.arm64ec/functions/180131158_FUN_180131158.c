/*
 * FUN_180131158 at 180131158
 * undefined FUN_180131158(void)
 * Address ranges: 180131158-180131463
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180131158(longlong param_1)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined4 local_50;
  int iStack_4c;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  if (((*(uint *)(param_1 + 0x48) >> 5 & 1) == 0) && (*(char *)(param_1 + 0xed) != '\0')) {
    local_58 = 0;
    local_50 = FUN_18012faf0();
    iStack_4c = *(ushort *)(param_1 + 0x16) - 1;
    uVar5 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    cVar4 = (*extraout_x11)(uVar5,*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98),
                            *(undefined8 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe8),
                            &local_58);
    *(bool *)(param_1 + 0xed) = cVar4 == '\0';
    return cVar4 != '\0';
  }
  if ((*(uint *)(param_1 + 0x48) & 1) == 0) {
    return false;
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    cVar4 = *(char *)(param_1 + 0x60);
    FUN_18012ff70(param_1);
    puVar2 = __hybrid_os_arm64x_dispatch_icall;
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11_03)(param_1);
    if (*(char *)(param_1 + 0x27) == '\0') {
      local_58 = 0;
      if (cVar4 == '\0') {
        local_50 = FUN_18012faf0(param_1);
        iStack_4c = *(ushort *)(param_1 + 0x16) - 1;
        (*(code *)puVar2)(0x180224000);
        (*extraout_x11_04)(param_1,&local_58);
      }
      else {
        local_60[0] = 0;
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        (*(code *)puVar2)(0x180224000);
        cVar4 = (*extraout_x11_05)(param_1,&local_58,local_60);
        if (cVar4 != '\0') {
          (*(code *)puVar2)(0x180225000);
          (*extraout_x11_06)(param_1,uVar5,local_58);
          goto LAB_180131418;
        }
      }
    }
    else {
LAB_180131418:
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_07)(param_1);
    }
    iVar7 = 0;
    iVar6 = 0;
  }
  else {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11_00)(param_1);
    uVar9 = 0x80;
    iVar6 = 0;
    iVar7 = 0;
    uVar8 = 0;
    if (*(int *)(param_1 + 0x40) == 0) goto LAB_180131434;
    do {
      if ((*(byte *)(*(longlong *)(param_1 + 0x30) + uVar8) & uVar9) == 0) {
        if (iVar6 != iVar7) {
          FUN_180130288(param_1,&local_58,iVar6,iVar7);
          (*(code *)puVar2)(0x180224000);
          (*extraout_x11_01)(param_1,&local_58);
          FUN_18012feb0(param_1,iVar6,iVar7);
          iVar6 = iVar7;
        }
        iVar6 = iVar6 + 1;
      }
      iVar7 = iVar7 + 1;
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
    if (iVar6 == iVar7) goto LAB_180131434;
    FUN_180130288(param_1,&local_58,iVar6,iVar7);
    (*(code *)puVar2)(0x180224000);
    (*extraout_x11_02)(param_1,&local_58);
  }
  FUN_18012feb0(param_1,iVar6,iVar7);
LAB_180131434:
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xfffffffe;
  return true;
}

