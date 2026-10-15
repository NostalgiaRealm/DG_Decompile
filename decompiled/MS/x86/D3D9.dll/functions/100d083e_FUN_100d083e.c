/*
 * FUN_100d083e at 100d083e
 * int __cdecl FUN_100d083e(byte * param_1, byte * param_2)
 * Address ranges: 100d083e-100d0b0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_100d083e(byte *param_1,byte *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  byte extraout_CL;
  byte bVar6;
  byte *extraout_ECX;
  byte *pbVar7;
  byte *extraout_ECX_00;
  int iVar8;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  byte bVar9;
  longlong lVar10;
  byte *local_10;
  int local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)&stack0x0000000c;
  iVar8 = 0;
  bVar9 = *param_2;
  local_c = 0;
  pbVar7 = param_2 + 1;
  if (*param_1 != 0) {
    while (puVar3 = local_8, bVar9 != 0) {
      if (bVar9 == 0x20) {
        while (cVar4 = FUN_100d0820(*param_1), cVar4 != '\0') {
          param_1 = param_1 + 1;
        }
        bVar9 = *pbVar7;
        param_2 = pbVar7 + 1;
        iVar8 = extraout_EDX;
        bVar6 = extraout_CL;
      }
      else if (bVar9 == 0x25) {
        bVar9 = *pbVar7;
        param_2 = pbVar7 + 1;
        bVar2 = false;
        bVar1 = false;
        if (bVar9 < 0x6d) {
          if (bVar9 == 0x6c) {
            bVar9 = *param_2;
            param_2 = pbVar7 + 2;
            if (bVar9 != 0x6c) goto LAB_100d0923;
            bVar9 = *param_2;
            param_2 = pbVar7 + 3;
            if ((bVar9 == 100) || (bVar9 == 0x69)) {
              bVar1 = true;
              bVar2 = true;
              if ((bVar9 != 100) && (bVar9 != 0x75)) goto LAB_100d093e;
LAB_100d0955:
              uVar5 = 10;
            }
            else {
              if (bVar9 != 0x6f) {
                if (bVar9 == 0x75) goto LAB_100d0955;
                if (bVar9 != 0x78) goto LAB_100d0923;
              }
LAB_100d093e:
              uVar5 = 0;
              if (bVar9 == 0x78) {
                uVar5 = 0x10;
              }
              if (bVar9 == 0x6f) {
                uVar5 = 8;
              }
            }
            bVar9 = *param_2;
            param_2 = pbVar7 + 4;
            if (bVar1) {
              lVar10 = FUN_100d03a3(param_1,&local_10,uVar5);
            }
            else {
              lVar10 = FUN_100d03bb(param_1,&local_10,uVar5);
            }
            if ((local_10 == param_1) || ((!bVar2 && (lVar10 < 0)))) {
LAB_100d09aa:
              bVar9 = 0;
              iVar8 = local_c;
              param_1 = local_10;
            }
            else {
              *(longlong *)*puVar3 = lVar10;
LAB_100d099a:
              local_8 = local_8 + 1;
              local_c = local_c + 1;
              iVar8 = local_c;
              param_1 = local_10;
            }
          }
          else if (bVar9 == 0x25) {
            bVar6 = *param_2;
            param_2 = pbVar7 + 2;
            bVar9 = 0;
            if (*param_1 == 0x25) {
              bVar9 = bVar6;
            }
          }
          else {
            if (bVar9 != 99) {
              if ((bVar9 == 100) ||
                 ((((bVar9 != 0x65 && (bVar9 != 0x66)) && (bVar9 != 0x67)) && (bVar9 == 0x69)))) {
                bVar1 = true;
                bVar2 = true;
                goto LAB_100d09e4;
              }
              goto LAB_100d0923;
            }
            bVar9 = *param_2;
            param_2 = pbVar7 + 2;
            local_c = iVar8 + 1;
            *(byte *)*local_8 = *param_1;
            iVar8 = local_c;
            param_1 = param_1 + 1;
            local_8 = local_8 + 1;
          }
        }
        else {
          if (bVar9 != 0x6e) {
            if (bVar9 == 0x6f) {
LAB_100d09e4:
              if ((bVar9 == 100) || (bVar9 == 0x75)) {
                uVar5 = 10;
              }
              else {
                uVar5 = 0;
                if (bVar9 == 0x78) {
                  uVar5 = 0x10;
                }
                if (bVar9 == 0x6f) {
                  uVar5 = 8;
                }
              }
              bVar9 = *param_2;
              param_2 = pbVar7 + 2;
              if (bVar1) {
                iVar8 = FUN_100d0465(param_1,&local_10,uVar5);
              }
              else {
                iVar8 = FUN_100d047d(param_1,&local_10,uVar5);
              }
              if ((local_10 == param_1) || ((!bVar2 && (iVar8 < 0)))) goto LAB_100d09aa;
              *(int *)*puVar3 = iVar8;
              goto LAB_100d099a;
            }
            if (bVar9 != 0x70) {
              if (bVar9 == 0x73) {
                bVar9 = *param_2;
                param_2 = pbVar7 + 2;
                local_8 = local_8 + 1;
                bVar6 = *param_1;
                cVar4 = FUN_100d0820(bVar6);
                while (cVar4 != '\0') {
                  param_1 = param_1 + 1;
                  bVar6 = *param_1;
                  cVar4 = FUN_100d0820(bVar6);
                }
                cVar4 = FUN_100d0820(bVar6);
                pbVar7 = extraout_ECX;
                iVar8 = extraout_EDX_00;
                if (cVar4 == '\0') {
                  do {
                    if (*param_1 == 0) break;
                    *pbVar7 = *param_1;
                    param_1 = param_1 + 1;
                    cVar4 = FUN_100d0820(*param_1);
                    pbVar7 = extraout_ECX_00;
                    iVar8 = extraout_EDX_01;
                  } while (cVar4 == '\0');
                  if (pbVar7 != (byte *)*puVar3) {
                    local_c = iVar8 + 1;
                    *pbVar7 = 0;
                    iVar8 = local_c;
                  }
                }
                goto LAB_100d0925;
              }
              if ((bVar9 == 0x75) || (bVar9 == 0x78)) goto LAB_100d09e4;
            }
          }
LAB_100d0923:
          bVar9 = 0;
        }
LAB_100d0925:
        bVar6 = *param_1;
      }
      else {
        bVar6 = *param_1;
        param_1 = param_1 + 1;
        if ((int)(char)bVar6 == (uint)bVar9) {
          bVar9 = *pbVar7;
          param_2 = pbVar7 + 1;
        }
        else {
          bVar9 = 0;
          param_2 = pbVar7;
        }
        bVar6 = *param_1;
        if (bVar6 == 0) {
          if (iVar8 != 0) {
            return iVar8;
          }
          return -1;
        }
      }
      pbVar7 = param_2;
      if (bVar6 == 0) {
        return iVar8;
      }
    }
  }
  return iVar8;
}

