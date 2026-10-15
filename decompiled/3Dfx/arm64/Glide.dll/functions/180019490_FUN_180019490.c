/*
 * FUN_180019490 at 180019490
 * undefined __cdecl FUN_180019490(longlong param_1, int param_2, uint param_3, undefined8 * param_4, int param_5, int param_6)
 * Address ranges: 180019490-1800196d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180019490(longlong param_1,int param_2,uint param_3,undefined8 *param_4,int param_5,
                  int param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(char *)(param_1 + 100) == '\0') {
    return;
  }
  FUN_180061700((uint *)(param_1 + 0x60));
  uVar1 = FUN_180018700(param_1);
  if ((((&DAT_18006b129)[(ulonglong)uVar1 * 0x20] != '\0') ||
      (*(char *)(*(longlong *)(param_1 + 0x30) + 0x851) == '\0')) || (param_2 == 0)) {
    if (*(char *)(param_1 + 100) != '\0') {
      FUN_180061700((uint *)(param_1 + 0x60));
      if ((param_3 < 3) && (0 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833))) {
        uVar1 = (param_6 - param_5) + 1;
        iVar4 = 0;
        do {
          lVar3 = *(longlong *)(param_1 + 0x18);
          if (param_3 == 0) {
            puVar2 = (undefined8 *)(lVar3 + (longlong)iVar4 * 0x4e8 + 0x2c0);
LAB_180019650:
            if (param_4 != (undefined8 *)0x0) {
              uVar7 = *param_4;
              uVar6 = param_4[3];
              uVar5 = param_4[2];
              puVar2[1] = param_4[1];
              *puVar2 = uVar7;
              puVar2[3] = uVar6;
              puVar2[2] = uVar5;
              uVar7 = param_4[4];
              uVar6 = param_4[7];
              uVar5 = param_4[6];
              puVar2[5] = param_4[5];
              puVar2[4] = uVar7;
              puVar2[7] = uVar6;
              puVar2[6] = uVar5;
              uVar7 = param_4[8];
              uVar6 = param_4[0xb];
              uVar5 = param_4[10];
              puVar2[9] = param_4[9];
              puVar2[8] = uVar7;
              puVar2[0xb] = uVar6;
              puVar2[10] = uVar5;
              uVar5 = param_4[0xc];
              puVar2[0xd] = param_4[0xd];
              puVar2[0xc] = uVar5;
            }
          }
          else {
            if (param_3 == 1) {
              puVar2 = (undefined8 *)(lVar3 + (longlong)iVar4 * 0x4e8 + 0x330);
              goto LAB_180019650;
            }
            if (param_3 == 2 && param_4 != (undefined8 *)0x0) {
              thunk_FUN_180001218((undefined8 *)
                                  (lVar3 + ((longlong)iVar4 * 0x13a + (longlong)param_5) * 4 + 0x3a0
                                  ),(undefined8 *)((longlong)param_4 + (longlong)param_5 * 4),
                                  -(ulonglong)(uVar1 >> 0x1f) & 0xfffffffc00000000 |
                                  (ulonglong)uVar1 << 2);
            }
          }
          (**(code **)(**(longlong **)(param_1 + 0x18) + 0x278))
                    (*(longlong **)(param_1 + 0x18),iVar4,param_3,param_4,param_5,param_6 + 1);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833));
      }
      FUN_1800616f0((uint *)(param_1 + 0x60));
    }
    goto LAB_1800196b8;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x30) + 0x833) <= param_2 || 2 < param_3) goto LAB_1800196b8;
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (param_3 == 0) {
    puVar2 = (undefined8 *)(lVar3 + (longlong)param_2 * 0x4e8 + 0x2c0);
LAB_180019574:
    if (param_4 != (undefined8 *)0x0) {
      uVar7 = *param_4;
      uVar6 = param_4[3];
      uVar5 = param_4[2];
      puVar2[1] = param_4[1];
      *puVar2 = uVar7;
      puVar2[3] = uVar6;
      puVar2[2] = uVar5;
      uVar7 = param_4[4];
      uVar6 = param_4[7];
      uVar5 = param_4[6];
      puVar2[5] = param_4[5];
      puVar2[4] = uVar7;
      puVar2[7] = uVar6;
      puVar2[6] = uVar5;
      uVar7 = param_4[8];
      uVar6 = param_4[0xb];
      uVar5 = param_4[10];
      puVar2[9] = param_4[9];
      puVar2[8] = uVar7;
      puVar2[0xb] = uVar6;
      puVar2[10] = uVar5;
      uVar5 = param_4[0xc];
      puVar2[0xd] = param_4[0xd];
      puVar2[0xc] = uVar5;
    }
  }
  else {
    if (param_3 == 1) {
      puVar2 = (undefined8 *)(lVar3 + (longlong)param_2 * 0x4e8 + 0x330);
      goto LAB_180019574;
    }
    if (param_3 == 2 && param_4 != (undefined8 *)0x0) {
      uVar1 = (param_6 - param_5) + 1;
      thunk_FUN_180001218((undefined8 *)
                          (lVar3 + ((longlong)param_2 * 0x13a + (longlong)param_5) * 4 + 0x3a0),
                          (undefined8 *)((longlong)param_4 + (longlong)param_5 * 4),
                          -(ulonglong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulonglong)uVar1 << 2);
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x278))
            (*(longlong **)(param_1 + 0x18),param_2,param_3,param_4,param_5,param_6 + 1);
LAB_1800196b8:
  FUN_1800616f0((uint *)(param_1 + 0x60));
  return;
}

