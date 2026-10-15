/*
 * FUN_1005f1dc at 1005f1dc
 * uint __thiscall FUN_1005f1dc(void * this, int param_1, int param_2, int param_3, int param_4, int * param_5, int * param_6, int param_7, int * param_8, RECT * param_9)
 * Address ranges: 1005f1dc-1005f8cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_1005f1dc(void *this,int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6,
            int param_7,int *param_8,RECT *param_9)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  LONG LVar5;
  LONG LVar6;
  LONG LVar7;
  BOOL BVar8;
  int iVar9;
  undefined4 extraout_EAX;
  undefined4 uVar10;
  int iVar11;
  undefined4 local_e4;
  tagRECT local_e0;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  RECT local_80;
  RECT local_70;
  char *local_60;
  int local_5c;
  undefined4 local_58;
  char *local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_3c;
  int local_38;
  undefined4 local_30;
  tagRECT local_2c;
  char *local_1c;
  int local_18;
  int local_14;
  char local_d;
  void *local_c;
  
  local_c = this;
  FUN_10096014(*(void **)((int)this + 0x1cf00),this,(int)this);
  local_30 = 1;
  local_1c = *(char **)(param_7 + 0x30);
  local_18 = *(int *)(param_7 + 0x34);
  local_2c.left = *(int *)(param_7 + 0x20);
  local_2c.top = *(int *)(param_7 + 0x24);
  local_2c.right = *(int *)(param_7 + 0x28);
  local_2c.bottom = *(int *)(param_7 + 0x2c);
  LVar5 = (**(code **)(*param_6 + 0x20))(param_3);
  LVar6 = (**(code **)(*param_6 + 0x24))(param_3);
  LVar7 = (**(code **)(*param_5 + 0x20))(param_1);
  local_70.bottom = (**(code **)(*param_5 + 0x24))(param_1);
  local_70.left = 0;
  local_70.top = 0;
  local_80.left = 0;
  local_80.top = 0;
  local_80.right = LVar5;
  local_80.bottom = LVar6;
  local_70.right = LVar7;
  if ((*(char *)(param_7 + 0x41) == '\0') && (*(char *)(param_7 + 0x40) == '\0')) {
    local_d = '\0';
  }
  else {
    local_d = '\x01';
    IntersectRect(&local_2c,&local_2c,&local_70);
  }
  iVar11 = local_18;
  pcVar3 = local_1c;
  OffsetRect(&local_2c,(int)local_1c - *(int *)(param_7 + 0x20),local_18 - *(int *)(param_7 + 0x24))
  ;
  if (local_d != '\0') {
    IntersectRect(&local_2c,&local_2c,&local_80);
  }
  OffsetRect(&local_2c,*(int *)(param_7 + 0x20) - (int)pcVar3,*(int *)(param_7 + 0x24) - iVar11);
  local_54 = pcVar3 + (local_2c.right - local_2c.left);
  local_60 = pcVar3;
  local_50 = (local_2c.bottom - local_2c.top) + iVar11;
  local_5c = iVar11;
  local_58 = 0;
  local_4c = 1;
  local_14 = param_5[0xb] * param_2 + param_1;
  if (((*(int *)(*(int *)((int)local_c + 0x14) * 0x1510 + 0x520 + *(int *)((int)local_c + 0x1cf00))
        == 0xa000) && (cVar4 = FUN_100306bf(param_6[0xd]), cVar4 != '\0')) &&
     (cVar4 = (**(code **)(*param_5 + 0x54))(), cVar4 != '\0')) {
    (**(code **)(*param_6 + 4))(param_1,param_2,0);
    (**(code **)(*param_5 + 4))(param_1,param_2,0);
    local_d0 = (float)local_2c.left;
    local_cc = (float)local_2c.top;
    local_a4 = param_4;
    local_c8 = (float)local_2c.right;
    local_c4 = (float)local_2c.bottom;
    iVar11 = (local_2c.bottom - local_2c.top) + local_18;
    local_c0 = (float)((double)(int)local_1c + (double)(&DAT_100b5ce0)[-((int)local_1c >> 0x1f)]);
    local_b0 = param_1;
    local_ac = param_2;
    local_bc = (float)((double)local_18 + (double)(&DAT_100b5ce0)[-(local_18 >> 0x1f)]);
    local_a8 = param_3;
    local_b8 = (float)((double)(int)(local_1c + (local_2c.right - local_2c.left)) +
                      (double)(&DAT_100b5ce0)
                              [-((int)(local_1c + (local_2c.right - local_2c.left)) >> 0x1f)]);
    local_b4 = (float)((double)iVar11 + (double)(&DAT_100b5ce0)[-(iVar11 >> 0x1f)]);
    local_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    local_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    cVar4 = FUN_1005ee5f(&local_d0,(int)param_5,(int)param_6);
    local_30 = CONCAT31(local_30._1_3_,cVar4);
    (**(code **)(*param_5 + 0xc))(local_14,param_8);
    goto LAB_1005f8af;
  }
  local_1c = (char *)(param_7 + 0x45);
  cVar4 = (**(code **)(*param_6 + 0x54))();
  if (cVar4 == '\0') {
    local_1c = (char *)(param_7 + 0x45);
  }
  else {
    (**(code **)(*param_6 + 4))(param_3,param_4,*(char *)(param_7 + 0x45) == '\0');
  }
  cVar4 = (**(code **)(*param_5 + 0x54))();
  if (cVar4 != '\0') {
    (**(code **)(*param_5 + 4))(param_1,param_2,0);
  }
  iVar11 = *(int *)(param_7 + 0xc);
  local_18 = param_6[0xb] * param_4 + param_3;
  if (iVar11 == 0) {
    BVar8 = IntersectRect(&local_e0,(RECT *)(param_6[0x18] + 0xc + local_18 * 0x1c),param_9);
    if (BVar8 != 0) {
      (**(code **)*param_6)(param_3,param_4);
    }
    (**(code **)*param_5)(param_1,param_2);
    uVar2 = *(uint *)(&DAT_100b04f0 + param_6[7] * 4);
    if (((uVar2 < 8) || (0x20 < param_9->right - param_9->left)) ||
       (0x20 < param_9->bottom - param_9->top)) {
      piVar1 = *(int **)(*(int *)((int)local_c + 0x1cf04) + 4);
      if (*local_1c == '\0') {
        (**(code **)(*piVar1 + 0xb8))
                  (piVar1,param_5[0x1d],local_14,*param_8,param_8[1],0,*(undefined4 *)(param_7 + 4),
                   local_18,&local_60);
      }
      else {
        (**(code **)(*piVar1 + 0xbc))(piVar1,param_5[0x1d],*(undefined4 *)(param_7 + 4));
      }
    }
    else {
      piVar1 = *(int **)(*(int *)((int)local_c + 0x1cf04) + 4);
      iVar11 = (**(code **)(*piVar1 + 0x38))
                         (piVar1,*(undefined4 *)(param_7 + 4),local_18,1,0,&local_3c);
      if (-1 < iVar11) {
        piVar1 = *(int **)(*(int *)((int)local_c + 0x1cf04) + 4);
        iVar11 = (**(code **)(*piVar1 + 0x38))
                           (piVar1,*(undefined4 *)(param_7 + 8),local_14,2,0,&local_48);
        if (-1 < iVar11) {
          iVar11 = param_9->top;
          param_6 = (int *)0x0;
          iVar9 = param_9->bottom - iVar11;
          local_48 = param_8[1] * local_44 + local_48;
          local_3c = iVar11 * local_38 + local_3c;
          if (uVar2 == 0x10) {
            if (param_9->bottom != iVar11 && -1 < iVar9) {
              do {
                param_2 = 0;
                if (param_9->right != param_9->left && -1 < param_9->right - param_9->left) {
                  do {
                    *(undefined2 *)(local_48 + (*param_8 + param_2) * 2) =
                         *(undefined2 *)(local_3c + (param_9->left + param_2) * 2);
                    param_2 = param_2 + 1;
                  } while (param_2 < param_9->right - param_9->left);
                }
                local_48 = local_48 + local_44;
                local_3c = local_3c + local_38;
                param_6 = (int *)((int)param_6 + 1);
              } while ((int)param_6 < param_9->bottom - param_9->top);
            }
          }
          else if (0 < iVar9) {
            do {
              if (uVar2 == 8) {
                param_2 = 0;
                if (param_9->right != param_9->left && -1 < param_9->right - param_9->left) {
                  do {
                    *(undefined1 *)(local_48 + *param_8 + param_2) =
                         *(undefined1 *)(local_3c + param_9->left + param_2);
                    param_2 = param_2 + 1;
                  } while (param_2 < param_9->right - param_9->left);
                }
              }
              else if (((uVar2 == 0x20) || (uVar2 == 0x18)) &&
                      (param_2 = 0,
                      param_9->right != param_9->left && -1 < param_9->right - param_9->left)) {
                do {
                  *(undefined4 *)(local_48 + (*param_8 + param_2) * 4) =
                       *(undefined4 *)(local_3c + (param_9->left + param_2) * 4);
                  param_2 = param_2 + 1;
                } while (param_2 < param_9->right - param_9->left);
              }
              local_48 = local_48 + local_44;
              local_3c = local_3c + local_38;
              param_6 = (int *)((int)param_6 + 1);
            } while ((int)param_6 < param_9->bottom - param_9->top);
          }
          piVar1 = *(int **)(*(int *)((int)local_c + 0x1cf04) + 4);
          (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)(param_7 + 8),local_14);
        }
        piVar1 = *(int **)(*(int *)((int)local_c + 0x1cf04) + 4);
        (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)(param_7 + 4),local_18);
      }
    }
    (**(code **)(*param_5 + 8))(local_14,param_8);
    goto LAB_1005f8af;
  }
  if (iVar11 == 1) {
    (**(code **)(*param_5 + 4))(param_1,param_2,0);
LAB_1005f57c:
    if (*local_1c == '\0') {
      piVar1 = *(int **)(*(int *)((int)local_c + 0x1cf04) + 4);
      (**(code **)(*piVar1 + 0xb8))
                (piVar1,*(undefined4 *)(param_7 + 8),local_14,local_2c.left,local_2c.top,0,
                 *(undefined4 *)(param_7 + 4),local_18,&local_60);
    }
    else if ((*(uint *)(param_7 + 0x18) < 2) || (*(int *)(param_7 + 0x1c) != 1)) {
      piVar1 = *(int **)(*(int *)((int)local_c + 0x1cf04) + 4);
      (**(code **)(*piVar1 + 0xbc))
                (piVar1,*(undefined4 *)(param_7 + 8),*(undefined4 *)(param_7 + 4));
    }
    else {
      if ((uint)param_5[7] < 0xe) {
        uVar10 = *(undefined4 *)((int)local_c + 0x28);
      }
      else {
        iVar11 = FUN_1007923c(param_5,&local_e4);
        uVar10 = *(undefined4 *)(iVar11 + 4);
      }
      piVar1 = *(int **)(*(int *)((int)local_c + 0x1cf04) + 4);
      (**(code **)(*piVar1 + 0xe4))
                (piVar1,*(undefined4 *)(param_7 + 8),local_14,*(undefined4 *)(param_7 + 4),local_18,
                 uVar10);
    }
  }
  else {
    if (iVar11 != 2) {
      if (iVar11 != 3) goto LAB_1005f8af;
      goto LAB_1005f57c;
    }
    piVar1 = *(int **)(*(int *)((int)local_c + 0x1cf04) + 4);
    if (*local_1c == '\0') {
      (**(code **)(*piVar1 + 0xb8))
                (piVar1,param_5[0x15],local_14,local_2c.left,local_2c.top,0,param_6[0x1d],local_18,
                 &local_60);
    }
    else {
      (**(code **)(*piVar1 + 0xbc))(piVar1,param_5[0x15],param_6[0x1d]);
    }
  }
  (**(code **)(*param_5 + 0xc))(local_14,param_8);
LAB_1005f8af:
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)local_c + 0x1cf00) + 0x4a0));
  return CONCAT31((int3)((uint)extraout_EAX >> 8),(undefined1)local_30);
}

