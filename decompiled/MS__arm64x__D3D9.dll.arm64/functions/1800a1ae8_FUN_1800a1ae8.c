/*
 * FUN_1800a1ae8 at 1800a1ae8
 * undefined FUN_1800a1ae8(void)
 * Address ranges: 1800a1ae8-1800a1d37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a1ae8(float param_1,longlong *param_2,uint param_3,longlong param_4,longlong param_5,
                  longlong param_6)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a0;
  longlong *local_98;
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
  
  lVar6 = 0;
  do {
    *(float *)((longlong)(param_2 + (ulonglong)param_3 * 0x183 + 0x2018) + lVar6 * 0xc) =
         (float)*(ushort *)(param_4 + lVar6 * 2) / param_1;
    *(float *)((longlong)param_2 + lVar6 * 0xc + (ulonglong)param_3 * 0xc18 + 0x100c4) =
         (float)*(ushort *)(param_5 + lVar6 * 2) / param_1;
    lVar7 = lVar6 + 1;
    *(float *)((longlong)param_2 + lVar6 * 0xc + (ulonglong)param_3 * 0xc18 + 0x100c8) =
         (float)*(ushort *)(param_6 + lVar6 * 2) / param_1;
    lVar6 = lVar7;
  } while (lVar7 != 0x100);
  if (*(uint *)(param_2 + 0x2017) != 0) {
    uVar5 = 0;
    lVar6 = param_2[0x2016];
    do {
      lVar7 = uVar5 * 0x30;
      if ((param_3 == *(uint *)(lVar6 + 0x1c + lVar7)) && (*(char *)(lVar6 + 0x2c + lVar7) != '\0'))
      {
        plVar2 = (longlong *)(lVar7 + lVar6);
        if (*(char *)((longlong)plVar2 + 0x2d) == '\0') {
          (**(code **)(*param_2 + 0x150))(param_2);
          (**(code **)(*param_2 + 0x90))(param_2,&local_b0,*(undefined4 *)((longlong)plVar2 + 0x1c))
          ;
          lVar6 = param_2[1];
          if ((int)plVar2[2] < 4) {
            local_60 = *(undefined4 *)(&DAT_180231450 + (longlong)(int)plVar2[2] * 4);
          }
          else {
            local_60 = 0;
          }
          local_54 = *(undefined1 *)(lVar6 + 0x26);
          local_48 = *(undefined4 *)(lVar6 + 0xde);
          uStack_4c = *(undefined4 *)(lVar6 + 0xda);
          uStack_5c = *(undefined4 *)(&DAT_180232f18 + (longlong)*(int *)(lVar6 + 0xce) * 4);
          local_68 = *(undefined4 *)(&DAT_180232ef0 + (longlong)*(int *)(lVar6 + 0x1c) * 4);
          local_88 = *(undefined8 *)*plVar2;
          local_90 = (undefined4)param_2[5];
          local_53 = *(int *)(lVar6 + 0x18) == 1;
          uStack_64 = 0;
          local_58 = (uint)(*(int *)((longlong)plVar2 + 0x14) == 1);
          local_50 = 0;
          local_80 = local_b0;
          uStack_7c = uStack_ac;
          local_78 = *(undefined4 *)((longlong)plVar2 + 0x24);
          uStack_74 = (undefined4)plVar2[5];
          local_70 = local_a0;
          uStack_6c = 1;
          local_98 = param_2;
          puVar3 = (undefined8 *)FUN_1800e54c0(param_2[4],&local_98);
          if (puVar3 != (undefined8 *)0x0) {
            uVar4 = 2;
            if ((int)plVar2[3] == 1) {
              uVar4 = 3;
            }
            FUN_1800e63a0(param_2[4],*plVar2,uVar4,(int)plVar2[4]);
            FUN_1800e69c8(param_2[4],*plVar2,
                          param_2 + (ulonglong)*(uint *)((longlong)plVar2 + 0x1c) * 0x183 + 0x2018,
                          param_2 + 3);
            *plVar2 = (longlong)puVar3;
            *(undefined1 *)((longlong)plVar2 + 0x2d) = 1;
            FUN_1800e6028(param_2[4],*puVar3,0);
          }
        }
        FUN_1800e69c8(param_2[4],*(undefined8 *)(param_2[0x2016] + lVar7),
                      param_2 + (ulonglong)param_3 * 0x183 + 0x2018,param_2 + 3);
        return;
      }
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_2 + 0x2017));
  }
  return;
}

