/*
 * FUN_18000618c at 18000618c
 * byte __fastcall FUN_18000618c(longlong param_1, longlong * param_2, longlong * param_3, uint param_4, longlong param_5, longlong param_6)
 * Address ranges: 18000618c-1800067da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_18000618c(longlong param_1,longlong *param_2,longlong *param_3,uint param_4,
                  longlong param_5,longlong param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong *plVar13;
  int *piVar14;
  int iVar15;
  ulonglong local_res10;
  longlong *local_res18;
  uint local_res20;
  undefined8 in_stack_fffffffffffffee0;
  int local_c8;
  uint local_c4;
  uint local_c0;
  int local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined4 local_b0;
  ulonglong local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong local_90;
  undefined8 local_88;
  int iStack_80;
  int iStack_7c;
  undefined4 local_78;
  RECT local_68;
  uint local_58 [2];
  longlong local_50;
  
  uVar12 = (uint)((ulonglong)in_stack_fffffffffffffee0 >> 0x20);
  iVar7 = *(int *)((longlong)param_2 + 0x54);
  local_c0 = *(uint *)((longlong)param_3 + 0x54);
  lVar2 = param_2[1];
  lVar3 = param_3[1];
  local_res18 = param_3;
  local_res20 = param_4;
  if ((iVar7 == 3) && (local_c0 == 3)) {
    uVar12 = (uint)*(byte *)(lVar2 + 0x26);
    if (*(int *)(lVar2 + 0x20) != 0) {
      uVar12 = *(uint *)(lVar2 + 0x20);
    }
    FUN_180005ff8((ulonglong)*(byte *)(lVar2 + 0x25),param_2[8],param_3[8],*(uint *)(lVar2 + 0x18),
                  *(uint *)(lVar3 + 0x18),(uint)*(byte *)(lVar2 + 0x24),
                  (uint)*(byte *)(lVar2 + 0x25),uVar12,param_4,param_5,param_6);
    return 1;
  }
  plVar8 = *(longlong **)(lVar3 + 0x70);
  uVar11 = 0;
  local_c4 = *(uint *)(param_2 + 0xc);
  uVar1 = *(undefined4 *)((longlong)param_2 + 100);
  local_a8 = CONCAT44(local_a8._4_4_,(int)param_3[0xc]);
  local_78 = *(undefined4 *)((longlong)param_3 + 100);
  local_b4 = *(int *)(lVar2 + 0x94);
  local_a0 = *(longlong **)(lVar2 + 0x70);
  local_b0 = *(undefined4 *)(lVar2 + 0x98);
  local_b8 = *(undefined4 *)(lVar3 + 0x98);
  local_bc = *(int *)(lVar3 + 0x94);
  local_res10 = CONCAT71(local_res10._1_7_,1);
  local_88 = plVar8;
  if (local_c0 == 1) {
    cVar4 = (**(code **)(*plVar8 + 0x28))(plVar8,local_bc);
    if (iVar7 == 3) {
      if ((cVar4 == '\0') &&
         (uVar6 = FUN_18001522c((longlong)param_3,(uint *)&local_98,(RECT *)0x0,0,'\0','\0'),
         -1 < (int)uVar6)) {
        lVar2 = param_2[1];
        uVar12 = (uint)*(byte *)(lVar2 + 0x26);
        if (*(int *)(lVar2 + 0x20) != 0) {
          uVar12 = *(uint *)(lVar2 + 0x20);
        }
        FUN_180005ff8((ulonglong)*(byte *)(lVar2 + 0x24),param_2[8],local_90,*(uint *)(lVar2 + 0x18)
                      ,(uint)local_98,(uint)*(byte *)(lVar2 + 0x24),(uint)*(byte *)(lVar2 + 0x25),
                      uVar12,param_4,param_5,param_6);
        FUN_1800155b0(param_3,'\0');
        return 1;
      }
    }
    else if ((((cVar4 == '\0') &&
              (cVar4 = (**(code **)(*local_a0 + 0x28))(local_a0,local_bc), cVar4 == '\0')) &&
             (*(longlong *)(param_2[1] + 0x28) != 0)) &&
            (uVar6 = FUN_18001522c((longlong)param_3,(uint *)&local_98,(RECT *)0x0,0,'\x01','\0'),
            -1 < (int)uVar6)) {
      local_68.left = 0;
      local_68.top = 0;
      local_68.right = 0;
      local_68.bottom = 0;
      uVar6 = FUN_18001522c((longlong)param_2,local_58,&local_68,0x10,'\x01','\0');
      if (-1 < (int)uVar6) {
        lVar2 = param_2[1];
        uVar6 = (uint)*(byte *)(lVar2 + 0x26);
        if (*(int *)(lVar2 + 0x20) != 0) {
          uVar6 = *(uint *)(lVar2 + 0x20);
        }
        FUN_180005ff8((ulonglong)*(byte *)(lVar2 + 0x24),local_50,local_90,local_58[0],
                      (uint)local_98,(uint)*(byte *)(lVar2 + 0x24),(uint)*(byte *)(lVar2 + 0x25),
                      uVar6,param_4,param_5,param_6);
        local_res10 = local_res10 & 0xffffffffffffff00;
        FUN_1800155b0(param_2,'\x01');
      }
      FUN_1800155b0(param_3,'\0');
    }
  }
  if ((char)local_res10 == '\0') {
    return 1;
  }
  local_res10 = CONCAT44(local_res10._4_4_,(int)param_3[0xe]);
  if ((iVar7 == 3) && (local_c0 != 3)) {
    local_a0 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0xe98) + 0x58))
                         (*(longlong **)(param_1 + 0xe98),local_c4,uVar1,(int)param_3[0xe],1,
                          (ulonglong)uVar12 << 0x20,1);
    local_c8 = (int)local_res10;
    local_b0 = 0;
    local_b4 = 0;
    local_98 = local_a0;
  }
  else {
    local_c8 = (int)param_2[0xe];
    local_98 = (longlong *)0x0;
    if ((iVar7 != 3) && (local_c0 == 3)) {
      plVar8 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0xe98) + 0x58))
                         (*(longlong **)(param_1 + 0xe98),local_a8 & 0xffffffff,local_78,local_c8,1,
                          (ulonglong)uVar12 << 0x20,1);
      local_res10 = CONCAT44(local_res10._4_4_,local_c8);
      local_b8 = 0;
      local_bc = 0;
      local_98 = plVar8;
      local_88 = plVar8;
    }
  }
  plVar13 = local_98;
  if ((local_a0 == (longlong *)0x0) || (plVar8 == (longlong *)0x0)) {
    bVar5 = 0;
    goto LAB_1800067b2;
  }
  bVar5 = 1;
  if (((*(int *)(*(longlong *)(param_2[1] + 0x70) + 8) == 2) && ((local_c0 & 0xfffffffd) == 0)) &&
     (*(int *)(*(longlong *)(param_3[1] + 0x70) + 8) != 2)) {
    FUN_180014f4c(param_3);
    local_88 = *(longlong **)(param_3[1] + 0x70);
  }
  if (iVar7 == 3) {
    local_a8 = 0;
    local_c4 = 0;
    iVar7 = (**(code **)(*plVar13 + 0x58))(plVar13,0,0,2,1,&local_a8,&local_c4);
    if (iVar7 == 0) {
      lVar2 = param_2[1];
      uVar12 = (uint)*(byte *)(lVar2 + 0x26);
      if (*(int *)(lVar2 + 0x20) != 0) {
        uVar12 = *(uint *)(lVar2 + 0x20);
      }
      FUN_180005ff8((ulonglong)*(byte *)(lVar2 + 0x24),param_2[8],local_a8,*(uint *)(lVar2 + 0x18),
                    local_c4,(uint)*(byte *)(lVar2 + 0x24),(uint)*(byte *)(lVar2 + 0x25),uVar12,
                    local_res20,param_5,param_6);
    }
    else {
      bVar5 = 0;
    }
    FUN_180014ecc((longlong)param_3,0);
    if (bVar5 != 0) goto LAB_1800065fe;
  }
  else {
    FUN_180014ecc((longlong)param_3,(longlong)param_2);
LAB_1800065fe:
    plVar8 = local_88;
    uVar12 = local_res20;
    if (local_res20 != 0) {
      do {
        piVar14 = (int *)(uVar11 * 0x10 + param_5);
        local_88 = *(longlong **)piVar14;
        iStack_80 = piVar14[2];
        iStack_7c = piVar14[3];
        iVar7 = *piVar14;
        iVar15 = piVar14[1];
        if (param_6 != 0) {
          OffsetRect((LPRECT)&local_88,*(int *)(param_6 + uVar11 * 8) - *piVar14,
                     *(int *)(param_6 + 4 + uVar11 * 8) - piVar14[1]);
          iVar7 = (int)local_88;
          iVar15 = local_88._4_4_;
        }
        iVar10 = (int)param_2[9];
        local_68.top = iVar15;
        local_68.left = iVar7;
        local_68.bottom = iStack_7c;
        local_68.right = iStack_80;
        uVar9 = FUN_1800028a0(iVar10);
        iVar7 = (int)uVar9;
        uVar9 = FUN_180002844(iVar10);
        bVar5 = FUN_1800324a8(plVar8,local_a0,*(longlong **)(param_1 + 0xe98),local_b0,local_b8,
                              local_b4,local_bc,1,local_c8,(int)local_res10,piVar14,&local_68.left,
                              (int)uVar9,iVar7,1);
        uVar6 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar6;
      } while (uVar6 < uVar12);
      param_3 = local_res18;
      plVar13 = local_98;
      if (bVar5 == 0) goto LAB_180006797;
    }
    if (local_c0 == 3) {
      local_res10 = 0;
      local_res18 = (longlong *)((ulonglong)local_res18 & 0xffffffff00000000);
      iVar7 = (**(code **)(*plVar13 + 0x58))(plVar13,0,0,2,1,&local_res10,&local_res18);
      if (iVar7 == 0) {
        lVar2 = param_3[1];
        uVar12 = (uint)*(byte *)(lVar2 + 0x26);
        if (*(int *)(lVar2 + 0x20) != 0) {
          uVar12 = *(uint *)(lVar2 + 0x20);
        }
        FUN_180005ff8((ulonglong)*(byte *)(lVar2 + 0x24),local_res10,param_3[8],(uint)local_res18,
                      *(uint *)(lVar2 + 0x18),(uint)*(byte *)(lVar2 + 0x24),
                      (uint)*(byte *)(lVar2 + 0x25),uVar12,local_res20,param_5,param_6);
      }
      else {
        bVar5 = 0;
      }
    }
    if (param_3[6] != 0) {
      *(undefined1 *)(param_3[6] + 0x89) = 0;
    }
  }
LAB_180006797:
  if (*(longlong *)(param_3[1] + 0x70) != 0) {
    FUN_180007f2c(param_3[5],(longlong)param_3);
  }
LAB_1800067b2:
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  return bVar5;
}

