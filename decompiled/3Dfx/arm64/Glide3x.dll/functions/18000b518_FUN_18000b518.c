/*
 * FUN_18000b518 at 18000b518
 * undefined __cdecl FUN_18000b518(longlong param_1, int param_2, uint param_3, undefined8 * param_4)
 * Address ranges: 18000b518-18000b753
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000b518(longlong param_1,int param_2,uint param_3,undefined8 *param_4)

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
  FUN_1800643e0((uint *)(param_1 + 0x60));
  uVar1 = FUN_18000a930(param_1);
  if ((((&DAT_18006f279)[(ulonglong)uVar1 * 0x20] != '\0') ||
      (*(char *)(*(longlong *)(param_1 + 0x30) + 0x851) == '\0')) || (param_2 == 0)) {
    if (*(char *)(param_1 + 100) != '\0') {
      FUN_1800643e0((uint *)(param_1 + 0x60));
      if (((param_3 < 3) ||
          ((param_3 == 3 &&
           (uVar1 = FUN_18000a930(param_1), (&DAT_18006f27d)[(ulonglong)uVar1 * 0x20] != '\0')))) &&
         (iVar4 = 0, 0 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833))) {
        do {
          lVar3 = *(longlong *)(param_1 + 0x18);
          if (param_3 - 2 < 2) {
            if (param_4 != (undefined8 *)0x0) {
              thunk_FUN_1800010d8((undefined8 *)(lVar3 + (longlong)iVar4 * 0x4e8 + 0x418),param_4,
                                  0x400);
            }
          }
          else {
            if (param_3 == 0) {
              puVar2 = (undefined8 *)(lVar3 + (longlong)iVar4 * 0x4e8 + 0x338);
            }
            else {
              if (param_3 != 1) goto LAB_18000b6f4;
              puVar2 = (undefined8 *)(lVar3 + (longlong)iVar4 * 0x4e8 + 0x3a8);
            }
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
LAB_18000b6f4:
          (**(code **)(**(longlong **)(param_1 + 0x18) + 0x2b8))
                    (*(longlong **)(param_1 + 0x18),iVar4,param_3,param_4,0,0x100);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833));
      }
      FUN_1800643d0((uint *)(param_1 + 0x60));
    }
    goto LAB_18000b738;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x30) + 0x833) <= param_2 || 2 < param_3) goto LAB_18000b738;
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (param_3 - 2 < 2) {
    if (param_4 != (undefined8 *)0x0) {
      thunk_FUN_1800010d8((undefined8 *)(lVar3 + (longlong)param_2 * 0x4e8 + 0x418),param_4,0x400);
    }
  }
  else {
    if (param_3 == 0) {
      puVar2 = (undefined8 *)(lVar3 + (longlong)param_2 * 0x4e8 + 0x338);
    }
    else {
      if (param_3 != 1) goto LAB_18000b60c;
      puVar2 = (undefined8 *)(lVar3 + (longlong)param_2 * 0x4e8 + 0x3a8);
    }
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
LAB_18000b60c:
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x2b8))
            (*(longlong **)(param_1 + 0x18),param_2,param_3,param_4,0,0x100);
LAB_18000b738:
  FUN_1800643d0((uint *)(param_1 + 0x60));
  return;
}

