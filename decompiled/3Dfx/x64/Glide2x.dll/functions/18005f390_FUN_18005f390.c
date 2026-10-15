/*
 * FUN_18005f390 at 18005f390
 * int __fastcall FUN_18005f390(byte * param_1, byte * param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18005f390-18005f6dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18005f390(byte *param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  byte *local_res10;
  undefined8 local_res18 [2];
  byte *local_48 [3];
  
  local_res18[0] = param_3;
  local_res18[1] = param_4;
  bVar8 = *param_2;
  puVar11 = local_res18;
  pbVar6 = param_2 + 1;
  iVar9 = 0;
  if (*param_1 != 0) {
    do {
      while( true ) {
        if (bVar8 == 0) {
          return iVar9;
        }
        if (bVar8 == 0x20) {
          while ((*param_1 < 0x21 && ((0x100002600U >> ((longlong)(char)*param_1 & 0x3fU) & 1) != 0)
                 )) {
            param_1 = param_1 + 1;
          }
          bVar8 = *pbVar6;
          local_res10 = pbVar6 + 1;
          goto LAB_18005f50b;
        }
        if (bVar8 != 0x25) break;
        bVar8 = *pbVar6;
        local_res10 = pbVar6 + 1;
        bVar3 = false;
        if (bVar8 < 0x6d) {
          if (bVar8 == 0x6c) {
            bVar8 = *local_res10;
            local_res10 = pbVar6 + 2;
            if (bVar8 != 0x6c) goto LAB_18005f508;
            bVar8 = *local_res10;
            local_res10 = pbVar6 + 3;
            if ((bVar8 == 100) || (bVar8 == 0x69)) {
              bVar3 = true;
              if ((bVar8 != 100) && (bVar8 != 0x75)) goto LAB_18005f527;
LAB_18005f53c:
              uVar10 = 10;
            }
            else {
              if (bVar8 != 0x6f) {
                if (bVar8 == 0x75) goto LAB_18005f53c;
                if (bVar8 != 0x78) goto LAB_18005f508;
              }
LAB_18005f527:
              uVar10 = 0;
              if (bVar8 == 0x78) {
                uVar10 = 0x10;
              }
              if (bVar8 == 0x6f) {
                uVar10 = 8;
              }
            }
            bVar8 = *local_res10;
            local_res10 = pbVar6 + 4;
            if (bVar3) {
              lVar5 = FUN_18005d774(param_1,local_48,uVar10);
            }
            else {
              lVar5 = FUN_18005d77c(param_1,local_48,uVar10);
            }
            if ((local_48[0] == param_1) || ((!bVar3 && (lVar5 < 0)))) {
LAB_18005f595:
              bVar8 = 0;
              param_1 = local_48[0];
            }
            else {
              *(longlong *)*puVar11 = lVar5;
LAB_18005f58a:
              puVar11 = puVar11 + 1;
              iVar9 = iVar9 + 1;
              param_1 = local_48[0];
            }
          }
          else if (bVar8 == 0x25) {
            bVar8 = *local_res10;
            local_res10 = pbVar6 + 2;
            if (*param_1 != 0x25) {
              bVar8 = 0;
            }
          }
          else {
            if (bVar8 != 99) {
              if ((bVar8 != 100) &&
                 ((((bVar8 == 0x65 || (bVar8 == 0x66)) || (bVar8 == 0x67)) || (bVar8 != 0x69))))
              goto LAB_18005f508;
              bVar3 = true;
              if (bVar8 != 100) goto LAB_18005f47d;
              goto LAB_18005f648;
            }
            bVar8 = *local_res10;
            bVar1 = *param_1;
            param_1 = param_1 + 1;
            *(byte *)*puVar11 = bVar1;
LAB_18005f4bc:
            iVar9 = iVar9 + 1;
LAB_18005f4be:
            local_res10 = pbVar6 + 2;
            puVar11 = puVar11 + 1;
          }
        }
        else {
          if (bVar8 != 0x6e) {
            if (bVar8 == 0x6f) {
LAB_18005f47d:
              if (bVar8 == 0x75) {
LAB_18005f648:
                uVar10 = 10;
              }
              else {
                uVar10 = 0;
                if (bVar8 == 0x78) {
                  uVar10 = 0x10;
                }
                if (bVar8 == 0x6f) {
                  uVar10 = 8;
                }
              }
              bVar8 = *local_res10;
              local_res10 = pbVar6 + 2;
              if (bVar3) {
                iVar4 = FUN_18005d824(param_1,local_48,uVar10);
              }
              else {
                iVar4 = FUN_18005d82c(param_1,local_48,uVar10);
              }
              if ((local_48[0] == param_1) || ((!bVar3 && (iVar4 < 0)))) goto LAB_18005f595;
              *(int *)*puVar11 = iVar4;
              goto LAB_18005f58a;
            }
            if (bVar8 != 0x70) {
              if (bVar8 == 0x73) {
                bVar8 = *local_res10;
                pbVar2 = (byte *)*puVar11;
                while ((pbVar7 = pbVar2, *param_1 < 0x21 &&
                       ((0x100002600U >> ((longlong)(char)*param_1 & 0x3fU) & 1) != 0))) {
                  param_1 = param_1 + 1;
                }
                while( true ) {
                  bVar1 = *param_1;
                  if ((bVar1 < 0x21) && ((0x100002601U >> ((longlong)(char)bVar1 & 0x3fU) & 1) != 0)
                     ) break;
                  *pbVar7 = bVar1;
                  pbVar7 = pbVar7 + 1;
                  param_1 = param_1 + 1;
                }
                if (pbVar7 != pbVar2) {
                  *pbVar7 = 0;
                  goto LAB_18005f4bc;
                }
                goto LAB_18005f4be;
              }
              if ((bVar8 == 0x75) || (bVar8 == 0x78)) goto LAB_18005f47d;
            }
          }
LAB_18005f508:
          bVar8 = 0;
        }
LAB_18005f50b:
        pbVar6 = local_res10;
        if (*param_1 == 0) {
          return iVar9;
        }
      }
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      if ((int)(char)bVar1 == (uint)bVar8) {
        bVar8 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      }
      else {
        bVar8 = 0;
      }
    } while (*param_1 != 0);
    if (iVar9 == 0) {
      iVar9 = -1;
    }
  }
  return iVar9;
}

