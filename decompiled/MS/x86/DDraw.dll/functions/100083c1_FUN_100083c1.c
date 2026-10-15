/*
 * FUN_100083c1 at 100083c1
 * char __thiscall FUN_100083c1(void * this, int param_1, int param_2, int param_3, int param_4, int * param_5, int * param_6, undefined4 * param_7, int * param_8, RECT * param_9)
 * Address ranges: 100083c1-10008b1e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall
FUN_100083c1(void *this,int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6,
            undefined4 *param_7,int *param_8,RECT *param_9)

{
  int *piVar1;
  uint uVar2;
  RECT *lprcSrc2;
  char cVar3;
  LONG LVar4;
  LONG LVar5;
  LONG LVar6;
  undefined4 uVar7;
  BOOL BVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 local_ec;
  tagRECT local_e8;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  RECT local_84;
  RECT local_74;
  int local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  RECT local_40;
  int local_30;
  tagRECT local_2c;
  int local_1c;
  int local_18;
  char local_11;
  void *local_10;
  char local_9;
  
  local_10 = this;
  FUN_10048d82(*(void **)((int)this + 0xcf00),this,(int)this);
  local_9 = '\x01';
  local_30 = param_7[0xc];
  local_1c = param_7[0xd];
  local_2c.left = param_7[8];
  local_2c.top = param_7[9];
  local_2c.right = param_7[10];
  local_2c.bottom = param_7[0xb];
  LVar4 = (**(code **)(*param_6 + 0x20))(param_3);
  LVar5 = (**(code **)(*param_6 + 0x24))(param_3);
  LVar6 = (**(code **)(*param_5 + 0x20))(param_1);
  local_74.bottom = (**(code **)(*param_5 + 0x24))(param_1);
  local_74.left = 0;
  local_74.top = 0;
  local_84.left = 0;
  local_84.top = 0;
  local_84.right = LVar4;
  local_84.bottom = LVar5;
  local_74.right = LVar6;
  if ((*(char *)((int)param_7 + 0x41) == '\0') && (*(char *)(param_7 + 0x10) == '\0')) {
    local_11 = '\0';
  }
  else {
    local_11 = '\x01';
    IntersectRect(&local_2c,&local_2c,&local_74);
  }
  iVar12 = local_1c;
  iVar10 = local_30;
  OffsetRect(&local_2c,local_30 - param_7[8],local_1c - param_7[9]);
  if (local_11 != '\0') {
    IntersectRect(&local_2c,&local_2c,&local_84);
  }
  OffsetRect(&local_2c,param_7[8] - iVar10,param_7[9] - iVar12);
  local_58 = (local_2c.right - local_2c.left) + iVar10;
  local_60 = iVar12;
  local_54 = (local_2c.bottom - local_2c.top) + iVar12;
  local_64 = iVar10;
  local_5c = 0;
  local_50 = 1;
  local_18 = param_5[0xb] * param_2 + param_1;
  if (((*(int *)(*(int *)((int)local_10 + 0x14) * 0x1510 + 0x520 + *(int *)((int)local_10 + 0xcf00))
        == 0xa000) && (cVar3 = FUN_10006992(param_6[0xd]), cVar3 != '\0')) &&
     (cVar3 = (**(code **)(*param_5 + 0x54))(), cVar3 != '\0')) {
    (**(code **)(*param_6 + 4))(param_1,param_2,0);
    (**(code **)(*param_5 + 4))(param_1,param_2,0);
    local_d8 = (float)local_2c.left;
    local_b8 = param_1;
    local_d4 = (float)local_2c.top;
    local_ac = param_4;
    local_d0 = (float)local_2c.right;
    iVar10 = (local_2c.right - local_2c.left) + local_30;
    local_cc = (float)local_2c.bottom;
    iVar12 = (local_2c.bottom - local_2c.top) + local_1c;
    local_c8 = (float)((double)local_30 + (double)(&DAT_10066fd0)[-(local_30 >> 0x1f)]);
    local_b4 = param_2;
    local_b0 = param_3;
    local_c4 = (float)((double)local_1c + (double)(&DAT_10066fd0)[-(local_1c >> 0x1f)]);
    local_c0 = (float)((double)iVar10 + (double)(&DAT_10066fd0)[-(iVar10 >> 0x1f)]);
    local_bc = (float)((double)iVar12 + (double)(&DAT_10066fd0)[-(iVar12 >> 0x1f)]);
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    local_9 = FUN_10008044(&local_d8,(int)param_5,(int)param_6);
    (**(code **)(*param_5 + 0xc))(local_18,param_8);
    goto LAB_10008b00;
  }
  cVar3 = (**(code **)(*param_6 + 0x54))();
  local_1c = param_4;
  if (cVar3 != '\0') {
    (**(code **)(*param_6 + 4))(param_3,param_4,*(char *)((int)param_7 + 0x45) == '\0');
  }
  cVar3 = (**(code **)(*param_5 + 0x54))();
  if (cVar3 != '\0') {
    (**(code **)(*param_5 + 4))(param_1,param_2,0);
  }
  lprcSrc2 = param_9;
  if ((int *)param_7[1] == (int *)param_7[2]) {
    local_40.left = local_64;
    local_40.top = local_60;
    local_40.right = local_58;
    local_40.bottom = local_54;
    param_9 = (RECT *)0x0;
    uVar7 = FUN_10007adf(local_10,(int *)param_7[1],(int *)*param_7,(int *)&param_9,
                         (undefined4 *)0x0,(byte)param_3,param_6[0xb] * param_4 + param_3,&local_40)
    ;
    local_9 = (char)uVar7;
    if (local_9 != '\0') {
      param_3 = 0;
      local_1c = 0;
      param_7[1] = param_9;
      FUN_10008121((int)param_7,(byte)param_1,0,0,0,param_8,&lprcSrc2->left);
    }
  }
  iVar10 = param_6[0xb] * local_1c + param_3;
  if (local_9 == '\0') goto LAB_10008b00;
  iVar12 = param_7[3];
  if (iVar12 == 0) {
    BVar8 = IntersectRect(&local_e8,(RECT *)(param_6[0x18] + 0xc + iVar10 * 0x1c),lprcSrc2);
    if (BVar8 != 0) {
      (**(code **)*param_6)(param_3,local_1c);
    }
    (**(code **)*param_5)(param_1,param_2);
    uVar2 = *(uint *)(&DAT_10062820 + param_6[7] * 4);
    if (((uVar2 < 8) || (0x20 < lprcSrc2->right - lprcSrc2->left)) ||
       (0x20 < lprcSrc2->bottom - lprcSrc2->top)) {
      piVar1 = *(int **)(*(int *)((int)local_10 + 0xcf04) + 4);
      if (*(char *)((int)param_7 + 0x45) == '\0') {
        (**(code **)(*piVar1 + 0xb8))
                  (piVar1,param_5[0x1d],local_18,*param_8,param_8[1],0,param_7[1],iVar10,&local_64);
      }
      else {
        (**(code **)(*piVar1 + 0xbc))(piVar1,param_5[0x1d],param_7[1]);
      }
    }
    else {
      piVar1 = *(int **)(*(int *)((int)local_10 + 0xcf04) + 4);
      iVar12 = (**(code **)(*piVar1 + 0x38))(piVar1,param_7[1],iVar10,1,0,&local_4c);
      if (-1 < iVar12) {
        piVar1 = *(int **)(*(int *)((int)local_10 + 0xcf04) + 4);
        iVar12 = (**(code **)(*piVar1 + 0x38))(piVar1,param_7[2],local_18,2,0,&local_40.top);
        if (-1 < iVar12) {
          iVar12 = lprcSrc2->top;
          param_3 = 0;
          iVar9 = lprcSrc2->bottom - iVar12;
          iVar11 = param_8[1] * local_40.right + local_40.top;
          local_4c = iVar12 * local_48 + local_4c;
          if (uVar2 == 0x10) {
            if (lprcSrc2->bottom != iVar12 && -1 < iVar9) {
              do {
                param_6 = (int *)0x0;
                if (lprcSrc2->right != lprcSrc2->left && -1 < lprcSrc2->right - lprcSrc2->left) {
                  do {
                    *(undefined2 *)(iVar11 + (*param_8 + (int)param_6) * 2) =
                         *(undefined2 *)(local_4c + (lprcSrc2->left + (int)param_6) * 2);
                    param_6 = (int *)((int)param_6 + 1);
                  } while ((int)param_6 < lprcSrc2->right - lprcSrc2->left);
                }
                iVar11 = iVar11 + local_40.right;
                local_4c = local_4c + local_48;
                param_3 = param_3 + 1;
              } while (param_3 < lprcSrc2->bottom - lprcSrc2->top);
            }
          }
          else if (0 < iVar9) {
            do {
              if (uVar2 == 8) {
                param_6 = (int *)0x0;
                if (lprcSrc2->right != lprcSrc2->left && -1 < lprcSrc2->right - lprcSrc2->left) {
                  do {
                    *(undefined1 *)((int)param_6 + iVar11 + *param_8) =
                         *(undefined1 *)((int)param_6 + local_4c + lprcSrc2->left);
                    param_6 = (int *)((int)param_6 + 1);
                  } while ((int)param_6 < lprcSrc2->right - lprcSrc2->left);
                }
              }
              else if (((uVar2 == 0x20) || (uVar2 == 0x18)) &&
                      (param_6 = (int *)0x0,
                      lprcSrc2->right != lprcSrc2->left && -1 < lprcSrc2->right - lprcSrc2->left)) {
                do {
                  *(undefined4 *)(iVar11 + (*param_8 + (int)param_6) * 4) =
                       *(undefined4 *)(local_4c + (lprcSrc2->left + (int)param_6) * 4);
                  param_6 = (int *)((int)param_6 + 1);
                } while ((int)param_6 < lprcSrc2->right - lprcSrc2->left);
              }
              iVar11 = iVar11 + local_40.right;
              local_4c = local_4c + local_48;
              param_3 = param_3 + 1;
            } while (param_3 < lprcSrc2->bottom - lprcSrc2->top);
          }
          piVar1 = *(int **)(*(int *)((int)local_10 + 0xcf04) + 4);
          (**(code **)(*piVar1 + 0x3c))(piVar1,param_7[2],local_18);
        }
        piVar1 = *(int **)(*(int *)((int)local_10 + 0xcf04) + 4);
        (**(code **)(*piVar1 + 0x3c))(piVar1,param_7[1],iVar10);
      }
    }
    (**(code **)(*param_5 + 8))(local_18,param_8);
    goto LAB_10008b00;
  }
  if (iVar12 == 1) {
    (**(code **)(*param_5 + 4))(param_1,param_2,0);
LAB_100087d8:
    if (*(char *)((int)param_7 + 0x45) == '\0') {
      piVar1 = *(int **)(*(int *)((int)local_10 + 0xcf04) + 4);
      (**(code **)(*piVar1 + 0xb8))
                (piVar1,param_7[2],local_18,local_2c.left,local_2c.top,0,param_7[1],iVar10,&local_64
                );
    }
    else if (((uint)param_7[6] < 2) || (param_7[7] != 1)) {
      piVar1 = *(int **)(*(int *)((int)local_10 + 0xcf04) + 4);
      (**(code **)(*piVar1 + 0xbc))(piVar1,param_7[2],param_7[1]);
    }
    else {
      if ((uint)param_5[7] < 0xe) {
        uVar7 = *(undefined4 *)((int)local_10 + 0x28);
      }
      else {
        iVar12 = FUN_100221f0(param_5,&local_ec);
        uVar7 = *(undefined4 *)(iVar12 + 4);
      }
      piVar1 = *(int **)(*(int *)((int)local_10 + 0xcf04) + 4);
      (**(code **)(*piVar1 + 0xe4))(piVar1,param_7[2],local_18,param_7[1],iVar10,uVar7);
    }
  }
  else {
    if (iVar12 != 2) {
      if (iVar12 != 3) goto LAB_10008b00;
      goto LAB_100087d8;
    }
    piVar1 = *(int **)(*(int *)((int)local_10 + 0xcf04) + 4);
    if (*(char *)((int)param_7 + 0x45) == '\0') {
      (**(code **)(*piVar1 + 0xb8))
                (piVar1,param_5[0x15],local_18,local_2c.left,local_2c.top,0,param_6[0x1d],iVar10,
                 &local_64);
    }
    else {
      (**(code **)(*piVar1 + 0xbc))(piVar1,param_5[0x15],param_6[0x1d]);
    }
  }
  (**(code **)(*param_5 + 0xc))(local_18,param_8);
LAB_10008b00:
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)local_10 + 0xcf00) + 0x4a0));
  return local_9;
}

