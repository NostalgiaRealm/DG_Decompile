/*
 * FUN_1801b9f50 at 1801b9f50
 * undefined FUN_1801b9f50(void)
 * Address ranges: 1801b9f50-1801ba18b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801b9f50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined4 uVar8;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  longlong local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  uint local_78;
  undefined1 local_74;
  undefined1 local_73;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  
  plVar5 = (longlong *)FUN_1801b91a0();
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  if (plVar5 != (longlong *)0x0) {
    if ((*(char *)((longlong)plVar5 + 0x2c) != '\0') && (*(char *)((longlong)plVar5 + 0x2d) == '\0')
       ) {
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)(param_1);
      (*(code *)puVar1)(0x180224000);
      (*extraout_x11_00)(param_1,&local_60,*(undefined4 *)((longlong)plVar5 + 0x1c));
      lVar7 = *(longlong *)(param_1 + 8);
      if ((int)plVar5[2] < 4) {
        local_80 = *(undefined4 *)(&DAT_18022da28 + (longlong)(int)plVar5[2] * 4);
      }
      else {
        local_80 = 0;
      }
      local_68 = *(undefined4 *)(lVar7 + 0xde);
      uStack_6c = *(undefined4 *)(lVar7 + 0xda);
      local_74 = *(undefined1 *)(lVar7 + 0x26);
      uStack_7c = *(undefined4 *)(&DAT_1802389e0 + (longlong)*(int *)(lVar7 + 0xce) * 4);
      local_88 = *(undefined4 *)(&DAT_1802389f8 + (longlong)*(int *)(lVar7 + 0x1c) * 4);
      local_a8 = *(undefined8 *)*plVar5;
      uStack_84 = 0;
      local_b0 = *(undefined4 *)(param_1 + 0x28);
      local_78 = (uint)(*(int *)((longlong)plVar5 + 0x14) == 1);
      local_73 = *(int *)(lVar7 + 0x18) == 1;
      local_70 = 0;
      local_a0 = local_60;
      uStack_9c = uStack_5c;
      local_98 = *(undefined4 *)((longlong)plVar5 + 0x24);
      uStack_94 = (undefined4)plVar5[5];
      local_90 = local_50;
      uStack_8c = 1;
      local_b8 = param_1;
      puVar6 = (undefined8 *)FUN_180202770(*(undefined8 *)(param_1 + 0x20),&local_b8);
      if (puVar6 != (undefined8 *)0x0) {
        uVar8 = 2;
        if ((int)plVar5[3] == 1) {
          uVar8 = 3;
        }
        FUN_180203780(*(undefined8 *)(param_1 + 0x20),*plVar5,uVar8,(int)plVar5[4]);
        FUN_180203e38(*(undefined8 *)(param_1 + 0x20),*plVar5,
                      param_1 + (ulonglong)*(uint *)((longlong)plVar5 + 0x1c) * 0xc18 + 0x100c0,
                      param_1 + 0x18);
        *plVar5 = (longlong)puVar6;
        *(undefined1 *)((longlong)plVar5 + 0x2d) = 1;
        FUN_180203408(*(undefined8 *)(param_1 + 0x20),*puVar6,0);
      }
    }
    (*(code *)puVar1)(0x180224000);
    cVar3 = (*extraout_x11_01)(param_1,param_3,param_4,param_5);
    if ((cVar3 == '\0') && (iVar4 = thunk_FUN_180223900(&local_c0), iVar4 != 0)) {
      if (local_c0 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x1801ba16c);
        (*pcVar2)();
      }
      lVar7 = 0;
      if (local_c0 != 0) {
        lVar7 = (*(longlong *)
                  (param_1 + (ulonglong)*(uint *)((longlong)plVar5 + 0x1c) * 0xc18 + 0x10cc0) * 1000
                ) / local_c0;
      }
      thunk_FUN_1802237c0(lVar7);
    }
  }
  return;
}

