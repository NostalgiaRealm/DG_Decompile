/*
 * FUN_14000d444 at 14000d444
 * short * __fastcall FUN_14000d444(short * param_1, short * param_2, ulonglong param_3)
 * Address ranges: 14000d444-14000d7d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

short * FUN_14000d444(short *param_1,short *param_2,ulonglong param_3)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong local_res18 [2];
  undefined **local_638;
  undefined4 local_630;
  undefined4 local_62c;
  undefined4 local_628;
  char *local_620;
  undefined4 local_618;
  undefined8 local_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined1 local_5e8;
  undefined4 local_5e4;
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined4 local_5d0;
  longlong local_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined4 local_5b0;
  longlong local_5a8;
  undefined8 local_5a0;
  undefined4 local_598;
  undefined ***local_588;
  short *local_580;
  undefined4 local_578;
  WCHAR local_568 [264];
  CHAR local_358 [792];
  ulonglong uVar11;
  
  uVar11 = 0;
  *(undefined1 *)(param_1 + 0x104) = 0;
  *param_1 = 0;
  local_res18[0] = param_3;
  FUN_1400250dc(param_1,param_2);
  local_618 = 0;
  local_630 = 1;
  local_620 = "[dgVoodoo IniParser] ";
  local_62c = 1;
  local_638 = &PTR_FUN_1400291c0;
  local_628 = 1;
  local_610 = 0;
  local_608 = 0;
  uStack_600 = 0;
  local_5f8 = 0;
  uStack_5f0 = 0;
  local_5e8 = 1;
  local_5e4 = 0;
  local_5e0 = 0;
  local_5d8 = 0;
  local_5d0 = 0;
  local_5c8 = 0;
  local_5c0 = 0;
  local_5b8 = 0;
  local_5b0 = 0;
  local_5a8 = 0;
  local_5a0 = 0;
  local_598 = 0;
  FUN_1400250dc(local_568,param_2);
  PathAppendW(local_568,L"dgVoodooSettings.ini");
  WideCharToMultiByte(0,0x200,local_568,-1,local_358,0x30a,(LPCSTR)0x0,(LPBOOL)0x0);
  if ((code *)local_638[3] == FUN_140015cf4) {
    bVar2 = FUN_140015cf4((longlong)&local_638,local_568,1);
  }
  else {
    bVar2 = (*(code *)local_638[3])();
  }
  if ((bVar2 != 0) && (uVar8 = uVar11, (uint)local_5a0 != 0)) {
    do {
      lVar1 = local_5a8;
      uVar10 = (uint)uVar8;
      if ((*(int *)(local_5a8 + uVar8 * 0x18) == -1) ||
         (pbVar7 = (byte *)((ulonglong)*(uint *)(local_5a8 + uVar8 * 0x18) + local_5c8),
         pbVar7 == (byte *)0x0)) {
        local_588 = &local_638;
        local_578 = 0x104;
        uVar8 = uVar11;
        uVar9 = uVar10;
        local_580 = param_1;
        if (uVar10 == 0xffffffff) {
          while( true ) {
            if ((code *)local_638[5] == FUN_140015d70) {
              uVar5 = (uint)local_5a0;
            }
            else {
              uVar5 = (*(code *)local_638[5])(&local_638);
            }
            uVar9 = (uint)uVar8;
            if (uVar5 <= uVar9) goto LAB_14000d6aa;
            if ((code *)local_638[6] == FUN_140015d78) {
              uVar6 = uVar11;
              if (*(int *)(local_5a8 + uVar8 * 0x18) != -1) {
                uVar6 = (ulonglong)*(uint *)(local_5a8 + uVar8 * 0x18) + local_5c8;
              }
            }
            else {
              uVar6 = (*(code *)local_638[6])(&local_638,uVar8);
            }
            if (uVar6 == 0) break;
            uVar8 = (ulonglong)(uVar9 + 1);
          }
        }
        FUN_140013efc(&local_588,uVar9);
      }
      else {
        iVar4 = FUN_140024ce8(pbVar7,&DAT_1400286c8);
        if (iVar4 == 0) {
          if (*(int *)(lVar1 + 0x10 + uVar8 * 0x18) != 0) {
            do {
              lVar1 = local_5a8;
              iVar4 = FUN_140024ce8((byte *)((ulonglong)
                                             *(uint *)(*(longlong *)(local_5a8 + 8 + uVar8 * 0x18) +
                                                      uVar11 * 0x28) + local_5c8),
                                    (byte *)"showextendedtabs");
              if (iVar4 == 0) {
                if ((code *)local_638[9] == FUN_140015dd0) {
                  iVar4 = *(int *)(*(longlong *)(lVar1 + 8 + uVar8 * 0x18) + 0x10 + uVar11 * 0x28);
                }
                else {
                  iVar4 = (*(code *)local_638[9])(&local_638,uVar8,uVar11);
                }
                if (iVar4 == 1) {
                  if ((code *)local_638[10] == FUN_140015df0) {
                    pbVar7 = (byte *)((ulonglong)
                                      **(uint **)(*(longlong *)(local_5a8 + 8 + uVar8 * 0x18) + 8 +
                                                 uVar11 * 0x28) + local_5c8);
                  }
                  else {
                    pbVar7 = (byte *)(*(code *)local_638[10])(&local_638,uVar8,uVar11);
                  }
                  iVar4 = FUN_140024ce8(pbVar7,&DAT_1400286b8);
                  if (iVar4 == 0) {
                    *(undefined1 *)(param_1 + 0x104) = 1;
                  }
                  else {
                    iVar4 = FUN_140024ce8(pbVar7,(byte *)"false");
                    if (iVar4 == 0) {
                      *(undefined1 *)(param_1 + 0x104) = 0;
                    }
                    else {
                      local_res18[0] = local_res18[0] & 0xffffffff00000000;
                      if ((code *)local_638[0xb] == FUN_140015e1c) {
                        cVar3 = FUN_140015e1c((longlong)&local_638,uVar8,uVar11,0,
                                              (undefined4 *)local_res18);
                      }
                      else {
                        cVar3 = (*(code *)local_638[0xb])();
                      }
                      if ((cVar3 != '\0') && ((uint)local_res18[0] < 2)) {
                        *(bool *)(param_1 + 0x104) = (uint)local_res18[0] != 0;
                      }
                    }
                  }
                }
              }
              uVar10 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar10;
            } while (uVar10 < *(uint *)(local_5a8 + 0x10 + uVar8 * 0x18));
          }
          break;
        }
      }
LAB_14000d6aa:
      uVar8 = (ulonglong)(uVar10 + 1);
    } while (uVar10 + 1 < (uint)local_5a0);
  }
  FUN_1400149d4(&local_638);
  return param_1;
}

