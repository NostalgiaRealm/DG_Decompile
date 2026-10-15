/*
 * FUN_18009dcd0 at 18009dcd0
 * char __fastcall FUN_18009dcd0(longlong param_1, char param_2, char param_3)
 * Address ranges: 18009dcd0-18009dff5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_18009dcd0(longlong param_1,char param_2,char param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint uVar11;
  int *piVar12;
  byte bVar13;
  undefined8 uVar15;
  uint uVar16;
  undefined8 in_stack_ffffffffffffff10;
  undefined4 uVar18;
  uint *puVar17;
  longlong local_78;
  ulonglong local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_50 [4];
  uint local_40;
  undefined4 local_3c;
  int iVar14;
  
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff10 >> 0x20);
  cVar6 = '\x01';
  if (*(longlong *)(param_1 + 0x74) == 0) {
    if (param_3 != '\0') {
      FUN_1800fb1f0(*(longlong *)(param_1 + 0x58) + 0x12c0);
    }
    uVar15 = 1;
    FUN_1800ac794(param_1,(undefined8 *)&local_68);
    uVar11 = *(uint *)(param_1 + 0x2c);
    bVar13 = (byte)uVar15;
    iVar14 = (int)uVar15;
    if (((10 < uVar11 - 0x15) &&
        (((-(uint)(*(int *)(param_1 + 0x44) != 0) & 0xfffffffe) + 7 <
          *(uint *)(&DAT_1800ff000 + (ulonglong)uVar11 * 4) || (*(int *)(param_1 + 0x38) != 0)))) ||
       (*(int *)(param_1 + 0x34) == iVar14)) {
      uVar15 = 0;
    }
    puVar10 = (uint *)(param_1 + 0x34);
    uVar1 = *(undefined4 *)(&DAT_1800fe8f0 + (ulonglong)uVar11 * 4);
    puVar17 = (uint *)CONCAT44(uVar18,iVar14);
    cVar6 = FUN_18009a7d8((longlong *)(param_1 + 0x60),*(uint *)(param_1 + 0x24),
                          *(uint *)(param_1 + 0x28),*(uint *)(param_1 + 0x3c),*puVar10,iVar14,
                          local_68,local_64,local_60,uVar1,0,local_5c,0,
                          (byte)(*(uint *)(param_1 + 0x40) >> 1) & bVar13,bVar13,0,'\0');
    if (cVar6 != '\0') {
      if (*(longlong *)(param_1 + 0x18) != 0) {
        local_78 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1508);
        if (param_3 != '\0') {
          local_70 = *(ulonglong *)(param_1 + 0x74);
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x1b500);
          EnterCriticalSection((LPCRITICAL_SECTION)(plVar2 + 5));
          lVar7 = FUN_1800eae18(plVar2,&local_70);
          bVar5 = true;
          if (lVar7 != 0) {
            uVar9 = (ulonglong)*(uint *)(lVar7 + 0x18);
            bVar4 = true;
            do {
              bVar5 = bVar4;
              if ((int)uVar9 == 0) break;
              uVar11 = (int)uVar9 - 1;
              uVar9 = (ulonglong)uVar11;
              if (uVar11 < *(uint *)(lVar7 + 0x18)) {
                piVar12 = (int *)(*(longlong *)(lVar7 + 0x10) + 0x24 + uVar9 * 0x30);
              }
              else {
                piVar12 = (int *)&DAT_0000001c;
              }
              bVar3 = false;
              if (*piVar12 == 0) {
                bVar3 = bVar4;
              }
              bVar5 = false;
              bVar4 = bVar3;
            } while (bVar3);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(plVar2 + 5));
          if (bVar5) {
            local_78 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1518);
          }
          else {
            FUN_1800fb1f0(*(longlong *)(param_1 + 0x58) + 0x12c0);
          }
        }
        uVar11 = 0;
        if (*puVar10 != 0) {
          do {
            uVar16 = 0;
            uVar8 = *(uint *)(param_1 + 0x30);
            if (uVar8 != 0) {
              do {
                bVar13 = (byte)uVar16 & 0x1f;
                local_50[3] = *(uint *)(param_1 + 0x24) >> bVar13;
                local_50[0] = 0;
                local_50[1] = 0;
                if (*(uint *)(param_1 + 0x24) >> bVar13 == 0) {
                  local_50[3] = 1;
                }
                local_50[2] = 0;
                bVar13 = (byte)uVar16 & 0x1f;
                local_40 = *(uint *)(param_1 + 0x28) >> bVar13;
                local_3c = 1;
                if (*(uint *)(param_1 + 0x28) >> bVar13 == 0) {
                  local_40 = 1;
                }
                uVar9 = (ulonglong)(uVar8 * uVar11 + uVar16);
                puVar17 = *(uint **)(*(longlong *)(param_1 + 0x18) + uVar9 * 0x10);
                FUN_1800e5510(local_78,*(longlong **)(param_1 + 0x74),
                              uVar11 * *(int *)(param_1 + 0x3c) + uVar16,
                              (longlong *)(*(longlong *)(param_1 + 0x58) + 0x16d0),local_50,puVar17,
                              *(uint *)(*(longlong *)(param_1 + 0x18) + 8 + uVar9 * 0x10),0);
                uVar8 = *(uint *)(param_1 + 0x30);
                uVar16 = uVar16 + 1;
              } while (uVar16 < uVar8);
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < *puVar10);
        }
      }
      if ((param_2 != '\0') && ((char)uVar15 != '\0')) {
        cVar6 = FUN_18009aaec((longlong *)(param_1 + 0x140),*(longlong **)(param_1 + 0x74),local_64,
                              0,uVar1,puVar17,0,1);
        FUN_18009be24(param_1);
        if (cVar6 == '\0') {
          FUN_18009ac8c(param_1 + 0x60,1,1);
        }
      }
    }
  }
  return cVar6;
}

