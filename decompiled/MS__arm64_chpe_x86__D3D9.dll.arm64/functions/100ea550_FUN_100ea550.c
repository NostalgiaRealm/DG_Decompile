/*
 * FUN_100ea550 at 100ea550
 * undefined FUN_100ea550(void)
 * Address ranges: 100ea550-100ea77f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100ea550(int param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined4 uVar9;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  undefined1 auStack_50 [12];
  uint local_44;
  
  uVar9 = 0x8876086c;
  if (param_2 != (undefined8 *)0x0) {
    if (((*(uint *)(*(int *)(param_1 + 0x34) + 0xdd0) >> 2 & 1) == 0) &&
       (*(int *)(DAT_10175b54 + 0x20) == 0)) {
      bVar2 = false;
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
    }
    else {
      bVar2 = true;
      iVar5 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
      if (iVar5 == 0) {
        FUN_100071d0(0);
      }
    }
    pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    uVar1 = (&DAT_10171380)[*(int *)(param_1 + 0xac) * 0x8a];
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar6 = (*extraout_w11)(uVar1);
    switch(uVar6) {
    case 0:
      param_2[1] = 0;
      *param_2 = 0;
      param_2[2] = 0;
      *(undefined4 *)(param_2 + 3) = 0;
      if ((*(char *)(param_1 + 0xbd) == '\0') &&
         (FUN_10012db0(*(undefined4 *)(param_1 + 0x120),auStack_50), (local_44 >> 0xe & 1) != 0)) {
        puVar7 = &DAT_10171394 + *(int *)(param_1 + 0xac) * 0x8a;
        (*pcVar3)();
        (*extraout_w11_00)(uVar1,&lStack_60,*puVar7);
        (*(code *)PTR_FUN_1016c0e4)(&local_68);
        lVar8 = *(longlong *)(param_1 + 200);
        if (lVar8 <= local_58) {
          lVar8 = local_68;
        }
        *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0xd0);
        if (lStack_60 == 0) {
                    /* WARNING: Does not return */
          uVar4 = SoftwareBreakpoint(0xf004,0x100ea710);
          (*(code *)uVar4)();
        }
        uVar9 = 0;
        if (lStack_60 != 0) {
          uVar9 = (undefined4)(lVar8 / lStack_60);
        }
        *(undefined4 *)((int)param_2 + 4) = uVar9;
        uVar9 = 0;
        if (lStack_60 != 0) {
          uVar9 = (undefined4)((local_68 - local_58) / lStack_60);
        }
        *(undefined4 *)(param_2 + 1) = uVar9;
        *(longlong *)((int)param_2 + 0xc) = *(longlong *)(param_1 + 200);
      }
      uVar9 = 0;
      break;
    case 1:
    case 4:
      uVar9 = 0x88760874;
      break;
    case 2:
      uVar9 = 0x88760870;
      break;
    case 3:
      uVar9 = 0x88760868;
    }
    if (bVar2) {
      (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
    }
    else {
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
    }
  }
  return uVar9;
}

