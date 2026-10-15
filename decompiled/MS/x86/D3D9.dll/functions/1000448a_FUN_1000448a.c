/*
 * FUN_1000448a at 1000448a
 * int __thiscall FUN_1000448a(void * this, uint param_1, int param_2, int param_3, int param_4, undefined4 param_5)
 * Address ranges: 1000448a-10004767
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_1000448a(void *this,uint param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  HWND pHVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int local_a0;
  int local_9c [7];
  int local_80;
  undefined1 local_33;
  LPVOID local_30;
  undefined4 local_2c;
  undefined4 local_28;
  HWND local_24;
  HWND local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  HWND local_10;
  int *local_c;
  
  iVar6 = 0;
  local_30 = (LPVOID)0x0;
  local_2c = 0;
  local_28 = 0;
  local_18 = 0;
  local_1c = 0;
  local_c = this;
  do {
    if (param_1 <= local_1c) break;
    local_9c[0] = 0;
    uVar7 = local_1c * 0x40;
    local_9c[1] = 0;
    local_9c[2] = 0;
    local_9c[3] = 0;
    local_9c[4] = 0;
    local_9c[5] = 0;
    local_14 = uVar7;
    iVar6 = FUN_10004456(local_c,*(int **)(param_2 + uVar7),(int *)(param_2 + 4 + uVar7),local_c,
                         &local_a0);
    uVar1 = local_80 * local_9c[6];
    if (local_18 <= uVar1 && uVar1 - local_18 != 0) {
      local_18 = uVar1;
      local_c[0x36e] = local_9c[6];
      piVar5 = local_9c;
      piVar8 = local_c + 0x368;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar8 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar8 = piVar8 + 1;
      }
      local_c[0x36f] = local_80;
      *(undefined1 *)(local_c + 0x370) = local_33;
      uVar7 = local_14;
    }
    if (-1 < iVar6) {
      if ((local_c[0x374] & 0x200U) == 0) {
LAB_10004637:
        uVar3 = FUN_100085fa(&local_30,&local_a0);
        if ((char)uVar3 == '\0') {
          iVar6 = -0x7fffbffb;
          goto LAB_10004756;
        }
      }
      else {
        iVar6 = -0x7789f794;
        if (*(int *)(param_2 + 0x24 + uVar7) == 0) {
          local_14 = 0;
          if (local_1c != 0) {
            do {
              local_10 = *(HWND *)(param_2 + 0x20 + local_14 * 0x40);
              local_20 = (HWND)local_c[0x373];
              pHVar2 = GetDesktopWindow();
              if ((local_10 == pHVar2) || (local_10 == (HWND)0x0)) {
                local_10 = local_20;
              }
              local_20 = *(HWND *)(param_2 + 0x20 + uVar7);
              local_24 = (HWND)local_c[0x373];
              pHVar2 = GetDesktopWindow();
              if ((local_20 == pHVar2) || (pHVar2 = local_20, local_20 == (HWND)0x0)) {
                pHVar2 = local_24;
              }
              if (local_10 == pHVar2) goto LAB_1000464a;
              local_14 = local_14 + 1;
            } while (local_14 < local_1c);
          }
          if (((local_14 == local_1c) &&
              (iVar4 = *(int *)(param_2 + 0x28 + uVar7), *(int *)(param_2 + 0x28) == iVar4)) &&
             ((iVar4 == 0 ||
              ((((*(int *)(param_2 + 0x2c) == *(int *)(param_2 + 0x2c + uVar7) &&
                 (*(int *)(param_2 + 0xc) == *(int *)(param_2 + 0xc + uVar7))) &&
                (*(int *)(param_2 + 4) == *(int *)(param_2 + 4 + uVar7))) &&
               (*(int *)(param_2 + 8) == *(int *)(param_2 + 8 + uVar7))))))) {
            iVar6 = 0;
            goto LAB_10004637;
          }
        }
      }
    }
LAB_1000464a:
    local_1c = local_1c + 1;
  } while (-1 < iVar6);
  iVar4 = 0;
  piVar5 = local_c;
  while (-1 < iVar6) {
    if ((int)param_1 <= iVar4) goto LAB_10004756;
    local_24 = (HWND)(iVar4 * 0x70);
    if (piVar5[0x372] == 1) {
      local_10 = (HWND)FUN_10013887((int)&local_24->unused + (int)local_30);
      piVar5 = local_c;
    }
    else {
      local_10 = (HWND)0x0;
    }
    local_14 = piVar5[0x37c] * 0x228;
    iVar6 = -0x7789fe84;
    if ((*(int *)(&DAT_100df4e4 + local_14) != 0) ||
       (local_10 <= *(HWND *)(&DAT_100df4e0 + local_14))) {
      if ((piVar5[0x374] & 0x200U) == 0) {
LAB_100046ed:
        local_18 = local_18 & 0xffffff00;
      }
      else {
        local_18 = CONCAT31(local_18._1_3_,1);
        if (param_1 < 2) goto LAB_100046ed;
      }
      iVar6 = (**(code **)(*piVar5 + 4))
                        ((int)local_30 + (int)local_24,
                         *(undefined4 *)(param_2 + 0x3c + iVar4 * 0x40),local_10,param_5,local_18,
                         iVar4 == 0,param_3 + iVar4 * 4,param_4 + iVar4 * 4);
      piVar5 = local_c;
    }
    iVar4 = iVar4 + 1;
  }
  while (iVar4 = iVar4 + -1, 0 < iVar4) {
    (**(code **)(*piVar5 + 8))(*(undefined4 *)(param_3 + -4 + iVar4 * 4),0);
    *(undefined4 *)(param_3 + -4 + iVar4 * 4) = 0;
    piVar5 = local_c;
  }
LAB_10004756:
  thunk_FUN_100cfd6c(local_30);
  return iVar6;
}

