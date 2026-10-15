/*
 * FUN_18020e768 at 18020e768
 * undefined FUN_18020e768(void)
 * Address ranges: 18020e768-18020e96f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_18020e768(longlong param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  ulonglong *puVar10;
  longlong *plVar11;
  undefined8 local_50;
  longlong local_48;
  
  cVar3 = '\x01';
  local_50 = param_2;
  thunk_FUN_1802236f8(param_1 + 0x28);
  lVar4 = FUN_18020ec30(param_1,&local_50);
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  if (lVar4 != 0) {
    local_50 = CONCAT44(local_50._4_4_,param_3);
    if (param_3 == -1) {
      uVar6 = 0;
      if (*(int *)(lVar4 + 0x18) != 0) {
        local_50 = CONCAT44(local_50._4_4_,*(int *)(lVar4 + 0x18));
        local_48 = param_1;
        do {
          if ((uint)uVar6 < *(uint *)(lVar4 + 0x18)) {
            lVar9 = *(longlong *)(lVar4 + 0x10) + uVar6 * 0x30;
            plVar5 = (longlong *)(lVar9 + 0x10);
            puVar10 = (ulonglong *)(lVar9 + 0x28);
            plVar11 = (longlong *)(lVar9 + 0x18);
          }
          else {
            plVar5 = (longlong *)&DAT_00000008;
            puVar10 = (ulonglong *)&DAT_00000020;
            plVar11 = (longlong *)&DAT_00000010;
          }
          cVar3 = '\x01';
          (*(code *)puVar2)(0x180224000);
          uVar8 = (*extraout_x11_01)();
          if ((uVar8 < *puVar10) &&
             ((*plVar11 == -1 || (cVar3 = FUN_180207560(*plVar11 + 8,0), cVar3 != '\0')))) {
            lVar9 = *plVar5;
            uVar7 = (*(code *)puVar2)(0x180224000);
            (*extraout_x11_02)(uVar7,*puVar10,*(undefined8 *)(lVar9 + 0x20));
            thunk_FUN_1802238ec(*(undefined8 *)(*plVar5 + 0x20),0xffffffff);
          }
          uVar1 = (uint)uVar6 + 1;
          uVar6 = (ulonglong)uVar1;
          param_1 = local_48;
        } while (uVar1 < (uint)local_50);
      }
    }
    else {
      plVar5 = (longlong *)FUN_18020ee08(lVar4 + 8,&local_50);
      puVar2 = __hybrid_os_arm64x_dispatch_icall;
      if (plVar5 != (longlong *)0x0) {
        (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
        uVar6 = (*extraout_x11)();
        if ((uVar6 < (ulonglong)plVar5[3]) &&
           ((plVar5[1] == -1 || (cVar3 = FUN_180207560(plVar5[1] + 8,0), cVar3 != '\0')))) {
          lVar4 = *plVar5;
          uVar7 = (*(code *)puVar2)(0x180224000);
          (*extraout_x11_00)(uVar7,plVar5[3],*(undefined8 *)(lVar4 + 0x20));
          thunk_FUN_1802238ec(*(undefined8 *)(*plVar5 + 0x20),0xffffffff);
        }
      }
    }
  }
  thunk_FUN_18022370c(param_1 + 0x28);
  return cVar3;
}

