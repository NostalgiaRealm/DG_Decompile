/*
 * FUN_1801b9cd0 at 1801b9cd0
 * undefined FUN_1801b9cd0(void)
 * Address ranges: 1801b9cd0-1801b9f47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801b9cd0(float param_1,longlong param_2,uint param_3,longlong param_4,longlong param_5,
                  longlong param_6)

{
  uint uVar1;
  longlong *plVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong lVar9;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  uint local_58;
  undefined1 local_54;
  undefined1 local_53;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  
  lVar7 = param_2 + (ulonglong)param_3 * 0xc18;
  lVar8 = 0;
  do {
    *(float *)(lVar7 + 0x100c0 + lVar8 * 0xc) = (float)*(ushort *)(param_4 + lVar8 * 2) / param_1;
    *(float *)(lVar7 + 0x100c4 + lVar8 * 0xc) = (float)*(ushort *)(param_5 + lVar8 * 2) / param_1;
    lVar9 = lVar8 + 1;
    *(float *)(lVar7 + 0x100c8 + lVar8 * 0xc) = (float)*(ushort *)(param_6 + lVar8 * 2) / param_1;
    puVar3 = __hybrid_os_arm64x_dispatch_icall;
    lVar8 = lVar9;
  } while (lVar9 != 0x100);
  if (*(uint *)(param_2 + 0x100b8) != 0) {
    uVar6 = 0;
    lVar8 = *(longlong *)(param_2 + 0x100b0);
    do {
      lVar9 = uVar6 * 0x30;
      if ((param_3 == *(uint *)(lVar8 + 0x1c + lVar9)) && (*(char *)(lVar8 + 0x2c + lVar9) != '\0'))
      {
        plVar2 = (longlong *)(lVar9 + lVar8);
        if (*(char *)((longlong)plVar2 + 0x2d) == '\0') {
          (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
          (*extraout_x11)(param_2);
          (*(code *)puVar3)(0x180224000);
          (*extraout_x11_00)(param_2,&local_b0,*(undefined4 *)((longlong)plVar2 + 0x1c));
          lVar8 = *(longlong *)(param_2 + 8);
          if ((int)plVar2[2] < 4) {
            local_60 = *(undefined4 *)(&DAT_18022da28 + (longlong)(int)plVar2[2] * 4);
          }
          else {
            local_60 = 0;
          }
          local_48 = *(undefined4 *)(lVar8 + 0xde);
          uStack_4c = *(undefined4 *)(lVar8 + 0xda);
          local_54 = *(undefined1 *)(lVar8 + 0x26);
          uStack_5c = *(undefined4 *)(&DAT_1802389e0 + (longlong)*(int *)(lVar8 + 0xce) * 4);
          local_68 = *(undefined4 *)(&DAT_1802389f8 + (longlong)*(int *)(lVar8 + 0x1c) * 4);
          local_88 = *(undefined8 *)*plVar2;
          uStack_64 = 0;
          local_90 = *(undefined4 *)(param_2 + 0x28);
          local_58 = (uint)(*(int *)((longlong)plVar2 + 0x14) == 1);
          local_53 = *(int *)(lVar8 + 0x18) == 1;
          local_50 = 0;
          local_80 = local_b0;
          uStack_7c = uStack_ac;
          local_78 = *(undefined4 *)((longlong)plVar2 + 0x24);
          uStack_74 = (undefined4)plVar2[5];
          local_70 = local_a0;
          uStack_6c = 1;
          local_98 = param_2;
          puVar4 = (undefined8 *)FUN_180202770(*(undefined8 *)(param_2 + 0x20),&local_98);
          if (puVar4 != (undefined8 *)0x0) {
            uVar5 = 2;
            if ((int)plVar2[3] == 1) {
              uVar5 = 3;
            }
            FUN_180203780(*(undefined8 *)(param_2 + 0x20),*plVar2,uVar5,(int)plVar2[4]);
            FUN_180203e38(*(undefined8 *)(param_2 + 0x20),*plVar2,
                          param_2 + (ulonglong)*(uint *)((longlong)plVar2 + 0x1c) * 0xc18 + 0x100c0,
                          param_2 + 0x18);
            *plVar2 = (longlong)puVar4;
            *(undefined1 *)((longlong)plVar2 + 0x2d) = 1;
            FUN_180203408(*(undefined8 *)(param_2 + 0x20),*puVar4,0);
          }
        }
        FUN_180203e38(*(undefined8 *)(param_2 + 0x20),
                      *(undefined8 *)(*(longlong *)(param_2 + 0x100b0) + lVar9),lVar7 + 0x100c0,
                      param_2 + 0x18);
        return;
      }
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_2 + 0x100b8));
  }
  return;
}

