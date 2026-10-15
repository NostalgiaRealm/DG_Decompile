/*
 * FUN_180082b40 at 180082b40
 * undefined FUN_180082b40(void)
 * Address ranges: 180082b40-180082d7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

char FUN_180082b40(longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5,
                  uint param_6,uint param_7)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  code *pcVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  uint uVar13;
  
  plVar12 = (longlong *)**(undefined8 **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x28) = 0;
  cVar1 = FUN_180082ad8(param_1,param_5,param_6);
  if (cVar1 != '\0') {
    if (param_2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x20);
      if ((lVar3 == 0) || ((param_7 & 1) == 0)) {
        lVar3 = *(longlong *)(param_1 + 0x18);
      }
      iVar2 = (**(code **)(*plVar12 + 0x38))(plVar12,lVar3,param_2,param_1 + 0x28);
      if (iVar2 < 0) {
        cVar1 = '\0';
      }
      if (cVar1 == '\0') goto LAB_180082cf4;
    }
    if ((param_3 != 0) || (param_4 != 0)) {
      lVar3 = *(longlong *)(param_1 + 0x20);
      uVar13 = 0;
      if (param_6 != 0) {
        do {
          if (param_5 != 0) {
            uVar11 = 0;
            do {
              if (param_3 == 0) {
                if (lVar3 == 0) {
                  *(undefined4 *)(param_4 + 0x14) = 1;
                  uVar7 = uVar11;
                  uVar10 = uVar13;
                }
                else {
                  uVar7 = uVar13;
                  uVar10 = 1;
                }
                *(uint *)(param_4 + 0xc) = uVar7;
                *(uint *)(param_4 + 0x10) = uVar10;
                lVar6 = 0x18;
                if (lVar3 != 0) {
                  lVar6 = 0x20;
                }
                uVar4 = *(undefined8 *)(param_1 + lVar6);
                lVar6 = *(longlong *)(param_1 + 0x30) +
                        (ulonglong)(uVar11 + uVar13 * param_5) * 0x28 + 8;
                pcVar8 = *(code **)(*plVar12 + 0x50);
                lVar5 = param_4;
              }
              else {
                if (lVar3 == 0) {
                  *(undefined4 *)(param_3 + 0x10) = 1;
                  uVar7 = uVar11;
                  uVar10 = uVar13;
                }
                else {
                  uVar7 = uVar13;
                  uVar10 = 1;
                }
                *(uint *)(param_3 + 8) = uVar7;
                *(uint *)(param_3 + 0xc) = uVar10;
                lVar6 = 0x18;
                if (lVar3 != 0) {
                  lVar6 = 0x20;
                }
                uVar4 = *(undefined8 *)(param_1 + lVar6);
                lVar6 = *(longlong *)(param_1 + 0x30) +
                        (ulonglong)(uVar11 + uVar13 * param_5) * 0x28;
                pcVar8 = *(code **)(*plVar12 + 0x48);
                lVar5 = param_3;
              }
              iVar2 = (*pcVar8)(plVar12,uVar4,lVar5,lVar6);
              if (iVar2 < 0) {
                cVar1 = '\0';
                break;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < param_5);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < param_6);
      }
    }
    if (cVar1 != '\0') {
      return cVar1;
    }
  }
LAB_180082cf4:
  uVar13 = 0;
  if (param_6 != 0) {
    do {
      if (param_5 != 0) {
        uVar11 = 0;
        do {
          uVar9 = (ulonglong)(uVar11 + uVar13 * param_5);
          plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x30) + uVar9 * 0x28);
          if (plVar12 != (longlong *)0x0) {
            (**(code **)(*plVar12 + 0x10))();
            *(undefined8 *)(*(longlong *)(param_1 + 0x30) + uVar9 * 0x28) = 0;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < param_5);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < param_6);
  }
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return '\0';
}

