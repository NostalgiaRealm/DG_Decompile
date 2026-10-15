/*
 * FUN_1800a1d38 at 1800a1d38
 * undefined FUN_1800a1d38(void)
 * Address ranges: 1800a1d38-1800a1f47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a1d38(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong local_c0;
  longlong *local_b8;
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
  
  plVar4 = (longlong *)func_0x0001801b91a0();
  if (plVar4 != (longlong *)0x0) {
    if ((*(char *)((longlong)plVar4 + 0x2c) != '\0') && (*(char *)((longlong)plVar4 + 0x2d) == '\0')
       ) {
      (**(code **)(*param_1 + 0x150))(param_1);
      (**(code **)(*param_1 + 0x90))(param_1,&local_60,*(undefined4 *)((longlong)plVar4 + 0x1c));
      lVar6 = param_1[1];
      if ((int)plVar4[2] < 4) {
        local_80 = *(undefined4 *)(&DAT_180231450 + (longlong)(int)plVar4[2] * 4);
      }
      else {
        local_80 = 0;
      }
      local_74 = *(undefined1 *)(lVar6 + 0x26);
      local_68 = *(undefined4 *)(lVar6 + 0xde);
      uStack_6c = *(undefined4 *)(lVar6 + 0xda);
      uStack_7c = *(undefined4 *)(&DAT_180232f18 + (longlong)*(int *)(lVar6 + 0xce) * 4);
      local_88 = *(undefined4 *)(&DAT_180232ef0 + (longlong)*(int *)(lVar6 + 0x1c) * 4);
      local_a8 = *(undefined8 *)*plVar4;
      local_b0 = (undefined4)param_1[5];
      local_73 = *(int *)(lVar6 + 0x18) == 1;
      uStack_84 = 0;
      local_78 = (uint)(*(int *)((longlong)plVar4 + 0x14) == 1);
      local_70 = 0;
      local_a0 = local_60;
      uStack_9c = uStack_5c;
      local_98 = *(undefined4 *)((longlong)plVar4 + 0x24);
      uStack_94 = (undefined4)plVar4[5];
      local_90 = local_50;
      uStack_8c = 1;
      local_b8 = param_1;
      puVar5 = (undefined8 *)FUN_1800e54c0(param_1[4],&local_b8);
      if (puVar5 != (undefined8 *)0x0) {
        uVar7 = 2;
        if ((int)plVar4[3] == 1) {
          uVar7 = 3;
        }
        FUN_1800e63a0(param_1[4],*plVar4,uVar7,(int)plVar4[4]);
        FUN_1800e69c8(param_1[4],*plVar4,
                      param_1 + (ulonglong)*(uint *)((longlong)plVar4 + 0x1c) * 0x183 + 0x2018,
                      param_1 + 3);
        *plVar4 = (longlong)puVar5;
        *(undefined1 *)((longlong)plVar4 + 0x2d) = 1;
        FUN_1800e6028(param_1[4],*puVar5,0);
      }
    }
    cVar2 = (**(code **)(*param_1 + 0x168))(param_1,param_3,param_4,param_5);
    if ((cVar2 == '\0') &&
       (iVar3 = (*__imp_KERNEL32_dll_QueryPerformanceFrequency)(&local_c0), iVar3 != 0)) {
      if (local_c0 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(0xf004,0x1800a1f20);
        (*pcVar1)();
      }
      lVar6 = 0;
      if (local_c0 != 0) {
        lVar6 = (param_1[(ulonglong)*(uint *)((longlong)plVar4 + 0x1c) * 0x183 + 0x2198] * 1000) /
                local_c0;
      }
      (*__imp_KERNEL32_dll_Sleep)(lVar6);
    }
  }
  return;
}

