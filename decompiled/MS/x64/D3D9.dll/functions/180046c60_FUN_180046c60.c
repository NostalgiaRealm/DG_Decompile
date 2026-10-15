/*
 * FUN_180046c60 at 180046c60
 * undefined __fastcall FUN_180046c60(longlong param_1, char param_2)
 * Address ranges: 180046c60-180046f15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180046c60(longlong param_1,char param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint *puVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  uint local_178 [11];
  undefined1 auStack_14c [292];
  ulonglong uVar11;
  
  uVar11 = 0;
  if (*(char *)(param_1 + 0xf68c) != '\0') {
    FUN_1800fbea0((undefined1 *)(local_178 + 2),0,0x140);
    local_178[1] = 1;
    local_178[0] = (uint)(*(int *)(param_1 + 0xe9c) == 1);
    uVar10 = uVar11;
    do {
      plVar2 = *(longlong **)(param_1 + 0xfcc0 + uVar10 * 8);
      if (plVar2 != (longlong *)0x0) {
        if (*(char *)(param_1 + 0x7669) == '\0') {
          if (*(char *)(param_1 + 0x7662) == '\0') {
            lVar8 = uVar10 * 0x20 + param_1;
            cVar3 = (**(code **)(*plVar2 + 0x80))();
            lVar6 = 0xbe8;
            if (cVar3 == '\0') {
              lVar6 = 0xc68;
            }
            goto LAB_180046d59;
          }
          puVar7 = (uint *)(param_1 + 0xde8);
        }
        else if (*(char *)(param_1 + 0x7662) == '\0') {
          lVar8 = uVar10 * 0x20 + param_1;
          cVar3 = (**(code **)(*plVar2 + 0x80))();
          lVar6 = 0xce8;
          if (cVar3 == '\0') {
            lVar6 = 0xd68;
          }
LAB_180046d59:
          puVar7 = (uint *)(lVar6 + lVar8);
        }
        else {
          puVar7 = (uint *)(param_1 + 0xde8);
        }
        local_178[uVar10 * 10 + 2] = *puVar7;
        local_178[uVar10 * 10 + 4] = puVar7[1];
        local_178[uVar10 * 10 + 5] = puVar7[2];
        local_178[uVar10 * 10 + 6] = puVar7[3];
        local_178[uVar10 * 10 + 7] = puVar7[4];
        local_178[uVar10 * 10 + 8] = puVar7[5];
        local_178[uVar10 * 10 + 9] = puVar7[6];
        auStack_14c[uVar10 * 0x28] = (char)puVar7[7];
        *(undefined4 *)(auStack_14c + uVar10 * 0x28 + -4) = 0;
        local_178[uVar10 * 10 + 3] = 0;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != 4);
    uVar5 = FUN_18004c170((longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1990),(int *)local_178);
    *(undefined8 *)(param_1 + 0xf920) = uVar5;
    if (*(uint *)(param_1 + 0xe5c) < 2) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0xe58);
    }
    *(undefined4 *)(param_1 + 0xf928) = uVar4;
    *(undefined1 *)(param_1 + 0x10189) = 1;
  }
  if ((*(char *)(param_1 + 0xf68c) != '\0') || (param_2 != '\0')) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
    if ((*(int *)(param_1 + 0xe80) != *(int *)(lVar6 + 0x660)) ||
       (((*(int *)(param_1 + 0xe84) != *(int *)(lVar6 + 0x664) ||
         (*(int *)(param_1 + 0xe88) != *(int *)(lVar6 + 0x668))) ||
        (*(int *)(param_1 + 0xe8c) != *(int *)(lVar6 + 0x66c))))) {
      *(undefined4 *)(lVar6 + 0x660) = *(undefined4 *)(param_1 + 0xe80);
      *(undefined4 *)(lVar6 + 0x664) = *(undefined4 *)(param_1 + 0xe84);
      *(undefined4 *)(lVar6 + 0x668) = *(undefined4 *)(param_1 + 0xe88);
      *(undefined4 *)(lVar6 + 0x66c) = *(undefined4 *)(param_1 + 0xe8c);
      iVar1 = *(int *)(lVar6 + 0x67c);
      *(int *)(lVar6 + 0x67c) = iVar1 + 1;
      if (((iVar1 == 0) && (*(longlong *)(lVar6 + 0xb10) != 0)) && (*(int *)(lVar6 + 0xba8) != 0)) {
        do {
          (**(code **)**(undefined8 **)(*(longlong *)(lVar6 + 0xba0) + uVar11 * 8))();
          uVar9 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar9;
        } while (uVar9 < *(uint *)(lVar6 + 0xba8));
      }
      (**(code **)(**(longlong **)(lVar6 + 0x688) + 0xb8))
                (*(longlong **)(lVar6 + 0x688),param_1 + 0xe80);
    }
    *(undefined1 *)(param_1 + 0xf68c) = 0;
  }
  return;
}

