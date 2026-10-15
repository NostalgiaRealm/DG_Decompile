/*
 * FUN_180091758 at 180091758
 * ulonglong __fastcall FUN_180091758(longlong * param_1, byte param_2)
 * Address ranges: 180091758-180091977
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180091758(longlong *param_1,byte param_2)

{
  int iVar1;
  char cVar2;
  BOOL BVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar10;
  uint uVar11;
  undefined8 local_68 [5];
  longlong *plVar9;
  
  iVar1 = *(int *)((longlong)param_1 + 0x44);
  uVar7 = 0;
  if ((*(char *)((longlong)param_1 + 0x249) == '\0') ||
     (*(char *)((longlong)param_1 + 0x24a) == '\0')) {
    uVar5 = FUN_18008e824(param_1,param_2);
  }
  else {
    uVar10 = 0;
    uVar11 = 0;
    uVar6 = uVar7;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      do {
        plVar9 = (longlong *)0x0;
        uVar10 = uVar6;
        if ((int)param_1[6] != 0) {
          uVar11 = 1 << ((byte)uVar7 & 0x1f);
          do {
            uVar10 = uVar6;
            if (param_1[0x12] != 0) {
              BVar3 = IsRectEmpty((RECT *)(param_1[0x12] +
                                          (ulonglong)(uVar7 * *(int *)((longlong)param_1 + 0x3c)) *
                                          0x28 + 0x18));
              uVar10 = uVar11 | uVar6;
              if (BVar3 != 0) {
                uVar10 = uVar6;
              }
            }
            cVar2 = FUN_1800920b8((longlong)param_1,plVar9,uVar7,1);
            uVar6 = uVar11 | uVar10;
            if (cVar2 == '\0') {
              uVar6 = uVar10;
            }
            uVar8 = (int)plVar9 + 1;
            plVar9 = (longlong *)(ulonglong)uVar8;
            uVar10 = uVar6;
          } while (uVar8 < *(uint *)(param_1 + 6));
        }
        uVar11 = *(uint *)((longlong)param_1 + 0x34);
        uVar7 = uVar7 + 1;
        uVar6 = uVar10;
      } while (uVar7 < uVar11);
    }
    uVar5 = (ulonglong)uVar11;
    plVar9 = param_1 + 0x23;
    if (iVar1 - 3U < 3) {
      if ((param_1[0x26] == 0) &&
         ((*(int *)((ulonglong)*(uint *)(param_1 + 4) * 0x18c0 + 0x6cc + param_1[10]) != 0xa000 ||
          ((int)param_1[0x2f] == 1)))) {
        uVar7 = *(uint *)((longlong)param_1 + 0x2c);
        uVar11 = *(uint *)(param_1[0x22] + 0x1cf04);
        if (*(uint *)(&DAT_1800ff000 + (ulonglong)uVar7 * 4) < uVar11) {
          if (uVar11 == 0x10) {
            uVar7 = 0x22;
          }
          else if (uVar11 == 0x18) {
            uVar7 = 0x23;
          }
          else if (uVar11 == 0x20) {
            uVar7 = 0x26;
          }
        }
        puVar4 = FUN_1800ac1a8(local_68,uVar7);
        FUN_18008e1d8((longlong)plVar9,(longlong *)param_1[0xf],*(int *)((longlong)puVar4 + 4),uVar5
                      ,*(int *)(puVar4 + 2),(int)uVar5 != 1);
      }
      if (*(char *)((longlong)param_1 + 0x16a) == '\0') {
        return param_1[0x28];
      }
      goto LAB_180091956;
    }
    if (param_1[0x28] == 0) {
      FUN_1800916bc((longlong)param_1);
    }
    uVar5 = param_1[0x28];
    if ((param_2 != 0) && (uVar5 != 0)) {
      FUN_18008e464((longlong)plVar9,param_1[0xf]);
      uVar5 = param_1[0x2a];
    }
    if (uVar10 != 0) {
      FUN_18008f918(param_1,(longlong)(param_1 + 0xc),(longlong)plVar9,uVar10,
                    *(int *)((longlong)param_1 + 0x3c));
    }
  }
  if (*(char *)((longlong)param_1 + 0x16a) == '\0') {
    return uVar5;
  }
LAB_180091956:
  uVar5 = FUN_1800925c4((longlong)param_1,param_2);
  return uVar5;
}

