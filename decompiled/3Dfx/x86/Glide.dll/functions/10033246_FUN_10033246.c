/*
 * FUN_10033246 at 10033246
 * undefined __fastcall FUN_10033246(undefined2 * param_1, uint param_2)
 * Address ranges: 10033246-10033959
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10033246(undefined2 *param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  uint uVar11;
  int *in_stack_00000014;
  void *in_stack_00000018;
  byte bVar12;
  uint uVar13;
  char cVar14;
  short local_1c;
  float local_c;
  
  uVar5 = FUN_100303b9((int)in_stack_00000014,CONCAT22((short)(param_2 >> 0x10),*param_1),
                       (uint)(ushort)param_1[1],(uint)(ushort)param_1[2],(uint)(ushort)param_1[3],7,
                       '\x01');
  uVar11 = uVar5 & 0xffff;
  uVar10 = (ushort)uVar5;
  FUN_1002ff4c((int)in_stack_00000014,uVar10,7);
  if ((param_2 & 0xf0) == 0) {
    local_c = (float)(param_2 & 0xffff | 0x2000);
  }
  else {
    FUN_10032d30(in_stack_00000014,in_stack_00000018,param_2,0xa4,uVar11,uVar11,7,0.01,'\x01');
    local_c = (float)uVar11;
  }
  uVar6 = uVar11;
  if (uVar10 == 0) {
    uVar6 = FUN_100303b9((int)in_stack_00000014,0,0,0,0,7,'\0');
    uVar6 = uVar6 & 0xffff;
  }
  FUN_1002ff4c((int)in_stack_00000014,(ushort)uVar6,7);
  cVar14 = '\x01';
  bVar12 = 0;
  bVar4 = FUN_10030494((int)in_stack_00000014,uVar6,0xa4);
  FUN_1002fffc(in_stack_00000014,0,(uint)local_c,bVar4,bVar12,cVar14);
  bVar12 = 0;
  uVar13 = 0;
  bVar4 = FUN_10030494((int)in_stack_00000014,uVar6,0xe4);
  iVar7 = FUN_10047f8a(in_stack_00000014,(uint *)(in_stack_00000014 + 0x5e),in_stack_00000014[0x12],
                       0x40,bVar4,uVar13,bVar12);
  piVar1 = in_stack_00000014 + 0x5d;
  *piVar1 = iVar7;
  FUN_10048b6f(in_stack_00000018,
               (in_stack_00000014[0x55] + in_stack_00000014[0x4d] + iVar7) * 0x1000000 + 0x1000000U
               & 0x7f000000 | 0x20,in_stack_00000014 + 0x4d,in_stack_00000014 + 0x55,piVar1,
               (int *)0x0);
  if (uVar10 == 0) {
    FUN_10030469((int)in_stack_00000014,uVar6);
  }
  FUN_1002ff4c((int)in_stack_00000014,uVar10,1);
  FUN_1002fffc(in_stack_00000014,0,uVar11,0,0,'\0');
  bVar3 = false;
  if (((uVar10 & 0xff0) != 0x100) &&
     (((uVar6 = uVar5 & 0xf00, uVar6 == 0x100 || (uVar6 == 0x200)) || (uVar6 == 0x500)))) {
    bVar3 = true;
  }
  local_c = 1.0;
  uVar13 = uVar5 & 0xf;
  uVar6 = uVar5 & 0xf0;
  bVar4 = (((uVar5 & 0x1000) != 0) - 1U & 0x56) - 1;
  if (uVar6 < 0x41) {
    if (uVar6 == 0x40) {
      *piVar1 = 2;
      uVar8 = FUN_10048d34(1,bVar4,1,4,0,0,0);
      in_stack_00000014[0x5e] = uVar8;
      in_stack_00000014[0x5f] = 2;
      goto LAB_10033640;
    }
    if (uVar6 != 0) {
      if (uVar6 == 0x10) {
        *piVar1 = 2;
        uVar8 = FUN_10048d34(0,bVar4,1,4,0,0,0);
        in_stack_00000014[0x5e] = uVar8;
        uVar8 = (uint)*(byte *)(in_stack_00000014 + uVar13 + 0x21);
      }
      else {
        if ((uVar6 != 0x20) && (uVar6 != 0x30)) goto LAB_10033640;
        uVar8 = *(uint *)((int)in_stack_00000014 +
                         uVar13 * 4 + ((((byte)uVar11 & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
        if (uVar8 == 0) goto LAB_100334de;
        *piVar1 = 2;
        iVar7 = FUN_100484c5(uVar8,0,1,4,0,0);
        in_stack_00000014[0x5e] = iVar7;
        uVar8 = uVar8 & 0xff;
      }
      goto LAB_100334a5;
    }
LAB_100334de:
    if ((uVar10 & 0xf00) != 0x100) {
      if ((uVar10 & 0xf00) == 0x300) {
        local_c = -0.5;
      }
      else {
        local_c = 0.0;
      }
    }
    if ((uVar5 & 0x2000) != 0) {
      local_c = local_c * 255.0;
    }
    if (bVar3) {
      local_c = -local_c;
    }
    FUN_10030335(piVar1,bVar4,(int)local_c);
  }
  else {
    if (uVar6 == 0x50) {
      in_stack_00000014[2] = in_stack_00000014[2] | 1;
      in_stack_00000014[0x5f] = 0;
      if (*in_stack_00000014 == 0x51) {
        *piVar1 = 4;
        uVar8 = FUN_10048d34(8,bVar4,3,4,0,0,0);
        in_stack_00000014[0x5e] = uVar8;
        in_stack_00000014[0x60] = 0;
        in_stack_00000014[0x61] = 5;
      }
      else {
        *piVar1 = 3;
        uVar8 = FUN_10048d34(8,bVar4,2,4,0,0,0);
        in_stack_00000014[0x5e] = uVar8;
        in_stack_00000014[0x60] = 5;
      }
    }
    else {
      if (uVar6 == 0x80) {
        *piVar1 = 2;
        iVar7 = FUN_100484c5(in_stack_00000014[uVar13 + 0x24],bVar4,1,4,0,0);
        in_stack_00000014[0x5e] = iVar7;
        uVar8 = (uint)*(byte *)(in_stack_00000014 + uVar13 + 0x24);
      }
      else {
        if (uVar6 != 0xf0) goto LAB_10033640;
        *piVar1 = 2;
        iVar7 = FUN_100484c5(in_stack_00000014[0x28],bVar4,1,4,0,0);
        in_stack_00000014[0x5e] = iVar7;
        uVar8 = (uint)*(byte *)(in_stack_00000014 + 0x28);
      }
LAB_100334a5:
      in_stack_00000014[0x5f] = uVar8;
    }
LAB_10033640:
    if (bVar3) {
      for (iVar7 = *piVar1; iVar7 != 0; iVar7 = iVar7 + -1) {
        in_stack_00000014[iVar7 + 0x5e] = in_stack_00000014[iVar7 + 0x5d];
      }
      in_stack_00000014[0x5e] = in_stack_00000014[0x5e] | 0x80000000;
      *piVar1 = *piVar1 + 1;
      in_stack_00000014[0x5f] = 0x41;
    }
  }
  uVar8 = (*piVar1 + in_stack_00000014[0x4d] + in_stack_00000014[0x55]) * 0x1000000 + 0x1000000U &
          0x7f000000 | 1;
  FUN_10048b6f(in_stack_00000018,uVar8,in_stack_00000014 + 0x4d,in_stack_00000014 + 0x55,piVar1,
               (int *)0x0);
  bVar3 = false;
  if (((uVar10 & 0xff0) != 0x100) &&
     (((uVar9 = uVar5 & 0xf00, uVar9 == 0x100 || (uVar9 == 0x200)) || (uVar9 == 0x500)))) {
    bVar3 = true;
  }
  local_1c = (short)(uVar5 & 0x1000);
  bVar4 = ((local_1c != 0) - 1U & 0xab) - 1;
  if (uVar6 < 0x41) {
    if (uVar6 == 0x40) {
      *piVar1 = 2;
      uVar5 = FUN_10048d34(1,bVar4,1,4,0,0,0);
      in_stack_00000014[0x5f] = 2;
      goto LAB_100338ba;
    }
    if (uVar6 == 0) {
LAB_10033787:
      if ((uVar10 & 0xf00) == 0x100) {
        local_c = 1.0;
      }
      else if ((uVar10 & 0xf00) == 0x300) {
        local_c = -0.5;
      }
      else {
        local_c = 0.0;
      }
      if ((uVar5 & 0x2000) != 0) {
        local_c = local_c * 255.0;
      }
      if (bVar3) {
        local_c = -local_c;
      }
      FUN_10030335(piVar1,bVar4,(int)local_c);
      goto LAB_100338ef;
    }
    if (uVar6 == 0x10) {
      *piVar1 = 2;
      uVar5 = FUN_10048d34(0,bVar4,1,4,0,0,0);
      in_stack_00000014[0x5e] = uVar5;
      in_stack_00000014[0x5f] = (uint)*(byte *)(in_stack_00000014 + uVar13 + 0x21);
    }
    else if ((uVar6 == 0x20) || (uVar6 == 0x30)) {
      uVar6 = *(uint *)((int)in_stack_00000014 +
                       uVar13 * 4 + ((((byte)uVar11 & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
      if (uVar6 != 0) {
        *piVar1 = 2;
        iVar7 = FUN_100484c5(uVar6,0,1,4,0,0);
        in_stack_00000014[0x5e] = iVar7;
        uVar6 = uVar6 & 0xff;
        goto LAB_10033752;
      }
      goto LAB_10033787;
    }
  }
  else {
    if (uVar6 != 0x50) {
      if (uVar6 == 0x80) {
        *piVar1 = 2;
        iVar7 = FUN_100484c5(in_stack_00000014[uVar13 + 0x24],bVar4,1,4,0,0);
        in_stack_00000014[0x5e] = iVar7;
        uVar6 = (uint)*(byte *)(in_stack_00000014 + uVar13 + 0x24);
      }
      else {
        if (uVar6 != 0xf0) goto LAB_100338c0;
        *piVar1 = 2;
        iVar7 = FUN_100484c5(in_stack_00000014[0x28],bVar4,1,4,0,0);
        in_stack_00000014[0x5e] = iVar7;
        uVar6 = (uint)*(byte *)(in_stack_00000014 + 0x28);
      }
LAB_10033752:
      in_stack_00000014[0x5f] = uVar6;
      goto LAB_100338c0;
    }
    in_stack_00000014[2] = in_stack_00000014[2] | 1;
    in_stack_00000014[0x5f] = 0;
    if (*in_stack_00000014 == 0x51) {
      *piVar1 = 4;
      uVar5 = FUN_10048d34(8,bVar4,3,4,0,0,0);
      in_stack_00000014[0x60] = 0;
      in_stack_00000014[0x61] = 5;
    }
    else {
      *piVar1 = 3;
      uVar5 = FUN_10048d34(8,bVar4,2,4,0,0,0);
      in_stack_00000014[0x60] = 5;
    }
LAB_100338ba:
    in_stack_00000014[0x5e] = uVar5;
  }
LAB_100338c0:
  if (bVar3) {
    for (iVar7 = *piVar1; iVar7 != 0; iVar7 = iVar7 + -1) {
      in_stack_00000014[iVar7 + 0x5e] = in_stack_00000014[iVar7 + 0x5d];
    }
    in_stack_00000014[0x5e] = in_stack_00000014[0x5e] | 0x80000000;
    *piVar1 = *piVar1 + 1;
    in_stack_00000014[0x5f] = 0x41;
  }
LAB_100338ef:
  piVar2 = in_stack_00000014 + 0x55;
  FUN_10048b6f(in_stack_00000018,uVar8,in_stack_00000014 + 0x4d,piVar2,piVar1,(int *)0x0);
  FUN_100302ad(in_stack_00000014,uVar10,0);
  FUN_10048b6f(in_stack_00000018,*piVar2 * 0x1000000 + 0x1000000U & 0x7f000000 | 0x4000d,piVar2,
               (int *)0x0,(int *)0x0,(int *)0x0);
  FUN_10030469((int)in_stack_00000014,0);
  FUN_10030469((int)in_stack_00000014,uVar11);
  *(undefined1 *)(in_stack_00000014 + 0x29) = 0;
  return;
}

